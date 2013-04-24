#include<stdio.h>
#include<omp.h>
int main()
{
	int n,tid;
	#pragma omp parallel private(tid)
	{
		tid=omp_get_thread_num();
		printf("Hello from thread %d\n",tid);
		if(tid==0)
		{
			n=omp_get_num_threads();
			printf("Number of threads %d\n",n);
		}
	}
	return 0;
}
