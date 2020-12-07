#ifndef QUES7H
#define QUES_7
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class Employee
{
public:

    //Employee();
//default constructor
//Employee::Employee(double basicSalary, double pension, double medicalAid, float tax);
  //  {
    //    basicSalary = 0;
      //  pension = 0.00;
        //medicalAid = 0.00;
        //taxPercentage = 0.00;
    //}

   //function to calculate the amount deducted from salary for tax
    double calcTax(double grossPay, double deductions, Employee employee);

    //function to calculate gross pay
    double calcGrossPay(Employee employee);

    //function to calculate how much should be deducted from the gross salary for pension and medical aid
    double calcDeductions(Employee employee);

     //accessor functions
    double getBasicSalary();
    double getPension();
    double getMedicalAid();
    float getTaxPercentage();

    friend  istream& operator>>(istream& sendIn, Employee& employee);


private:
    //private variables
    double basicSalary;
    double pension;
    double medicalAid;
    float taxPercentage;

};
#endif // ques7
