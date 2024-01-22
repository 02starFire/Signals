#include <signal.h>
#include <stdio.h>
#include <wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

void sig_fpe()
{
	printf("You are try to divide a number by zero\n");
	exit(0);


}
int main() {

    signal(SIGFPE&sig_fpe);
    if(fork()){
    int status;
    wait(&status);
    if(WIFEXITED(status)){
	    printf("Child has finished with %d\n",WEXITSTATUS(status));
    }else {
	    printf("Child has crashed.\n");

    }
    else{
	 int x;
	 scanf("%d",&x);
	 return 10/x;
    }
    return 0;
}
}
