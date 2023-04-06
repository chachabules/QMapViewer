#ifndef MAPUTILITY_H
#define MAPUTILITY_H

#include <QtGlobal>
#include <QtMath>

namespace MapUtility {

static void converGeoToTileInteger(qreal latitudeDegree, qreal longitudeDegree, qint32 zoomLevel, qint32& xTile, qint32& yTile) {
    int n = static_cast<int>(pow(2.0, zoomLevel));
    qreal latitudeRadians = latitudeDegree * 2.0 * M_PI / 360.0;

    xTile = static_cast<int>(n * ((longitudeDegree + 180.0) / 360.0));

    qreal secantValue = 1.0/ cos(latitudeRadians);
    qreal tangenteValue = tan(latitudeRadians);

    yTile = static_cast<int>(n * (1 - (log(tangenteValue + secantValue) / M_PI)) / 2.0);
}

static void convertGeoToTileDouble(qreal latitudeDegree, qreal longitudeDegree, qint32 zoomLevel, qreal& xTile, qreal& yTile) {
    int n = static_cast<int>(pow(2.0, zoomLevel));
    qreal latitudeRadians = latitudeDegree * 2.0 * M_PI / 360.0;


    xTile = (n *((longitudeDegree + 180.0) / 360.0));

    qreal secanteValue = 1.0 / cos(latitudeRadians);
    qreal tangenteValue = tan(latitudeRadians);

    yTile = (n * (1 - (log(tangenteValue + secanteValue) / M_PI)) / 2.0);
}

static void convertTileToGeo(qint32 xTile, qint32 yTile, qint32 zoomLevel, qreal& latitudeDegree, qreal& longitudeDegree) {
    longitudeDegree = xTile / pow(2.0, zoomLevel) * 360.0 - 180;

    double n = M_PI - 2.0 * M_PI * yTile / pow(2.0, zoomLevel);

    latitudeDegree = 180.0 / M_PI * atan(0.5 * (exp(n) - exp(-n)));
}

static void convertTileDoubleToGeo(qreal xTile, qreal yTile, qint32 zoomLevel, qreal& latitudeDegree, qreal& longitudeDegree) {
    longitudeDegree = xTile / pow(2.0, zoomLevel) * 360.0 - 180;

    double n = M_PI - 2.0 * M_PI * yTile / pow(2.0, zoomLevel);

    latitudeDegree = 180.0 / M_PI * atan(0.5 * (exp(n) - exp(-n)));
}

}

#endif // MAPUTILITY_H
