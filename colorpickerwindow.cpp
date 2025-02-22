#include "colorpickerwindow.h"
// #include "ui_colorpickerwindow.h"
#include <QHBoxLayout>

ColorPickerWindow::ColorPickerWindow(QWidget *parent)
    : QMainWindow(parent)
    // , ui(new Ui::ColorPickerWindow)
{
    // ui->setupUi(this);

    setWindowTitle("Color Picker");
    resize(400, 300);

    centralWidget = new QWidget(this);
    layout = new QVBoxLayout(centralWidget);

    redSlider = new QSlider(Qt::Horizontal);
    greenSlider = new QSlider(Qt::Horizontal);
    blueSlider = new QSlider(Qt::Horizontal);

    redSlider->setRange(0, 255);
    greenSlider->setRange(0, 255);
    blueSlider->setRange(0, 255);

    // Labels
    colorDisplay = new QTextEdit();
    colorDisplay->setMinimumHeight(100);
    colorDisplay->setPlaceholderText("Type your text here...");

    // RGB and Counter label
    colorValueLabel = new QLabel("RGB: 0, 0, 0");
    charCountLabel = new QLabel("Character count: 0");

    // Add widgets to layout
    layout->addWidget(new QLabel("Red:"));
    layout->addWidget(redSlider);
    layout->addWidget(new QLabel("Green:"));
    layout->addWidget(greenSlider);
    layout->addWidget(new QLabel("Blue:"));
    layout->addWidget(blueSlider);
    layout->addWidget(colorDisplay);
    layout->addWidget(colorValueLabel);
    layout->addWidget(charCountLabel);

    // Set central widget
    setCentralWidget(centralWidget);

    // Connect signals
    connect(redSlider, &QSlider::valueChanged, this, &ColorPickerWindow::updateColor);
    connect(greenSlider, &QSlider::valueChanged, this, &ColorPickerWindow::updateColor);
    connect(blueSlider, &QSlider::valueChanged, this, &ColorPickerWindow::updateColor);
    connect(colorDisplay, &QTextEdit::textChanged, this, &ColorPickerWindow::updateCharCount);

    // Initial update
    updateColor();
    updateCharCount();
}

ColorPickerWindow::~ColorPickerWindow() {
    // delete ui;
}

void ColorPickerWindow::updateColor() {
    int r = redSlider->value();
    int g = greenSlider->value();
    int b = blueSlider->value();

    // Update display color
    QString style = QString("background-color: rgb(%1, %2, %3);").arg(r).arg(g).arg(b);
    colorDisplay->setStyleSheet(style);

    // Update RGB value
    colorValueLabel->setText(QString("RGB: %1, %2, %3").arg(r).arg(g).arg(b));
}

void ColorPickerWindow::updateCharCount() {
    int count = colorDisplay->toPlainText().length();
    // Update counter
    charCountLabel->setText(QString("Character COUNT: %1").arg(count));
}
