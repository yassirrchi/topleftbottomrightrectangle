#include "point.h"
#include <cmath>

point::point(float x, float y) {

	this->x = x;
	this->y = y;
};
float point::lenx(point& p) {
	

	return abs(this->x-p.x);

}
float point::leny(point& p) {


	return abs(this->y - p.y);

}
bool point::betweeenx(point& tl,point& br) {
	bool res= (x >= tl.x && x <= br.x);
	return res;

}
bool point::betweeeny(point& tl, point& br) {
	bool res = (y <= tl.y && y >= br.y);
	return res;

}