/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.
*/
//Author: Sandra Delatorre

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
   int res, divX, resY, divY, hamming = 0, x=1, y=4;
   while ((x != 0) || (y != 0))
   {
     if (x != 0) {
	res = x % 2;        //res = 1, 0, 0
	divX = x / 2;        //div = 0, 0, 0
     }
     else {
	divX = 0;
	res = 0;
     }

     if (y != 0) {
        resY = y % 2;       //resY = 0, 0, 1
        divY = y / 2;       //divY = 2, 1, 0
     }
	   
     else{
	divY = 0;
        resY = 0;
      }
      if (res != resY){
	hamming++;        //1+ 0+ 1 =2
      }	
      x = divX;
      y = divY;
    }
    cout << "hamming distance: " << hamming << endl;
    return 0;
}

