#include "processmanage.h"
#include "ui_processmanage.h"
#include <QFile>
#include <QMessageBox>
#include <QDir>
#include <QListWidget>
#include <QListWidgetItem>
#include <QStringList>
#include <QTimer>

ProcessManage::ProcessManage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProcessManage)
{
    ui->setupUi(this);
    QWidget::connect(ui->tabWidget,SIGNAL(currentChanged()),this,SLOT(tabWidget_currentChanged(int)));
}

ProcessManage::~ProcessManage()
{
    delete ui;
}

//void ProcessManage::tabWidget_currentChanged(int index)
//{
 //   showTabInfo(index);
 //   return;
//}

void ProcessManage::showTabInfo()
{
    QString tempStr;
    QFile tempFile;
    int pos;
  //  if(index==0)
   // {
        ui->listWidget->clear();
        QDir qd("/proc");
        QStringList qsList=qd.entryList();
        QString qs=qsList.join("\n");
        QString id_of_pro;
        bool ok;
        int find_start=3;
        int a,b;
        int pid;
        QString pName;
        QString pState;
        QString proPri;
        QString proMem;

        QListWidgetItem*title=new QListWidgetItem("PID\t"+QString::fromUtf8("名称") + "\t\t"+
                                                  QString::fromUtf8("状态") + "\t" +
                                                  QString::fromUtf8("优先级") + "\t" +
                                                  QString::fromUtf8("占用内存"), ui->listWidget);
        while(1)
        {
            a=qs.indexOf("\n",find_start);
            b=qs.indexOf("\n",a+1);
            find_start=b;
            id_of_pro=qs.mid(a+1,b-a-1);
            pid=id_of_pro.toInt(&ok,10);
            if(!ok)
            {
                break;
            }
            tempFile.setFileName("/proc/" + id_of_pro + "/stat");
            if ( !tempFile.open(QIODevice::ReadOnly) )
            {
                QMessageBox::warning(this, tr("warning"), tr("The pid stat file can not open!"), QMessageBox::Yes);
                return;
            }
            tempStr = tempFile.readLine();
            if (tempStr.length() == 0)
            {
                break;
            }

            a = tempStr.indexOf("(");
            b = tempStr.indexOf(")");
            pName = tempStr.mid(a+1, b-a-1);
            pName.trimmed();
            pState = tempStr.section(" ", 2, 2);
            proPri = tempStr.section(" ", 17, 17);
            proMem = tempStr.section(" ", 22, 22);

            if (pName.length() >= 12)
            {
                QListWidgetItem *item = new QListWidgetItem(id_of_pro + "\t" +
                                                            pName + "\t" +
                                                            pState + "\t" +
                                                            proPri + "\t" +
                                                            proMem, ui->listWidget);
            }
            else
            {
                QListWidgetItem *item = new QListWidgetItem(id_of_pro + "\t" +
                                                            pName + "\t\t" +
                                                            pState + "\t" +
                                                            proPri + "\t" +
                                                            proMem, ui->listWidget);
            }
        }
       tempFile.close(); //关闭该PID进程的状态文件

  //  }
}

/*void ProcessManage::Search_clicked()
{
    showTabInfo(0);
}*/
