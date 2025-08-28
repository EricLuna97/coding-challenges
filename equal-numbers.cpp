#include <iostream>
using namespace std;

bool isEqual (int num1, int num2) {
  if (num1 == num2){
      return true;
  }  else{
      return false;
  }
}

int main() {
    int a = 22;
    int b = 21;
    
    if (isEqual(a, b)) {
        cout << "Numbers are equals" << endl;
    }
    else {
        cout << "Numbers are Not equals" << endl;
    }

    return 0; 
}
