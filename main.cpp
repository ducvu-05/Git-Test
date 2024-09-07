#include <iostream>

using namespace std;

int sum(int n);
int product(int n);

int main() {
  int n;

  cout << "Enter n: ";
  cin >> n;
  cout << endl;

  int printSum = 0;
  int printProduct = 0;
  printSum = sum(n);
  printProduct = product(n);
  cout <<printSum << endl;
  cout <<printProduct << endl;
  return 0;
}

int sum(int n){
  int total = 0;
  for(int i =1; i<=n; i++){
    total += i;
  }
  return total;

}


int product(int n){
  int total = 1;
  for(int i=1; i<=n; i++){
    total *= i;
  }
  return total;
}
