#include <iomanip>
#include <string>
#include <iostream>
#include <cstdlib>
#include "newSeven.h"
using namespace std;

int main()
{
    //implement class Employee

    //instantiate an object of class Employee
    Employee employee(25110, 2350, 2400, 0.08);

    //have user enter details of the employee in question
    //cin>>employee;

    //access the values of the object
    double currentBasicSalary = employee.getBasicSalary();
    double currentPension = employee.getPension();
    double currentMedicalAid = employee.getMedicalAid();
    float currentTaxPercentage = employee.getTaxPercentage();

    //display the values of the object
    cout <<"\n\nThe details of the employee are as follows: ";
    cout << "\nBasic Salary: "<<currentBasicSalary;
    cout <<"\nPension contributed by employee: "<<currentPension;
    cout << "\nMedical aid amount contributed by employee: "<<currentMedicalAid;
    cout <<"\nTax percentage applicable to employee: "<<currentTaxPercentage;

    double currentGrossPay = employee.calcGrossPay(employee);

    double currentDeductions = employee.calcDeductions(employee);

    double currentTaxAmount = employee.calcTax(currentGrossPay, currentDeductions, employee);

    double netSalary = currentGrossPay - currentTaxAmount - employee.getPension() - employee.getMedicalAid();

   cout <<"\nNet salary after medical aid, pension and tax has been paid: "<<fixed<<setprecision(2)<<netSalary;

    return 0;

}


