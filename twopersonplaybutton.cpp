#include "twopersonplaybutton.h"

twoPersonPlayButton::twoPersonPlayButton(QGraphicsScene *mainScene)
    : QObject(),QGraphicsPixmapItem(),  playButtonScene{mainScene}, gameStart{true}
{
    //    set play button picrute
    setPixmap(QPixmap(":/image/twoPerson play button.png"));

    //    add item to the scene
    mainScene->addItem(this);
    setPos(150, 450);
}

void twoPersonPlayButton::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(gameStart){
        gameStart=false;
        firstPersonGameView=new oneGameView();
        secondPersonGameView=new secondGameView();
        firstPersonGameView->show();
        secondPersonGameView->show();
    }
}
