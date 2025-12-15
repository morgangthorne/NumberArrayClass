// NumberArrayClass.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <iomanip>
#include <random>
#include"NumberArray.h"

using namespace std;

int main()
{

    cout << "Test Constructs" << endl;

    NumberArray a1;
    cout << "Default Constructor: Array size 10" << endl;
    a1.Print();

    NumberArray a2(15);
    cout << "Construct with parameters: Array size 15" << endl;
    a2.Print();


    cout << "Test Mutator" << endl;

    //////////////////
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<>Dist(0.0, 100.0);
    ///////////////////


    for (int i = 0; i < 15; i++)
        a2.SetNumber(i, Dist(gen));

    cout << fixed << setprecision(1);
    cout << "Filled Array: " << endl;
    a2.Print();


    cout << "Attempt to set number out of bounds for index (20): " << endl;
    a2.SetNumber(20, 5.5);

    cout << "Test Accessors" << endl;
    cout << "Accessor item is at an index of 5: " << a2.GetNumber(5) << endl;

    cout << "Accessor item is at an out of bound index of 20: ";
    cout << a2.GetNumber(20) << endl;

    cout << "The Minimum Value of The Array is: " << a2.GetMin() << endl;
    cout << "The Maximum Value of The Array is: " << a2.GetMax() << endl;
    cout << "The Average of The Values in The Array is: " << a2.GetAverage() << endl;

    return 0;
}


