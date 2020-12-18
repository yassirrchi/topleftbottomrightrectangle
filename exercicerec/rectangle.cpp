#include "rectangle.h"
#include <iostream>

rectangle::rectangle(float xtl, float ytl, float xbr, float ybr){
	TL = new point(xtl, ytl);
	BR = new point(xbr, ybr);
 
}
float  rectangle::perimetre() {
	float res=this->TL->lenx(*BR)+this->TL->leny(*BR);
	 

	return res*2;
}
float  rectangle::aire() {
	float res = this->TL->lenx(*BR)*this->TL->leny(*BR);
	return res;
}
bool rectangle::pointinrect(point& p) {

	bool res = p.betweeenx(*TL, *BR);
	res = res && p.betweeeny(*TL, *BR);
	return res;

}
bool rectangle::issquare() {
	bool res = this->TL->lenx(*BR) == this->TL->leny(*BR);
	return res;
}
float rectangle::length() {
	if (TL->lenx(*BR) < TL->leny(*BR))
		return TL->leny(*BR);
	else
		return TL->lenx(*BR);


}
float rectangle::width() {
	if (TL->lenx(*BR) > TL->leny(*BR))
		return TL->leny(*BR);
	else
		return TL->lenx(*BR);


}
void rectangle::showalldata() {

	std::cout << "R E C T A N G L E    D E T A I L S \n\n";
	std::cout << "Lenght: " << this->length()<<"\n";
	std::cout << "Width: " << this->width() << "\n";
	std::cout << "Perimeter: " << this->perimetre() << "\n";
	std::cout << "Surface: " << this->aire() << "\n";
	if(this->issquare())
    std::cout << "The rectangle is square\n";
	else
	std::cout << "The rectangle is not square\n";



	




}

