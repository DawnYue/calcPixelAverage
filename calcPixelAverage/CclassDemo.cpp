#include "CclassDemo.h"
CclassDemo::CclassDemo() {

}


int CclassDemo::maxVal(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
	return 0;
}