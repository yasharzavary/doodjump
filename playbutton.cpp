#include "playbutton.h"


playButton::playButton(QGraphicsScene *mainScene):
    QObject(),QGraphicsPixmapItem(),  playButtonScene{mainScene}, gameStart{true}
{
//    set play button picrute
    setPixmap(QPixmap(":/image/play button.png"));

//    add item to the scene
    mainScene->addItem(this);
    setPos(150, 400);
}

void playButton::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
//    TODO: add a if with gameStart
    if(gameStart){
        gameStart=false;
        oneGame=new oneGameView;
        oneGame->show();
    }
}
