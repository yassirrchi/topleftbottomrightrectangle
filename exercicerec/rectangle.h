#include"point.h"
class rectangle
{	  
private:
	point *TL;
	point *BR;
public:
	rectangle(float xtl, float ytl, float xbr, float ybr);
	float perimetre();
	float aire();//surface
	bool pointinrect(point& p);
	bool issquare();
	float length();
	float width();
	void showalldata();

};

