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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorPickerWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ColorPickerWindow)
    {
        if (ColorPickerWindow->objectName().isEmpty())
            ColorPickerWindow->setObjectName("ColorPickerWindow");
        ColorPickerWindow->resize(1257, 875);
        centralwidget = new QWidget(ColorPickerWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(190, 240, 300, 100));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(190, 200, 291, 25));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_2 = new QSlider(centralwidget);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setGeometry(QRect(190, 140, 291, 25));
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_3 = new QSlider(centralwidget);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setGeometry(QRect(190, 80, 291, 25));
        horizontalSlider_3->setOrientation(Qt::Orientation::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 50, 58, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 110, 58, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 180, 58, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 350, 131, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 380, 131, 16));
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
        textEdit->setPlaceholderText(QCoreApplication::translate("ColorPickerWindow", "Type your text here...", nullptr));
        label->setText(QCoreApplication::translate("ColorPickerWindow", "Red:", nullptr));
        label_2->setText(QCoreApplication::translate("ColorPickerWindow", "Green:", nullptr));
        label_3->setText(QCoreApplication::translate("ColorPickerWindow", "Blue:", nullptr));
        label_4->setText(QCoreApplication::translate("ColorPickerWindow", "RGB: 0, 0, 0", nullptr));
        label_5->setText(QCoreApplication::translate("ColorPickerWindow", "Character COUNT: 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorPickerWindow: public Ui_ColorPickerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORPICKERWINDOW_H
