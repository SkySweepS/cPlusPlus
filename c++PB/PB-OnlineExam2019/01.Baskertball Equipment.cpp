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

  double yearTax;
  cin >> yearTax;

  double jordanPrice = yearTax - (yearTax * 0.40);
  double clothsPrice = jordanPrice - (jordanPrice * 0.20);
  double ballPrice = clothsPrice / 4;
  double accesoaries = ballPrice / 5;

  double total = yearTax + jordanPrice + clothsPrice + ballPrice + accesoaries;
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << total << endl;


  return 0;
}

    

    

  
