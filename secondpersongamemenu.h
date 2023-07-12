#ifndef SECONDPERSONGAMEMENU_H
#define SECONDPERSONGAMEMENU_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "doodler.h"
#include "placestage.h"
#include <QGraphicsItem>
#include <QTimer>
#include <iostream>
#include "shield.h"
#include "spring.h"
#include "jet.h"

class secondPersonGameMenu : public QObject
{
    Q_OBJECT
public:
    explicit secondPersonGameMenu(QObject *parent = nullptr);

signals:

};

#endif // SECONDPERSONGAMEMENU_H
