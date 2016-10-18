#include <iostream>
#include <string>
using namespace std;

struct SoccerPlayer {
	string PlayerName;
	int PlayerNumber;
	int PointsScored;
};

int main()
{
	SoccerPlayer player;
	float total[12];
	for (int i = 0; i<12;i++)
	player.PlayerName;
	{
		
		cout << "Enter player name: ";
		cin >> player.PlayerName;
		cout<< "Enter player number: ";
		cin >> player.PlayerNumber;
		cout << "Enter Points scored: ";
		cin >> player.PointsScored;
	}
	
	cout << "Player" <<"Number"<<"Points scored"<<"\t" "\t" "\t"<<endl;
	cout << player.PlayerName<<player.PlayerNumber<<player.PointsScored<<"\t" "\t" "\t"<<endl;
	
	
}
