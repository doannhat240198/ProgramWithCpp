/*
* File: phanso.cpp
* Author: THAI DOAN NHAT
* Date: 22/05/2023
* Description: This is file for fraction
*/
#include <stdio.h>
#include <stdint.h>
using namespace std;
/*Create Class phanso
* Function:none
* Description: create class and scope of access of properties and methods are in class
* Input:none
* Output:none
*/
class phanso{
    private:
        int8_t _tu_so;
        int8_t _mau_so;
    public:
        phanso(int8_t tu_so = 0, int8_t mau_so = 0);
        int8_t gettuso();
        int8_t getmauso();
};
/*Create Class pheptinh
* Function:none
* Description: create class and scope of access of properties and methods are in class
* Input:none
* Output:none
*/
class pheptinh{
    private:
        phanso SoA;
        phanso SoB;
    public:
        pheptinh(phanso SoA, phanso SoB);
        void cong();
        void tru();
        void nhan();
        void chia(); 
};

/*
*Class: phanso
* Function:none
* Description:access properties and methods outside the class
* Input:none
* Output:none
*/
phanso::phanso(int8_t tu_so, int8_t mau_so){
    if (this->_tu_so == 0){
        printf("The Denominator cannot be 0\n");
        return;
    }
    this->_tu_so = tu_so;
    this->_mau_so = mau_so;
    //point to and assign value
}

/*
* Class: phanso
* Function: gettuso
* Description: This function use for gettuso of fraction
* Input:none
* Output: return numerator of fraction
*/
int8_t phanso::gettuso(){
    return this->_tu_so;
}
/*
* Class: Fraction
* Function: getmauso
* Description: This function use for getmauso of fraction
* Input:none
* Output: return denominator of fraction
*/
int8_t phanso::getmauso(){
    return this->_mau_so;
}
pheptinh::pheptinh(phanso SoA, phanso SoB){
    this->SoA = SoA;
    this->SoB = SoB;
}
/*
* Class: pheptinh
* Function: cong
* Description: This function is used to cong phanso
* Input:none
* Output:None
*/
void pheptinh::cong(){
    int Tu, Mau;
    Tu = this->SoA.gettuso() * SoB.getmauso() + SoB.gettuso() * SoA.getmauso();
    Mau = this->SoA.getmauso() * this->SoB.getmauso();
    printf("cong: %d/%d + %d/%d = %d/%d = %f\n", this->SoA.gettuso(),this->SoA.getmauso(),\
    this->SoB.gettuso(),this->SoB.getmauso(),Tu,Mau,(float)Tu/Mau);
}
/*
* Class: pheptinh
* Function: tru
* Description: This function is used to tru phanso
* Input:none
* Output:None
*/
void pheptinh::tru(){
    int Tu, Mau;
    Tu = this->SoA.gettuso() * SoB.getmauso() - SoB.gettuso() * SoA.getmauso();
    Mau = this->SoA.getmauso() * this->SoB.getmauso();
    printf("tru: %d/%d - %d/%d = %d/%d = %f\n", this->SoA.gettuso(),this->SoA.getmauso(),\
    this->SoB.gettuso(),this->SoB.getmauso(),Tu,Mau,(float)Tu/Mau);
}
/*
* Class: pheptinh
* Function: nhan
* Description: This function is used to nhan phanso
* Input:none
* Output:None
*/
void pheptinh::nhan(){
    int Tu, Mau;
    Tu = this->SoA.gettuso() * SoB.gettuso();
    Mau = this->SoA.getmauso() * this->SoB.getmauso();
    printf("nhan: %d/%d * %d/%d = %d/%d = %f\n", this->SoA.gettuso(),this->SoA.getmauso(),\
    this->SoB.gettuso(),this->SoB.getmauso(),Tu,Mau,(float)Tu/Mau);
}
/*
* Class: pheptinh
* Function: chia
* Description: This function is used to chia phanso
* Input:none
* Output:None
*/
void pheptinh::chia(){
    int Tu, Mau;
    Tu = this->SoA.gettuso() * SoB.getmauso();
    Mau = this->SoA.getmauso() * this->SoB.gettuso();
    printf("chia: %d/%d / %d/%d = %d/%d = %f\n", this->SoA.gettuso(),this->SoA.getmauso(),\
    this->SoB.gettuso(),this->SoB.getmauso(),Tu,Mau,(float)Tu/Mau);
}
int main(int argc, char const *argv[])
{
    phanso PhanSo1(1,2);
    phanso PhanSo2(1,4);
    pheptinh cal(PhanSo1,PhanSo2);
    cal.cong();
    cal.tru();
    cal.nhan();
    cal.chia();
    return 0;
}
