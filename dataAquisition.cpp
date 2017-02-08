#include "mbed.h"

//#define Wheelspeed sensors
//#define Linear potentiometer
//#define throttle
//#define brake pressure sensor
//#define steering pot
//#define IMU I2C bus
//#define dash digital inputs

AnalogIn wheelSpeedFrontRight(_);
AnalogIn wheelSpeedFrontLeft(_);
AnalogIn wheelSpeedRearRight(_);
AnalogIn wheelSpeedRearLeft(_);
AnalogIn linPotFrontRight(_);
AnalogIn linPotFrontLeft(_);
AnalogIn linPotRearRight(_);
AnalogIn linPotRearLeft(_);
AnalogIn throttleOne(_);
AnalogIn throttleTwo(_);
AnalogIn steeringPosition(_);
AnalogIn brakePressureOne(_);
AnalogIn brakePressureTwo(_);

float readThrottleOne() { //i think this should be u_int16 instead of float
    float value = read....some analogue pin;
    if (value < lower limit || value > upper limit) {
        ThrottleOne = send error value; //throttle overtravel
    else {
        ThrottleOne = value;
    }
}

float readThrottleTwo() { //i think this should be u_int16 instead of float
    float value = read....some analogue pin;
    if (value < lower limit || value > upper limit) {
        ThrottleOne = send error value; //throttle overtravel
    }
    else {
        ThrottleTwo = value;
    }
}

float readBrakePressureOne() {
    float value = read....some analogue pin;
    if (value < min value) {
        return 0;
    }
    else {
        return value
    }

}