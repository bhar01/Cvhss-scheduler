#include "cvv.h"   //the headers needed
#include "ui_cvv.h"
#include <QTimer>
#include<QDebug>
#include "windows.h"
#include <QFile>
#include <QFileDialog>
#include<QString>
#include <QTextStream>

cvv::cvv(QWidget *parent) ://
    QMainWindow(parent),
    ui(new Ui::cvv)
{
   ui->setupUi(this);
//for(int i=0;i<5;i++)
//        {
//    ui->tableWidget->item(0,0)->setTextAlignment(Qt::AlignHCenter);
//         ui->tableWidget->item(1,i)->setTextAlignment(Qt::AlignHCenter);
//          ui->tableWidget->item(2,i)->setTextAlignment(Qt::AlignHCenter);
//          ui->tableWidget_2->item(0,i)->setTextAlignment(Qt::AlignHCenter);
//           ui->tableWidget_2->item(1,i)->setTextAlignment(Qt::AlignHCenter);
//            ui->tableWidget_2->item(2,i)->setTextAlignment(Qt::AlignHCenter);
//}
//this->setGeometry(0,0,1400,1000);
    ui->tableWidget->horizontalHeader()->setFrameStyle(1);
    ui->tableWidget->horizontalHeader()->setLineWidth(1);
    ui->tableWidget->verticalHeader()->setFrameStyle(1);
    ui->tableWidget->verticalHeader()->setLineWidth(1);
    ui->tableWidget_2->horizontalHeader()->setFrameStyle(1);
    ui->tableWidget_2->horizontalHeader()->setLineWidth(1);
    ui->tableWidget_2->verticalHeader()->setFrameStyle(1);
    ui->tableWidget_2->verticalHeader()->setLineWidth(1);
    ui->tableWidget->horizontalHeader()->setFont(QFont("Garamond",15,63)); //to choose the font in which the periods in the table are displayed
    ui->tableWidget_2->horizontalHeader()->setFont(QFont("Garamond",15,63));
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
    QTime time =QTime::currentTime();
    ui->timeEdit->setTime(time);
    qDebug()<< time;
    ui->dateEdit_2->setDate(date);
    ui->timeEdit_2->setTime(time);


  page1();
}

cvv::~cvv()
{
    delete ui;
}

void cvv::page()
{
ui->stackedWidget->setCurrentIndex(1);
qDebug() << "hi";
   QTimer::singleShot(8000,this,SLOT(page1()));
   time();
   textread();


}
void cvv::page1()
{
    time();
 textwrite();
ui->stackedWidget->setCurrentIndex(0);
qDebug() << "timer";
 QTimer::singleShot(10000,this,SLOT(page()));

}


void cvv::time()
{
    QDate date = QDate::currentDate();
   // qDebug() << date;'
    QString s1= QDate :: currentDate().toString("ddd");
    qDebug() << s1;

    ui->dateEdit->setDate(date);
    QTime time =QTime::currentTime();
    ui->timeEdit->setTime(time);
    ui->dateEdit_2->setDate(date);
    ui->timeEdit_2->setTime(time);
    QString s = time.toString("hh:mm:ss:zzz");

//MONDAY
    if(s1=="Mon")
     {
        if(s >= "08:15:00:000" && s < "09:30:00:000")
        {
            //11
            ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("ENG")));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("LANG")));
            ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
            ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("LANG")));
            ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("LANG")));
            ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Andal VishnuPriya")));
            ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("/")));
            ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Durai Chandran")));
            ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("/")));
            ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("/")));
            ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

            //12
            ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
            ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MATH")));
            ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
            ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PHY")));
            ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ENG")));
            ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Nithya")));
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Hemamalini")));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Chitra")));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar")));
            ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Poonguzhali")));
            ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

        }
        if(s >= "09:30:00:000" && s < "10:10:00:000")
        {
            //11
            ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MMP")));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PHY")));
            ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PRAC CS/CHEM")));
            ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("BIO")));
            ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("COMM")));
            ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Andal VishnuPriya")));
            ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Sathish Kumar")));
            ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DuraiChandran/KrishnaPrabha")));
            ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Sujatha")));
            ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
            ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


             ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PHY")));
            ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CS")));
            ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ECO")));
            ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Seetha")));
            ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Aarthi")));
            ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Ramagiri")));
            ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Aarthi")));
            ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Kundavi")));
            ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
        }
        if(s >= "10:20:00:000" && s < "11:00:00:000")
        {
            ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CS")));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("ENG")));
            ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PRAC CS/CHEM")));
            ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("BIO")));
            ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ECO")));
            ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Ramagiri")));
            ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
            ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Rathna")));
            ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Aarthi")));
            ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Ramagiri/Hemamalini")));
            ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

           ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("LANG")));
           ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("LANG")));
           ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MAT")));
           ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("LANG")));
           ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("LANG")));
           ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Prasanna")));
           ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Lakshmipriya")));
           ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rajarajeshwari")));
           ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Periyanayaki")));
           ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Rathna")));
           ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));



        }
        if(s >= "11:00:00:000" && s < "11:40:00:000")
        {
            ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("FRE")));
            ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PHY")));
            ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("CA/BM")));
            ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Rajarajeshwari")));
            ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
            ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Rathna")));
            ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Aarthi")));
            ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Hemamalini/Ramagiri")));
            ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


            ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
           ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
           ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("PHY")));
           ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("ENG")));
           ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ACC")));
           ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("SathishKumar/Nithya")));
           ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Durai Chandran")));
           ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Prabhakar")));
           ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Principal")));
           ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
           ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

        }
        if(s >= "11:40:00:000" && s < "12:20:00:000")
        {
            ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("TAMIL")));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ACC")));
            ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Periyanayaki")));
            ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
            ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Sivagami")));
            ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Hemamalini")));
            ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
            ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));
