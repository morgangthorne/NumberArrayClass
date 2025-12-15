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
double NumberArray::GetNumber(int Index) const {

	if (Index < 0 || Index >= Size) {
		cout << "Index is out of bounds from array, returning to default value.";

		return Default_Value;
	}

	return Numbers[Index];

}

//Calculation For min
double NumberArray::GetMin() const {

	double Min = Numbers[0];

	for (int i = 1; i < Size; i++) {

		if (Numbers[i] < Min)
			Min = Numbers[i];
	}

	return Min;
}

//Calculation for Max
double NumberArray::GetMax() const {

	double Max = Numbers[0];

	for (int i = 1; i < Size; i++) {

		if (Numbers[i] > Max)
			Max = Numbers[i];
	}

	return Max;
}

//Calculation for Average
double NumberArray::GetAverage() const {

	double Total = 0.0;

	for (int i = 0; i < Size; i++)

		Total += Numbers[i];

	return Total / Size;
}