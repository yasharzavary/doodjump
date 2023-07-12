#ifndef SHIELD_H
#define SHIELD_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>

class shield : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    QTimer *itemTimer;
    QGraphicsScene shieldScene;

public:
    explicit shield(QGraphicsScene *gameScene);

signals:

};

#endif // SHIELD_H
