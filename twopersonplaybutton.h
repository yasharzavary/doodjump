#ifndef TWOPERSONPLAYBUTTON_H
#define TWOPERSONPLAYBUTTON_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include "onegameview.h"
#include "secondgameview.h"
#include<QTimer>
#include <iostream>

class twoPersonPlayButton : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    winLabel *winGameCeremony;
    QTimer *setTheWineer;
    oneGameView *firstPersonGameView;
    oneGameView *secondPersonGameView;
    QGraphicsScene playButtonScene;
    bool gameStart;
public:
    explicit twoPersonPlayButton(QGraphicsScene *mainScene);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:
public slots:
    void findWinner();
};

#endif // TWOPERSONPLAYBUTTON_H
