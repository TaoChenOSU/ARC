/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *tabWidget;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *timeSpinBox;
    QLabel *timeLabelName;
    QLabel *elapsedLabelName;
    QDoubleSpinBox *elapsedSpinBox;
    QTabWidget *tab_manager;
    QWidget *tab_diagMsgs;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QTreeView *diagMsgsTreeView;
    QPushButton *clearStaleDiagButton;
    QGroupBox *runstopGroupBox;
    QGridLayout *gridLayout_9;
    QTreeView *runstopTreeView;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_saveLeft;
    QComboBox *imageTopics_comboBox;
    QComboBox *imageTopics_comboBox_2;
    QPushButton *pushButton_saveRight;
    QLabel *cameraLabel;
    QLabel *cameraLabel_2;
    QPushButton *imageTopicsRefresh_button;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *saveImagesPath_lineEdit;
    QPushButton *saveImages_button;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTreeView *imageMaskTreeView;
    QWidget *tab_2;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QSlider *steeringControlSlider;
    QCheckBox *steeringControlEnable;
    QPushButton *controlButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QSlider *throttleControlSlider;
    QCheckBox *throttleControlEnable;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QSlider *frontBrakeControlSlider;
    QCheckBox *frontBrakeControlEnable;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;
    QDockWidget *dock_status;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QGroupBox *vehicleData;
    QGridLayout *gridLayout_6;
    QProgressBar *throttleBar;
    QLabel *steeringLabel;
    QProgressBar *frontBrakeBar;
    QSlider *steeringSlider;
    QLabel *label_4;
    QLabel *throttleRelayLabel;
    QLabel *label_3;
    QLabel *autonomousLabel;
    QLabel *runstopLabelName;
    QLabel *runstopLabel;
    QLabel *wheelRPSLabel;
    QLabel *speedLabel;
    QLabel *wheelRPS_fl;
    QLabel *wheelRPS_fr;
    QLabel *wheelRPS_br;
    QLabel *wheelRPS_bl;
    QGroupBox *vehicleControl;
    QGridLayout *gridLayout_7;
    QPushButton *motionControlButton;
    QSpacerItem *verticalSpacer;
    QPushButton *quit_button;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(1041, 697);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowDesign->sizePolicy().hasHeightForWidth());
        MainWindowDesign->setSizePolicy(sizePolicy);
        MainWindowDesign->setMaximumSize(QSize(16777215, 16777215));
        MainWindowDesign->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/autorally.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MainWindowDesign->setIconSize(QSize(85, 49));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        tabWidget = new QWidget(MainWindowDesign);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        gridLayout_2 = new QGridLayout(tabWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        timeSpinBox = new QDoubleSpinBox(tabWidget);
        timeSpinBox->setObjectName(QString::fromUtf8("timeSpinBox"));
        timeSpinBox->setEnabled(true);
        timeSpinBox->setFrame(true);
        timeSpinBox->setReadOnly(true);
        timeSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeSpinBox->setDecimals(5);
        timeSpinBox->setMaximum(2e+09);

        gridLayout_2->addWidget(timeSpinBox, 2, 1, 1, 1);

        timeLabelName = new QLabel(tabWidget);
        timeLabelName->setObjectName(QString::fromUtf8("timeLabelName"));
        timeLabelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(timeLabelName, 2, 0, 1, 1);

        elapsedLabelName = new QLabel(tabWidget);
        elapsedLabelName->setObjectName(QString::fromUtf8("elapsedLabelName"));
        elapsedLabelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(elapsedLabelName, 2, 2, 1, 1);

        elapsedSpinBox = new QDoubleSpinBox(tabWidget);
        elapsedSpinBox->setObjectName(QString::fromUtf8("elapsedSpinBox"));
        elapsedSpinBox->setReadOnly(true);
        elapsedSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        elapsedSpinBox->setDecimals(5);
        elapsedSpinBox->setMaximum(2e+09);

        gridLayout_2->addWidget(elapsedSpinBox, 2, 3, 1, 1);

        tab_manager = new QTabWidget(tabWidget);
        tab_manager->setObjectName(QString::fromUtf8("tab_manager"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(tab_manager->sizePolicy().hasHeightForWidth());
        tab_manager->setSizePolicy(sizePolicy1);
        tab_manager->setMinimumSize(QSize(0, 0));
        tab_manager->setMaximumSize(QSize(16777215, 1677215));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_diagMsgs = new QWidget();
        tab_diagMsgs->setObjectName(QString::fromUtf8("tab_diagMsgs"));
        gridLayout_8 = new QGridLayout(tab_diagMsgs);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_2 = new QGroupBox(tab_diagMsgs);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(5);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        diagMsgsTreeView = new QTreeView(groupBox_2);
        diagMsgsTreeView->setObjectName(QString::fromUtf8("diagMsgsTreeView"));
        sizePolicy2.setHeightForWidth(diagMsgsTreeView->sizePolicy().hasHeightForWidth());
        diagMsgsTreeView->setSizePolicy(sizePolicy2);
        diagMsgsTreeView->setMinimumSize(QSize(0, 0));
        diagMsgsTreeView->setFrameShape(QFrame::StyledPanel);
        diagMsgsTreeView->setAutoScroll(false);
        diagMsgsTreeView->setAlternatingRowColors(true);
        diagMsgsTreeView->setSelectionMode(QAbstractItemView::NoSelection);
        diagMsgsTreeView->setIconSize(QSize(3, 0));
        diagMsgsTreeView->setSortingEnabled(true);
        diagMsgsTreeView->setAnimated(true);
        diagMsgsTreeView->header()->setVisible(true);

        gridLayout_4->addWidget(diagMsgsTreeView, 0, 0, 1, 1);

        clearStaleDiagButton = new QPushButton(groupBox_2);
        clearStaleDiagButton->setObjectName(QString::fromUtf8("clearStaleDiagButton"));

        gridLayout_4->addWidget(clearStaleDiagButton, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_2, 0, 0, 1, 1);

        runstopGroupBox = new QGroupBox(tab_diagMsgs);
        runstopGroupBox->setObjectName(QString::fromUtf8("runstopGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(runstopGroupBox->sizePolicy().hasHeightForWidth());
        runstopGroupBox->setSizePolicy(sizePolicy3);
        gridLayout_9 = new QGridLayout(runstopGroupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        runstopTreeView = new QTreeView(runstopGroupBox);
        runstopTreeView->setObjectName(QString::fromUtf8("runstopTreeView"));
        sizePolicy3.setHeightForWidth(runstopTreeView->sizePolicy().hasHeightForWidth());
        runstopTreeView->setSizePolicy(sizePolicy3);
        runstopTreeView->setMaximumSize(QSize(16777215, 120));
        runstopTreeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        runstopTreeView->setAutoScroll(false);
        runstopTreeView->setAlternatingRowColors(true);
        runstopTreeView->setSelectionMode(QAbstractItemView::NoSelection);
        runstopTreeView->setSortingEnabled(true);
        runstopTreeView->setAnimated(true);
        runstopTreeView->header()->setVisible(true);

        gridLayout_9->addWidget(runstopTreeView, 0, 0, 1, 1);


        gridLayout_8->addWidget(runstopGroupBox, 1, 0, 1, 1);

        tab_manager->addTab(tab_diagMsgs, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_saveLeft = new QPushButton(tab);
        pushButton_saveLeft->setObjectName(QString::fromUtf8("pushButton_saveLeft"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_saveLeft->sizePolicy().hasHeightForWidth());
        pushButton_saveLeft->setSizePolicy(sizePolicy4);
        pushButton_saveLeft->setMaximumSize(QSize(27, 27));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_saveLeft->setIcon(icon1);
        pushButton_saveLeft->setFlat(true);

        gridLayout_3->addWidget(pushButton_saveLeft, 5, 1, 1, 1);

        imageTopics_comboBox = new QComboBox(tab);
        imageTopics_comboBox->setObjectName(QString::fromUtf8("imageTopics_comboBox"));

        gridLayout_3->addWidget(imageTopics_comboBox, 5, 0, 1, 1);

        imageTopics_comboBox_2 = new QComboBox(tab);
        imageTopics_comboBox_2->setObjectName(QString::fromUtf8("imageTopics_comboBox_2"));

        gridLayout_3->addWidget(imageTopics_comboBox_2, 5, 2, 1, 1);

        pushButton_saveRight = new QPushButton(tab);
        pushButton_saveRight->setObjectName(QString::fromUtf8("pushButton_saveRight"));
        sizePolicy4.setHeightForWidth(pushButton_saveRight->sizePolicy().hasHeightForWidth());
        pushButton_saveRight->setSizePolicy(sizePolicy4);
        pushButton_saveRight->setMaximumSize(QSize(27, 27));
        pushButton_saveRight->setIcon(icon1);
        pushButton_saveRight->setFlat(true);

        gridLayout_3->addWidget(pushButton_saveRight, 5, 3, 1, 1);

        cameraLabel = new QLabel(tab);
        cameraLabel->setObjectName(QString::fromUtf8("cameraLabel"));
        cameraLabel->setMinimumSize(QSize(320, 240));
        cameraLabel->setFrameShape(QFrame::Box);
        cameraLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(cameraLabel, 2, 0, 1, 2);

        cameraLabel_2 = new QLabel(tab);
        cameraLabel_2->setObjectName(QString::fromUtf8("cameraLabel_2"));
        cameraLabel_2->setMinimumSize(QSize(320, 240));
        cameraLabel_2->setFrameShape(QFrame::Box);
        cameraLabel_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(cameraLabel_2, 2, 2, 1, 2);

        imageTopicsRefresh_button = new QPushButton(tab);
        imageTopicsRefresh_button->setObjectName(QString::fromUtf8("imageTopicsRefresh_button"));

        gridLayout_3->addWidget(imageTopicsRefresh_button, 6, 0, 1, 4);


        verticalLayout_6->addLayout(gridLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        saveImagesPath_lineEdit = new QLineEdit(tab);
        saveImagesPath_lineEdit->setObjectName(QString::fromUtf8("saveImagesPath_lineEdit"));

        horizontalLayout_4->addWidget(saveImagesPath_lineEdit);

        saveImages_button = new QPushButton(tab);
        saveImages_button->setObjectName(QString::fromUtf8("saveImages_button"));
        saveImages_button->setCheckable(true);
        saveImages_button->setChecked(false);

        horizontalLayout_4->addWidget(saveImages_button);


        verticalLayout_6->addLayout(horizontalLayout_4);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        imageMaskTreeView = new QTreeView(groupBox);
        imageMaskTreeView->setObjectName(QString::fromUtf8("imageMaskTreeView"));
        imageMaskTreeView->setSelectionMode(QAbstractItemView::NoSelection);
        imageMaskTreeView->setHeaderHidden(true);

        gridLayout->addWidget(imageMaskTreeView, 0, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox);

        tab_manager->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_10 = new QGridLayout(tab_2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_8);

        steeringControlSlider = new QSlider(tab_2);
        steeringControlSlider->setObjectName(QString::fromUtf8("steeringControlSlider"));
        steeringControlSlider->setMinimum(-100);
        steeringControlSlider->setMaximum(100);
        steeringControlSlider->setValue(0);
        steeringControlSlider->setOrientation(Qt::Horizontal);
        steeringControlSlider->setTickPosition(QSlider::TicksBelow);
        steeringControlSlider->setTickInterval(50);

        horizontalLayout_3->addWidget(steeringControlSlider);

        steeringControlEnable = new QCheckBox(tab_2);
        steeringControlEnable->setObjectName(QString::fromUtf8("steeringControlEnable"));

        horizontalLayout_3->addWidget(steeringControlEnable);


        gridLayout_10->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        controlButton = new QPushButton(tab_2);
        controlButton->setObjectName(QString::fromUtf8("controlButton"));
        controlButton->setCheckable(true);

        gridLayout_10->addWidget(controlButton, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_9);

        throttleControlSlider = new QSlider(tab_2);
        throttleControlSlider->setObjectName(QString::fromUtf8("throttleControlSlider"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(throttleControlSlider->sizePolicy().hasHeightForWidth());
        throttleControlSlider->setSizePolicy(sizePolicy5);
        throttleControlSlider->setMinimum(-100);
        throttleControlSlider->setMaximum(100);
        throttleControlSlider->setValue(0);
        throttleControlSlider->setOrientation(Qt::Vertical);
        throttleControlSlider->setTickPosition(QSlider::TicksBothSides);
        throttleControlSlider->setTickInterval(50);

        verticalLayout_3->addWidget(throttleControlSlider);

        throttleControlEnable = new QCheckBox(tab_2);
        throttleControlEnable->setObjectName(QString::fromUtf8("throttleControlEnable"));

        verticalLayout_3->addWidget(throttleControlEnable);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_11);

        frontBrakeControlSlider = new QSlider(tab_2);
        frontBrakeControlSlider->setObjectName(QString::fromUtf8("frontBrakeControlSlider"));
        sizePolicy5.setHeightForWidth(frontBrakeControlSlider->sizePolicy().hasHeightForWidth());
        frontBrakeControlSlider->setSizePolicy(sizePolicy5);
        frontBrakeControlSlider->setMinimum(0);
        frontBrakeControlSlider->setMaximum(100);
        frontBrakeControlSlider->setOrientation(Qt::Vertical);
        frontBrakeControlSlider->setTickPosition(QSlider::TicksBothSides);
        frontBrakeControlSlider->setTickInterval(50);

        verticalLayout_4->addWidget(frontBrakeControlSlider);

        frontBrakeControlEnable = new QCheckBox(tab_2);
        frontBrakeControlEnable->setObjectName(QString::fromUtf8("frontBrakeControlEnable"));

        verticalLayout_4->addWidget(frontBrakeControlEnable);


        horizontalLayout_2->addLayout(verticalLayout_4);


        gridLayout_10->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_3, 3, 1, 1, 1);

        tab_manager->addTab(tab_2, QString());

        gridLayout_2->addWidget(tab_manager, 0, 0, 1, 4);

        MainWindowDesign->setCentralWidget(tabWidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1041, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);
        dock_status = new QDockWidget(MainWindowDesign);
        dock_status->setObjectName(QString::fromUtf8("dock_status"));
        sizePolicy.setHeightForWidth(dock_status->sizePolicy().hasHeightForWidth());
        dock_status->setSizePolicy(sizePolicy);
        dock_status->setMinimumSize(QSize(352, 650));
        dock_status->setMaximumSize(QSize(524287, 650));
        dock_status->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dock_status->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(dockWidgetContents_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy6);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        vehicleData = new QGroupBox(frame);
        vehicleData->setObjectName(QString::fromUtf8("vehicleData"));
        gridLayout_6 = new QGridLayout(vehicleData);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        throttleBar = new QProgressBar(vehicleData);
        throttleBar->setObjectName(QString::fromUtf8("throttleBar"));
        throttleBar->setMinimum(-100);
        throttleBar->setMaximum(100);
        throttleBar->setValue(0);
        throttleBar->setTextVisible(true);
        throttleBar->setOrientation(Qt::Vertical);

        gridLayout_6->addWidget(throttleBar, 0, 2, 9, 1);

        steeringLabel = new QLabel(vehicleData);
        steeringLabel->setObjectName(QString::fromUtf8("steeringLabel"));

        gridLayout_6->addWidget(steeringLabel, 10, 0, 1, 1);

        frontBrakeBar = new QProgressBar(vehicleData);
        frontBrakeBar->setObjectName(QString::fromUtf8("frontBrakeBar"));
        frontBrakeBar->setMinimum(0);
        frontBrakeBar->setMaximum(100);
        frontBrakeBar->setValue(0);
        frontBrakeBar->setTextVisible(true);
        frontBrakeBar->setOrientation(Qt::Vertical);

        gridLayout_6->addWidget(frontBrakeBar, 0, 3, 9, 1);

        steeringSlider = new QSlider(vehicleData);
        steeringSlider->setObjectName(QString::fromUtf8("steeringSlider"));
        steeringSlider->setEnabled(false);
        steeringSlider->setMinimum(-100);
        steeringSlider->setMaximum(100);
        steeringSlider->setValue(0);
        steeringSlider->setSliderPosition(0);
        steeringSlider->setOrientation(Qt::Horizontal);
        steeringSlider->setTickPosition(QSlider::TicksBothSides);
        steeringSlider->setTickInterval(50);

        gridLayout_6->addWidget(steeringSlider, 10, 1, 1, 3);

        label_4 = new QLabel(vehicleData);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 1, 0, 1, 1);

        throttleRelayLabel = new QLabel(vehicleData);
        throttleRelayLabel->setObjectName(QString::fromUtf8("throttleRelayLabel"));
        throttleRelayLabel->setFrameShape(QFrame::StyledPanel);
        throttleRelayLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(throttleRelayLabel, 1, 1, 1, 1);

        label_3 = new QLabel(vehicleData);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_6->addWidget(label_3, 2, 0, 1, 1);

        autonomousLabel = new QLabel(vehicleData);
        autonomousLabel->setObjectName(QString::fromUtf8("autonomousLabel"));
        autonomousLabel->setFrameShape(QFrame::StyledPanel);
        autonomousLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(autonomousLabel, 2, 1, 1, 1);

        runstopLabelName = new QLabel(vehicleData);
        runstopLabelName->setObjectName(QString::fromUtf8("runstopLabelName"));

        gridLayout_6->addWidget(runstopLabelName, 3, 0, 1, 1);

        runstopLabel = new QLabel(vehicleData);
        runstopLabel->setObjectName(QString::fromUtf8("runstopLabel"));
        runstopLabel->setFrameShape(QFrame::StyledPanel);
        runstopLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(runstopLabel, 3, 1, 1, 1);

        wheelRPSLabel = new QLabel(vehicleData);
        wheelRPSLabel->setObjectName(QString::fromUtf8("wheelRPSLabel"));

        gridLayout_6->addWidget(wheelRPSLabel, 4, 0, 1, 1);

        speedLabel = new QLabel(vehicleData);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        speedLabel->setFrameShape(QFrame::StyledPanel);
        speedLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(speedLabel, 4, 1, 1, 1);

        wheelRPS_fl = new QLabel(vehicleData);
        wheelRPS_fl->setObjectName(QString::fromUtf8("wheelRPS_fl"));
        wheelRPS_fl->setFrameShape(QFrame::StyledPanel);
        wheelRPS_fl->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(wheelRPS_fl, 5, 0, 1, 1);

        wheelRPS_fr = new QLabel(vehicleData);
        wheelRPS_fr->setObjectName(QString::fromUtf8("wheelRPS_fr"));
        wheelRPS_fr->setFrameShape(QFrame::StyledPanel);
        wheelRPS_fr->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(wheelRPS_fr, 5, 1, 1, 1);

        wheelRPS_br = new QLabel(vehicleData);
        wheelRPS_br->setObjectName(QString::fromUtf8("wheelRPS_br"));
        wheelRPS_br->setFrameShape(QFrame::StyledPanel);
        wheelRPS_br->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(wheelRPS_br, 6, 1, 1, 1);

        wheelRPS_bl = new QLabel(vehicleData);
        wheelRPS_bl->setObjectName(QString::fromUtf8("wheelRPS_bl"));
        wheelRPS_bl->setFrameShape(QFrame::StyledPanel);
        wheelRPS_bl->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(wheelRPS_bl, 6, 0, 1, 1);


        gridLayout_5->addWidget(vehicleData, 0, 0, 1, 1);

        vehicleControl = new QGroupBox(frame);
        vehicleControl->setObjectName(QString::fromUtf8("vehicleControl"));
        gridLayout_7 = new QGridLayout(vehicleControl);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        motionControlButton = new QPushButton(vehicleControl);
        motionControlButton->setObjectName(QString::fromUtf8("motionControlButton"));
        sizePolicy.setHeightForWidth(motionControlButton->sizePolicy().hasHeightForWidth());
        motionControlButton->setSizePolicy(sizePolicy);
        motionControlButton->setMinimumSize(QSize(0, 80));
        motionControlButton->setAutoFillBackground(true);
        motionControlButton->setCheckable(true);
        motionControlButton->setChecked(true);

        gridLayout_7->addWidget(motionControlButton, 1, 0, 1, 2);


        gridLayout_5->addWidget(vehicleControl, 1, 0, 1, 1);


        verticalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 2000, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout->addItem(verticalSpacer);

        quit_button = new QPushButton(dockWidgetContents_2);
        quit_button->setObjectName(QString::fromUtf8("quit_button"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(quit_button->sizePolicy().hasHeightForWidth());
        quit_button->setSizePolicy(sizePolicy7);

        verticalLayout->addWidget(quit_button);

        dock_status->setWidget(dockWidgetContents_2);
        MainWindowDesign->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dock_status);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));
        QObject::connect(quit_button, SIGNAL(clicked()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "AutoRally OCS", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        timeSpinBox->setStatusTip(QApplication::translate("MainWindowDesign", "Current wall time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        timeLabelName->setText(QApplication::translate("MainWindowDesign", "System Time:", 0, QApplication::UnicodeUTF8));
        elapsedLabelName->setText(QApplication::translate("MainWindowDesign", "Elapsed Time:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        elapsedSpinBox->setStatusTip(QApplication::translate("MainWindowDesign", "OCS up time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "Diagnostic Messages", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        diagMsgsTreeView->setStatusTip(QApplication::translate("MainWindowDesign", "Diagnostic Messages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        clearStaleDiagButton->setText(QApplication::translate("MainWindowDesign", "Clear Stale Messages", 0, QApplication::UnicodeUTF8));
        runstopGroupBox->setTitle(QApplication::translate("MainWindowDesign", "Runstop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        runstopTreeView->setStatusTip(QApplication::translate("MainWindowDesign", "Current safe speeds published", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        tab_manager->setTabText(tab_manager->indexOf(tab_diagMsgs), QApplication::translate("MainWindowDesign", "System Info", 0, QApplication::UnicodeUTF8));
        pushButton_saveLeft->setText(QString());
        pushButton_saveRight->setText(QString());
        cameraLabel->setText(QApplication::translate("MainWindowDesign", "No Data", 0, QApplication::UnicodeUTF8));
        cameraLabel_2->setText(QApplication::translate("MainWindowDesign", "No Data", 0, QApplication::UnicodeUTF8));
        imageTopicsRefresh_button->setText(QApplication::translate("MainWindowDesign", "Refresh", 0, QApplication::UnicodeUTF8));
        saveImages_button->setText(QApplication::translate("MainWindowDesign", "Start Saving", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Image Masks", 0, QApplication::UnicodeUTF8));
        tab_manager->setTabText(tab_manager->indexOf(tab), QApplication::translate("MainWindowDesign", "Video", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindowDesign", "Steering", 0, QApplication::UnicodeUTF8));
        steeringControlEnable->setText(QString());
        controlButton->setText(QApplication::translate("MainWindowDesign", "Control", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindowDesign", "Throttle", 0, QApplication::UnicodeUTF8));
        throttleControlEnable->setText(QString());
        label_11->setText(QApplication::translate("MainWindowDesign", "Front Brake", 0, QApplication::UnicodeUTF8));
        frontBrakeControlEnable->setText(QString());
        tab_manager->setTabText(tab_manager->indexOf(tab_2), QApplication::translate("MainWindowDesign", "Control", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", 0, QApplication::UnicodeUTF8));
        dock_status->setWindowTitle(QApplication::translate("MainWindowDesign", "Command Panel", 0, QApplication::UnicodeUTF8));
        vehicleData->setTitle(QApplication::translate("MainWindowDesign", "Chassis State", 0, QApplication::UnicodeUTF8));
        throttleBar->setFormat(QApplication::translate("MainWindowDesign", "Throttle", 0, QApplication::UnicodeUTF8));
        steeringLabel->setText(QApplication::translate("MainWindowDesign", "Steering", 0, QApplication::UnicodeUTF8));
        frontBrakeBar->setFormat(QApplication::translate("MainWindowDesign", "Front Brake", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowDesign", "Throttle Relay En", 0, QApplication::UnicodeUTF8));
        throttleRelayLabel->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowDesign", "Autonomous En", 0, QApplication::UnicodeUTF8));
        autonomousLabel->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        runstopLabelName->setStatusTip(QApplication::translate("MainWindowDesign", "SafeSpeed from servoInterface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        runstopLabelName->setText(QApplication::translate("MainWindowDesign", "Runstop Motion En", 0, QApplication::UnicodeUTF8));
        runstopLabel->setText(QApplication::translate("MainWindowDesign", "0", 0, QApplication::UnicodeUTF8));
        wheelRPSLabel->setText(QApplication::translate("MainWindowDesign", "Wheel Speeds", 0, QApplication::UnicodeUTF8));
        speedLabel->setText(QApplication::translate("MainWindowDesign", "0.0", 0, QApplication::UnicodeUTF8));
        wheelRPS_fl->setText(QApplication::translate("MainWindowDesign", "0.0", 0, QApplication::UnicodeUTF8));
        wheelRPS_fr->setText(QApplication::translate("MainWindowDesign", "0.0", 0, QApplication::UnicodeUTF8));
        wheelRPS_br->setText(QApplication::translate("MainWindowDesign", "0.0", 0, QApplication::UnicodeUTF8));
        wheelRPS_bl->setText(QApplication::translate("MainWindowDesign", "0.0", 0, QApplication::UnicodeUTF8));
        vehicleControl->setTitle(QApplication::translate("MainWindowDesign", "OCS Runstop Control", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        motionControlButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        motionControlButton->setStatusTip(QApplication::translate("MainWindowDesign", "Software E-Stop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        motionControlButton->setText(QApplication::translate("MainWindowDesign", "Runstop Motion Disabled", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        quit_button->setStatusTip(QApplication::translate("MainWindowDesign", "Quit OCS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        quit_button->setText(QApplication::translate("MainWindowDesign", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
