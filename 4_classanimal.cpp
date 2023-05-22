/*
* File:4_classanimal.cpp
* Author: THAI DOAN NHAT
* Date: 22/5/2023
* Description:class animal have properties:name, old, weight\
 and methor calculate index BMI.compare old and wight
*/
#include<stdio.h>
#include <string>

using namespace std;

/*Class Animal*/
class Animal {
private:
//access range private include methor
    string name;
    int age;
    double weight;
public://access range public
    Animal(const string& name, int age, double weight);
    string getName();
    double calculateBMI();
    bool compareAge( Animal& other);
    bool compareWeight( Animal& other);
};
/*implement constructor for class Animal*/
Animal::Animal(const  string& name, int age, double weight) {
//class animal access methor and properties outside class to define
    this->name = name;// This point to methor in class animal
    this->age = age;// This point to methor in class animal
    this->weight = weight;// This point to methor in class animal
}

/*This function use for get name of animal*/
string Animal::getName() {
    return name;// tra ve ten
}

/*This function use for calculate BMI of animal*/
double Animal::calculateBMI()  {
    double height = 30.0; // assign height = 1
    return weight / (height * height);
}

/*This function use for compareAge of animal*/
bool Animal::compareAge( Animal& other)  {
    return age < other.age;
}

/*This function use for compareWeight of animal*/
bool Animal::compareWeight( Animal& other)  {
    return weight < other.weight;
}

int main() {
    
    Animal dog("Dog", 5, 9.6);
    Animal cat("Cat", 3, 4.5);
    printf("index bmi of cat:%d\n",cat.calculateBMI());
    printf("index bmi of dog:%d\n",dog.calculateBMI());

    if (dog.compareAge(cat)) {
        printf("dog",dog.getName());
        printf(" is younger than ");
        printf("cat",cat.getName());
    } else {
        printf("cat",cat.getName());
        printf(" is younger than ");
        printf("dog\n",dog.getName());
    }

    if (dog.compareWeight(cat)) {
        printf("dog",dog.getName());
        printf(" weighs more than ");
        printf("cat\n",cat.getName());
    } else {
        printf("cat",cat.getName());
        printf(" weighs more than ");
        printf("dog",dog.getName());
    }

    return 0;
}

