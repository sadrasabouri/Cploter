#include "plot-toolkit.h"
#include <stdio.h>

#define Max_size 100

int write2D(char *dir, float x, float y);
int read2D(char *dir, float Result[2][Max_size]);
int read3D(char *dir, float Result[3][Max_size]);
int write3D(char *dir, float x, float y, float z);


int read2D(char *dir, float Result[2][Max_size]){
	FILE *fp;
	int n = 0;
	fp = fopen(dir, "r");// We want to read from file so we set it as 'r' mode.
	if(fp != NULL)
	{
		while(!feof(fp))//while it's last character isn't EOF (End of the file).
		{
			fscanf(fp, "%f %f", &Result[0][n], &Result[1][n]);//scan from opened file.
			n++;
		}
	}
	fclose(fp);
	return n-1;
}

int write2D(char *dir, float x, float y){
	FILE *fp;
	fp = fopen(dir, "a");// We want to append file so we set it as 'a' mode.
	if(fp != NULL)
	{
		fprintf(fp, "%f %f\n", x, y);//print in opened file.
		return 1;
		fclose(fp);

	}
	else
	{
		fclose(fp);
		return 0;
	}
}

int read3D(char *dir, float Result[3][Max_size]){
	FILE *fp;
	int n = 0;
	fp = fopen(dir, "r");
	if(fp != NULL)
	{
		while(!feof(fp))//while it's last character isn't EOF (End of the file).
		{
			fscanf(fp, "%f %f %f", &Result[0][n], &Result[1][n], &Result[2][n]);
			n++;
		}
	}
	fclose(fp);
	return n-1;
}

int write3D(char *dir, float x, float y, float z){
	FILE *fp;
	fp = fopen(dir, "a");
	if(fp != NULL)
	{
		fprintf(fp, "%f %f %f\n", x, y, z);
		fclose(fp);
		return 1;
	}
	else
	{
		fclose(fp);
		return 0;
	}
}
