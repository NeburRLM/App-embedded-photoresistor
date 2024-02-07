#include "photoresistor.h"
#include "mbed.h"
#include <iostream>
#include <cmath>



int main() {
    while (1) {
        float lux = calcularLux();
        printf("Lux: %.4f ºC\n", lux);
        ThisThread::sleep_for(1s);
    }
}