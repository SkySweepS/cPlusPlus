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

  double wRecord;
  cin >> wRecord;
  double distance;
  cin >> distance;
  double timeFor1M;
  cin >> timeFor1M;

  double seconds = distance * timeFor1M;
 double swimTime = distance / 15;
  double slow = floor(swimTime) * 12.5;
  double total = seconds + slow;
  cout.setf(ios::fixed);
  cout.precision(2);
 
  if(total < wRecord){
    cout << "Yes, he succeeded! The new world record is " << total << " seconds." << endl;

  }
  else if(total >= wRecord) {
    cout << "No, he failed! He was " << total - wRecord << " seconds slower." << endl;
  }
  


  

  return 0;
}