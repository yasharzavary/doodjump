#include "gamemenu.h"

gameMenu::gameMenu()

{
//    make scene to the menu part
    menuScene= new QGraphicsScene;
    menuScene->setSceneRect(0,0,437,700);
    setScene(menuScene);

//    set picture of the background
    setBackgroundBrush(QBrush(QImage(":/image/startBackground.png")));

//    set size of the background
    setFixedSize(437,700);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    pButton= new playButton(menuScene);
    tpButton= new twoPersonPlayButton(menuScene);
    eButton= new exitButton(menuScene);

}
