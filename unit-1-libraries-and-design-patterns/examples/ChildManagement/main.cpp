#include <QCoreApplication>
#include <stdio.h>
#include <people.h>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject peopleList;

    People* t = new People(&peopleList);
    People* s = new People();
    s->setParent(&peopleList);

    QList<People*> listicle = peopleList.findChildren<People*>();

//    foreach (const People* current, peopleList) {
//        printf("found another");
//    }

    return a.exec();
}
