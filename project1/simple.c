#include <stdio.h>
#include<math.h>
int main() {
	int sample[10] = {4,4,9,16,25,36,49,64,81,100};
	double average = 0;
	int sum = 0;
	int i;
	for (i = 0; i <10; i++) {
		sum = sum + sqrt(sample[i]);
	}
	average = (float)sum/10;
	printf("Average is: %.2f\n",average);
	return 0;
}
