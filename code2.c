#include <stdio.h>

int main(int argc,char*argv[])
{
	int i = 0;
	int child_pid;
	char * name = argv[0];
	while(1)
	{
		 child_pid = fork();
	
		if(child_pid == 0)
		{
			i++;
			printf("child of %s is %d\n",name,getpid());
			printf("number of process %d",i);
			//return 0;
			wait();
		}
		else{
			
			printf("number of process %d",i);
			return(0);
		    }
	
	}
}

