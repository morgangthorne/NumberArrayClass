#include "NumberArray.h"
#include <iostream>

using namespace std;

//Costruct
NumberArray::NumberArray(int s) {

	if (s <= 0)
		Size = Max_Size;
	else
		Size = s;

	Numbers = new double[Size];

	for (int i = 0; i < Size; i++)
		Numbers[i] = 0.0;

}

//Destruct
NumberArray::~NumberArray() {

	cout << "Destructor is running" << endl;

	delete[] Numbers;
}

//Mutator
void NumberArray::SetNumber(int Index, double Value) {

	if (Index < 0 || Index >= Size) {
		
		cout << "Index is out of bounds of the array, number not stored";

		return;
	}

	Numbers[Index] = Value;

}


//Accessor