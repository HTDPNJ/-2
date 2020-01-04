#include <iostream>
using namespace std;
#include "MyCircle.h"
#include "MyPoint.h"
int main()
{
	MyCircle c1;
	MyPoint p1;
	c1.setCircle(2, 3, 3);
	p1.setPoint(7, 7);
	int jud = c1.judge(p1);
	if (jud == 0) {
		cout << "点在圆外" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}
}