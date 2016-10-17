#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MovieData{
	string Title;
	string Director;
	int YearReleased;
	string RunningTime;
	
};

void printmovie(MovieData moviedata);
int main() {
	MovieData MOVIE1;
	MOVIE1.Title="JAWS";
	MOVIE1.Director="Steven Spielberg";
	MOVIE1.YearReleased=1975;
	MOVIE1.RunningTime="124 minutes";
	
	MovieData MOVIE2;
	MOVIE2.Title="John Wick";
	MOVIE2.Director="Chad Stahelski, David Leitch";
	MOVIE2.YearReleased=2014;
	MOVIE2.RunningTime="101 minutes";
	
	MovieData moviearray[] ={MOVIE1, MOVIE2};
	
	for (int i=0; i<2; i++){
		printmovie(moviearray[i]);
	}
	return 0;
	
}

void printmovie(MovieData moviedata){
	cout << moviedata.Title<<endl;
	cout << moviedata.Director<<endl;
	cout << moviedata.YearReleased<<endl;
	cout << moviedata.RunningTime<<endl;
}
