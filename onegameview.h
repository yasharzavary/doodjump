#ifndef ONEGAMEVIEW_H
#define ONEGAMEVIEW_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "doodler.h"
#include "placestage.h"
#include <QGraphicsItem>
#include <QTimer>
#include <iostream>
#include <shield.h>
#include <spring.h>

class oneGameView : public QGraphicsView
{
    Q_OBJECT
private:
    bool shieldAdded;
    bool springAdded;
    int timeCalculator;
    QTimer *stageControlTimer;
    QList<spring *> springList;
    QList<placeStage *> stageList;
    QList<shield *> shieldList;
    doodler *gameDoodler;
    QGraphicsScene *oneGameScene;
public:
    explicit oneGameView();

signals:
public slots:
    void controlStage();
};

#endif // ONEGAMEVIEW_H
