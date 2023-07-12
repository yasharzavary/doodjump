#ifndef PLAYBUTTON_H
#define PLAYBUTTON_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>

class playButton : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    QGraphicsScene playButtonScene;
public:
    explicit playButton(QGraphicsScene* mainScene);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:

};

#endif // PLAYBUTTON_H
