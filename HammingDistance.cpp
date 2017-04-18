/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.
*/
//Author: Sandra Delatorre

// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int res, div, resY, divY, hamming = 0, x=1, y=4;

	while ((x != 0) || (y != 0))
	{
		if (x != 0)
		{
			res = x % 2;        //res = 1, 0, 0
			div = x / 2;        //div = 0, 0, 0
		}
		else
		{
			div = 0;
			res = 0;
		}

		if (y != 0)
		{
			resY = y % 2;       //resY = 0, 0, 1
			divY = y / 2;       //divY = 2, 1, 0
		}
		else
		{
			divY = 0;
			resY = 0;
		}

		if (res != resY)
		{
			hamming++;        //1, 0, 1
		}
		
		x = div;
		y = divY;
	}
    return 0;
}

