#ifndef PLACESTAGE_H
#define PLACESTAGE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

class placeStage : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
    friend class oneGameView;
private:
    QGraphicsScene *placeStageScene;
public:
    explicit placeStage(QGraphicsScene *gameScene);

signals:

};

#endif // PLACESTAGE_H
