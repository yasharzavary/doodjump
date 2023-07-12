#ifndef PLAYBUTTON_H
#define PLAYBUTTON_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include "onegameview.h"

class playButton : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    QGraphicsScene playButtonScene;
    bool gameStart;
public:
    explicit playButton(QGraphicsScene* mainScene);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:

};

#endif // PLAYBUTTON_H
