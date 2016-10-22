//Danielle D'Alessio
//Homework 3

#include <stdio.h>
specialfunction (int, int, int, int);
int main()
{
    char name[20];
	int even;
	int odd;
	int totalEven;
    int totalOdd;
	int numberRequest;
    

    printf("What is your name?\n");
    scanf("%s", name);

    printf("Please enter a number\n");
    scanf("%d", &numberRequest);


    while(numberRequest != 0)
    {
    	if((numberRequest%2)==0)
    	{
    	even ++;
        totalEven+= numberRequest;
    	}
    	else
    	{
		odd ++;
        totalOdd += numberRequest;
    	}

    	printf("Please enter a number\n");
    	scanf("%d", &numberRequest);
  	}
  	printf("%s, the numbers you entered are broken down as follows:\n", name);
    specialfunction(even, totalEven, odd, totalOdd);
    
    return 0;
 }

specialfunction(int finalEven, int finalTotalEven, int finalOdd, int finalTotalOdd)
{
    printf("You entered %d even numbers with a total value of %d.\n", finalEven, finalTotalEven);
    printf("You also entered %d odd numbers with a total value of %d.\n", finalOdd, finalTotalOdd);
}