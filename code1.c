#include <stdio.h>

int main(int argc,char*argv[])
{
	char * name = argv[0];
	int child_pid = fork();

	if(child_pid == 0)
	{

		printf("Child Of %s is %d\n",name,getpid());
 		execl("/bin/ls","ls","-a",(char*)NULL);
		return 0;
	}
	else{

		printf("my child is %d\n",child_pid);
        printf("Hello");
		return(0);
	    }
}
