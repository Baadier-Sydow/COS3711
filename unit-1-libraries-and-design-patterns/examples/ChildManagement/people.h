#ifndef PEOPLE_H
#define PEOPLE_H

#include <QObject>

class People : public QObject
{

    Q_OBJECT
public:
    People(QObject* parent = 0);
};

#endif // PEOPLE_H
