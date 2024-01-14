#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <sstream>



using namespace std;

//Basketball Equipment


int main() {

  string league;
  getline(cin, league);
  string ticketType;
  cin >> ticketType;
  int numberOfTickets;
  cin >> numberOfTickets;
  char picture;
  cin >> picture;

  double ticketPrice = 0;
  double discount = 0;
  double picturePrice = 0;

  if(league == "Quarter final"){
    if(ticketType == "Standard"){
      ticketPrice = 55.50;
    }
    else if(ticketType == "Premium"){
      ticketPrice = 105.20;
    }
    else if(ticketType == "VIP"){
      ticketPrice = 118.90;
    }
  }
  else if(league == "Semi final"){
     if(ticketType == "Standard"){
      ticketPrice = 75.88;
     }
    else if(ticketType == "Premium"){
      ticketPrice = 125.22;
    }
    else if(ticketType == "VIP"){
      ticketPrice = 300.40;
    }
  }
  else if(league == "Final"){
     if(ticketType == "Standard"){
      ticketPrice = 110.10;
     }
    else if(ticketType == "Premium"){
      ticketPrice = 160.66;
    }
    else if(ticketType == "VIP"){
      ticketPrice = 400.00;
    }
  }

  double boughtTickets = ticketPrice * numberOfTickets;

  if(boughtTickets > 4000.00){
    discount = boughtTickets * 0.75;
  }
  else if(boughtTickets <= 4000 && boughtTickets > 2500.00){
    discount = boughtTickets * 0.9;
    if(picture == 'Y'){
      picturePrice = numberOfTickets * 40.00;
      discount += picturePrice;
    }
  }
  else{
    if(picture == 'Y'){
      picturePrice = numberOfTickets * 40;
      discount = boughtTickets + picturePrice;
    }
    else{
      discount = boughtTickets + picturePrice;
    }
  }

  cout.setf(ios::fixed);
  cout.precision(2);

cout << discount << endl;

  return 0;
}

    

    

  
