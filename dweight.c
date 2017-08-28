#include <stdio.h>

int main(void)
{
	int height, weight, length, volume, width;
	
	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("dimensions: %dx%dx%d\n", length, width, height);
	printf("therefore, volume (cubic inches): %d\n", volume);
	printf("dimensional weight (pounds): %d\n", weight);

	return 0;
}