\
            ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
           ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CS")));
           ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("PHY")));
           ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("BIO")));
           ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ECO")));
           ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Sathish Kumar/Nithya")));
           ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Ramagiri")));
           ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Prabhakar")));
           ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sujatha")));
           ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Kundhavi")));
           ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
        }
        if(s >= "12:50:00:000" && s < "13:30:00:000")
        {
             ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CS")));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
            ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PHY")));
            ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("CHEM")));
            ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ENG")));
            ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Ramagiri")));
            ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Sathish Kumar/Nithya")));
            ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Durai Chandran")));
            ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Chitra")));
            ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Principal")));
            ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

            ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("P.T")));
           ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("ENG")));
           ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("ENG")));
           ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PHY")));
           ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("BM/CS")));
           ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Vignesh")));
           ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Aandal")));
           ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Poonguzhazhi")));
           ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar")));
           ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KrishnaPrabha")));
           ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

        }
        if(s >= "13:30:00:000" && s < "14:10:00:000")
        {
             ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CS")));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
            ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("P.T")));
            ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("ENG")));
            ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ACC")));
            ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Ramagiri")));
            ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Nithya/SathishKumar")));
            ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Vignesh")));
            ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Poonguzhali")));
            ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
            ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

            ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("VED")));
           ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("VED")));
           ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("VED")));
           ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("Chem")));
           ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("BM/CS")));
           ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("@")));
           ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("@")));
           ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("@")));
           ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("DC")));
           ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KrishnaPrabha")));
           ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

        }
        if(s >= "14:20:00:000" && s < "15:00:00:000")
        {
            ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PHY")));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CHM")));
            ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CS")));
            ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("LIB")));
            ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("COMM")));
            ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Prabhakaran")));
            ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Nithya")));
            ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Krishna Prabha")));
            ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Sathish Kumar")));
            ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
            ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


           ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("ENG")));
           ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PRAC CS/PHY")));
           ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("FRENCH")));
           ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("VED")));
           ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("VED")));
           ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Andal VishnuPriya")));
           ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Ramagiri/Aarthi")));
           ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rathna")));
           ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("@")));
           ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("@")));
           ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

        }
        if(s >= "15:00:00:000" && s < "15:40:00:000")
        {

            ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("TAM")));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("MAT")));
            ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ACC")));
            ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Periyanayaki")));
            ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
            ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Sivagami")));
            ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Hemamalini")));
            ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
            ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
            ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

            ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PHY")));
           ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PRAC CS/CHEM")));
           ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MMP")));
           ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("EVS")));
           ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("COMM")));
           ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Sathish Kumar")));
           ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Ramagiri/DuraiChandran")));
           ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Nithya")));
  /*x*/         ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("#")));
           ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
           ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
           ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

        }
         }
