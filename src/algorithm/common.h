/*
 * common.h
 *
 *  Created on: 2017Äê11ÔÂ8ÈÕ
 *      Author: zhangyq
 */

#ifndef ALGORITHM_COMMON_H_
#define ALGORITHM_COMMON_H_
#include <iostream>

namespace comm {
template<typename T>
void swap(T &src, T &dest) {

	T tmp;
	tmp = src;
	src = dest;
	dest = tmp;
}

template<typename T>
void print(T &a, int length) {

	for (int i = 0; i < length; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

}

int compare(const void *a, const void *b);

}

#endif /* ALGORITHM_COMMON_H_ */
