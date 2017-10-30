#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int calcRectangleArea(int a, int b); // done - example function

int calcTriangleCircumference(int a, int b, int c);
double calcRectangleDiagonal(int width, int height);
float average(float a, float b, float c, float d, float e);
int max(int x1, int x2, int x3, int x4);
float convertKmToMiles(float length);
float min (float y1, float y2, float y3, float y4);
float calcSquareArea(float a);
int existsTriangle(int a, int b, int c);
float calculateBMI(int weight, float height);
int calcRectangleCircumference(int a, int b);
int getRanfomNumberBetween10and50();
float calcSum(float x1, float x2, int y1, int y2);
float convertEURtoHUF(float amount);
int isTriangleRectangular(int a, int b, int c); // 0 - no, 1 - yes
int existsTriangle(int a, int b, int c); //0 - no, 1 - yes
float convertKmphToMps(float speed); // convert km/h -> m/s
float calcSquareCircumference(float width);
float calcVat(float amount); // vat = 20 %
int isNumberPalindrom(int number); // input 4-digits number, return 0-no, 1-yes
int isPrimeNumber(int number); // 0 - no, 1 - yes
int calcDigitSum(int number); // 1256 => return 14
float caclThirdPower(float number); // 5 => 125
double absolute(double number); // 6=> 6 , -8 =>8




int main(){
 // EMPTY, delete the code in main before you push the project on Github
 // add only your function under main
}

/*
* Calculate Area of rectangle
* Author: Roland Onofrej
* Date: 28-10-2017
* @param: a 
* @param: b
* @return: result
*/
int calcRectangleArea(int a, int b){
    int result=a*b;
    return result;
}


/*Convert km to miles
* Author: Ondrej Tomco
* Date: 28-10-2017
* @param: length
* @return: inMiles
*/
float convertKmToMiles(float length)
{
	float inMiles = length*0.62;
	return inMiles;
	
}
/*Calculate BMI  
* Author: Milan TImko
* Date: 28-10-2017
* @param: weight
* @param: height
* @return: BMI
*/
float calculateBMI(int weight, float height){
	if(weight<250 && weight>20 && height>1.0 && height<2.2){
 		float BMI=weight/(height*height);
 		return BMI;
	}else  printf("Wrong input");
		return 0;	
}

/*
* Resolve if input number is prime nuber
* Author: Michal Novotny
* Date: 28-10-2017
* @param: a 
* @param: b
* @return: result
*/
int isPrimeNumber(int number) // 0 - no, 1 - yes
{
	int swap = number;
	int i=0, result = 0, testTo = 0;
	if (swap == 2)
	{
		result = 1;
	}
	else if (swap % 2 == 0 || swap < 2)
	{
		result = 0;
	}
	else
	{
		testTo = sqrt(swap);
		result = 1;
		for (int i = 3; i <= testTo; i+=2)
		{
			if (swap % i == 0)
			{
				result = 0;
			}
		}
	}
	return result;
}

/*
* Calculate the third power of a number
* Author: Peter Szathmáry
* Date: 28-10-2017
* @param: number
* @return: result
*/
float caclThirdPower(float number)
{
	float result;
	result = pow(number, 3);
	return result;
}


/*
* Convert EUR to HUF
* Author: Martin Herèka
* Date: 29-10-2017
* @param: amount
* @return: amount
*/
float convertEURtoHUF(float amount)
{
	float huf=311.23;
	amount=amount*huf;
	return amount;
}
/*
* convertKmphToMps(float speed)
* Author: Andrej Byra
* Date: 29-10-2017
* @param: speed
* @return: Mps
*/
float convertKmphToMps(float speed)
{
	float Mps=(speed*1000)/3600;
	return Mps;
}
/*
* Triangle exists
* Author: Pavol Kiss
* Date: 29-10-2017
* @param: a
* @param: b
* @param: c
* @return: result
*/
int existsTriangle(int a, int b, int c)
{
	printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);
	if((a + b) > c)
    {
        if((b + c) > a)
        {
            if((a + c) > b) 
            {
            	printf("The sides form a triangle.");
            }
            else
            {
                printf("The sides do not form a triangle.");
            }
        }
        else
        {
            printf("The sides do not form a triangle");
        }
    }
    else
    {
        printf("The sides do not form a triangle");
    }
	
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
float average(float a, float b, float c, float d, float e)
{
	float average=(a+b+c+d)/4;
	printf("Numbers average: %1.2f", average);
}


		
