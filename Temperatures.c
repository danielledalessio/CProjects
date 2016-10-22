//Danielle D'Alessio
//Homework #5


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void read_temps();
void calc_results(int fileArray[25], int);

int main () {
    //calls function
    read_temps();

    return 0;

}


void read_temps() {
    int sum;
    int i;
    int fileArray[25];

    char fname[100];
    FILE* fp;
    memset(fname, 0, 100);

    //ask user for the name of the file
    printf("Enter the file name: ");
    gets(fname);

    //Opens the file from where the text will be read.
    fp = fopen(fname, "r");

    if (fp == NULL)
    {
        printf("Error Reading File\n");
        exit(0);
    }
    //loop for temperatures
    for (i=0; i<25; i++)
    {
    fscanf(fp, "%d", &fileArray[i]);
    }

    //find sum
    sum = fileArray[0];
        for(i =1; i<25; i++)
		{
            sum+=fileArray[i];
		}

    //call function
    calc_results(fileArray, sum);

    fclose(fp);

}


void calc_results(int fileArray[], int sum)
{
	int min, max, i, j = 0;
	float avg = 0;

	//finding average, maximum, and minimum
	avg = ((sum)/(25));
	max = fileArray[0];
		for(i =1; i<25; i++)
		{
			if(max<fileArray[i])
				max=fileArray[i];
		}

	min = fileArray[0];
		for(i=1; i<25; i++)
		{
			if(min>fileArray[i])
				min=fileArray[i];
		}

    //output file
    FILE *out_file = fopen("output-temps.txt", "w");

          // test for files not existing.
          if (out_file == NULL)
            {
              printf("Error! Could not open file\n");
              exit(-1);
            }

    // write to file
    fprintf(out_file, "Temperature Conditions on October 9, 2015: \n");
	fprintf(out_file, "Time of day\tTemperature in degrees F \n");

	//using for loop to print numbers between 0-24 with corresponding temperatures
        for(j=0; j<25; j++)
        {
		fprintf(out_file, "%d\t\t%d\n", j , fileArray[j]);
        }

	fprintf(out_file,"Maximum Temperature for the day: %d Degrees F\n", max);
	fprintf(out_file,"Minimum Temperature for the day: %d Degrees F\n", min);
	fprintf(out_file,"Average Temperature for the day: %.lf Degrees F\n", avg);

	return 0;
}
