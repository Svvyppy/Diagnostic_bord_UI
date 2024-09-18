#include "diagnostic_board.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Diagnostic_board w;
    w.show();
    return a.exec();
}
