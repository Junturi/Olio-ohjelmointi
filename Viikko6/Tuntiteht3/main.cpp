#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

#include "qtmittari.h"
#include "qtdht.h"
#include "qtlcd.h"

int main(int argc, char *argv[])
{
    // Luodaan Qt-sovellus ja oliot
    QCoreApplication a(argc, argv);
    QtMittari mittari(&a);
    QtDHT lampotilasensori(&a);
    QtLCD lcd(&a);

    // pelkkä rivinvaihto
    qDebug();

    // Kytketään signaalit slotteihin eri olioissa
    QObject::connect(&mittari, SIGNAL(finished()),
                     &a, SLOT(quit()));

    //Mittari pyytää sensoria mittaamaan arvon
    QObject::connect(&mittari, SIGNAL(readTemperatureSignal()),
                     &lampotilasensori, SLOT(readTemperatureSlot()));

    //Sensori lähettää mitatun arvon takaisin mittarille
    QObject::connect(&lampotilasensori, SIGNAL(temperatureSignal(float)),
                     &mittari, SLOT(temperatureSlot(float)));

    //Mittari lähettää arvon näytölle
    QObject::connect(&mittari, SIGNAL(printSignal(float)),
                     &lcd, SLOT(printSlot(float)));

    //Näyttö kuittaa, että tulostus on ok
    QObject::connect(&lcd, SIGNAL(printOkSignal()),
                     &mittari, SLOT(printOkSlot()));

    // Ohjelma käynnistyy täältä
    qDebug() << "main Lahetetaan signaali QtTimer::timeout";
    //Ohjelma on ns. timeoutissa ja käynnistyy vasta tässä vaiheessa.
    QTimer::singleShot(0, &mittari, SLOT(beginSlot()));

    // käynnistetään pääohjelma
    return a.exec();
}
