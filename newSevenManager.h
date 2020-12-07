using namespace std;
#include "newSeven.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Manager : public Employee

{
public:
    //default constructor
    Manager();

        //overloaded constructor
    Manager(double theSalary, double thePension, double theMedicalAid, float theTaxPercentage, double theAllowance);

    //function to display salary details
    void Display();

    //function to get entertainment allowance amount
    double getAllowance();

    //overridden function to calculate the tax
    double calcTax(double grossPay, double deductions, double allowance);

    //overridden function to calculate the gross pay
    double calcGrossPay();



private:
    //entertainment allowance
    double Allowance;
};

//overloaded constrcutor
Manager::Manager(double theSalary, double thePension, double theMedicalAid, float theTaxPercentage, double theAllowance):Employee(theSalary, thePension, theMedicalAid, theTaxPercentage)
{
    Allowance = theAllowance;
}
//accessor for entertainment allowance
double Manager::getAllowance()
{
    return Allowance;
}

//function to display salary details
void Manager::Display()
{
    cout<<"\nThe details of the manager's salary are the following: \n";


    cout << "\nbasic salary: R" <<fixed<<setprecision(2)<<getBasicSalary() << endl;
    cout << "pension amount: R" <<fixed<<setprecision(2)<< getPension() << endl;
    cout << "medical aid amount: R" <<fixed<<setprecision(2)<< getMedicalAid() << endl;
    cout << "Allowance: R" <<fixed<<setprecision(2)<< Allowance << endl;
    cout << "% tax paid: " <<fixed<<setprecision(2)<< getTaxPercentage();

}

double Manager::calcTax(double grossPay, double deductions, double allowance)
{
      float taxP = getTaxPercentage();
    double taxAmount = taxP*(grossPay-deductions);

        return taxAmount;
}

    //function to calculate gross pay
double Manager::calcGrossPay()
    {
        //get the values
        double theBasicSalary = getBasicSalary();
        double thePension = getPension();
        double theMed= getMedicalAid();
        double theAllowance = getAllowance();

        //calculate gross salary
        double grossPay = theBasicSalary+thePension+theMed+theAllowance;

        return grossPay;

    }
