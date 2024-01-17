#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <math.h>



using namespace std;

int main() {
	
 int mangolii;
 cin >> mangolii;
 int zumbiul;
 cin>> zumbiul;
 int rose;
 cin >> rose;
 int kaktus;
 cin >> kaktus;
 double giftPrice;
 cin >> giftPrice;
 
 double mangoliiPrice = 3.25 * mangolii;
 double zumbiulPrice = 4.0 * zumbiul;
 double rosePrice = 3.50 * rose;
 double kaktuaPrice = 8.00 * kaktus;
 double total = (mangoliiPrice + zumbiulPrice + rosePrice + kaktuaPrice) * 0.95;
 
 if(total >= giftPrice){
 	cout << "She is left with " << floor(total - giftPrice) << " leva." << endl;
 }
 else {
 	cout << "She will have to borrow " << ceil(giftPrice - total) << " leva." << endl;
 }

  return 0;
}

