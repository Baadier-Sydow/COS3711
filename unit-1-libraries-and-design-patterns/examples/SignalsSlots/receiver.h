#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>


class Receiver : public QObject
{
    Q_OBJECT

public:
    Receiver(QObject *parent = 0);

public slots:
    void tweetListener();
};

#endif // RECEIVER_H
