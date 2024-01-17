#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;


int main() {

int n;
cin >> n;
int leftSum = 0;
int rightSum = 0;
for (int i = 1; i <= n; i++){

  int num;
  cin >> num;
  leftSum += num;
}

for (int i = 0; i < n; i++){
  int num;
  cin >> num;
  rightSum += num;
}

if (leftSum == rightSum) {
  cout << "Yes, sum = " << rightSum << endl;
}
else {
  cout << "No, diff = " << abs(leftSum - rightSum) << endl;
}


  return 0;
}

