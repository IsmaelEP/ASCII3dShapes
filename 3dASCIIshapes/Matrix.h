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
	


private:
	vector <vector<vector<int>>> vvv;
	int length = 0, width = 0, height = 0;
};
