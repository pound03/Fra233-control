/*
 * kalmanfilter.h
 *
 *  Created on: 15 เม.ย. 2565
 *      Author: weera
 */

#ifndef INC_KALMANFILTER_H_
#define INC_KALMANFILTER_H_

#include "matrix.h"
class kalman_filter {
public:
	matrix A,B,C,D,R,G,Q;

	kalman_filter();
	void kalman_gain();
	void correct_p();
	void predict_y();
	void correct();
	void predict();
	void predict_x();
	void predict_p();
	void run(matrix u,matrix y);

};

#endif /* INC_KALMANFILTER_H_ */
