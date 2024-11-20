#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int i, j, dies1, dies2, sum;
	int array[13] = { 0 };
	srand(time(NULL));
	for (i = 1; i <= 36000; i++) {
		dies1 = 1 + rand() % 6;
		dies2 = 1 + rand() % 6;
		sum = dies1 + dies2;
		array[sum]++;
	}
	printf("Sum\tFrequency\tProbability\n");
	for (j = 2; j <= 12; j++) {
		printf("%d\t%d\t\t%.2f%%\n", j, array[j], (array[j] / (float)36000) * 100);
	}
	return 0;
}