#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray {
public:

	//Constants
	static const int Max_Size = 10;
	static constexpr double Default_Value = 10000.0;

	//Construct/Destruct
	NumberArray(int size = Max_Size);
	~NumberArray();

	//Mutator
	void SetNumber(int Index, double Value);

	//Accessor
	double GetNumber(int Index) const;

	//Calculation
	double GetMin() const;
	double GetMax() const;
	double GetAverage() const;

	//Test Print
	void Print() const;

private:
	int Size;
	double* Numbers;
};

#endif