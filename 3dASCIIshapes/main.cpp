#include <iostream>
#include <Matrix.h>

using namespace std;

int main()
{
	Matrix m(10, 10, 10);

	cube cu(3, 3, 3);

	m.cubeInMatrix(cu);

	m.shiftMatrix(3, 3, 3);

	m.perspect();

	m.outMatrix();







	return 0;
}