//TUESDAY
    if(s1=="Tue")
                 {
                    if(s >= "08:15:00:000" && s < "09:30:00:000")
                    {
                        //11
                        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                        ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                        ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("LANG")));
                        ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PHY")));
                        ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("BM/CSC")));
                        ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("VP")));
                        ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SEETHA")));
                        ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("/")));
                        ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("AARTHI")));
                        ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("HEMA/RAMAG")));
                        ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                        //12
                        ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CSC")));
                        ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PHY")));
                        ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("ENG")));
                        ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("BIO")));
                        ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("BM/CSC")));
                        ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("KrishnaPrabha")));
                        ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Aarthi")));
                        ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Poonguzhali")));
                        ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sujatha")));
                        ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KrishnaPrabha")));
                        ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                    }
                    if(s >= "09:30:00:000" && s < "10:10:00:000")
                    {
                        //11
                        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("LANG")));
                        ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CSC")));
                        ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                        ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                        ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                        ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("PERIYANAGA")));
                        ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("KP")));
                        ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("SIVAGAMI")));
                        ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("HEMAMALINI")));
                        ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("KUNDAVI")));
                        ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


                         ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                        ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("ENG")));
                        ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("Prac CSC/PHY")));
                        ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("ENG")));
                        ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ACC")));
                        ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Seetha")));
                        ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Andal")));
                        ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Ramagiri/Prabhakar")));
                        ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Principal")));
                        ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                        ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
                    }
                    if(s >= "10:20:00:000" && s < "11:00:00:000")
                    {
                        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MMP")));
                        ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                        ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CSC")));
                        ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                        ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ACC")));
                        ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("AANDAL")));
                        ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                        ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("KP")));
                        ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("HEMAMALINI")));
                        ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("USHA")));
                        ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                       ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("Lang")));
                       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("Lang")));
                       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("Prac CSC/PHY")));
                       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("Lang")));
                       ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("lang")));
                       ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Prasanna")));
                       ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Lakshmiprabha")));
                       ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Ramagiri/Prabhakar")));
                       ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Periyanyaki")));
                       ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Rathna")));
                       ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));



                    }
                    if(s >= "11:00:00:000" && s < "11:40:00:000")
                    {
                        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
                        ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PHY")));
                        ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("ENG")));
                        ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("BIO")));
                        ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ENG")));
                        ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("CHITRA")));
                        ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SK")));
                        ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("AANDAL")));
                        ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("AARTHI")));
                        ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("PRINCI")));
                        ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


                        ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("Prac CSC/CHEM")));
                       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CSC")));
                       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PHY")));
                       ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                       ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Ramagiri/")));
                       ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Hemamalini")));
                       ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Prabhakar")));
                       ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Princip")));
                       ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                       ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                    }
                    if(s >= "11:40:00:000" && s < "12:20:00:000")
                    {
                        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CSC")));
                        ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("LANG")));
                        ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("ENG")));
                        ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("LANG")));
                        ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("LANG")));
                        ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("RAMAGIRI")));
                        ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("/")));
                        ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("AANDAL")));
                        ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("/")));
                        ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("/")));
                        ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));
            \
                        ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("Prac CSC/CHEM")));
                       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
                       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("COMM")));
                       ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("KrishnaPrabha/Nithya")));
                       ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("DuraiChandran")));
                       ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rajarajeshwari")));
                       ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sivagami")));
                       ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Kundavi")));
                       ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
                    }
                    if(s >= "12:50:00:000" && s < "13:30:00:000")
                    {
                         ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PT")));
                        ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("Prac CSC/PHY")));
                        ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PHY")));
                        ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("CHEM")));
                        ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("MMP")));
                        ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("VIGNESH")));
                        ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("CHITRA/PRABHAKARAN")));
                        ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("SK")));
                        ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("CHITRA")));
                        ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("&&&")));
                        ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                        ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
                       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CSC")));
                       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("LANG")));
                       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PHY")));
                       ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ENG")));
                       ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
                       ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Aandal")));
                       ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Poonguzhazhi")));
                       ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar")));
                       ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KP")));
                       ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                    }
                    if(s >= "13:30:00:000" && s < "14:10:00:000")
                    {
                         ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                        ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("Prac CSC/PHY")));
                        ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
                        ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("Eng")));
                        ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("COMM")));
                        ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("VP")));
                        ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("KP/SK")));
                        ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DC")));
                        ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Poonguzhazhi")));
                        ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                        ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                        ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("ENG")));
                       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("EVS")));
                       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("PHY")));
                       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PT")));
                       ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("EVS")));
                       ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
                       ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("@")));
                       ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("@")));
                       ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("DC")));
                       ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KP")));
                       ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                    }
                    if(s >= "14:20:00:000" && s < "15:00:00:000")
                    {
                        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("ENG")));
                        ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
                        ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                        ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("CHEM")));
                        ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("BM/CSC PRAC")));
                        ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("AANDAL")));
                        ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SK")));
                        ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("SIVAGAMI")));
                        ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("CHITRA")));
                        ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("HEMA/RAMA")));
                        ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


                       ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PHY")));
                       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("Prac CHEM/PHY")));
                       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("EVS")));
                       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("ENG")));
                       ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("MMP")));
                       ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
                       ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Rama/Aarthi")));
                       ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Ratna")));
                       ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("@")));
                       ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("@")));
                       ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                    }
                    if(s >= "15:00:00:000" && s < "15:40:00:000")
                    {

                        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PHY")));
                        ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("ENG")));
                        ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("LANG")));
                        ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("LIB")));
                        ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("BM/CSC PRAC")));
                        ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("PRABHAKARAN")));
                        ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("POONGUZHAZHI")));
                        ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("/")));
                        ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("SK")));
                        ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("HEMAMALINI/RAMA")));
                        ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                        ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                        ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MMP")));
                       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("Prac PHY/CHEM")));
                       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
                       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ACC")));
                       ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("SK")));
                       ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Rama/DC")));
                       ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Nitya")));
                      ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("#")));
                       ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                       ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                    }
    }
