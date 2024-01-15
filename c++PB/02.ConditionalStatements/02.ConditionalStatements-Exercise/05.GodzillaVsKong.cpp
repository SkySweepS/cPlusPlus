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




int main() {

  double budget;
  cin >> budget;
  int backgroundPeople;
  cin >> backgroundPeople;
  double clothesPricePerPerson;
  cin >> clothesPricePerPerson;

  double directorPrice = budget * 0.1;
  double clothesPrice = backgroundPeople * clothesPricePerPerson;
  if(backgroundPeople > 150){
    clothesPrice *= 0.9;
  }
  double totalMoviePrice = directorPrice + clothesPrice;

  
  
  cout.setf(ios::fixed);
  cout.precision(2);

  if(budget >= totalMoviePrice){
    cout << "Action!" << endl;
    cout << "Wingard starts filming with " << budget - totalMoviePrice << " leva left." << endl;
  }
  else{
    cout << "Not enough money!" << endl;
    cout << "Wingard needs " << totalMoviePrice - budget << " leva more." << endl;
  }
  

  return 0;
}

    

    

  
