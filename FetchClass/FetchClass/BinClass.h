#pragma once
#include "FectchClass.h"
#include "SortClasss.h"

class BinClass : public FectchClass, public SortClasss {
public:
	BinClass();
	int bFetch(int);
	static int bFetch(int[], int);

	void setArray(int[]);
	int* getArray();
	void showArray();
	void showFetch(int);
	void showArray(int[]);

	~BinClass();

	//protected:
	int* RandArray(int);
};