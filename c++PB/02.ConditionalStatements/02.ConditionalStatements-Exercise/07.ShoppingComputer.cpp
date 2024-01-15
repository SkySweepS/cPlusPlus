#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>
#include<math.h>
using namespace std;




int main() {

  double budget;
  cin >> budget;
  int videoCardN;
  cin >> videoCardN;
  int procesorsN;
  cin >> procesorsN;
  int ramN;
  cin >> ramN;

  const double videoCardPrice = 250.00;

  double procesorPrice = (videoCardN * videoCardPrice) * 0.35;
  double ramPrice = (videoCardN * videoCardPrice) * 0.1;

  double total = (videoCardPrice * videoCardN) + (procesorPrice * procesorsN) + (ramPrice * ramN);

  if (videoCardN >= procesorsN){
    total *= 0.85;
  }
  
  cout.setf(ios::fixed);
  cout.precision(2);
  if(total <= budget){
    cout << "You have " << budget - total << " leva left!" << endl;
  }
  else if(total > budget){
    cout << "Not enough money! You need " << total - budget << " leva more!" << endl;
  }

  return 0;
}