#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <climits>
#include <algorithm>
using namespace std;

void totalTime(int n1,int n2,int n3){
 
  int total = n1 + n2 + n3;
  int min = total / 60;
  int sec = total % 60;
  if(sec < 10){
    cout << min << ":0" << sec << endl;
  }
  else{
    cout << min << ":" << sec << endl;
  }
}



int main() {
	int n1;
  cin >> n1;
  int n2;
  cin >> n2;
  int n3;
  cin >> n3;

  totalTime(n1, n2, n3);
	
    return 0;
  }
