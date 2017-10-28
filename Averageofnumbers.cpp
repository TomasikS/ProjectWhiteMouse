/*
* Calculate Average of numbers
* Author: Erik Ruszinka
* Date: 28-10-2017
* @param: a 
* @param: b
* @param: c
* @param: d
* @return: average
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double average(int a, int b, int c, int d)
{
	double average=(a+b+c+d)/4;
	printf("Numbers average: %1.2f", average);
}

int main(){
	average(45,87,35,27);
	
}

	
