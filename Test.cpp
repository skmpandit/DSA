#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Simple Calculator");

    QGridLayout *layout = new QGridLayout(&window);

    QLineEdit *display = new QLineEdit();
    layout->addWidget(display, 0, 0, 1, 4);

    QPushButton *buttons[10];
    for (int i = 0; i < 10; ++i) {
        buttons[i] = new QPushButton(QString::number(i));
        layout->addWidget(buttons[i], (i + 3) / 3, (i - 1) % 3);
    }

    QPushButton *addButton = new QPushButton("+");
    layout->addWidget(addButton, 1, 3);
    QPushButton *calculateButton = new QPushButton("Calculate");
    layout->addWidget(calculateButton, 2, 3);

    window.setLayout(layout);
    window.show();

    return app.exec();
}
