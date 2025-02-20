/********************************************************************************
** Form generated from reading UI file 'colorpickerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORPICKERWINDOW_H
#define UI_COLORPICKERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorPickerWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ColorPickerWindow)
    {
        if (ColorPickerWindow->objectName().isEmpty())
            ColorPickerWindow->setObjectName("ColorPickerWindow");
        ColorPickerWindow->resize(1257, 875);
        centralwidget = new QWidget(ColorPickerWindow);
        centralwidget->setObjectName("centralwidget");
        ColorPickerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ColorPickerWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1257, 24));
        ColorPickerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ColorPickerWindow);
        statusbar->setObjectName("statusbar");
        ColorPickerWindow->setStatusBar(statusbar);

        retranslateUi(ColorPickerWindow);

        QMetaObject::connectSlotsByName(ColorPickerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ColorPickerWindow)
    {
        ColorPickerWindow->setWindowTitle(QCoreApplication::translate("ColorPickerWindow", "ColorPickerWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorPickerWindow: public Ui_ColorPickerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORPICKERWINDOW_H
