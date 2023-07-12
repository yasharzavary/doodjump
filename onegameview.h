#ifndef ONEGAMEVIEW_H
#define ONEGAMEVIEW_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "doodler.h"
#include "placestage.h"
#include <QGraphicsItem>

class oneGameView : public QGraphicsView
{
    Q_OBJECT
private:
    QList<placeStage *> stageList;
    doodler *gameDoodler;
    QGraphicsScene *oneGameScene;
public:
    explicit oneGameView();

signals:

};

#endif // ONEGAMEVIEW_H
