#include <iostream>
using namespace std;
double b{1.001};


int main(){
  while(b < 10000){
    b *= 1.001;
    cout << b << endl;
  }
  return 0;
}
