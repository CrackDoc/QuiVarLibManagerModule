#include <QtWidgets/QApplication>
#include "QuiVarLibManagerModule.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CQuiVarLibManagerModule w;
    w.show();
    return a.exec();
}
