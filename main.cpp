#include "colorpickerwindow.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    ColorPickerWindow window;
    window.show();
    return app.exec();
}
