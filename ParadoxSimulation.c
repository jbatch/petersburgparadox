#include <stdio.h>
#include <stdlib.h>	
#include <time.h>

int main(int argc, char *argv[])
{
	int numTrials, i, r, pot = 2, sum = 0;
	double avg = 0.0;

	srand(time(NULL));

	if(argc == 2)
	{
		//Get number of trials from user
		numTrials = atoi(argv[1]);
		//Set numTrials to default if invalid int given
		if(numTrials < 1)
		{
			numTrials = 100;
		}
	}
	else
	{
		numTrials = 100;
	}

	while(i < numTrials)
	{
		r = rand() % 2; //Get random int between 0 and 1 inclusive
		if(r) //Call this heads
		{
			pot *= 2;
		}
		else
		{
			i++;
			sum += pot;
			pot = 2;
		}
	}

	avg = sum / numTrials;

	printf("Average: $%.2lf\n", avg);
}