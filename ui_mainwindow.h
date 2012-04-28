/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 22. Apr 22:26:59 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QAction *action_2;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tablePoints;
    QPushButton *buttonAddPoint;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editBigX;
    QLabel *label_3;
    QLineEdit *editBigY;
    QPushButton *buttonClear;
    QLineEdit *editLitleX;
    QLabel *label_4;
    QLineEdit *editLitleY;
    QPushButton *buttonDraw;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(654, 548);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        topLayout = new QHBoxLayout();
        topLayout->setSpacing(6);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tablePoints = new QTableView(centralWidget);
        tablePoints->setObjectName(QString::fromUtf8("tablePoints"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tablePoints->sizePolicy().hasHeightForWidth());
        tablePoints->setSizePolicy(sizePolicy);
        tablePoints->setMinimumSize(QSize(170, 0));
        tablePoints->setMaximumSize(QSize(170, 16777215));
        tablePoints->horizontalHeader()->setDefaultSectionSize(27);

        verticalLayout->addWidget(tablePoints);

        buttonAddPoint = new QPushButton(centralWidget);
        buttonAddPoint->setObjectName(QString::fromUtf8("buttonAddPoint"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonAddPoint->sizePolicy().hasHeightForWidth());
        buttonAddPoint->setSizePolicy(sizePolicy1);
        buttonAddPoint->setMinimumSize(QSize(170, 0));

        verticalLayout->addWidget(buttonAddPoint);


        topLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(topLayout);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editBigX = new QLineEdit(groupBox);
        editBigX->setObjectName(QString::fromUtf8("editBigX"));
        editBigX->setInputMethodHints(Qt::ImhNone);

        gridLayout->addWidget(editBigX, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        editBigY = new QLineEdit(groupBox);
        editBigY->setObjectName(QString::fromUtf8("editBigY"));

        gridLayout->addWidget(editBigY, 0, 3, 1, 1);

        buttonClear = new QPushButton(groupBox);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));

        gridLayout->addWidget(buttonClear, 0, 4, 1, 1);

        editLitleX = new QLineEdit(groupBox);
        editLitleX->setObjectName(QString::fromUtf8("editLitleX"));

        gridLayout->addWidget(editLitleX, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        editLitleY = new QLineEdit(groupBox);
        editLitleY->setObjectName(QString::fromUtf8("editLitleY"));

        gridLayout->addWidget(editLitleY, 1, 3, 1, 1);

        buttonDraw = new QPushButton(groupBox);
        buttonDraw->setObjectName(QString::fromUtf8("buttonDraw"));

        gridLayout->addWidget(buttonDraw, 1, 4, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu->menuAction());
        menuFile->addAction(actionClose);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0, QApplication::UnicodeUTF8));
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", 0, QApplication::UnicodeUTF8));
        buttonAddPoint->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\321\207\320\272\321\203", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\261\320\276\320\273\321\214\321\210\320\270\321\205 \320\264\320\265\320\273. \320\277\320\276 \320\245", 0, QApplication::UnicodeUTF8));
        editBigX->setInputMask(QString());
        editBigX->setText(QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\261\320\276\320\273\321\214\321\210\320\270\321\205 \320\264\320\265\320\273. \320\277\320\276 \320\243", 0, QApplication::UnicodeUTF8));
        editBigY->setText(QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8));
        buttonClear->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        editLitleX->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\274\320\260\320\273\321\213\321\205 \320\264\320\265\320\273. \320\277\320\276 \320\243", 0, QApplication::UnicodeUTF8));
        editLitleY->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        buttonDraw->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\274\320\260\320\273\321\213\321\205 \320\264\320\265\320\273. \320\277\320\276 \320\245", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
