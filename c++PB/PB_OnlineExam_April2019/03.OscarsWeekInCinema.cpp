#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>



using namespace std;

int main() {
	
	string movieName;
	getline(cin, movieName);
	string hallType;
	getline(cin, hallType);
	int boughtTickets;
	cin >> boughtTickets;
	double ticketPrice = 0;
	
	if(movieName == "A Star Is Born"){
		if(hallType == "normal"){
			ticketPrice = 7.50;
		}
		else if(hallType == "luxury"){
			ticketPrice = 10.50;
		}
		else if(hallType == "ultra luxury"){
			ticketPrice = 13.50;
		}
		
	}
	else if(movieName == "Bohemian Rhapsody"){
		if(hallType == "normal"){
			ticketPrice = 7.35;
		}
		else if(hallType == "luxury"){
			ticketPrice = 9.45;
		}
		else if(hallType == "ultra luxury"){
			ticketPrice = 12.75;
		}
	}
	else if(movieName == "Green Book"){
		if(hallType == "normal"){
			ticketPrice = 8.15;
		}
		else if(hallType == "luxury"){
			ticketPrice = 10.25;
		}
		else if(hallType == "ultra luxury"){
			ticketPrice = 13.25;
		}
	}
	else if(movieName == "The Favourite"){
		if(hallType == "normal"){
			ticketPrice = 8.75;
		}
		else if(hallType == "luxury"){
			ticketPrice = 11.55;
		}
		else if(hallType == "ultra luxury"){
			ticketPrice = 13.95;
		}
	}
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	
	cout << movieName << " -> " << ticketPrice * boughtTickets << " lv." << endl;



  return 0;
}