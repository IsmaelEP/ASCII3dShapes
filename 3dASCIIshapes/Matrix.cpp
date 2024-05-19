#include <Matrix.h>

Matrix::Matrix(int _length, int _width, int _height)
	: length(_length), width(_width), height(_height),
	vvv(_length, vector<vector<int>>(_width, vector<int>(_height, 0)))
{
	// The initialization list takes care of initializing the 3D vector with zeros.
}

void Matrix::outMatrix()
{
	for (int i = 0; i < length ; i++)
	{
		for (int j = 0; j < width; j++)
		{
			for (int k = 0; k < height; k++)
			{
				cout << vvv[i][j][k] << ' ';
			}
			cout << "H" << endl;
		}
		cout << "W" << endl;
	}
	cout << "L" << endl;
}

void cubeInMatrix(cube c)
{

}
