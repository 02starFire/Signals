#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h> 

void sig_int(int){
	printf("Interrupted..\n");
	

}
int main(){
	signal(SIGINT, &sig_int);
	while(1){
	  printf("Sleeping..\n");
	  sleep(1);
	}
return 0;
}
