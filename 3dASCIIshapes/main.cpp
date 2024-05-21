#include <iostream>
#include <Matrix.h>

using namespace std;

int main()
{
	Matrix m(10, 10, 10);

	cube cu(3, 3, 3);

	m.cubeInMatrix(cu);

	m.shiftMatrix(0, 3, 3);


	m.outMatrix();








	return 0;
}