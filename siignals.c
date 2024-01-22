#include <wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){

	if(fork()) {
		int status;

		wait(&status);

		if(WIFEXITED(status)){
		   printf("Child has finished with %d\n",
				   WEXITSTATUS(status));
	        }

		else {
		     printf("Child has crashed.\n");
		}

    }
    else {
       int x;
       scanf("%d",&x);

       return 10/x;
    }
 return 0;
}

