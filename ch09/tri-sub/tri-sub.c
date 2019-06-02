#include <stdio.h>

float triangle(float width, float height) {
	float area;

	area = width * height / 2.0;
	return area;
}

int main() {
	float size = triangle(1.3, 8.3);
	printf("size: %f\n", size);
	return 0;
}