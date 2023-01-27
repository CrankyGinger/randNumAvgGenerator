#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ios>
#include <iomanip>
using namespace std;

int main() {

  srand(time(0));
  double randNum1;
    randNum1 = rand () % 100 + 1;
  double randNum2;
    randNum2 = rand () % 100 + 1;
  double randNum3;
    randNum3 = rand () % 100 + 1;
  double randNum4;
    randNum4 = rand () % 100 + 1;
  double randNum5;
    randNum5 = rand () % 100 + 1;
  double average;
    average = (randNum1 + randNum2 + randNum3 + randNum4 + randNum5) / 5;

  cout << "Random numbers between 1 and 100: " << endl;
  cout << randNum1 << endl;
  cout << randNum2 << endl;
  cout << randNum3 << endl;
  cout << randNum4 << endl;
  cout << randNum5 << endl;
  cout << "The average is: " << std::fixed <<  std::setprecision(2) << average << endl;
  
  return 0;
}