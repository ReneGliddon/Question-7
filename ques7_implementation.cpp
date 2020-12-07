 #include "ques7.h"
 #include <string>
#include <iostream>
 using namespace std;

 //default constructor
//Employee::Employee(double basicSalary, double pension, double medicalAid, float tax);
  //  {
    //    basicSalary = 0;
      //  pension = 0.00;
        //medicalAid = 0.00;
        //taxPercentage = 0.00;
    //}

 //accessor functions

    double Employee::getBasicSalary()
    {
        return basicSalary;
    }

    double Employee::getPension()
    {
        return pension;
    }

    double Employee::getMedicalAid()
    {
        return medicalAid;
    }

    float Employee::getTaxPercentage()
    {
        return taxPercentage;
    }

 //function to calculate the amount deducted from salary for tax
    double Employee::calcTax(double grossPay, double deductions, Employee employee)
    {

        float taxP = employee.getTaxPercentage();
        double taxAmount = taxP*(grossPay-deductions);

        return taxAmount;

    }

    //function to calculate gross pay
    double Employee::calcGrossPay(Employee employee)
    {
        //get the values
        double theBasicSalary = employee.getBasicSalary();
        double thePension = employee.getPension();
        double theMed= employee.getMedicalAid();

        //calculate gross salary
        double grossPay = theBasicSalary+thePension+theMed;

        return grossPay;

    }

    //function to calculate how much should be deducted from the gross salary for pension and medical aid
    double Employee::calcDeductions(Employee employee)
    {
        double thePension = employee.getPension();

        double theMed= employee.getMedicalAid();

        double deductions = (theMed*2) + (thePension*2);

        return deductions;
    }

    //overloaded extraction operator that can be used to input values of type Employee into the object
  istream& operator>>(istream& sendIn, Employee& employee)
 {
    cout << "\nEnter the basic salary: ";
    sendIn >> employee.basicSalary;
    cout << "\nEnter the pension amount that the employee pays: ";
    sendIn >> employee.pension;
    cout << "\nEnter the medical aid amount that the employee pays: ";
    sendIn >> employee.medicalAid;
    cout << "\nEnter the tax percentage: ";
    sendIn >> employee.taxPercentage;

    return sendIn;
}
