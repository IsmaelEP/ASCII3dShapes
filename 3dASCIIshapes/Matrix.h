#pragma once
#include <iostream>
#include <vector>
#include <ShapeFormulas.h>


using namespace std;

class Matrix
{
public:
	Matrix(int _length, int _width, int _height);
	int getL() { return length; }
	int getW() { return width; }
	int getH() { return height; }
	void outMatrix();

	void cubeInMatrix(cube c);
	
	void shiftMatrix(int LR, int UD, int FB);

private:
	vector <vector<vector<int>>> vvv;
	int length = 0, width = 0, height = 0;
};
