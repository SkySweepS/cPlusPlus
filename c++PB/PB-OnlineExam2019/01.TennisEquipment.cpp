#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <cstring>


using namespace std;





int main() {

  double stickPrice;
  cin >> stickPrice;
  double stickN;
  cin >> stickN;
  double snickersN;
  cin >> snickersN;

  double stickTotalPrice = stickN * stickPrice;
  double snickersPrice = stickPrice / 6;
  double snickersTotalPrice = snickersPrice * snickersN;

  double restPrice = (stickTotalPrice + snickersTotalPrice) * 0.2;
  double totalPrice = stickTotalPrice + snickersTotalPrice + restPrice;

  double playerPrice = totalPrice / 8;
  double sponsorPrice = totalPrice * 7/8;

  cout << "Price to be paid by Djokovic " << floor(playerPrice) << endl;
  cout << "Price to be paid by sponsors " << ceil(sponsorPrice) << endl;
  

  return 0;

}

  
    

    