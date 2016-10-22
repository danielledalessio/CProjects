//Danielle D'Alessio
//Homework #4


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int get_value();
int calc_results(int[25], int);

int main () {

	int temp[25], i, sum = 0;

    srand((unsigned) time(NULL));

    //loop to get random numbers to store in array, also sum to use for later
    for (i=0; i < 25; i++) {

        temp[i] = get_value();
        sum += temp[i];
    }

    //calls function
    calc_results(temp, sum);
    return 0;

}


int get_value() {
	//to get random numbers between 60-100
    return((rand() % (100 - 60 + 1)) + 60);

}


int calc_results(int temp[], int sum)
{
	int min, max, i, j = 0;
	float avg = 0;

	//finding average, maximum, and minimum
	avg = ((sum)/(25));
	max = temp[0];
		for(i =1; i<25; i++)
		{
			if(max<temp[i])
				max=temp[i];
		}

	min = temp[0];
		for(i=1; i<25; i++)
		{
			if(min>temp[i])
				min=temp[i];
		}

	//printing data
	printf("Temperature Conditions on October 9, 2015: \n");
	printf("Time of day\tTemperature in degrees F \n");

	//using for loop to print numbers between 0-24 with corresponding temperatures
	for(j=0; j<25; j++)
	{
		printf("%d\t\t%d\n", j , temp[j]);
	}

	printf("Maximum Temperature for the day: %d Degrees F\n", max);
	printf("Minimum Temperature for the day: %d Degrees F\n", min);
	printf("Average Temperature for the day: %.lf Degrees F\n", avg);
}
