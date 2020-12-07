#include <string>
#include <iostream>
#include <cstdlib>
#include "newSeven_manager.h"
using namespace std;

int main()
{
    //instantiate an object of type Manager
    Manager manager(60560, 5500, 2800, 3100,0.14);

    //access the values of the object
    double currentBasicSalary = manager.getBasicSalary();
    cout<<currentBasicSalary;

    //double currentPension = employee.getPension();
    //double currentMedicalAid = employee.getMedicalAid();
    //float currentTaxPercentage = employee.getTaxPercentage();

    manager.Display();

    double currentGrossPay = manager.calcGrossPay(manager);
    cout <<endl<<"Current gross pay: "<<currentGrossPay;

    double currentDeductions = manager.calcDeductions(Manager manager);
    cout<<"\nDeductions: "<<currentDeductions;

    double currentAllowance = manager.getAllowance();

    double currentTaxAmount = manager.calcTax(currentGrossPay, currentDeductions, currentAllowance);
    cout<<endl<<"tax: "<<currentTaxAmount;

    double netSalary = currentGrossPay - currentTaxAmount - currentDeductions;

   cout <<"\nNetSalary after medical aid, pension and tax has been paid: "<<netSalary;



}
