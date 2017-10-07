#include <QCoreApplication>
#include <sender.h>
#include <receiver.h>
#include <QObject>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Receiver *r = new Receiver();
    Sender *s = new Sender();

    QObject::connect(
                     s, SIGNAL(tweet()),
                     r, SLOT(tweetListener())
                );

    s->tweet();

    // tweetListener should now and when the sender object was created.

    return a.exec();
}
