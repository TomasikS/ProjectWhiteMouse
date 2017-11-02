/* Min Number float
* Author: Slavomir Cesla
* Date: 31-10-2017
* @param: y1
* @param: y2
* @param: y3
* @param: y4
* @return:0
*/

float minNumber (float y1, float y2, float y3, float y4)
{
		if((y1<y2)&&(y1<y3)&&(y1<y4))
		{
			printf("y1 is Min");
		}
		else
		{
			if((y2<y1)&&(y2<y3)&&(y2<y4))
			{
			printf("y2 is Min");
			}
			else
			{
				if((y3<y1)&&(y3<y2)&&(y3<y4))
				{
				printf("y3 is Min");
				}
				else
				{
					if((y4<y1)&&(y4<y2)&&(y4<y3))
					{
					printf("y4 is Min");
					}
					else
					{
					printf("Error");
					}
				}
				
			}
		}
return 0;
}
	
