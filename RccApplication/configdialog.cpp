/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtGui>

#include "configdialog.h"
#include "pages.h"
#include "globals.h"


ConfigDialog::ConfigDialog()
{
    contentsWidget = new QListWidget;
    contentsWidget->setViewMode(QListView::IconMode);
    contentsWidget->setIconSize(QSize(96, 84));
    contentsWidget->setMovement(QListView::Static);
    contentsWidget->setMaximumWidth(128);
    contentsWidget->setSpacing(12);


    pagesWidget = new QStackedWidget;
    pagesWidget->addWidget(new News);
    pagesWidget->addWidget(new Forums);
    pagesWidget->addWidget(new Schedule);
    pagesWidget->addWidget(new SchoolInfo);
    pagesWidget->addWidget(new Appointments);
    pagesWidget->addWidget(new BusSchedule);
    pagesWidget->addWidget(new About);
    pagesWidget->setFixedWidth(800);
    pagesWidget->setFixedHeight(600);


    QPushButton *closeButton = new QPushButton(tr("Close"));

    createIcons();
    contentsWidget->setCurrentRow(0);

    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

    QHBoxLayout *horizontalLayout = new QHBoxLayout;
    horizontalLayout->addWidget(contentsWidget);
    horizontalLayout->addWidget(pagesWidget, 1);

    QHBoxLayout *buttonsLayout = new QHBoxLayout;
    buttonsLayout->addStretch(1);
    buttonsLayout->addWidget(closeButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(horizontalLayout);
    mainLayout->addStretch(1);
    mainLayout->addSpacing(12);
    mainLayout->addLayout(buttonsLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("Config Dialog"));
}

void ConfigDialog::createIcons()
{
    QListWidgetItem *NewsButton = new QListWidgetItem(contentsWidget);
    NewsButton->setIcon(QIcon(":/images/config.png"));
    NewsButton->setText(tr("News"));
    NewsButton->setTextAlignment(Qt::AlignHCenter);
    NewsButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *ForumsButton = new QListWidgetItem(contentsWidget);
    ForumsButton->setIcon(QIcon(":/images/update.png"));
    ForumsButton->setText(tr("Forums"));
    ForumsButton->setTextAlignment(Qt::AlignHCenter);
    ForumsButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *ScheduleButton = new QListWidgetItem(contentsWidget);
    ScheduleButton->setIcon(QIcon(":/images/query.png"));
    ScheduleButton->setText(tr("Schedule"));
    ScheduleButton->setTextAlignment(Qt::AlignHCenter);
    ScheduleButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *SchoolInfoButton = new QListWidgetItem(contentsWidget);
    SchoolInfoButton->setIcon(QIcon(":/images/query.png"));
    SchoolInfoButton->setText(tr("School Information"));
    SchoolInfoButton->setTextAlignment(Qt::AlignHCenter);
    SchoolInfoButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *AppointmentsButton = new QListWidgetItem(contentsWidget);
    AppointmentsButton->setIcon(QIcon(":/images/query.png"));
    AppointmentsButton->setText(tr("Appointments"));
    AppointmentsButton->setTextAlignment(Qt::AlignHCenter);
    AppointmentsButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *BusSchedule = new QListWidgetItem(contentsWidget);
    BusSchedule->setIcon(QIcon(":/images/query.png"));
    BusSchedule->setText(tr("Bus Schedule"));
    BusSchedule->setTextAlignment(Qt::AlignHCenter);
    BusSchedule->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *AboutButton = new QListWidgetItem(contentsWidget);
    AboutButton->setIcon(QIcon(":/images/query.png"));
    AboutButton->setText(tr("About"));
    AboutButton->setTextAlignment(Qt::AlignHCenter);
    AboutButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    connect(contentsWidget,
            SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)),
            this, SLOT(changePage(QListWidgetItem*,QListWidgetItem*)));
}

void ConfigDialog::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (!current)
        current = previous;

    pagesWidget->setCurrentIndex(contentsWidget->row(current));
}
