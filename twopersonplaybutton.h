#ifndef TWOPERSONPLAYBUTTON_H
#define TWOPERSONPLAYBUTTON_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include "onegameview.h"
#include <QGraphicsSceneMouseEvent>
class twoPersonPlayButton : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    oneGameView *oneGame;
    QGraphicsScene playButtonScene;
    bool gameStart;
public:
    explicit twoPersonPlayButton(QGraphicsScene *mainScene);

signals:

};

#endif // TWOPERSONPLAYBUTTON_H
