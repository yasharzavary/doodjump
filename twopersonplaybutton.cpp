#include "twopersonplaybutton.h"

twoPersonPlayButton::twoPersonPlayButton(QGraphicsScene *mainScene)
    : QObject(),QGraphicsPixmapItem(),  playButtonScene{mainScene}, gameStart{true}
{
    //    set play button picrute
    setPixmap(QPixmap(":/image/play button.png"));

    //    add item to the scene
    mainScene->addItem(this);
    setPos(180, 450);
}

void twoPersonPlayButton::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(gameStart){
        gameStart=false;
        firstPersonGameView=new oneGameView;
        secondPersonGameView=new oneGameView;
        firstPersonGameView->show();
        secondPersonGameView->show();
    }
}
