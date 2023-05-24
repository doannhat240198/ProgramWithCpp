/*
* File: triangle.cpp
* Author: Thái Doãn Nhật
* Date: 20/5/2023
* Description: Tạo một lớp điểm trong hệ tọa độ 2D và viết các phương thức để tính
khoảng cách giữa hai điểm, tính diện tích của tam giác được tạo bởi ba điểm.
*/
#include<stdio.h>
#include<stdint.h>
#include<math.h>
using namespace std;
/*Create Class diem
* Function:none
* Description: create class and scope of access of properties and methods are in class
* Input:None
* Output:None
*/
class Diem
{
    private:
        int8_t toaDoX;
        int8_t toaDoY;
    public:
        int8_t getX();
        int8_t getY();
        void setDiem(int8_t x, int8_t y);
};

/*
* Class: diem
* Function: setdiem
* Description: This function use for setdiem of diem
* Input:None
* Output:None
*/
void Diem::setDiem(int8_t x , int8_t y ){
    toaDoX = x;
    toaDoY = y;
}
/*
* Class: diem
* Function: getx
* Description: This function use for getx of diem
* Input:None
* Output:return toadox
*/
int8_t Diem::getX()
{
    return this->toaDoX;
}
/*
* Class: diem
* Function: gety
* Description: This function use for gety of diem
* Input:None
* Output:return toadoy
*/
int8_t Diem::getY()
{
    return this->toaDoY;
}
/*Create Class khoangcach
* Function:none
* Description: create class and scope of access of properties and methods are in class
* Input:None
* Output:None
*/
class khoangCach{
    private:
        Diem A;
        Diem B;
    public:
        khoangCach(Diem A, Diem B);
        void tinhKhoangcach(Diem A, Diem B);
};
/*
*Class: khangcach
* Function:none
* Description:access properties and methods outside the class
* Input:none
* Output:none
*/
khoangCach::khoangCach(Diem A, Diem B){
    this->A = A;
    this->B = B;
}
/*
* Class: khoangcach
* Function: tinhkhoangcach
* Description: This function use for tinhkhoangcach of khoangcach
* Input:None
* Output:None
*/
void khoangCach::tinhKhoangcach(Diem A, Diem B){
    double a;
    a = sqrt(pow((B.getX() - A.getX()),2) + pow((B.getY() - A.getY()),2));
    printf("Khoang cach la: %f\n",a);
}
/*Create Class dientich
* Function:none
* Description: create class and scope of access of properties and methods are in class
* Input:None
* Output:None
*/
class dienTich{
    private:
        Diem A;
        Diem B;
        Diem C;
    public:
        dienTich(Diem A,Diem B, Diem C);
        void tinhDienTich(Diem A, Diem B, Diem C);
};
/*
*Class: dientich
* Function:none
* Description:access properties and methods outside the class
* Input:none
* Output:none
*/
dienTich::dienTich(Diem A,Diem B, Diem C){
    this->A = A;
    this->B = B;
    this->C = C;
}
/*
* Class: dientich
* Function: tinhdientich
* Description: This function use for tinhdientich of dientich
* Input:None
* Output:None
*/
void dienTich::tinhDienTich(Diem A, Diem B, Diem C){
    double s;
    s = (double)1/2*abs((B.getX() - A.getX())*(C.getY() - A.getY()) - (C.getX() - A.getX())*(B.getY() - A.getY()));
    printf("Dien tich: s = %.2f\n",s);
}
int main()
{
    Diem A,B,C;
    A.setDiem(4,7);
    B.setDiem(5,3);
    C.setDiem(8,4);
    khoangCach d(A,B);
    d.tinhKhoangcach(A,B);
    dienTich s(A,B,C);
    s.tinhDienTich(A,B,C);
    return 0;
}