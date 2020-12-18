
#include <iostream>
#include <cmath>
#include "point.h"
#include "rectangle.h"
#include <conio.h>
using namespace std;
int main()
{   
    float tlx, tly, brx, bry;
    reset:
    cout<<"\n";
    cout << "Hi there good to see you please enter the rectangle's TOP-LEFT x value \n";
    cin >> tlx;
    cout << "\nGreat, now enter TOP-LEFT y value \n";
    cin >> tly;
    cout << "\nDone for TL\n";
    xeror:
    cout << "\n<Note: BOTTOM-RIGHT's x must be greater than TOP-LEFT's x \n";

    cout << "\nnow enter BOTTOM-RIGHT x value \n";
    cin >> brx;
    if (brx < tlx)
        goto xeror;
    yeror:
    cout << "\n<Note: BOTTOM-RIGHT's y must be smaller than TOP-LEFT's y \n";
    cout << "\nGreat, now enter BOTTOM-RIGHT y value \n";   
    cin >> bry;
    if (bry > tly)
        goto yeror;
    rectangle a(tlx,tly,brx,bry);
    unsigned int choice;
    choice:
     cout << "\nDone. TAP 1 to show rectangle data, 2 to test if a point belong to the rectangle, 3 re-enter rectangle values and 0 to end \n";
     do {
         cin >> choice;
     } while (choice != 1 && choice != 2 && choice != 3 && choice!=0);

     switch (choice) {
     case 1:
         system("CLS");
         a.showalldata();
         goto choice;
         break;
     case 3:
         system("CLS");
         goto reset;
         break;
     case 0:
         break;
     case 2:
         float x, y;
         system("CLS");
         cout << "To test if a point belongs to the rectangle enter the values\n";
         cout << "\nenter x value\n";
         cin >> x;
         cout << "\nenter y value\n";
         cin >> y;
         point t(x,y);
         if (a.pointinrect(t))
             cout << "it belongs to the rectangle\n";
         else
             cout << "doesnt belong to the rectangle\n";
         goto choice;
         break;
     
     
       }

     
     

    

}
 