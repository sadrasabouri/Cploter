#ifndef PLOT_TOOLKIT_H_ 
#define PLOT_TOOLKIT_H_

#define Max_size 100

int write2D(char *dir, float x, float y);
int read2D(char *dir, float Result[2][Max_size]);
int read3D(char *dir, float Result[3][Max_size]);
int write3D(char *dir, float x, float y, float z);

#endif
