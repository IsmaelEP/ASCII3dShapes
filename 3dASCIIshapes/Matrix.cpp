#include <Matrix.h>

Matrix::Matrix(int _length, int _width, int _height)
	: length(_length), width(_width), height(_height),
	vvv(_length, vector<vector<int>>(_width, vector<int>(_height, 1)))
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
			cout  << endl;
		}
		cout  << endl;
	}
	cout  << endl;
}

void Matrix::cubeInMatrix(cube c)
{
	int cL = c.getL();
	int cW = c.getW();
	int cH = c.getH();

	for (int i = 0; i < cW; i++)
	{
		
		for (int j = 0; j < cH; j++)
		{
			
			for (int k = 0; k < cW; k++)
			{
				vvv[i][j][k] = 3;
			}
		}

	}
}

void Matrix::shiftMatrix(int LR, int UD = 0, int FB = 0)
{
	int L = this->getL();
	int W = this->getW();
	int H = this->getH();


	Matrix temp(L, W, H);
	
	for (int i = 0; i < L; i++)
	{

		for (int j = 0; j < W; j++)
		{

			for (int k = 0; k < H; k++)
			{
				if ((i + LR) < L && (j + UD) < W && (k + FB) < H)
				{
					temp.vvv[i + LR][j + UD][k + FB] = this->vvv[i][j][k];
				}
			}
		}
	}

	this->vvv = temp.vvv;
}
