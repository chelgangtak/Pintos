#include <stdio.h>
#include <stdlib.h>
#include <syscall.h>

int main(int argc, char **argv)
{
	if(argc != 2 && argc != 5)
		return EXIT_FAILURE;

	if(argc == 2)
		printf("%d\n",fibonacci(atoi(argv[1])));
	else
	{
		int i;
		int num[4] = {0,};
		for(i=1;i<=4;i++)
			num[i-1] = atoi(argv[i]);
		printf("%d\n",sum_of_four_integers(num[0],num[1],num[2],num[3]));
	}
	return EXIT_SUCCESS;
}
