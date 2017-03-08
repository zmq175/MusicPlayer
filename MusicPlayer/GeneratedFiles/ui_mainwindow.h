/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSlider *seekBar;
    QPushButton *back;
    QPushButton *play;
    QPushButton *forward;
    QPushButton *add;
    QPushButton *remove;
    QPushButton *save;
    QLabel *currentSong;
    QListWidget *listWidget;
    QPushButton *repeat;
    QPushButton *shuffle;
    QSlider *volumeBar;
    QPushButton *mute;
    QLineEdit *searchBar;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(936, 534);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        seekBar = new QSlider(centralWidget);
        seekBar->setObjectName(QStringLiteral("seekBar"));
        seekBar->setGeometry(QRect(8, 475, 921, 20));
        seekBar->setMouseTracking(true);
        seekBar->setFocusPolicy(Qt::NoFocus);
        seekBar->setAcceptDrops(false);
        seekBar->setMaximum(1000);
        seekBar->setOrientation(Qt::Horizontal);
        back = new QPushButton(centralWidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(398, 495, 41, 31));
        back->setFocusPolicy(Qt::NoFocus);
        play = new QPushButton(centralWidget);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(448, 495, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        play->setFont(font);
        play->setFocusPolicy(Qt::NoFocus);
        play->setCheckable(true);
        play->setChecked(true);
        forward = new QPushButton(centralWidget);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setGeometry(QRect(497, 495, 41, 31));
        forward->setFocusPolicy(Qt::NoFocus);
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(840, 500, 41, 21));
        add->setFocusPolicy(Qt::NoFocus);
        remove = new QPushButton(centralWidget);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(770, 500, 41, 21));
        remove->setFocusPolicy(Qt::NoFocus);
        save = new QPushButton(centralWidget);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(700, 500, 41, 21));
        save->setFocusPolicy(Qt::NoFocus);
        save->setCheckable(true);
        save->setChecked(true);
        save->setFlat(false);
        currentSong = new QLabel(centralWidget);
        currentSong->setObjectName(QStringLiteral("currentSong"));
        currentSong->setGeometry(QRect(148, 460, 641, 20));
        currentSong->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(8, 50, 921, 401));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setContextMenuPolicy(Qt::NoContextMenu);
        listWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setMovement(QListView::Static);
        listWidget->setViewMode(QListView::ListMode);
        repeat = new QPushButton(centralWidget);
        repeat->setObjectName(QStringLiteral("repeat"));
        repeat->setGeometry(QRect(570, 500, 41, 21));
        repeat->setFocusPolicy(Qt::NoFocus);
        repeat->setCheckable(true);
        shuffle = new QPushButton(centralWidget);
        shuffle->setObjectName(QStringLiteral("shuffle"));
        shuffle->setGeometry(QRect(325, 500, 41, 21));
        shuffle->setFocusPolicy(Qt::NoFocus);
        shuffle->setCheckable(true);
        volumeBar = new QSlider(centralWidget);
        volumeBar->setObjectName(QStringLiteral("volumeBar"));
        volumeBar->setGeometry(QRect(110, 503, 181, 16));
        volumeBar->setFocusPolicy(Qt::NoFocus);
        volumeBar->setMaximum(100);
        volumeBar->setValue(100);
        volumeBar->setOrientation(Qt::Horizontal);
        volumeBar->setInvertedAppearance(false);
        volumeBar->setInvertedControls(false);
        mute = new QPushButton(centralWidget);
        mute->setObjectName(QStringLiteral("mute"));
        mute->setGeometry(QRect(50, 500, 41, 21));
        mute->setFocusPolicy(Qt::NoFocus);
        mute->setCheckable(true);
        mute->setChecked(false);
        mute->setAutoRepeat(false);
        mute->setFlat(false);
        searchBar = new QLineEdit(centralWidget);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(8, 10, 921, 28));
        searchBar->setCursor(QCursor(Qt::ArrowCursor));
        searchBar->setMouseTracking(false);
        searchBar->setCursorPosition(0);
        searchBar->setReadOnly(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(850, 460, 81, 16));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Music Player", 0));
        back->setText(QApplication::translate("MainWindow", "<", 0));
        play->setText(QApplication::translate("MainWindow", "Play", 0));
        forward->setText(QApplication::translate("MainWindow", ">", 0));
        add->setText(QApplication::translate("MainWindow", "+", 0));
        remove->setText(QApplication::translate("MainWindow", "-", 0));
        save->setText(QApplication::translate("MainWindow", "save", 0));
        currentSong->setText(QApplication::translate("MainWindow", "Song", 0));
        repeat->setText(QApplication::translate("MainWindow", "r", 0));
        shuffle->setText(QApplication::translate("MainWindow", "s", 0));
        mute->setText(QApplication::translate("MainWindow", "m", 0));
        label->setText(QApplication::translate("MainWindow", "00:00/00:00", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
