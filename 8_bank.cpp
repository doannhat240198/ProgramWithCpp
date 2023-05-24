/*
* File: 8_bank.cpp
* Author: THAI DOAN NHAT
* Date: 23/05/2023
* Description: This file contains all the functions/methods for bank
*/
#include<iostream>
#include<stdint.h>
using namespace std;
/*Create Class bankaccount
* Function:none
* Description: create class and scope of access of properties and methods are in class
* Input:none
* Output:none
*/
class bankAccount{
    private:
        int accountNumber;
        string accountName;
        int balance;
    public:
        bankAccount(int accountNumber, string accountName);
        void cashOut(int moneyOut);
        void cashIn(int moneyOut);
        void checkBalance();
};
/*
*Class: bankaccount
* Function:none
* Description:access properties and methods outside the class
* Input:none
* Output:none
*/
bankAccount::bankAccount(int accountNumber, string accountName){
    this->balance  = 0;
    this->accountName = accountName;
    this->accountNumber = accountNumber;
}
/*
* Class: bankaccount
* Function: checkbalance
* Description: This function use for checkbalance of bankaccount
* Input:none
* Output:none
*/
void bankAccount::checkBalance(){
    cout<<"Name: "<<this->accountName<<endl;
    cout<<"Id: "<<this->accountNumber<<endl;
    cout<<"Balance: "<<this->balance<<"(vnd)"<<endl;
}
/*
* Class: bankaccount
* Function: cshin
* Description: This function use for cáhin of bankaccount
* Input:none
* Output:none
*/
void bankAccount::cashIn(int moneyIn){
    
    cout<<"cash in: "<<endl;
    this->balance += moneyIn;
    checkBalance();
}
/*
* Class: bankaccount
* Function: cashout
* Description: This function use for cashout of bankaccount
* Input:none
* Output:none
*/
void bankAccount::cashOut(int moneyOut){
    
    if(moneyOut > this->balance) cout<<"Not enough money in the account"<<endl;
    else 
    {
        cout<<"cash out: "<<endl;
        this->balance -= moneyOut;
        checkBalance();
    }
}

int main(){
    bankAccount HungAccount(984210,"THAI DOAN NHAT");
    HungAccount.cashIn(100000);
    HungAccount.cashOut(500000);
    HungAccount.cashOut(50000);
    return 0;
}