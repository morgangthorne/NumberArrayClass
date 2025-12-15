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