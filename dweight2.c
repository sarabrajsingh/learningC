/* computes the dimensional weight of a box from inputs provided by the user */

#include <stdio.h>

int main(void)
{
	int height, weight, width, length, volume;

	printf("user, please enter height of the box: ");
	scanf("%d", &height);
	printf("user, please enter width of the box: ");
	scanf("%d", &width);
	printf("user, please enter length of the box: ");
	scanf("%d", &length);
	
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("volume (cubic inches) of the box is %d\n", volume);
	printf("weight (pounds) of the box is %d\n", weight);

	return 0;
}

