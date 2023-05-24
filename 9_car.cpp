/*
* File: 9_car.cpp
* Author: THAI DOAN NHAT
* Date: 23/05/2023
* Description: this file contains all the prototypes for Cars
*/
#include <stdio.h>
#include <stdint.h>
#include <string>

using namespace std;
/*Create Class car
* Function:none
* Description: create class and scope of access of properties and methods are in class
* Input:None
* Output:None
*/
class Car{
    private:
        string color;
        string engine;
        uint16_t kilometer;
    public:
        Car(string color, string engine, uint16_t kilometer);
        void maintenancePrice();
        void checkKilometer();
        void Information();
};
Car::Car(string color, string engine, uint16_t kilometer){
    this->color = color;
    this->engine = engine;
    this->kilometer = kilometer;
}

/*
* Class: Car
* Function: maintenancePrice
* Description: This function is used to determine maintenance cost of car
* Input:None
* Output:None
*/
void Car::maintenancePrice(){
    uint16_t price = this->kilometer * 0.13;;
    printf("Maintenance Price: %d USD\n",price);
}

/*
* Class: Car
* Function: checkKilometer
* Description: This function use for checking kilometers of car
* Input:None
* Output:None
*/
void Car::checkKilometer(){
    printf("Number of kilometers traveled: %d\n",this->kilometer);
}

/*
* Class: Car
* Function: Information
* Description: This function is used to display information of car
* Input:None
* Output:None
*/
void Car::Information(){
    printf("Information\n");
    printf("Color: %s\n",this->color.c_str());
    printf("Engine: %s\n",this->engine.c_str());
    printf("Kilometer: %d\n",this->kilometer);
}
int main(int argc, char const *argv[])
{
    Car car("red","Hybrid Engine",15000);
    car.Information();
    car.maintenancePrice();
    return 0;
}