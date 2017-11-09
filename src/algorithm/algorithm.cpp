#include "algorithm.h"
#include <stdlib.h>

void algorithm() {
	int a[10] = { 35, 36, 549, 0, 256, 45, 96, 42, 685, 12 };
	int length = sizeof(a) / sizeof(int);
	comm::print(a, length);
	quickSort(a, length);
	comm::print(a, length);

	qsort(a, length, sizeof(int), comm::compare);
	comm::print(a, length);

}
