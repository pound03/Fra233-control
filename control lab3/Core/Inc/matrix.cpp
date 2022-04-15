/*
 * matrix.cpp
 *
 *  Created on: 14 เม.ย. 2565
 *      Author: weera
 */

#include <matrix.h>

matrix::matrix() {
	d_x = 1;
	d_y = 1;
	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 1; ++j) {

		}
		data[i][j] = 1.0;
	};

}
matrix::matrix(int x, int y) {
	d_x = x;
	d_y = y;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; ++j) {
			data[i][j] = 1.0;
		}

	};
	//cout << "con_xy";
}
matrix::matrix(int x, int y, float *data_in) {
	d_x = x;
	d_y = y;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; ++j) {
			data[i][j] = data_in[i + j];
		}

	};
	//cout << "con_xy";
}
/*
 matrix::~matrix(){
 for (int i = 0; i < d_x; i++)
 {
 delete data[i];
 };
 delete [] data;
 }
 */
matrix matrix::plus(matrix &m) {
	matrix result;
	result.setx(d_y);
	result.sety(d_x);

	for (int y = 0; y < d_y; y++) {
		for (int x = 0; x < d_x; x++) {
			int total = 0;
			total = data[x][y] + m.data[x][y];

			result.data[x][y] = total;
			// printf(" = %d\n",total);
		}
	}
	return result;
}
matrix matrix::operator+(matrix &m) {
	matrix result;
	result.setx(d_y);
	result.sety(d_x);

	for (int y = 0; y < d_y; y++) {
		for (int x = 0; x < d_x; x++) {
			int total = 0;
			total = data[x][y] + m.data[x][y];

			result.data[x][y] = total;
			// printf(" = %d\n",total);
		}
	}
	return result;
}

matrix matrix::operator-(matrix &m) {
	matrix result;
	result.setx(d_y);
	result.sety(d_x);

	for (int y = 0; y < d_y; y++) {
		for (int x = 0; x < d_x; x++) {
			int total = 0;
			total = data[x][y] - m.data[x][y];

			result.data[x][y] = total;
			// printf(" = %d\n",total);
		}
	}
	return result;
}

matrix matrix::operator*(matrix &m) {
	matrix result;
	result.setx(d_y);
	result.sety(m.d_x);

	for (int y = 0; y < d_y; y++) {
		for (int x = 0; x < m.d_x; x++) {
			int total = 0;
			for (int k = 0; k < d_x; k++) {
				total = total + data[k][y] * m.data[x][k];
			}
			result.data[x][y] = total;
		}
	}
	return result;
}

//matrix matrix::operator/(matrix &m)

void matrix::setx(int x) {
	d_x = x;
}
void matrix::sety(int y) {
	d_y = y;
}
