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
//class represent the data and methods of the object point
class point
{
private:
    int8_t tungdo;
    int8_t hoanhdo;
public:
    point(int8_t x,int8_t y);
    int8_t gettungdo();
    int8_t gethoanhdo();
};
//print information to initialize points
point::point(int8_t x,int8_t y){
    point::tungdo =x;
    point::hoanhdo =y;
}
int8_t point::gettungdo(){
    return point::tungdo;
}
int8_t point::gethoanhdo(){
    return point::hoanhdo;
}
//print information to initialize points in class
class pheptoanOxy{
    private:
    point A;
    point B;
    point C;
    typedef enum{
        khoang_cach,
        dien_tich
    }pheptoan;
    pheptoan kiem_tra;
    public:
    pheptoanOxy(point a,point b);
    pheptoanOxy(point a,point b,point c);
    double khoangcachhaidiem();
    double dientichtamgiac();
};
//print distance initialization information of pheptoanOxy
pheptoanOxy::pheptoanOxy (point a,point b)
{
    pheptoanOxy::A = a;
    pheptoanOxy::B = b;
    kiem_tra=khoang_cach;
}
//print information to initialize the areas of pheptoanOxy
pheptoanOxy::pheptoanOxy(point a,point b,point c)
{
    pheptoanOxy::A=a;
    pheptoanOxy::B=b;
    pheptoanOxy::C=c;
    kiem_tra=dien_tich;
}
//accessing properties and methods of class and\
Calculate the area and print it to the screen
double pheptoanOxy::khoangcachhaidiem(){
    if (kiem_tra != khoang_cach)
    {
        printf("error");
    }
    return (double)sqrt((A.gettungdo()-B.gettungdo())*(A.gettungdo()-B.gettungdo()) + (A.gethoanhdo() - B.gethoanhdo()) * (A.gethoanhdo() - B.gethoanhdo()));
};
//accessing properties and methods of class and \
Calculate the length of the line and then print it to the screen
double pheptoanOxy::dientichtamgiac(){
    if (kiem_tra==dien_tich)
    {
        double dienTich = (double)abs((B.gettungdo() - A.gettungdo()) * (C.gethoanhdo() - A.gethoanhdo()) - (C.gettungdo() -A.gettungdo()) * (B.gethoanhdo() - A.gettungdo()))/2;
        printf("%.2f\n",dienTich);
    }else{
        printf("error");
    }    
};

int main(){
    pheptoanOxy diem(point(1,2), point(3,4), point(5,6 ));
    diem.khoangcachhaidiem();
    diem.dientichtamgiac();
}


