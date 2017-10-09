#include <QCoreApplication>
#include <person.h>
#include <personreader.h>
#include <personwriter.h>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    QList details;
//    details.append("Baadier");
//    details.append("Sydow");
    system("clear");

    QTextStream out(stdout);
    QTextStream in(stdin);
    out << "Baadier";



//    cout >>> details[0];

    return a.exec();
}
