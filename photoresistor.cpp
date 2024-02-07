#include "photoresistor.h"
#include <cmath>
#include "mbed.h"
#include <iostream>

float calcularLux() {
    
    AnalogIn photoresistor(A0);  

    const double Rl = 10.0;  
    const double VRef = 3.3;    
    const double luxRel = 500.0;

    float ADCres = photoresistor.read()*3.3;

    float lux = (((VRef*luxRel)*ADCres)-luxRel)/Rl;
    if (lux<0){
        lux =0;
    }

    return lux;
}