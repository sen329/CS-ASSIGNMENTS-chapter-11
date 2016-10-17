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
	cout << "East Division"<<endl;
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
	
	cout << "West Division"<<endl;
	CompanyDivision west;
	east.DivisionName = "West";
	cout << "Type first quarter: ";
	cin>> west.FirstQuarter;
	cout << "Type second quarter: ";
	cin>> west.SecondQuarter;
	cout << "Type third quarter: ";
	cin>> west.ThirdQuarter;
	cout << "Type fourth quarter: ";
	cin>> west.FourthQuarter;
	west.TotalAnnualSales = west.FirstQuarter+west.SecondQuarter+west.ThirdQuarter+west.FourthQuarter;
	west.AverageQuarterlySales = west.TotalAnnualSales/4;
	
	cout << "North Division"<<endl;
	CompanyDivision north;
	east.DivisionName = "North";
	cout << "Type first quarter: ";
	cin>>north.FirstQuarter;
	cout << "Type second quarter: ";
	cin>>north.SecondQuarter;
	cout << "Type third quarter: ";
	cin>>north.ThirdQuarter;
	cout << "Type fourth quarter: ";
	cin>>north.FourthQuarter;
	north.TotalAnnualSales = north.FirstQuarter+north.SecondQuarter+north.ThirdQuarter+north.FourthQuarter;
	north.AverageQuarterlySales = north.TotalAnnualSales/4;
	
	cout << "South Division"<<endl;
	CompanyDivision south;
	east.DivisionName = "South";
	cout << "Type first quarter: ";
	cin>>south.FirstQuarter;
	cout << "Type second quarter: ";
	cin>>south.SecondQuarter;
	cout << "Type third quarter: ";
	cin>>south.ThirdQuarter;
	cout << "Type fourth quarter: ";
	cin>>south.FourthQuarter;
	south.TotalAnnualSales = south.FirstQuarter+south.SecondQuarter+south.ThirdQuarter+south.FourthQuarter;
	south.AverageQuarterlySales = south.TotalAnnualSales/4;
	
	CompanyDivision divisionnamearray[]={east, west, north, south};
	
	for (int i = 0; i <4 ; i++){
		printCompanyDivision(divisionnamearray[i]);
	}
	
	return 0;
}
void printCompanyDivision(CompanyDivision companydivision) {
	cout<<companydivision.DivisionName<<endl;
	cout<<companydivision.TotalAnnualSales<<endl;
	cout<<companydivision.AverageQuarterlySales<<endl;
}
