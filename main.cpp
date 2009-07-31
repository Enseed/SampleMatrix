#include "Matrix.h"

int main(int argc, const char *argv[])
{
	float mat[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
	Matrix3f m3f = Matrix3f::identity();
	Matrix4f m4f = m3f.addBackCol(MatrixCol3f::zero()).addBackRow(MatrixRow4f::zero());;
	m4f = m4f + Matrix4f::fromPtr(mat);
	printf("%s\n", m4f.transposed().serialize().c_str());
	return 0;
}