//WEDNESDAY
    if(s1=="Wed")
        {
           if(s >= "08:15:00:000" && s < "09:30:00:000")
           {
               //11
               ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
               ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("ENG")));
               ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CSC")));
               ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("BIO")));
               ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ACC")));
               ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("CHITRA")));
               ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("ENG")));
               ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("RAMAGIRI")));
               ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("SUJATHA")));
               ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("USHA")));
               ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

               //12
               ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MAT")));
               ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CSC")));
               ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("PHY")));
               ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("CHE")));
               ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ECO")));
               ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
               ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Hema")));
               ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Chitra")));
               ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar")));
               ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Poonguzhali")));
               ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

           }
           if(s >= "09:30:00:000" && s < "10:10:00:000")
           {
               //11
               ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("Prac CHEM/PHY")));
               ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PHY")));
               ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("ENG")));
               ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("MAT")));
               ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ECO")));
               ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("CHITRA/PRABHAKAR")));
               ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SK")));
               ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("AANDAL")));
               ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("HEMAMALINI")));
               ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("KUNDAVI")));
               ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


                ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
               ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PHY")));
               ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MAT")));
               ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("BIO")));
               ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("COMM")));
               ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
               ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Aarthi")));
               ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Ramagiri")));
               ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Aarthi")));
               ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Kundavi")));
               ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
           }
           if(s >= "10:20:00:000" && s < "11:00:00:000")
           {
               ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("Prac PHY/CHEM")));
               ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MAT")));
               ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MAT")));
               ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("ENG")));
               ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ENG")));
               ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("PRABHAKAR/CHITRA")));
               ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
               ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("SIVAGAMI")));
               ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("POONGZHUZHAZHI")));
               ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("PRINCI")));
               ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

              ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("LANG")));
              ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("LANG")));
              ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MAT")));
              ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("LANG")));
              ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("LANG")));
              ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
              ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Lp")));
              ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Vp")));
              ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Periya")));
              ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Rathna")));
              ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));



           }
           if(s >= "11:00:00:000" && s < "11:40:00:000")
           {
               ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MAT")));
               ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("LANG")));
               ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("Prac CSC/PHY")));
               ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("LANG")));
               ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("LANG")));
               ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("VP")));
               ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("/")));
               ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("KP/SK")));
               ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("/")));
               ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("/")));
               ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


               ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MAT")));
              ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("ENG")));
              ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
              ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("Prac CHEM/BIO")));
              ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("COMM")));
              ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
              ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Dc")));
              ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Prabhakar")));
              ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Princip")));
              ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
              ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

           }
           if(s >= "11:40:00:000" && s < "12:20:00:000")
           {
               ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("LANG")));
               ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
               ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("Prac CSC/PHY")));
               ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("CHEM")));
               ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ECO")));
               ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("PERIYA")));
               ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("NITHYA")));
               ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("KP/SK")));
               ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("CHITRA")));
               ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("KUNDAVI")));
               ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));
   \
               ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PHY")));
              ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("ENG")));
              ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CSC")));
              ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("Prac CHEM/BIO")));
              ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ENG")));
              ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
              ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Ramagiri")));
              ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Prabhakar")));
              ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Suji")));
              ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Kundavi")));
              ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
           }
           if(s >= "12:50:00:000" && s < "13:30:00:000")
           {
                ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PHY")));
               ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("Prac CSC/CHE")));
               ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CHE")));
               ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PHY")));
               ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("BM/CSC")));
               ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("PRABHAKAR")));
               ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("KP/NITHYA")));
               ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DC")));
               ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("AARTHI")));
               ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("HEMAMALINI/RAMAGIRI")));
               ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

               ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("ENG")));
              ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PT")));
              ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("Eng")));
              ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MAT")));
              ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ACC")));
              ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
              ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Aandal")));
              ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Poonguzhazhi")));
              ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar")));
              ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KP")));
              ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

           }
           if(s >= "13:30:00:000" && s < "14:10:00:000")
           {
                ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CSC")));
               ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("Prac CSC/CHE")));
               ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PHY")));
               ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("EVS")));
               ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("PT")));
               ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Ramagiri")));
               ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Nitya/KP")));
               ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("SK")));
               ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("&&&")));
               ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("VIGNESH")));
               ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

               ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("ENG")));
              ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
              ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("LANG")));
              ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MAT")));
              ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ACC")));
              ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("@")));
              ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("@")));
              ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("@")));
              ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("DC")));
              ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KP")));
              ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

           }
           if(s >= "14:20:00:000" && s < "15:00:00:000")
           {
               ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("ENG")));
               ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CSC")));
               ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("LANG")));
               ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("Prac PHY/BIO")));
               ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ACC")));
               ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("AANDAL")));
               ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("KP")));
               ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("/")));
               ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("AARTHI/SUJATHA")));
               ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("USHA")));
               ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


              ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("LIB")));
              ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MAT")));
              ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("Prac CHEM/CSC")));
              ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("ENG")));
              ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("PT")));
              ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("###")));
              ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Rama/Aarthi")));
              ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Ratna")));
              ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("@")));
              ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("@")));
              ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

           }
           if(s >= "15:00:00:000" && s<"15:40:00:000")
           {

               ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("ENG")));
               ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("LIB")));
               ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PT")));
               ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("Prac PHY/BIO")));
               ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("COMM")));
               ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("AANDAL")));
               ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SATHISH")));
               ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("VIGENSH")));
               ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("AARTHI/SUJATHA")));
               ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("USHA")));
               ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
               ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

               ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CSC")));
              ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MAT")));
              ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("Prac CHEM/CSC")));
              ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PHY")));
              ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("BM")));
              ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("SK")));
              ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Rama/DC")));
              ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("###")));
     /*x*/         ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("#")));
              ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
              ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
              ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

           }
 }
