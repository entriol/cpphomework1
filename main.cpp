#include <iostream>
#include <string>

#include "BMI.h"

using namespace std;

std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
    if (str.length() > width)
        if (show_ellipsis)
            return str.substr(0, width) + "...";
        else
            return str.substr(0, width);
    return str;
}

int main() {
    string name;
    string surname;
    string gender;

    string dobMonth;
    int dobDay;
    int dobYear;

    int height;
    int weight;

    cout << "Enter your name: ";
    std::getline(std::cin, name);

    cout << "Enter your surname: ";
    std::getline(std::cin, surname);

    cout << "Enter your gender: ";
    cin >> gender;

    cout << "Your day of birth: ";
    cin >> dobDay;

    cout << "Your month of birth: ";
    cin >> dobMonth;

    cout << "Your year of birth: ";
    cin >> dobYear;

    cout << "Enter your height in cm: ";
    cin >> height;

    cout << "Enter your weight in kg: ";
    cin >> weight;

    BMI Patient_1(name, surname, gender, dobDay, dobMonth, dobYear, height, weight);
    cout << endl << "Patient Name: " << truncate(Patient_1.getName(), 30) << endl;
    cout << endl << "Patient Surname: " << truncate(Patient_1.getSurname(), 30) << endl;
    cout << endl << "Patient Gender: " << Patient_1.getGender() << endl;
    cout << endl << "Date of birth: " << Patient_1.getDobDay() << "/" << Patient_1.getDobMonth() << "/" << Patient_1.getDobYear() << "      Age: " << Patient_1.calculateAge() << endl;
    cout << endl << "Patient we: " << Patient_1.getWeight() << endl;
    cout << endl << "Patient he: " << Patient_1.getHeight() << endl;
    cout << endl << "BMI: " << Patient_1.calculateBMI() << endl;
    cout << endl << "BMI Status: " << Patient_1.weightStatus() << endl;

    return 0;
}