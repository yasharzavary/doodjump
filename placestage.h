#ifndef PLACESTAGE_H
#define PLACESTAGE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>

class placeStage : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
    friend class oneGameView;
private:
    bool switchMove;
    QTimer *moveStageTimer;
    QGraphicsScene *placeStageScene;
public:
    placeStage(QGraphicsScene *gameScene);
    placeStage(QGraphicsScene * gameScene, int level);
    placeStage(QGraphicsScene *gameScene, float level);
signals:
public slots:
    void moveStage();
};

#endif // PLACESTAGE_H
