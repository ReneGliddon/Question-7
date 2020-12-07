using namespace std;
#include "newSevenManager.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    //instantiate an object of type Manager
    Manager manager(60560, 5500, 2800, 0.14, 3100);

    manager.Display();

    double currentGrossPay = manager.calcGrossPay();

    double currentDeductions = manager.Employee::calcDeductions(manager);

    double currentAllowance = manager.getAllowance();

    double currentTaxAmount = manager.calcTax(currentGrossPay, currentDeductions, currentAllowance);

    double netSalary = currentGrossPay - currentTaxAmount - currentDeductions;

   cout <<"\nNet salary after medical aid, pension and tax has been paid: R"<<fixed<<setprecision(2)<<netSalary;



}

