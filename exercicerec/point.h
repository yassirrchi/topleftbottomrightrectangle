#pragma once
class point
{private:
	float x;               
	float y;
public:
	point(float x ,float y);
	float lenx(point& a);
	float leny(point& a);
	bool betweeenx(point& tl,point& br);
	bool betweeeny(point& tl, point& br);
	float longeur();
	float largeur();

 
};

