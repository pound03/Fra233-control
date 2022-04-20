/*
 * kalmanfilter.cpp
 *
 *  Created on: 15 เม.ย. 2565
 *      Author: weera
 */

#include <kalmanfilter.h>

kalman_filter::kalman_filter() {
	matrix buf1(3, 1);
	predictX_old = buf1;
	matrix buf2(3, 3);
	P_old = buf2;
	float buf_val[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };
	matrix buf3(3, 3, buf_val);
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
	doResult();
	// Predict
	predictX_old = predictX_new;
	P_old = P_new;
	//update
}

void kalman_filter::doKalman_gain(){

//matrix buf=((C*P_old*C.transpose())+R);
//gainK = (P_old*C.transpose())*buf.inv();
}

void kalman_filter::doPredict_y(){
//errorY = Y-((C*predictX_old)+(D*U));
}

void kalman_filter::doCorrect_p(){
//P_old = (I33-(gainK*C))*P_old;
}

void kalman_filter::doCorrect(){
//predictX = (gainK*errorY)+predictX_old;
}

void kalman_filter::doPredict_x(){
//predictX_new = (A*predictX)+(B*U);
}

void kalman_filter::doPredict_p(){
//P_new = ((A*P)*A.transpose())+((G*Q)*G.transpose());
}

void kalman_filter::doResult(){
//resultY = (C*predictX)+(D*U);
//resultX = predictX;
}
