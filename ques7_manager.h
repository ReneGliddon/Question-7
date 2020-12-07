using namespace std;
#ifndef ques7_manager.h
#define ques7_manager.h
#include "ques7.h"
#include <string>
#include <iostream>
#include <cstdlib>

class Manager : public Employee

{
public:
    //function to display salary details
    void Display();

    //function to get entertainment allowance amount
    double getAllowance();

    //overridden function to calculate the tax
    double calcTax(double grossPay, double deductions, double allowance, Employee employee);

    //overridden function to calculate the gross pay
    double calcGrossPay(Employee employee);

private:
    //entertainment allowance
    double Allowance;
};

//accessor for entertainment allowance
double Manager::getAllowance()
{
    return Allowance;
}

//function to display salary details
void Manager::Display(Manager manager)
{
    double salary = manager.getBasicSalary();
    double manPension = manager.getPension();
    double manMed = manager.getPension();
    double manAllowance = manager.getAllowance();

    cout<<"\nThe details of the manager's salary are the following: ";
    cout"\nSalary: "<<salary;
    cout<<"\nPension contribution of manager: "<<manPension;
    cout<<"\nMedical aid contribution of manager: "<<manMed;
    cout<<"\nEntertainment allowance: "<<manAllowance;

}

    //function to calculate gross pay
    double Employee::calcGrossPay(Manager manager)
    {
        //get the values
        double theBasicSalary = manager.getBasicSalary();
        double thePension = manager.getPension();
        double theMed= manager.getMedicalAid();
        double theAllowance = manager.getAllowance();

        //calculate gross salary
        double grossPay = theBasicSalary+thePension+theMed+theAllowance;

        return grossPay;

    }

