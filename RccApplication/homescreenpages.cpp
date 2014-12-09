#include <QDomDocument>
#include <QtGui>

#include "HomeScreenPages.h"

NewsPage::NewsPage(QWidget *parent) :
    QWidget (parent),
    ui(new Ui::NewsPage)
{


    ui->setupUi(this);
    //this->setFixedSize(1024,768);

    //Mouse Tracking
    this->setMouseTracking(true);
    //ui->centralWidget->setMouseTracking(true);

    QPixmap pixmap(":Images/ArticleImage1.jpg");
    QPixmap pixmap2(":Images/ArticleImage3.jpg");


    QIcon ButtonIcon(pixmap);
    QIcon ButtonIcon2(pixmap2);
    ui->article1_Picture_2->setIcon(ButtonIcon);
    ui->article1_Picture_2->setIconSize(pixmap.rect().size());
    ui->article1_Picture_3->setIcon(ButtonIcon2);
    ui->article1_Picture_3->setIconSize(pixmap2.rect().size());

    /*
    QDomDocument xml;
    QFile xmlFile(":/newsArticles.xml");
    xml.setContent(&xmlFile);
    scene = new QGraphicsScene(this);
    //ui->graphicsView->setScene(scene);
    //QGraphicsRectItem *frame = scene->addRect(100,100,100,100);
    //frame->setPen(Qt::NoPen);
    //qDebug() << zeroDash.isNull();
    //qDebug() << zeroDash.firstChildElement().text();

    //of element "image" get the attribute "path"'s value
    QDomElement root = xml.firstChildElement();
    QDomNodeList articlePath = root.elementsByTagName("Articles").at(0).childNodes();//.at(0).firstChildElement().text();
    QDomNodeList imagePath = root.elementsByTagName("Images").at(0).childNodes();
    QDomNodeList artLinks = root.elementsByTagName("Links").at(0).childNodes();
    QPixmap *pix = new QPixmap[imagePath.size()];
    QFile *files = new QFile[articlePath.size()];
    QLabel *labels = new QLabel[articlePath.size()];
    QTextStream tempFile;
    //int width;
    //int height;
    //int a=100, b=0, c=-100;
    //QGraphicsPixmapItem *test;

    //qDebug() << root.text();
    //QString tempString;
    for(int i = 0; i<articlePath.size(); i++){
        pix[i].load(imagePath.at(i).toElement().text());
        files[i].setFileName(articlePath.at(i).toElement().text());

        labels[i].setPixmap(pix[i]);
        files[i].open(QIODevice::ReadOnly | QIODevice::Text);
        tempFile.setDevice(&files[i]);
        labels[i].setText(tempFile.readAll());
        //qDebug() << imagePath.at(i).toElement().text();
        //qDebug() << articlePath.at(i).toElement().text();
        //qDebug() << articlePath.size();
        //qDebug() << (tempFile.readAll());
        //width = pix[i].width();
        //height = pix[i].height();
        /*
        if(i==1)
            scene->setSceneRect((0-width/2),a,0,0);
        else if(i==2)
            frame->mapRectToParent((0-width/2),a,0,0);
        else if(i==3)
            scene->setSceneRect((0-width/2),c,0,0);

        test = scene->addPixmap(pix[i]);
        if(i==1)
            test->translate(0-width/2,a);
        else if(i==2)
            test->translate(0-width/2,b);
        else if(i==3)
            test->translate(0-width/2,c);
        files[i].close();

    }
    //contentsWidget = new QListWidget;
    ui->listWidget->setViewMode(QListView::IconMode);
    ui->listWidget->setIconSize(QSize(100, 100));
    ui->listWidget->setMovement(QListView::Static);
    //ui->listWidget->setMaximumWidth(145);
    ui->listWidget->setSpacing(12);

    QListWidgetItem *Art1 = new QListWidgetItem(ui->listWidget);
    Art1->setIcon(QIcon(imagePath.at(0).toElement().text()));
    Art1->setText(tr("Article 1"));
    Art1->setTextAlignment(Qt::AlignHCenter);
    Art1->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    Art1->setData( 5, QVariant( artLinks.at(0).toElement().text() ));

    QListWidgetItem *Art2 = new QListWidgetItem(ui->listWidget);
    Art2->setIcon(QIcon(imagePath.at(1).toElement().text()));
    Art2->setText(tr("Article 2"));
    Art2->setTextAlignment(Qt::AlignHCenter);
    Art2->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    Art2->setData( 5, QVariant( artLinks.at(1).toElement().text() ));

    QListWidgetItem *Art3 = new QListWidgetItem(ui->listWidget);
    Art3->setIcon(QIcon(imagePath.at(2).toElement().text()));
    Art3->setText(tr("Article 3"));
    Art3->setTextAlignment(Qt::AlignHCenter);
    Art3->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    Art3->setData( 5, QVariant( artLinks.at(2).toElement().text() ));

    connect( ui->listWidget, SIGNAL( itemClicked(QListWidgetItem*) ), this, SLOT( itemClicked( QListWidgetItem* ) ) );


    /*
    QGroupBox *configGroup = new QGroupBox(tr("Server configuration"));

    QLabel *serverLabel = new QLabel(tr("Server:"));
    QComboBox *serverCombo = new QComboBox;
    serverCombo->addItem(tr("Qt (Australia)"));
    serverCombo->addItem(tr("Qt (Germany)"));
    serverCombo->addItem(tr("Qt (Norway)"));
    serverCombo->addItem(tr("Qt (People's Republic of China)"));
    serverCombo->addItem(tr("Qt (USA)"));

    QHBoxLayout *serverLayout = new QHBoxLayout;
    serverLayout->addWidget(serverLabel);
    serverLayout->addWidget(serverCombo);

    QVBoxLayout *configLayout = new QVBoxLayout;
    configLayout->addLayout(serverLayout);
    configGroup->setLayout(configLayout);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(configGroup);
    mainLayout->addStretch(1);
    setLayout(mainLayout);
    */
    //scene = new QGraphicsScene(this);
    //ui->gaben->setScene(scene);

    //QPixmap qtsucks(":/Naamloos-1.png");
    //scene->addPixmap(qtsucks);




    /*
    QGraphicsWidget *textEdit = scene.addWidget(new QTextEdit);
    QGraphicsWidget *pushButton = scene.addWidget(new QPushButton);

    QGraphicsGridLayout *layout = new QGraphicsGridLayout;
    layout->addItem(textEdit, 0, 0);
    layout->addItem(pushButton, 0, 1);

    QGraphicsWidget *form = new QGraphicsWidget;
    form->setLayout(layout);
    scene.addItem(form);

    xmlFile.close();
*/
}

