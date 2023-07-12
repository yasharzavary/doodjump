#ifndef DOODLER_H
#define DOODLER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>

class doodler : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
    friend class oneGameView;
private:
    QTimer *doodlerTimer;
    QGraphicsScene doodlerScene;
public:
    explicit doodler(QGraphicsScene *gameScene);
    void keyPressEvent(QKeyEvent *pressEvent);
signals:
public slots:
    void comeDown();
};

#endif // DOODLER_H
