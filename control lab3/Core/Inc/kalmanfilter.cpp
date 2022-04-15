/*
 * kalmanfilter.cpp
 *
 *  Created on: 15 เม.ย. 2565
 *      Author: weera
 */

#include <kalmanfilter.h>


kalman_filter::kalman_filter() {
	// TODO Auto-generated constructor stub

}
void kalman_filter::kalman_gain(){
	matrix buf=(C*P_k_old)*C.transpose();
gain_k=(p_k * C.transpose())*(buf+R)
}

