#include <iostream>
#include <string>
using namespace std;

struct WeatherData {
	string Month;
	float TotalRainfall;
	int HighTemperature;
	int LowTemperature;
	float AverageTemperature;


};



int main()
{
	WeatherData month[12];
	enum mth {JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER};
	float total[12];
	float totalyearly = 0.0;
	for(int i=JANUARY; i<DECEMBER; i++){

		
		cout << "Total Rainfall for month "<< i +1  << " :"<<endl;
		cin >> month[i].TotalRainfall;
		cout << "High Temperature: "<<endl;
		cin >> month[i].HighTemperature;
		cout << "Low Temperature: "<<endl;
		cin >> month[i].LowTemperature;
		cout << "Average Temperature: "<<endl;
		total[i] = (month[i].HighTemperature+month[i].LowTemperature)/2;
		cout << total[i]<<endl;
		totalyearly += total[i];	
	}
	cout << "Yearly average: "<< totalyearly/12;
	
	int highest = 0;
	int lowest = 999999999;
	for(int i=0;i<12;i++){
		if(month[i].HighTemperature>highest){
			highest = month[i].HighTemperature;
		}
		if (month[i].LowTemperature<lowest){
			lowest = month[i].LowTemperature;
		}
	}
	
	return 0;
}


