/*
 * common.cpp
 *
 *  Created on: 2017��11��9��
 *      Author: zhangyq
 */

#include "common.h"

int comm::compare(const void *a, const void *b) {
	return -(*(int *) a - *(int *) b);  //��������
}

