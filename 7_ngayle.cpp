/*
* File: 7_ngayle.cpp
* Author: THAI DOAN NHAT
* Date: 22/05/2023
* Description: This is file for date
*/
#include <stdio.h>
#include <stdint.h>
#include <time.h>
/*Create Class date
* Function:none
* Description: create class and scope of access of properties and methods are in class
* Input:none
* Output:none
*/
class Date{
    private:
        uint8_t day;
        uint8_t month;
        uint16_t year;
    public:
        Date(uint8_t day, uint8_t month, uint16_t year);
        uint8_t getDay();
        uint8_t getMonth();
        uint8_t getYear();
        void calculateAge();
        void isHoliday();
};

Date::Date(uint8_t day, uint8_t month, uint16_t year){
    this->day = day;
    this->month = month;
    this->year = year;
}

/*
* Class: Date
* Function: getDay
* Description: This function use for getting day
* Input:none
* Output: return day
*/
uint8_t Date::getDay(){
    return this->day;
}

/*
* Class: Date
* Function: getMonth
* Description: This function use for getting month
* Input: none
* Output:return month
*/
uint8_t Date::getMonth(){
    return this->month;
}

/*
* Class: Date
* Function: getYear
* Description: This function use for getting year
* Input:none
* Output:return year
*/
uint8_t Date::getYear(){
    return this->year;
}

/*
* Class: Date
* Function: calculateAge
* Description: This function use for calculating age
* Input:none
* Output: None
*/
void Date::calculateAge(){
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    int currentDay = timePtr->tm_mday;
    int currentMonth = timePtr->tm_mon + 1;
    int currentYear = timePtr->tm_year + 1900;
    int age = currentYear - year;
    if (currentMonth < month || (currentMonth == month && currentDay < day)){
        age--;
    }
    printf("Current age: %d\n", age);
}

/*
* Class: Date
* Function: isHoliday
* Description: This function use for checking holiday
* Input:none
* Output:None
*/
void Date::isHoliday(){
    if (month == 1 && day == 1) { 
        printf("New Year's Day.\n");
    } else if (month == 4 && day == 30) { 
        printf("Reunification Day.\n");
    } else if (month == 5 && day == 1) { 
        printf("Labor Day.\n");
    } else if (month == 9 && day == 2) {
        printf("National Day.\n");
    } else {
        printf("This is not a holiday.\n");;
    }
}
int main(int argc, char const *argv[])
{
    Date date(24,1,1998);
    date.calculateAge();
    date.isHoliday();
    return 0;
}