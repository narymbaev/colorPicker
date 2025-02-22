#ifndef COLORPICKERWINDOW_H
#define COLORPICKERWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QTextEdit>
#include <QSlider>
#include <QLabel>
#include <QVBoxLayout>

class ColorPickerWindow : public QMainWindow {
    Q_OBJECT

public:
    ColorPickerWindow(QWidget *parent = nullptr);
    ~ColorPickerWindow();

private slots:
    void updateColor();
    void updateCharCount();

private:
    QWidget *centralWidget;
    QVBoxLayout *layout;
    QSlider *redSlider;
    QSlider *greenSlider;
    QSlider *blueSlider;
    QTextEdit *colorDisplay;
    QLabel *colorValueLabel;
    QLabel *charCountLabel;
};

#endif // COLORPICKERWINDOW_H
