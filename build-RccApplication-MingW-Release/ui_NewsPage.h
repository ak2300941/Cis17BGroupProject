/********************************************************************************
** Form generated from reading UI file 'NewsPage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSPAGE_H
#define UI_NEWSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewsPage
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *article1_Picture_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *article1_Picture_3;
    QLabel *label_4;

    void setupUi(QWidget *NewsPage)
    {
        if (NewsPage->objectName().isEmpty())
            NewsPage->setObjectName(QString::fromUtf8("NewsPage"));
        NewsPage->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewsPage->sizePolicy().hasHeightForWidth());
        NewsPage->setSizePolicy(sizePolicy);
        listWidget = new QListWidget(NewsPage);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 1024, 768));
        label = new QLabel(NewsPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 90, 561, 341));
        article1_Picture_2 = new QPushButton(NewsPage);
        article1_Picture_2->setObjectName(QString::fromUtf8("article1_Picture_2"));
        article1_Picture_2->setGeometry(QRect(570, 110, 431, 311));
        article1_Picture_2->setFlat(true);
        label_2 = new QLabel(NewsPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 571, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(NewsPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 460, 711, 21));
        label_3->setFont(font);
        article1_Picture_3 = new QPushButton(NewsPage);
        article1_Picture_3->setObjectName(QString::fromUtf8("article1_Picture_3"));
        article1_Picture_3->setGeometry(QRect(20, 480, 351, 291));
        article1_Picture_3->setFlat(true);
        label_4 = new QLabel(NewsPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 490, 511, 261));

        retranslateUi(NewsPage);

        QMetaObject::connectSlotsByName(NewsPage);
    } // setupUi

    void retranslateUi(QWidget *NewsPage)
    {
        NewsPage->setWindowTitle(QApplication::translate("NewsPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewsPage", "Riverside City College\342\200\231s Rhonda Taube, associate professor, Art History, will be speaking at \n"
"Xipe Projects\342\200\231 open house\342\200\213 on Saturday, December 6 at 4 pm in Huntington Beach.Xipe \n"
"Projects, a non-profit educational foundation, is home to the Peter and Roberta Markman\n"
"Collection of Latin American masks. Since opening in November 2011, Xipe\n"
"Projects has hosted a variety of exhibitions, cultural events, and educational symposiums.\n"
"The museum houses approximately 4,000 works, many of which have been previously exhibited by\n"
"museums, university and commercial galleries. The foundation promotes appreciation and understanding\n"
"of Latin American masking and popular art through research, exhibitions and conservation. \n"
"On December 6, the museum will launch a redesigned space for The Maestro and the Dance!, a never-before-seen\n"
"look at the masked dance tradition of Guatemala presented through the eyes of life-long dance/drama maestro \n"
"Florencio Valey of"
                        " Santa Luc\303\255a Cotzumalguapa. Highlights include colorful masks, costumes, and over \n"
"one hundred rare texts collected by Valey over the past 70 years. Taube, who was the Riverside Community \n"
"College District\342\200\231s 54th Distinguished Faculty Lecturer last May, recently completed work as an academic \n"
"consultant and assistant producer on Gods and Kings, an award-winning documentary. An expert on Guatemala\n"
"history, especially when it comes to the role of dance, festival and other performances in Mesoamerican \n"
"community ceremonies, Taube will speak about popular Latin American art. The Maestro and the Dance! exhibit\n"
"opens to the public at 3 pm; the lecture begins at 4. Seating is first-come, first-served. \n"
"\n"
"For more information, email: staff@xipeprojects.com or log on to: xipeprojects.com.\342\200\213", 0, QApplication::UnicodeUTF8));
        article1_Picture_2->setText(QApplication::translate("NewsPage", "PushButton", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewsPage", "Taube to be Featured Speaker at Xipe Projects Open House", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewsPage", "Journalism Students Win Eight Awards at Southern California Competition", 0, QApplication::UnicodeUTF8));
        article1_Picture_3->setText(QApplication::translate("NewsPage", "PushButton", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NewsPage", "Viewpoints, Riverside City College\342\200\231s student newspaper, saw eight journalism students\n"
"receive awards at the Journalism Association of Community Colleges Southern California\n"
"Conference on October 18 at Cal State Fullerton. Students competed on several different\n"
"fronts, from previously published articles and photos to on-the-spot news, sports and photo\n"
"coverage. Three students took home top awards led by Viewpoints photo editor Luis Solis, who\n"
"took home two awards, including a first place award for a Viewpoints photo essay about Riverside's\n"
"22nd annual airshow. She also finished third for a feature photo. Managing editor James Williams\n"
"won top prize for an on-the-spot sports story. Meanwhile, Aaron Beltran won first place for a photo\n"
"essay. Viewpoints news editor Valerie Osier won second place for a feature story about Cheri Jo\n"
"Bates in the newspaper's October 31, 2013 edition. Online editor Steven Smith took second place for\n"
"a video on RCC Astronomy instructor "
                        "Scott Blair. News editor Josa Lamont finished second in the \n"
"on-the-spot feature story category, and former artist Celeste Walter won a second place award for\n"
"a line illustration. \342\200\234Viewpoints is led by a very talented group of student editors who not only\n"
"produce high quality work for the newspaper, but also give back by mentoring the new students,\342\200\235 said\n"
"Allan Lovelace, the paper\342\200\231s faculty adviser.  \342\200\234Every day is a joyful experience in the newsroom, to \n"
"be around their enthusiasm and positive attitude.\342\200\235\342\200\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewsPage: public Ui_NewsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSPAGE_H
