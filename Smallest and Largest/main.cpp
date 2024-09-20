//
//  main.cpp
//  Smallest and Largest
//
//  Created by Amanpreeet Sandhu on 2024-09-12.
//

#include <iostream>

using namespace std;

int main() {
    //declaring and intializing variables
    int number1{0};
    int number2{0};
    int number3{0};
    int sum{0};
    int average{0};
    int product{0};
    int smallest{0};
    int largest{0};
    
    cout << "Enter three integers\n"; // prompt user for data
    cin >> number1 >> number2 >> number3; // read input from user
    
    sum = number1 + number2 +number3;
    average = (number1 + number2 + number3)/3;
    product = number1 * number2 * number3;
    smallest = number1;
    
    if(number2 < smallest){
        smallest = number2;
    }
    if(number3 < smallest){
        smallest = number3;
    }
    
    largest = number1;
    if(number2 > largest){
        largest = number2;
    }
    if(number3 > largest){
        largest = number3;
    }
    
    // display output
    cout << "Sum is " << sum << endl;
    cout << "Average is " << average << endl;
    cout << "Product is " << product << endl;
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;

}
