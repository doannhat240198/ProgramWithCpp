/*
* File: rectangle.cpp
* Author: THAI DOAN NHAT
* Date: 21/05/2023
* Description: This is file for rectangle
*/
#include <stdio.h>
#include <stdint.h>
#include <math.h>
//class declaration object rectangle
class Rectangle
{
private://attribute's access range
    uint8_t Length;
    uint8_t Width;
    //variable lenght,width within access of private 
    typedef enum Format{
        NOT_CORRECT = 0,
        CORRECT
    }Format;
    Format format;
    //user-defined data type
public:
    Rectangle(uint8_t length, uint8_t width);
    uint8_t lengthdai();
    uint8_t widthrong();
    double calculatePerimeter();//tinh chu vi
    double calculateArea();//tinh 
    double calculateDiagonalLine();//tinh duong cheo
    void checkSquare();//kiemtra hinh vuong
};
//accessing properties and methods of class
Rectangle::Rectangle(uint8_t length, uint8_t width){
    if (length <= 0 || width <= 0){
        printf("error\n");
        format = NOT_CORRECT;
        return;
    }
    this->Length = length;
    this->Width = width;
}

/*This function use for get length of rectangle*/
uint8_t Rectangle::lengthdai(){
    if (format == NOT_CORRECT){
        printf("KHONG DUNG DINH DANG DO DAI\n");
        return -1;
    }
    return Length;
}
/*This function use for get width of rectangle*/
uint8_t Rectangle::widthrong(){
    if (format == NOT_CORRECT){
        printf("KHONG DUNG DINH DANG DO DAI\n");
        return -1;
    }
    return Width;
}

/* This function use for get perimeter of rectangle */
double Rectangle::calculatePerimeter(){
    //
    if (format == NOT_CORRECT){
        printf("error\n");
        return -1;
    }
    return (double)((Length + Width) * 2);
}

/*This function use for get area of rectangle*/
double Rectangle::calculateArea(){
    if (format == NOT_CORRECT){
        printf("error\n");
        return -1;
    }
    return (double)(Length * Width);
}

/*This function use for get diagonal line distance of rectangle*/
double Rectangle::calculateDiagonalLine(){
    if (format == NOT_CORRECT){
        printf("error\n");
        return -1;
    }
    return (double)(sqrt(pow(Length, 2) + pow(Width, 2)));
}

/*This function use for check if it is a square or not*/
void Rectangle::checkSquare(){
    if (format == NOT_CORRECT){
        printf("error\n");
        return;
    }
    if(Length == Width){
        printf("this is square\n");
    }
    else{
        printf("this is not square\n");
    }
}
int main(int argc, char const *argv[])
{
    Rectangle rec(4, 4);
    printf("length=%d\n",rec.lengthdai());
    printf("widt=%d\n",rec.widthrong());
    printf("CHU VI: %.2lf\n", rec.calculatePerimeter());
    printf("DIEN TICH: %.2lf\n", rec.calculateArea());
    printf("DUONG CHEO: %.2lf\n", rec.calculateDiagonalLine());
    rec.checkSquare();
    return 0;
}
 


