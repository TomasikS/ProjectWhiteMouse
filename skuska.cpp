#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int isTriangleRectangular(int a, int b, int c);

int main(){
}
/*
* Is triangle rectangular
* Author: Kristina Kolesarova
* Date: 29-10-2017
* @param:a
* @param:b
* @param:c
* @return: result
*/

int isTriangleRectangular(int a, int b, int c){  // 0 - no, 1 - yes
	
	if(a+b>c || c+b>a || c+a>b)
	{
		if( a*a==(b*b+c*c) || b*b==(c*c+a*a) || c*c==(a*a+b*b))
		{
		printf("Yes");
		return 1;
		
		}
		else{
		printf("No");
		return 0;
		}
	
	}
	return 0;	
	
	}
