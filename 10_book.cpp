/*
* File: 10_book.cpp
* Author: THAI DOAN NHAT
* Date: 23/05/2023
* Description: this file about book
*/
#include<iostream>
#include<string>
using namespace std;
/*Create Class book
* Function:none
* Description: create class and scope of access of properties and methods are in class
* Input:None
* Output:None
*/
class book{
    private:
        string name;
        string author;
        int publishYear;
        int tempQuantity;
        int maxQuantity;
    public:
        book(string name, string author, int publishYear, int quantity);
        void display();
        void borrow();
        void giveBack();
};
/*
*Class: book
* Function:none
* Description:access properties and methods outside the class
* Input:none
* Output:none
*/
book::book(string name, string author, int publishYear, int maxQuantity){
    this->name = name;
    this->author = author;
    this->publishYear = publishYear;
    this->maxQuantity = maxQuantity;
    this->tempQuantity = maxQuantity;
}
/*
* Class: book
* Function: display
* Description: This function use for display of book
* Input:None
* Output:None
*/
void book::display(){
    cout<<"Informations Of Book:"<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"Author: "<<this->author<<endl;
    cout<<"Publishing year: "<<this->publishYear<<endl;
    cout<<"Quantity: "<<this->tempQuantity<<endl;
}
/*
* Class: book
* Function: borrow
* Description: This function use for borrow of book
* Input:None
* Output:None
*/
void book::borrow(){
    if(this->tempQuantity > 0)
    {
        cout<<"Borrowed"<<endl;
        this->tempQuantity -= 1;
    }
    else cout<<"Out Of Books"<<endl;
}
/*
* Class: book
* Function: giveback
* Description: This function use for giveback of book
* Input:None
* Output:None
*/
void book::giveBack(){
    if(this->tempQuantity == this->maxQuantity)cout<<"Quantity is enough"<<endl;
    else 
    {
        this->tempQuantity += 1;
        cout<<"Gave Book Back"<<endl;
    }
}
int main(){
    book book1("quang ganh lo di va vui song","Dale Carnegie",1936,2);
    book1.display();
    book1.borrow();
    book1.display();
    book1.borrow();
    book1.display();
    book1.borrow();
    book1.giveBack();
    book1.display();
    book1.giveBack();
    book1.display();
    book1.giveBack();
    return 0;
}