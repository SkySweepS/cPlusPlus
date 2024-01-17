#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <string>
#include <climits>
using namespace std;


int main() {
  
  int number;
  cin >> number;
  
  double bus = 0;
  double truck = 0;
  double train = 0;
  
  double busPrice = 0;
  double truckPrice = 0;
  double trainPrice = 0;
  
  double tons = 0;
  
  double busTons = 0;
  double truckTons = 0;
  double trainTons = 0;
  
  for(int i = 0; i < number; i++){
    int stock;
    cin >> stock;
    tons += stock;
    if(stock <= 3){
      bus++;
      busPrice += stock * 200;
      busTons += stock;
    }
    else if (stock > 3 && stock <= 11){
      truck++;
      truckPrice += stock * 175;
      truckTons += stock;
    }
    else if(stock > 11){
      train++;
      trainPrice += stock * 120;
      trainTons += stock;
    }
    
    
  }
  
  
  double average = (busPrice + truckPrice + trainPrice) / tons;
  
  double pBus = (busTons/ tons) * 100;
  double pTruck = (truckTons / tons) * 100;
  double pTrain = (trainTons / tons) * 100;
  cout.setf (ios::fixed);
  cout.precision(2);
/*  
  cout << busPrice << endl;
  cout << truckPrice << endl;
  cout << trainPrice << endl;
  */
   cout << average << endl;
  cout << pBus << "%" << endl;
  cout << pTruck << "%" << endl;
  cout << pTrain << "%" << endl;




  return 0;
}

   
   
    
