#include "BMI.h"

BMI::BMI() {
    newHeight = 0;
    newWeight = 0;

}

BMI::BMI(string name, string surname, string gender, int dobDay, string dobMonth, int dobYear, int height, int weight) {
    newName = name;
    newSurname = surname;
    newGender = gender;

    newDobMonth = dobMonth;
    newDobDay = dobDay;
    newDobYear = dobYear;

    newHeight = height;
    newWeight = weight;
}

BMI::~BMI(){

}

string BMI::getName() const {
    return newName;
}

string BMI::getSurname() const {
    return newSurname;
}

string BMI::getGender() const {
    return newGender;
}
string BMI::getDobMonth() const {
    return newDobMonth;
}

int BMI::getDobDay() const {
    return newDobDay;
}

int BMI::getDobYear() const {
    return newDobYear;
}

int BMI::getHeight() const {
    return newHeight;
}

int BMI::getWeight() const {
    return newWeight;
}

void BMI::setName(string name) {
    newName = name;
}

void BMI::setSurname(string surname){
    newSurname = surname;
}

void BMI::setGender(string gender){
    newGender = gender;
}

float BMI::calculateBMI() const {
    float sqH =  ((float) newHeight/100) * ((float) newHeight/100);
    float ans = (float) newWeight / sqH;

    return ans;
}

int BMI::calculateAge() const {
    return 2016 - newDobYear;
}

char BMI::weightStatus() const {
    char ch;

    if (BMI::calculateBMI() >= 30) {
        ch = 'B';
    }

    if (BMI::calculateBMI() < 18.5) {
        ch = 'U';
    }

    if (BMI::calculateBMI() > 18.5 && BMI::calculateBMI() < 25) {
        ch = 'N';
    }

    if (BMI::calculateBMI() >= 25 && BMI::calculateBMI() < 30) {
        ch = 'O';
    }

    return ch;
}