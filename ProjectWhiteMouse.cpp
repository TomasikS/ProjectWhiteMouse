/* https://github.com/akademiasovy/ProjectWhiteMouse */ 
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
float calcVat(float amount);
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
	
	if(a+b>c && c+b>a && c+a>b)
	{
		if( a*a==(b*b+c*c) || b*b==(c*c+a*a) || c*c==(a*a+b*b))
		{
		printf("\nYes");
		return 1;
		
		}
		else{
		printf("\nNo");
		return 0;
		}
	
	}
	printf("\nNo"); 
	return 0;	
	
	}
	
/*
* calc Triangle Circumference
* Author: Lubomir Volcko
* Date: 01-11-2017
* @param:a
* @param:b
* @param:c
* @return: result
*/

int calcTriangleCircumference(int a, int b, int c);

calcTriangleCircumference=a+b+c;
printf("Triangle Circumference is: %d", calcTriangleCircumference);

return 0;




/*
* Calculate Average of numbers
* Author: Erik Ruszinka
* Date: 28-10-2017
* @param: a 
* @param: b
* @param: c
* @param: d
* @param: e
* @return: average	
*/	
float average(float a, float b, float c, float d, float e)
{
	float average=(a+b+c+d+e)/5;
	return average;
}


/*
* Calculate Diagonal of Rectangle
* Author: Jakub Seliga
* Date: 31-10-2017
* @param: width 
* @param: height
* @return: result
*/
double calcRectangleDiagonal(int width, int height);
{
	double result;
	
	if(width>0 && height>0)
	{
		result=(double)sqrt((width*width)+(height*height));	
	}
	else
	{
		return 0;
	}
	return result;
}

/*
* CalcVat(float amount)
* Author: Jozef Radic
* Date: 1-11-2017
* @param: vat
* @param: amount
* @return: result
*/

float calcVat(float amount);
{
float amount,vat;
result = ((vat/100)*amount);
return result;
}

/* 
* Finding out whether 2,3 or 4-digit number is a palindrom
* Author: Boris Galický
* Date: 31-10-2017
* @param: number
* @return: result
*/
int isNumberPalindrom(int number)
{
int a,b,c,d;
if((number>=10) and (number<100))
	{
	a=(number%10);
	b=(number/10);
		if(a==b)
		{
		printf("YES");
		return 1;
		}
		else
		{
		printf("NO");
		return 0;
		}
	}
else if((number>=100) and (number<1000))
	{
	a=(number%10);
	b=(number/100);
		if(a==b)
		{
		printf("YES");
		return 1;
		}
		else
		{
		printf("NO");
		return 0;
		}	
	}
else if((number>=1000) and (number<10000))
	{
	a=(number%10);
	number=(number/10);
	b=(number%10);
	number=(number/10);
	c=(number%10);
	number=(number/10);
	d=(number%10);
    	if((a==d) and (b==c))
    	{
    	printf("YES");
    	return 1;
		}
		else
		{
		printf("NO");
		return 0;
		}
	}
else
	{
	printf("WRONG INPUT!");
	}
}

/* Calc digit Sum
* Author Slavomir Cesla
* Date: 31-10-2017
* @param: number1
* @param: number2
* @param: number3
* @param: number4
* @return: DIGIT SUM
*/

int calcDigitSum(int number)
{
	
	int number1;
	int number2;
	int number3;
	int number4;
	int calcDigitSum;
	
	number1=(number/1000);
	number2=(number/100)%10;
	number3=(number/10)%10;
	number4=(number%10);

	calcDigitSum=number1+number2+number3+number4;

return: calcDigitSum;
}


/* Min Number float
* Author: Slavomir Cesla
* Date: 31-10-2017
* @param: Number1
* @param: Number2
* @param: Number3
* @param: Number4
* @return: MinNumber
*/

float minNumber (float Number1, float Number2, float Number3, float Number4)
{
		if((y1<y2)&&(y1<y3)&&(y1<y4))
		{
			printf("Number1 is Min");
		}
		else
		{
			if((y2<y1)&&(y2<y3)&&(y2<y4))
			{
			printf("Number2 is Min");
			}
			else
			{
				if((y3<y1)&&(y3<y2)&&(y3<y4))
				{
				printf("Number3 is Min");
				}
				else
				{
					if((y4<y1)&&(y4<y2)&&(y4<y3))
					{
					printf("Number4 is Min");
					}
					else
					{
					printf("Error");
					}
				}
				
			}
		}
return minNumber;
}
	
/* CalcSum
* Author: Slavomir Cesla
* Date: 31-10-2017
* @param: x1
* @param: x2
* @param: y3
* @param: y4
* return: calcSum FLOAT, calcSum INT
*/
float calcSum(float number1, float number2, int number3, int number4)
{
	float calcSum0;
	int calcSum1;
	
	calcSum0= (number1 + number2);

	calcSum1= (number3 + number4);

	return calcSum0, calcSum1;
	
}  
