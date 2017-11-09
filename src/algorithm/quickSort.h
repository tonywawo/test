#ifndef ALGORITHM_QUICK_SORT_H_
#define ALGORITHM_QUICK_SORT_H_
#include <iostream>
#include "common.h"

using namespace std;

/*template<typename T>
 void quickSort(T a[],int length) {*/
template<typename T>
void quickSort(T a[], int length) {
	int i = 0;

	int j = length - 1;
	T value = a[i];
	while (i < j) {
		//cout << "before:";
		comm::print(a, length);
		while (i < j) {
			if (a[j] < value) {
				comm::swap(a[i], a[j]);
				break;
			}
			--j;
		}
		while (i < j) {
			if (a[i] > value) {
				comm::swap(a[i], a[j]);
				break;
			}
			++i;
		}
		//cout << "end:";
		comm::print(a, length);
	}
	if (i > 1) {
		quickSort(a, i);
	}
	if (length - i - 1 > 1) {
		quickSort(a + i + 1, length - i - 1);
	}

}

#endif //ALGORITHM_QUICK_SORT_H_
