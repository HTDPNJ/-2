#include "MyCircle.h"

void MyCircle::setCircle(int _r, int _x0, int _y0)
{
	r = _r;
	x0 = _x0;
	y0 = _y0;
}

int MyCircle::judge(MyPoint & myp)
{
	int d = (x0 - myp.getX1())*(x0 - myp.getX1()) + (y0 - myp.getY1()*(y0 - myp.getY1()));
	if (d <= r) {
		return 1;
	}
	else {
		return 0;
	}
}
