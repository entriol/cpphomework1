#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H
class BMI {
public:
    BMI();

    BMI(string, string, string, int, string, int, int, int);

    ~BMI();

    string getName() const;
    string getSurname() const;
    string getGender() const;

    string getDobMonth() const;
    int getDobDay() const;
    int getDobYear() const;

    int getHeight() const;
    int getWeight() const;

    void setName(string);
    void setSurname(string);
    void setGender(string);

    void setDobMonth(string);
    void setDobDay(int);
    void setDobYear(int);


    void setHeight(int);
    void setWeight(int);

    float calculateBMI() const;
    int calculateAge() const;
    char weightStatus() const;

private:
    string newName;
    string newSurname;
    string newGender;

    string newDobMonth;
    int newDobDay;
    int newDobYear;

    int newHeight;
    int newWeight;
};


#endif