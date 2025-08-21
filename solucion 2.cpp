#include <iostream>
using namespace std;

int howManySeconds(int hours){
    return hours * 60 * 60;
}

int main(){
    int seconds1 = howManySeconds(2);
    cout << "2 hours is " << seconds1 << " seconds." << endl;
    
    int seconds2 = howManySeconds(7);
    cout << "7 hours is " << seconds2 << " seconds." << endl;
    
    return 0;
}
 
