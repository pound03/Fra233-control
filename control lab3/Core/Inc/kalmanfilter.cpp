/*
 * kalmanfilter.cpp
 *
 *  Created on: 15 เม.ย. 2565
 *      Author: weera
 */

#include <kalmanfilter.h>

kalman_filter::kalman_filter() {
	static matrix buf1(3, 1);
	predictX_old = buf1;
	static matrix buf2(3, 3);
	P_old = buf2;
	float buf_val = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };
	static matrix buf3(3, 3, buf_val);
	I33=buf3;
}

void kalman_filter::setAtoD(matrix a_in,matrix b_in,matrix c_in,matrix d_in){
	A=a_in;B=b_in,C=c_in;D=d_in;
}
void kalman_filter::setQGR(matrix q_in,matrix g_in,matrix r_in){
	Q=q_in;G=g_in;R=r_in;
}

void kalman_filter::run(matrix u_in, matrix y_in) {
	U = u_in;
	Y = y_in;
	doKalman_gain();
	doPredict_y();
	doCorrect_p();
	doCorrect();
	// Correct
	doPredict_x();
	doPredict_p();
	// Predict
	predictX_old = predictX_new;
	P_old = P_new;
	//update
}
