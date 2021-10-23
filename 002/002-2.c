#include<stdio.h>
#include<omp.h>

#define N 1000000

int main(int argc,char *argv[])
{
	int my,n;
	int i,A[N];
	double start,end;
	start = omp_get_wtime();
	for (n=0;n<1000;n++)
	{
#pragma omp parallel for
		for (i = 0 ; i < N ; i++)
			 A[i]=i;
	}
	end = omp_get_wtime();
	printf("elapsed time = % lf \n",(end-start));
	return 0;
}
