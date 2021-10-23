#include<stdio.h>
#include<omp.h>

int main(int argc,char *argv[])
{
	int my;
	double start,end;
	start = omp_get_wtime();
#pragma omp parallel
{
 	my = omp_get_thread_num();      
	printf("hello world!! I'm %d !!\n",my);
}
	end = omp_get_wtime();
	printf("elapsed time = % lf \n",(end-start));
	return 0;
}
