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

//Repainting


int main() {

  double plastic;
  cin >> plastic;
  double paint;
  cin >> paint;
  double grund;
  cin >> grund;
  double workingHours;
  cin >> workingHours;

  double plasticPrice = (plastic + 2) * 1.50;
  double paintPrice = (paint * 1.10) * 14.50;
  double grundPrice = grund * 5.00;
  double plasticBags = 0.40;
  
  double totalMats = plasticPrice + paintPrice + grundPrice + plasticBags;

  double workPrice = (totalMats * 0.30) * workingHours;

  double totalPrice = totalMats + workPrice;
  
  cout.setf(ios::fixed);
  cout.precision(2);


  cout << totalPrice << endl;



  return 0;
}

    

    

  
