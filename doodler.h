#ifndef DOODLER_H
#define DOODLER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>

class doodler : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    QTimer *doodlerTimer;
    QGraphicsScene doodlerScene;
public:
    explicit doodler(QGraphicsScene *gameScene);

signals:
public slots:
    void comeDown();
};

#endif // DOODLER_H
