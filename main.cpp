
#include <QApplication>
#include "gamemenu.h"
#include <ctime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    srand(time(0));
    auto menuView=new gameMenu();
    menuView->show();


    return a.exec();
}
