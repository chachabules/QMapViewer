#ifndef MAPADDDIALOG_H
#define MAPADDDIALOG_H

#include <QDialog>

namespace Ui {
class MapAddDialog;
}

class MapAddDialog : public QDialog
{
    Q_OBJECT

    struct Data
    {
        QString name_;
        QString path_;
        quint8 zoomlevel_;
        bool result_;

        Data() : zoomlevel_(7), result_(false) {}
    };

public:
    explicit MapAddDialog(QWidget *parent = nullptr);
    ~MapAddDialog();

    static MapAddDialog::Data getMapDataInfo(QWidget *parent = nullptr,
                                             const QString &path = QString(),
                                             const qint8 &level = 0);

    void setPath(const QString &path);

    QString getPath();

    QString getName();

    quint8 getLevel();

    void setlevel(const qint8 &level);

    bool getResult() {
        return result_;
    }

private slots:
    void slotAcceptResult();
    void slotRejectResult();


private:
    Ui::MapAddDialog *ui;

    bool result_;
};

#endif // MAPADDDIALOG_H
