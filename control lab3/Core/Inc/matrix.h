/*
 * matrix.h
 *
 *  Created on: 14 เม.ย. 2565
 *      Author: weera
 */

#ifndef INC_MATRIX_H_
#define INC_MATRIX_H_

class matrix {
public:
	int d_x;
	int d_y;
	float data[5][5];
	matrix();
	matrix(int x, int y);
	matrix(int x, int y,float *data_in);
//	virtual ~matrix();
	void setx(int x);
	void sety(int y);
	matrix plus(matrix &m);
	matrix operator+(matrix &m);

	matrix operator-(matrix &m);
	matrix operator*(matrix &m);
	matrix operator/(matrix &m);
};

#endif /* INC_MATRIX_H_ */