void NewsPage::on_article1_Picture_2_clicked(){

    QString link ="http://www.rcc.edu/about/campusnews/Pages/Taube-to-be-Featured-Speaker-at-Xipe-Projects-.aspx";
    QDesktopServices::openUrl(QUrl(link));

}
void NewsPage::on_article1_Picture_3_clicked(){

    QString link ="http://www.rcc.edu/about/campusnews/Pages/Journalism-Students-Win-Eight-Awards-at-Southern-California-Competition.aspx";
    QDesktopServices::openUrl(QUrl(link));
}
void NewsPage::itemClicked( QListWidgetItem* item ){
    QDesktopServices::openUrl( item->data( 5 ).toString() );
}


Forums::Forums(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Forums)
{
    ui->setupUi(this);
    this->setFixedSize(1024,768);
    QLabel *title = new QLabel("Title ");
    QLabel *urlLabel = new QLabel("Url");
    QLabel *choose = new QLabel("Choose a sub-forum");
    QPushButton *submit = new QPushButton("Submit");
    QGroupBox *forums = new QGroupBox();



    QComboBox *threadType = new QComboBox;
    QLineEdit *titleInput = new QLineEdit;
    QLineEdit *urlInput = new QLineEdit;
    QTextEdit *text = new QTextEdit;
    QLineEdit *sub = new QLineEdit;


    QGridLayout *forumButton = new QGridLayout;

    threadType->addItem("Link");
    threadType->addItem("Text");


    forumButton->addWidget(threadType);
    forumButton->addWidget(title);
    forumButton->addWidget(titleInput);
    forumButton->addWidget(urlLabel);
    forumButton->addWidget(urlInput);
    forumButton->addWidget(text);
    forumButton->addWidget(choose);
    forumButton->addWidget(sub);
    forumButton->addWidget(submit);

    forums->setLayout(forumButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(forums);
    mainLayout->addSpacing(12);

    mainLayout->addStretch(1);
    setLayout(mainLayout);

}


Schedule::Schedule(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::schedule)
{
    ui->setupUi(this);
    this->setFixedSize(1024,768);
    //Read in Class file
    QFile classFile("class.txt");
    classFile.open(QIODevice::ReadOnly);
    QTextStream textStream(&classFile);
    QString line;
    while(!textStream.atEnd())
    {
        line=textStream.readLine();
        ui->classList->addItem(line);
    }
    classFile.close();
    //Label for student
    ui->studentLabel->setText(Globals::getSessionEmail());
    //Read if Student File is there
    QString name1 = Globals::getSessionEmail();
    QString name2 = ".txt";
    QFile myFile(name1+name2);
    myFile.open(QIODevice::ReadOnly);
    QTextStream stream(&myFile);
    while(!stream.atEnd())
    {
        line=stream.readLine();
        ui->studentList->addItem(line);
    }
    myFile.close();

    /*
    ui->setupUi(this);
    QGroupBox *packagesGroup = new QGroupBox(tr("Look for packages"));

    QLabel *nameLabel = new QLabel(tr("Name:"));
    QLineEdit *nameEdit = new QLineEdit;

    QLabel *dateLabel = new QLabel(tr("Released after:"));
    QDateTimeEdit *dateEdit = new QDateTimeEdit(QDate::currentDate());

    QCheckBox *releasesCheckBox = new QCheckBox(tr("Releases"));
    QCheckBox *upgradesCheckBox = new QCheckBox(tr("Upgrades"));

    QSpinBox *hitsSpinBox = new QSpinBox;
    hitsSpinBox->setPrefix(tr("Return up to "));
    hitsSpinBox->setSuffix(tr(" results"));
    hitsSpinBox->setSpecialValueText(tr("Return only the first result"));
    hitsSpinBox->setMinimum(1);
    hitsSpinBox->setMaximum(100);
    hitsSpinBox->setSingleStep(10);

    QPushButton *startQueryButton = new QPushButton(tr("Start query"));

    QGridLayout *packagesLayout = new QGridLayout;
    packagesLayout->addWidget(nameLabel, 0, 0);
    packagesLayout->addWidget(nameEdit, 0, 1);
    packagesLayout->addWidget(dateLabel, 1, 0);
    packagesLayout->addWidget(dateEdit, 1, 1);
    packagesLayout->addWidget(releasesCheckBox, 2, 0);
    packagesLayout->addWidget(upgradesCheckBox, 3, 0);
    packagesLayout->addWidget(hitsSpinBox, 4, 0, 1, 2);
    packagesGroup->setLayout(packagesLayout);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(packagesGroup);
    mainLayout->addSpacing(12);
    mainLayout->addWidget(startQueryButton);
    mainLayout->addStretch(1);
    setLayout(mainLayout);
    */
}

//Add Class
void Schedule::on_leftButton_clicked()
{
    moveCurrentItem(ui->classList,ui->studentList);
}

//Remove Class
void Schedule::on_rightButton_clicked()
{
    // moveCurrentItem(ui->studentList,ui->classList);
    delete ui->studentList->currentItem();
}

void Schedule::on_saveButton_clicked()
{
    QString line;
    //Write to file
    QString name1 = Globals::getSessionEmail();
    QString name2 = ".txt";
    QFile myFile(name1+name2);
    myFile.open(QFile::WriteOnly|QFile::Text);
    QTextStream out(&myFile);
    //Count the numbers of classes listed
    int index = ui->studentList->count();
    //Write into file
    for(int i=0;i<index;i++)
    {
        line = ui->studentList->item(i)->text();
        out<<line<<endl;
    }
    myFile.close();
}

void Schedule::moveCurrentItem(QListWidget *source, QListWidget *target)
{
    if (source->currentItem())
    {
        QListWidgetItem *newItem = source->currentItem()->clone();
        target->addItem(newItem);
        target->setCurrentItem(newItem);
        delete source->currentItem();
    }
}

Clubs::Clubs(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::Clubs)
{
    ui->setupUi(this);
    this->setFixedSize(1024,768);
}

SchoolInfo::SchoolInfo(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::schoolInfo)
{
    ui->setupUi(this);
    this->setFixedSize(1024,768);
}


Appointments::Appointments(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::appointments)
{
    ui->setupUi(this);
    this->setFixedSize(1024,768);
}


BusSchedule::BusSchedule(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::BusSchedule)
{
    ui->setupUi(this);
    this->setFixedSize(1024,768);
}


About::About(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::About)
{
    ui->setupUi(this);
    this->setFixedSize(1024,768);
}
