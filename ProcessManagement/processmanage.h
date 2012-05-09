#ifndef PROCESSMANAGE_H
#define PROCESSMANAGE_H

#include <QMainWindow>

namespace Ui {
    class ProcessManage;
}

class ProcessManage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProcessManage(QWidget *parent = 0);
    ~ProcessManage();

public slots:
   // void tabWidget_currentChanged(int index);
    void showTabInfo();
    //void Search_clicked();

private:
    Ui::ProcessManage *ui;
};

#endif // PROCESSMANAGE_H
