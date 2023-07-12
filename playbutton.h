#ifndef PLAYBUTTON_H
#define PLAYBUTTON_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

class playButton : public QObject
{
    Q_OBJECT
public:
    explicit playButton(QObject *parent = nullptr);

signals:

};

#endif // PLAYBUTTON_H
