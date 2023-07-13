#ifndef TWOPERSONPLAYBUTTON_H
#define TWOPERSONPLAYBUTTON_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include "onegameview.h"
#include "secondgameview.h"


class twoPersonPlayButton : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    oneGameView *firstPersonGameView;
    oneGameView *secondPersonGameView;
    QGraphicsScene playButtonScene;
    bool gameStart;
public:
    explicit twoPersonPlayButton(QGraphicsScene *mainScene);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:
public slots:

};

#endif // TWOPERSONPLAYBUTTON_H
