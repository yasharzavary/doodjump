#include "gamemenu.h"

gameMenu::gameMenu()

{
//    make scene to the menu part
    menuScene= new QGraphicsScene;
    menuScene->setSceneRect(0,0,437,700);
    setScene(menuScene);

    setBackgroundBrush(QBrush(QImage(":/image/background.png")));

    setFixedSize(437,700);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

}