//THURSDAY
    if(s1=="Thur")
             {
                if(s >= "08:15:00:000" && s < "09:30:00:000")
                {
                    //11
                    ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("TAM")));
                    ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                    ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PHY")));
                    ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Periyanayaki")));
                    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("/")));
                    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DuraiChandran")));
                    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("/")));
                    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("/")));
                    ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                    //12
                    ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PHY")));
                    ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ACC")));
                    ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Sathish Kumar")));
                    ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Andal VishnuPriya")));
                    ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Poonguzhali")));
                    ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Principal")));
                    ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                    ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                }
                if(s >= "09:30:00:000" && s < "10:10:00:000")
                {
                    //11
                    ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CS")));
                    ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("LANG")));
                    ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
                    ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("LANG")));
                    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("LANG")));
                    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Andal")));
                    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SK")));
                    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DC/KP")));
                    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Sujatha")));
                    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                    ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


                     ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CS")));
                    ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                    ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("BIO")));
                    ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("BM/CS")));
                    ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("KrishnaPrabha")));
                    ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Andal Vishnupriya")));
                    ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("RajaRajeshwari")));
                    ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sujatha")));
                    ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KrishnaPrabha")));
                    ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
                }
                if(s >= "10:20:00:000" && s < "11:00:00:000")
                {
                    ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PHY")));
                    ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PHY")));
                    ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
                    ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("BIO")));
                    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("COMM")));
                    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Prasanna")));
                    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("LakshmiPriya")));
                    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Chitra")));
                    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("PeriyaNayaki")));
                    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Rathna")));
                    ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                   ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("LANG")));
                   ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("LANG")));
                   ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
                   ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("LANG")));
                   ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("LANG")));
                   ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Prasanna")));
                   ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Lakshmiprabha")));
                   ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rajarajeshwari")));
                   ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Periyanayaki")));
                   ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Rathna")));
                   ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));



                }
                if(s >= "11:00:00:000" && s < "11:40:00:000")
                {
                    ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PRAC PHY/CS")));
                    ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
                    ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                    ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PHY")));
                    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("LIB")));
                    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("VP")));
                    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("RATHNA")));
                    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("AARTHI")));
                    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Hema/Rama")));
                    ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


                    ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("ENG")));
                   ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PRAC BIO/PHY")));
                   ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                   ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Seetha")));
                   ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Hemamalini")));
                   ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Poonguzhali")));
                   ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sujatha/Prabhakar")));
                   ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Kundhavi")));
                   ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                }
                if(s >= "11:40:00:000" && s < "12:20:00:000")
                {
                    ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PRAC CHEM/PHY")));
                    ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MMP")));
                    ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
                    ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Periya")));
                    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Sivagami")));
                    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Hema")));
                    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                    ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));
        \
                   ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CS")));
                   ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("LIB")));
                   ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PRAC BIO/PHY")));
                   ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                   ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Seetha")));
                   ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Ramagiri")));
                   ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Sathish Kumar")));
                   ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sujatha/Prabhakar")));
                   ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Kundavi")));
                   ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
                }
                if(s >= "12:50:00:000" && s < "13:30:00:000")
                {
                     ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("EVS")));
                    ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PRAC CHEM/BIO")));
                    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ACC")));
                    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Ramagiri")));
                    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SK/Nithya")));
                    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DC")));
                    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Chitra")));
                    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Principal")));
                    ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                   ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PRAC CS/PHY")));
                   ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
                   ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CS")));
                   ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PHY")));
                   ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ENG")));
                   ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("KrishnaPrabha/SathishKumar")));
                   ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("DuraiChandran")));
                   ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Ramagiri")));
                   ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar")));
                   ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Poonguzhali")));
                   ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                }
                if(s >= "13:30:00:000" && s < "14:10:00:000")
                {
                     ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                    ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("LANG")));
                    ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PRAC CHEM/BIO")));
                    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("BM/CSC")));
                    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###")));
                    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Nitya/SK")));
                    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Vignesh")));
                    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Poonguzhazhi")));
                    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                    ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                    ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PRAC CS/PHY")));
                   ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PHY")));
                   ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("PHY")));
                   ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("CHEM")));
                   ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("BM/CS")));
                   ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("KrishnaPrabha/Sathish Kumar")));
                   ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Aarthi")));
                   ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Prabhakar")));
                   ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("DuraiChandran")));
                   ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KP")));
                   ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                }
                if(s >= "14:20:00:000" && s < "15:00:00:000")
                {
                    ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
                   ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CSC")));
                    ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PT")));
                    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("COMM")));
                    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Prabhakaran")));
                    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Nitya")));
                    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("KP")));
                    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("SK")));
                    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                    ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


                   ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("ENG")));
                   ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PRAC CS/CHEM")));
                   ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("FRE")));
                   ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ENG")));
                   ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Andal")));
                   ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Ramagiri/DuraiChandran")));
                   ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rathna")));
                   ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sivagami")));
                   ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Poonguzhali")));
                   ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                }
                if(s >= "15:00:00:000")
                {

                    ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                    ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PT")));
                    ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CS")));
                    ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("CHEM")));
                    ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ENG")));
                    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Periyanayaki")));
                    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Sivagami")));
                    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Hemamalini")));
                    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                    ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                    ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                    ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("ENG")));
                   ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PRAC CS/CHEM")));
                   ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("PT")));
                   ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("LIB")));
                   ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("COMM")));
                   ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Andal VishnuPriya")));
                   ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Ramagiri/DuraiChandran")));
                   ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Vignesh")));
                   ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sathish Kumar")));
                   ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                   ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                }
}
//FRIDAY
    if(s1=="Fri")
                {
                   if(s >= "08:15:00:000" && s < "09:30:00:000")
                   {
                       //11
                       ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
                       ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("LANG")));
                       ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PHY")));
                       ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("LANG")));
                       ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("LANG")));
                       ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###")));
                       ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("/")));
                       ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DC")));
                       ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("/")));
                       ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("/")));
                       ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                       //12
                       ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CS")));
                       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CS")));
                       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PHY")));
                       ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("BM/CS")));
                       ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("KrishnaPrabha")));
                       ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Hemamalini")));
                       ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Ramagiri")));
                       ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar")));
                       ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KrishnaPrabha")));
                       ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                   }
                   if(s >= "09:30:00:000" && s < "10:10:00:000")
                   {
                       //11
                       ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("VED")));
                       ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("VED")));
                       ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("VED")));
                       ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("BIO")));
                       ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("BM/CSC")));
                       ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Andal")));
                       ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SK")));
                       ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DC/KP")));
                       ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Sujatha")));
                       ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                       ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


                       ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PHY")));
                       ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("ENG")));
                       ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
                       ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                       ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Sathish Kumar")));
                       ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Andal")));
                       ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Prabhakar/Chitra")));
                       ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sivagami")));
                       ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Kundavi")));
                       ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
                   }
                   if(s >= "10:20:00:000" && s < "11:00:00:000")
                   {
                       ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PHY")));
                       ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("LANG")));
                       ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("VED")));
                       ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("VED")));
                       ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("Ramagiri")));
                       ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                       ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Rathna")));
                       ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Aarthi")));
                       ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Ramagiri/Hema")));
                       ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                      ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                      ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PHY")));
                      ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
                      ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("CHEM")));
                      ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("MMP")));
                      ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Seetha")));
                      ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Aarthi")));
                      ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Prabhakar/Chitra")));
                      ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Chitra")));
                      ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Nithya")));
                      ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));



                   }
                   if(s >= "11:00:00:000" && s < "11:40:00:000")
                   {
                       ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("LANG")));
                       ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CSC")));
                       ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
                       ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
                       ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                       ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###VP")));
                       ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                       ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("RATHNA")));
                       ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("AARTHI")));
                       ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Hema/Rama")));
                       ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                      ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
                      ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CS")));
                      ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("PHY")));
                      ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("BIO")));
                      ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("COMM")));
                      ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Nithya")));
                      ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Ramagiri")));
                      ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Prabhakar")));
                      ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sujatha")));
                      ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                      ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                   }
                   if(s >= "11:40:00:000" && s < "12:20:00:000")
                   {
                       ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("ENG")));
                       ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
                       ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                       ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Periya")));
                       ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                       ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Sivagami")));
                       ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Hema")));
                       ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                       ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));
           \
                      ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("LANG")));
                      ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("LANG")));
                      ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("ENG")));
                      ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("LANG")));
                      ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("LANG")));
                      ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Prasanna")));
                      ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("LakshmiPriya")));
                      ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Poonguzhali")));
                      ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Periyanayaki")));
                      ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Rathna")));
                      ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
                   }
                   if(s >= "12:50:00:000" && s < "13:30:00:000")
                   {
                        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PRAC CSC/CHEM")));
                       ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PT")));
                       ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                       ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("COMM")));
                       ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Ramagiri")));
                       ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SK/Nithya")));
                       ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DC")));
                       ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Chitra")));
                       ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Principal")));
                       ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                      ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("ENG")));
                      ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                      ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                      ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PT")));
                      ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("COMM")));
                      ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Andal")));
                      ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Hemamalini")));
                      ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rajarajeshwari")));
                      ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Vignesh")));
                      ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                      ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                   }
                   if(s >= "13:30:00:000" && s < "14:10:00:000")
                   {
                        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PRAC CSC/CHEM")));
                       ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
                       ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("LIB")));
                       ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("CHEM")));
                       ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ENG")));
                       ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Ramagiri")));
                       ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Nitya/SK")));
                       ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Vignesh")));
                       ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Poonguzhazhi")));
                       ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                       ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                      ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
                      ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
                      ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
                      ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("ENG")));
                      ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ENG")));
                      ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Nithya")));
                      ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("DuraiChandran")));
                      ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Chitra")));
                      ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Principal")));
                      ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Poonguzhali")));
                      ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                   }
                   if(s >= "14:20:00:000" && s < "15:00:00:000")
                   {
                       ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("PT")));
                       ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("EVS")));
                       ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CSC")));
                       ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("ENG")));
                       ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ACC")));
                       ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Prabhakaran")));
                       ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Nitya")));
                       ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("KP")));
                       ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("SK")));
                       ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                       ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));


                      ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("EVS")));
                      ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("PHY")));
                      ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                      ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
                      ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("LIB")));
                      ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("/")));
                      ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Aarthi")));
                      ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rajarajeshwari")));
                      ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar/DuraiChandran")));
                      ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sathish Kumar")));
                      ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

                   }
                   if(s >= "15:00:00:000")
                   {

                       ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CSC")));
                       ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("ENG")));
                       ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("ENG")));
                       ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PHY")));
                       ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("EVS")));
                       ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Periyanayaki")));
                       ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                       ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Sivagami")));
                       ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Hemamalini")));
                       ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                       ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                       ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                      ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("PHY")));
                      ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MMP")));
                      ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("FRE")));
                      ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PRAC PHY/CHEM")));
                      ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ACC")));
                      ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("SathishKumar")));
                      ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Nithya")));
                      ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rathna")));
             /*x*/         ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar/Durai Chandran")));
                      ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                      ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                      ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
}
}
//SATURDAY
    if(s1=="Sat")
            {
               if(s >= "08:15:00:000" && s < "09:30:00:000")
               {
                   //11
                   ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("/")));
                   ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("/")));
                   ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("/")));
                   ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("/")));
                   ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("/")));
                   ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                   //12
                   ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("MC")));
                   ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("/")));
                   ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("/")));
                   ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("/")));
                   ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("/")));
                   ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("/")));
                   ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

               }
               if(s >= "09:30:00:000" && s < "10:10:00:000")
               {
                   //11
                   ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("LANG")));
                   ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("PHY")));
                   ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("BIO")));
                   ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ACC")));
                   ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Andal")));
                   ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SK")));
                   ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DC/KP")));
                   ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Sujatha")));
                   ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                   ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                   ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("CS")));
                   ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("FRE")));
                   ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("BIO")));
                   ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                   ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Seetha")));
                   ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Ramagiri")));
                   ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rathna")));
                   ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sujatha")));
                   ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Kundavi")));
                   ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
               }
               if(s >= "10:20:00:000" && s < "11:00:00:000")
               {
                   ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CSC")));
                   ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("MMP")));
                   ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("PHY")));
                   ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("COMM")));
                   ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Ramagiri")));
                   ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                   ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Rathna")));
                   ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Aarthi")));
                   ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Ramagiri/Hema")));
                   ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                  ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("ENG")));
                  ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                  ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("MAT")));
                  ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                  ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("ENG")));
                  ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Andal")));
                  ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Hemamalini")));
                  ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rajarajeshwari")));
                  ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Sivagami")));
                  ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Poonguzhali")));
                  ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));



               }
               if(s >= "11:00:00:000" && s < "11:40:00:000")
               {
                   ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CSC")));
                   ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("MAT")));
                   ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("ECO")));
                   ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###VP")));
                   ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                   ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("RATHNA")));
                   ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("AARTHI")));
                   ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Hema/Rama")));
                   ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                   ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("LANG")));
                  ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("LANG")));
                  ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("ENG")));
                  ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("LANG")));
                  ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("LANG")));
                  ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Prasanna")));
                  ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Lakshmipriya")));
                  ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Poonguzhali")));
                  ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Periyanayaki")));
                  ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Rathna")));
                  ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

               }
               if(s >= "11:40:00:000" && s < "12:20:00:000")
               {
                   ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("EVS")));
                   ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("LANG")));
                   ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
                   ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("LANG")));
                   ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("LANG")));
                   ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Periya")));
                   ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("Seetha")));
                   ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("Sivagami")));
                   ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Hema")));
                   ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Usha")));
                   ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                  ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("MMP")));
                  ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("ENG")));
                  ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("CHEM")));
                  ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("MMP")));
                  ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("BM/CS")));
                  ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("/")));
                  ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Andal Vishnupriya")));
                  ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Chitra")));
                  ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("/")));
                  ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("Sivagami/KrishnaPrabha")));
                  ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));
               }
               if(s >= "12:50:00:000" && s < "13:30:00:000")
               {
                    ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
                   ui->tableWidget->setItem(0,1,new QTableWidgetItem(QString("CHEM")));
                   ui->tableWidget->setItem(0,2,new QTableWidgetItem(QString("PHY")));
                   ui->tableWidget->setItem(0,3,new QTableWidgetItem(QString("ENG")));
                   ui->tableWidget->setItem(0,4,new QTableWidgetItem(QString("BM/CSC")));
                   ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString("###Ramagiri")));
                   ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString("SK/Nithya")));
                   ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString("DC")));
                   ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString("Chitra")));
                   ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString("Principal")));
                   ui->tableWidget->setItem(2,0,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,1,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,2,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,3,new QTableWidgetItem(QString("-")));
                   ui->tableWidget->setItem(2,4,new QTableWidgetItem(QString("-")));

                  ui->tableWidget_2->setItem(0,0,new QTableWidgetItem(QString("CHEM")));
                  ui->tableWidget_2->setItem(0,1,new QTableWidgetItem(QString("MAT")));
                  ui->tableWidget_2->setItem(0,2,new QTableWidgetItem(QString("FRE")));
                  ui->tableWidget_2->setItem(0,3,new QTableWidgetItem(QString("PHY")));
                  ui->tableWidget_2->setItem(0,4,new QTableWidgetItem(QString("#")));
                  ui->tableWidget_2->setItem(1,0,new QTableWidgetItem(QString("Nithya")));
                  ui->tableWidget_2->setItem(1,1,new QTableWidgetItem(QString("Hemamalini")));
                  ui->tableWidget_2->setItem(1,2,new QTableWidgetItem(QString("Rathna")));
                  ui->tableWidget_2->setItem(1,3,new QTableWidgetItem(QString("Prabhakar")));
                  ui->tableWidget_2->setItem(1,4,new QTableWidgetItem(QString("/")));
                  ui->tableWidget_2->setItem(2,0,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,1,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,2,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,3,new QTableWidgetItem(QString("-")));
                  ui->tableWidget_2->setItem(2,4,new QTableWidgetItem(QString("-")));

               }
   }

}
void cvv::textwrite()
{
   QString Filename = "news.txt";
   QFile file(Filename);
    if(file.open(QIODevice::ReadWrite))
    {
        QTextStream stream(&file);
        stream << ui->textEdit_3->toPlainText() ;
    }

    QString Filename1 = "update.txt";
    QFile file1(Filename1);
     if(file1.open(QIODevice::ReadWrite))
     {
         QTextStream stream1(&file1);
         stream1 << ui->textEdit_4->toPlainText() ;
     }

}
void cvv::textread()
{
    QString Filename = "news.txt";
    QFileInfo info(Filename);
    QFile file(Filename.toUtf8());
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
     QTextStream stream(&file);

       ui->textEdit->setText(stream.readAll());

       qDebug() <<stream.readAll();
    }
    QString Filename1 = "update.txt";
    QFileInfo info1(Filename1);
    QFile file1(Filename1.toUtf8());
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
     QTextStream stream1(&file1);

       ui->textEdit_2->setText(stream1.readAll());

       qDebug() <<stream1.readAll();
}
}
