#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel window("Hello world!");
    window.setMargin(40);
    window.show();
    return app.exec();
}