
#include <iostream>

using namespace std;

int sum(int n);

int main() {
  int n;
  int print = 0;
  print = sum(n);
  cout <<print << endl;
  
  return 0;
}

int sum(int n){
  int total = 0;
  for(int i =0; i<=n; i++){
    total += i;
  }
  return total;

}
