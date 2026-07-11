#include <stdio.h>
#include <stdlib.h>

int GetSeed(int val);
int GetValue(int seed);

int main() {

	int seed = 0;
	int val = 0;

	printf("Input a number to use as a seed: ");	
	scanf("%d", &seed);
	printf("The seed %d returns pseudo-random number %d\n", seed, GetValue(seed));

	printf("\n");

	printf("Enter a new value to find its seed: ");
	scanf("%d", &val);
	printf("The seed for value %d is %d\n", val, GetSeed(val));

	return 0;
}

int GetValue(int seed) {

	srand(seed);

	return rand();
}

int GetSeed(int val) {

	int seed = 0;

	srand(seed);

	while (rand() != val)
	{
		seed++;
		srand(seed);
	}

	return seed;
}