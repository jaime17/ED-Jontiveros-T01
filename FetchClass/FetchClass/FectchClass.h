#pragma once
class FectchClass
{
public:
	FectchClass();
	virtual void setArray(int[]) = 0;
	virtual int* getArray() = 0;
	virtual void showArray() = 0;
	virtual void showFetch(int) = 0;
	virtual void showArray(int[]) = 0;
	~FectchClass();

protected:
	int* myArray; 
	virtual int* RandArray(int) = 0;
};
