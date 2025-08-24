#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

const int MAX_NUMBERS = 100;

    bool inputNumber (const int numbers[], int number, int size){
    for(int i=0; i<size; ++i){
        if(numbers[i]==number){
            return true;
        }
    }
    return false;
}

    void printInputNumber (const int numbers[], int size){
    cout<< "The input number was: ";
    for(int i=0; i<size; ++i){
        cout<< numbers[i]<<" ,";
    }
}

//Print numbers in ascending order
    void printOrderedNumbers (int numbers[], int size){
    sort(numbers, numbers+size);
    cout<< "Input numbers in ascending order: ";
    for(int i=0; i<size; ++i){
        cout<< numbers[i]<<" ,";
    }
    cout<<endl;
}



    int main(){ 
    int lower_limit, upper_limit, max_attempts; 
    // range limits and max attempts
    cout << "Enter lower limit "; 
    cin >> lower_limit; 
    cout << "Enter upper limit "; 
    cin >> upper_limit;

    // limit validation
    while(lower_limit >= upper_limit){
    cout << "The lower limit must be less than the upper limit. Please enter again. \n";
    cout << "Enter lower limit: ";
    cin >> lower_limit;
    cout << "Enter upper limit: ";
    cin >> upper_limit;
}
    cout << "Enter maximum attempts: ";
    cin >> max_attempts;

    // max attempts validation
    while(max_attempts <= 0){
    cout << "The input must be an integer. \n";
    cout << "Enter maximum attempts: ";
    cin >> max_attempts;
}

    //Generate seed
    srand(time(nullptr));
    int random_number = lower_limit + rand() % (upper_limit - lower_limit + 1);

    int attempt, i;
    bool guessed = false;
    int input_numbers[MAX_NUMBERS];
    int input_numbers_size=0;

    //guess processing loop
    for (i = 0 ; i < max_attempts; ++i){
    cout << "attempt " << (i + 1) << "/" << max_attempts << " Enter a number to guess: ";
    cin >> attempt;
    
    //Out-of-range number validation
    if(attempt < lower_limit || attempt > upper_limit){
        cout << "The input number is out of range ("
        << lower_limit << "-" << upper_limit << "). Enter again. \n";
        --i;
        continue;
        
    }
    
    //check for duplicate numbers
    if(inputNumber (input_numbers, attempt, input_numbers_size)){
        cout<< "This number has already been entered"<< endl;
        --i;
        continue;
    }
    //increment the attempts
    input_numbers[input_numbers_size++]=attempt;
    printInputNumber (input_numbers, input_numbers_size); //print
    
    
    if (attempt < random_number){
        cout << "The number is greater.\n";
    } else if (attempt > random_number){
        cout << "The number is lesser.\n";
    } else {
        cout << "Congratulations, you guessed the number!.\n";
        guessed = true;
        break;
    }
    
    //print remaining attempts
    cout << "You have " << (max_attempts - (i+1)) << " attempts. \n";
    
}


    if(!guessed){
     cout << "Sorry, you have run out of attempts. The number was: " << random_number << "\n";
}    printInputNumber(input_numbers, input_numbers_size); 

    return 0;
 
}
