#ifndef SECONDDOODLER_H
#define SECONDDOODLER_H

#include <doodler.h>

class secondDoodler: public doodler
{
private:
    QTimer *doodlerTimer;
    QGraphicsScene doodlerScene;
    int jumpForce;
public:
    secondDoodler(QGraphicsScene *gameScene);
    void keyPressEvent(QKeyEvent *pressEvent);
};

#endif // SECONDDOODLER_H
