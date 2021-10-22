#include<stdio.h>
#include<omp.h>

int main(int argc,char *argv[])
{
	int my;
#pragma omp parallel
{
 	my = omp_get_thread_num();      
	printf("hello world!! I'm %d !!\n",my);
}
	return 0;
}
