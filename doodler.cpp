#include "doodler.h"


doodler::doodler(QGraphicsScene *gameScene):
    QObject(), QGraphicsPixmapItem(), doodlerScene{gameScene}
{
//    set pic and place of the doodler
    setPixmap(QPixmap(":/image/doodler.png"));
    gameScene->addItem(this);
    setPos(200,350);

    doodlerTimer=new QTimer();
    connect(doodlerTimer, SIGNAL(timeout()), this, SLOT(comeDown()));
    doodlerTimer->start(500);

}

void doodler::comeDown()
{
    setPos(x(), y()+5);
}
