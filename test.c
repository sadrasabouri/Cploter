#include <stdio.h>
#include "plot-toolkit.h"

#define SIZE 100

int main(){
	int size;
	float F2D[2][SIZE], F3D[3][SIZE];
	char dir_2D[] = "./test/2d.txt", dir_3D[] = "./test/3d.txt";
	write2D(dir_2D, 5.5, 3);
	size = read2D(dir_2D, F2D);
	for(int i = 0; i < size	; ++i)
	printf("(%.2f,%.2f)\n", F2D[0][i], F2D[1][i]);

	write3D(dir_3D, 1.2, -3, 10);
	size = read3D(dir_3D, F3D);
	for(int i = 0; i < size	; ++i)
	printf("(%.2f,%.2f,%.2f)\n", F3D[0][i], F3D[1][i], F3D[2][i]);
	return 0;
}