#include "receiver.h"
#include <stdio.h>

Receiver::Receiver(QObject *parent) : QObject(parent)
{

}

void Receiver::tweetListener()
{
    printf("Hello World \n");
}
