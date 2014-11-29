#include "loginpage.h"
#include "ui_loginpage.h"
#include <QLabel>
#include <QTimer>
#include <QTime>
#include <QPropertyAnimation>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "sha1.h"

LoginPage::LoginPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(palette);

    checke=0;
    checkp=0;

}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_Login_clicked()
{
    /*******************
    *** Verification ***
    ***    Andrew    ***
    *******************/
    checke = 0;
    checkp = 0;
    if( ( ui->Email->text() != NULL ) && ( ui->Password->text() != NULL ) ) {
        email = ui->Email->text();
        password = ui->Password->text();
        checkp = 1;
        checke = 1;
    }
    else if( ui->Password->text() == NULL ) {
        QMessageBox msgBox;
        LoginPage *k = new LoginPage;
        this->close();
        if( ui->Email->text() == NULL ) {
            msgBox.setText( "Please write an E-mail and password." );
            msgBox.exec();
            checke = 0;
            checkp = 0;
        }
        else{
            msgBox.setText( "Please enter a password." );
            msgBox.exec();
            checkp = 0;
        }
        k->show();
    }
    //If both email and password is filled in do this
    if( checke == 1 && checkp == 1 ) {
        //Hash email and password
        int eSize = email.size();
        int pSize = password.size();
        unsigned char ehash[20], phash[20];
        char ehexstring[41], phexstring[41];
        const char *emailc = email.toStdString().c_str();
        const char *passc = password.toStdString().c_str();
        sha1::calc( emailc, eSize, ehash );
        sha1::toHexString( ehash, ehexstring );
        sha1::calc( passc, pSize, phash );
        sha1::toHexString( phash, phexstring );
        //Save email hash to text
        QString filename1 = "email.txt";
        QFile eFile( filename1 );
        if( eFile.open( QFile::WriteOnly | QFile::Append ) ) {
            QTextStream out( &eFile );
            out << ehexstring << endl;
        }
        eFile.close();
        //Save password hash to text
        QString filename2 = "password.txt";
        QFile pFile( filename2 );
        if( pFile.open( QFile::WriteOnly | QFile::Append ) ) {
            QTextStream out( &pFile );
            out << phexstring << endl;
        }
        pFile.close();
        this->close();



        /*************************
         * Show the Splash Image *
         *         David S.      *
         * **********************/
        QPixmap image( ":/rccTigerEdited.png" );
        QLabel* aWidget = new QLabel( 0, Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint );
        aWidget->setAttribute( Qt::WA_TranslucentBackground );
        aWidget->setPixmap( image );

        int width = image.width();
        int height = image.height();

        QDesktopWidget wid;
        QRect mainScreenSize = wid.availableGeometry( wid.primaryScreen() );

        aWidget->move( ( mainScreenSize.width() / 2 ) - ( width / 2 ), ( mainScreenSize.height() / 2  - ( height / 2 ) );
        aWidget->show();

        ConfigDialog *dialog = new ConfigDialog;

        /********************************************************************
         * after a set amount of time close splash image and open main menu *
         * *****************************************************************/
        QTimer::singleShot( 5000, aWidget,SLOT( close() ) );
        QTimer::singleShot( 5000, dialog,SLOT( show() ) );
    }


}

//Commented out extra work that I had to figure out but didn't quite work
/*
int width = aWidget->frameGeometry().width();
int height = aWidget->frameGeometry().height();

QDesktopWidget wid;

int screenWidth = wid.screen()->width();
int screenHeight = wid.screen()->height();

aWidget->setGeometry((screenWidth/3)-(width/3),(screenHeight/3)-(height/3),width,height);
*/

/*
if(screenWidth%1920==0){
    int x=screenWidth/1920;
    screenWidth/=x;
}
else if(screenWidth%1920==0){
    int x=screenWidth/1920;
    screenWidth/=x;
}
*/
//aWidget->move((screenWidth/2)-(width/2), (screenHeight/2)-(height/2));
//aWidget->move(846,390);
//aWidget->move(846*2,390);


/*
aWidget->setGeometry(
    QStyle::alignedRect(
        Qt::LeftToRight,
        Qt::AlignCenter,
        aWidget->size(),
        qApp->desktop()->availableGeometry()
    ));
*/

/*
QPropertyAnimation *animation = new QPropertyAnimation(aWidget, "geometry");
animation->setDuration(3000);
animation->setStartValue(QRect(846, 390, image.width(), image.height()));
animation->setEndValue(QRect(846, 390, image.width(), image.height()));

animation->start();
*/

