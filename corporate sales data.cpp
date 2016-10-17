#include <iostream>
#include <string>
using namespace std;


struct CompanyDivision {
	string DivisionName;
	int FirstQuarter;
	int SecondQuarter;
	int ThirdQuarter;
	int FourthQuarter;
	int TotalAnnualSales;
	int AverageQuarterlySales;
};

void printCompanyDivision(CompanyDivision companydivision);

int main() 
{
	int branch;
	cout << "Choose branch: ";
	cin >> branch;
	
	CompanyDivision east;
	east.DivisionName = "East";
	cout << "Type first quarter: ";
	cin>>east.FirstQuarter;
	cout << "Type second quarter: ";
	cin>>east.SecondQuarter;
	cout << "Type third quarter: ";
	cin>>east.ThirdQuarter;
	cout << "Type fourth quarter: ";
	cin>>east.FourthQuarter;
	east.TotalAnnualSales = east.FirstQuarter+east.SecondQuarter+east.ThirdQuarter+east.FourthQuarter;
	east.AverageQuarterlySales = east.TotalAnnualSales/4;
	printCompanyDivision(east);
	
	return 0;
}
void printCompanyDivision(CompanyDivision companydivision) {
	cout<<companydivision.DivisionName<<endl;
	cout<<companydivision.TotalAnnualSales<<endl;
	cout<<companydivision.AverageQuarterlySales<<endl;
}
