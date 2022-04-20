/*
 * cpp_main.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: weera
 */
#include "matrix.h"
#include "main.h"
int maincpp(){
	matrix A(3,3);
	matrix B(3,3);
	matrix C(3,1);
	matrix D(1,1);
	matrix R(1,1);
	matrix G(1,3);
	matrix Q(1,1);
	matrix y(1,1);
	matrix u(1,1);
	float dt = 0.0001;
	float data_A[9] = {1,dt,dt*dt/2,0,1,dt,0,0,1};

	float data_B[3] = {0,0,0};
	float data_C[3] = {1,0,0};
	float data_R[1] = {0.001};
	float buf_g=(dt*dt)/2;
	float data_G[3] = {buf_g,dt,1.0};
	float data_Q[1] = {0.001};
	float data_D[1] = {0};

	float data_y[1] = {0.001};
	float data_u[1] = {0};


	A.read(data_A);
	B.read(data_B);
	C.read(data_C);
	D.read(data_D);
	G.read(data_G);
	Q.read(data_Q);
	R.read(data_R);
	u.read(data_u);
	y.read(data_y);
	while(1){

	}
}


