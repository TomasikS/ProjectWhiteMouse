/* Calc digit Sum
* Author Slavomir Cesla
* Date: 31-10-2017
* @param: number1
* @param: number2
* @param: number3
* @param: number4
* @return: result
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
	printf("%d",calcDigitSum);
}
