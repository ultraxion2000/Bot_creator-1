#ifndef INFO_H
#define INFO_H

#include <QDialog>

namespace Ui {
class info;
}

class info : public QDialog
{
    Q_OBJECT

public:
    explicit info(QWidget *parent = nullptr);
    ~info();
signals:
    void infoWindow();

private slots:
    void on_info_clicked();

    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

    void on_pushButton_clicked();

private:
    Ui::info *ui;
    QPoint myPos2;
};

#endif // INFO_H
