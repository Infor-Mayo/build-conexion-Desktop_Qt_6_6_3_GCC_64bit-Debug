/********************************************************************************
** Form generated from reading UI file 'conexion.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONEXION_H
#define UI_CONEXION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_conexion
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *contenedor;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *servicio;
    QPushButton *agregar;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *conexion)
    {
        if (conexion->objectName().isEmpty())
            conexion->setObjectName("conexion");
        conexion->resize(264, 226);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico"), QSize(), QIcon::Normal, QIcon::Off);
        conexion->setWindowIcon(icon);
        conexion->setToolButtonStyle(Qt::ToolButtonTextOnly);
        conexion->setAnimated(false);
        centralwidget = new QWidget(conexion);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setAutoFillBackground(false);
        scrollArea->setStyleSheet(QString::fromUtf8("padding: 0px; margin: 0px;"));
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 234, 108));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        contenedor = new QVBoxLayout();
        contenedor->setObjectName("contenedor");
        contenedor->setContentsMargins(-1, -1, 0, 0);

        horizontalLayout_3->addLayout(contenedor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        servicio = new QLineEdit(centralwidget);
        servicio->setObjectName("servicio");

        horizontalLayout_2->addWidget(servicio);

        agregar = new QPushButton(centralwidget);
        agregar->setObjectName("agregar");
        agregar->setLayoutDirection(Qt::LeftToRight);
        agregar->setAutoFillBackground(false);
        agregar->setStyleSheet(QString::fromUtf8("border: 1px solid blue;\n"
"padding: 5px; \n"
"border-radius: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        agregar->setIcon(icon1);
        agregar->setIconSize(QSize(32, 32));
        agregar->setAutoDefault(true);
        agregar->setFlat(true);

        horizontalLayout_2->addWidget(agregar);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        conexion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(conexion);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 264, 22));
        conexion->setMenuBar(menubar);
        statusbar = new QStatusBar(conexion);
        statusbar->setObjectName("statusbar");
        conexion->setStatusBar(statusbar);

        retranslateUi(conexion);

        agregar->setDefault(false);


        QMetaObject::connectSlotsByName(conexion);
    } // setupUi

    void retranslateUi(QMainWindow *conexion)
    {
        conexion->setWindowTitle(QCoreApplication::translate("conexion", "Conect", nullptr));
        agregar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class conexion: public Ui_conexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONEXION_H
