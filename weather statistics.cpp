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

void printWeatherData (WeatherData);

int main() {
	cout << "January"<<endl;
	WeatherData January;
	January.Month="January";
	cout << "Total Rainfall: ";
	cin >> January.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> January.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> January.LowTemperature;
	cout << "Average Temperature: ";
	January.AverageTemperature = January.HighTemperature+January.LowTemperature/2;
    
    cout << "February"<<endl;
	WeatherData February;
	February.Month="February";
	cout << "Total Rainfall: ";
	cin >> February.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> February.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> February.LowTemperature;
	cout << "Average Temperature: ";
	February.AverageTemperature = February.HighTemperature+February.LowTemperature/2;
	
	cout << "March"<<endl;
	WeatherData March;
	March.Month="March";
	cout << "Total Rainfall: ";
	cin >> March.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> March.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> March.LowTemperature;
	cout << "Average Temperature: ";
	March.AverageTemperature = March.HighTemperature+March.LowTemperature/2;
	
	cout << "April"<<endl;
	WeatherData April;
	April.Month="April";
	cout << "Total Rainfall: ";
	cin >> April.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> April.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> April.LowTemperature;
	cout << "Average Temperature: ";
	April.AverageTemperature = April.HighTemperature+April.LowTemperature/2;
	
	cout << "May"<<endl;
	WeatherData May;
	May.Month="May";
	cout << "Total Rainfall: ";
	cin >> May.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> May.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> May.LowTemperature;
	cout << "Average Temperature: ";
	May.AverageTemperature = May.HighTemperature+May.LowTemperature/2;
	
	cout << "June"<<endl;
	WeatherData June;
	June.Month="June";
	cout << "Total Rainfall: ";
	cin >> June.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> June.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> June.LowTemperature;
	cout << "Average Temperature: ";
	June.AverageTemperature = June.HighTemperature+June.LowTemperature/2;
	
	cout << "July"<<endl;
	WeatherData July;
	July.Month="July";
	cout << "Total Rainfall: ";
	cin >> July.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> July.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> July.LowTemperature;
	cout << "Average Temperature: ";
	July.AverageTemperature = July.HighTemperature+July.LowTemperature/2;
	
	cout << "August"<<endl;
	WeatherData August;
	August.Month="August";
	cout << "Total Rainfall: ";
	cin >> August.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> August.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> August.LowTemperature;
	cout << "Average Temperature: ";
	August.AverageTemperature = August.HighTemperature+August.LowTemperature/2;
	
	cout << "September"<<endl;
	WeatherData September;
	September.Month="September";
	cout << "Total Rainfall: ";
	cin >> September.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> September.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> September.LowTemperature;
	cout << "Average Temperature: ";
	September.AverageTemperature = September.HighTemperature+September.LowTemperature/2;
	
	cout << "October"<<endl;
	WeatherData October;
	October.Month="October";
	cout << "Total Rainfall: ";
	cin >> October.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> October.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> October.LowTemperature;
	cout << "Average Temperature: ";
	October.AverageTemperature = October.HighTemperature+October.LowTemperature/2;
	
	cout << "November"<<endl;
	WeatherData November;
	November.Month="November";
	cout << "Total Rainfall: ";
	cin >> November.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> November.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> November.LowTemperature;
	cout << "Average Temperature: ";
	November.AverageTemperature = November.HighTemperature+November.LowTemperature/2;
	
	cout << "December"<<endl;
	WeatherData December;
	December.Month="December";
	cout << "Total Rainfall: ";
	cin >> December.TotalRainfall;
	cout << "High Temperatures: ";
	cin >> December.HighTemperature;
	cout << "Low Temperatures: ";
	cin >> December.LowTemperature;
	cout << "Average Temperature: ";
	December.AverageTemperature = December.HighTemperature+December.LowTemperature/2;
	
	WeatherData weatherdataarray[]={January, February, March, April, May, June, July, August, September, October, November, December};
	
	for (int i=0; i<12; i++) {
		printWeatherData(weatherdataarray[i]);
	}
	return 0;
}

void printWeatherData(WeatherData weatherdata){
	cout << weatherdata.Month<<endl;
	cout << weatherdata.AverageTemperature<<endl;
}
