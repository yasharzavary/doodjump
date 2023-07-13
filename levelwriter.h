#ifndef LEVELWRITER_H
#define LEVELWRITER_H

#include <QGraphicsTextItem>
#include <QGraphicsScene>

class levelWriter: public QGraphicsTextItem
{
private:
    int levelHolder;
public:
    levelWriter(QGraphicsScene *gameScene);
    void getUpperTheLevel();
};

#endif // LEVELWRITER_H
