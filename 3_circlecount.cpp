/*
* File: 3_circlecount.cpp
* Author: THAI DOAN NHAT
* Date: 22/5/2023
* Description:Create circle layer with\
 radius and calculate perimeter and area
 */
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

/* Class data representation and methods of a circular object*/

class hinhTron {
  private:
    float banKinh;
    const float pi = 3.14;
  public://enter initialization information
    hinhTron(float ht) {
      banKinh = ht;
    };
    float chuViHinhTron();
    float dienTichHinhTron();
};

/* Description:print circle circumference based on radius*/
float hinhTron::chuViHinhTron() {
//funtrion hinhtron access properties, methods of class
    return (2 * hinhTron::banKinh * hinhTron::pi);
    //return calculate the circumference of a circle
};

/* Description:print the area of ​​the resulting circle based on the radius*/
float hinhTron::dienTichHinhTron(){
//funtrion hinhtron access properties, methods of class
    return (2 * pow(hinhTron::banKinh, 2) * hinhTron::pi);
    //return calculates the area of ​​the circle
};


int main() {
  hinhTron *math;
  math = new hinhTron((float)24.1);
  printf("chu vi hinh tron la: %f\n", math->chuViHinhTron());
  printf("dien tich hinh tron la: %f\n",math->dienTichHinhTron());
  return 0;
}