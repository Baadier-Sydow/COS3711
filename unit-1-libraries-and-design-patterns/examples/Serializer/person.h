#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
public:
    Person();
    QString name;
    QString surname;
    QString getName();
    QString getSurname();
    void setName(QString s);
    void setSurname(QString s);
};

#endif // PERSON_H
