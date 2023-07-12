#include "playbutton.h"


playButton::playButton(QGraphicsScene *mainScene):
    QObject(),QGraphicsPixmapItem(),  playButtonScene{mainScene}
{
//    set play button picrute
    setPixmap(QPixmap(":/image/play button.png"));

//    add item to the scene
    mainScene->addItem(this);
    setPos(180, 500);
}

void playButton::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    exit(1);
}
