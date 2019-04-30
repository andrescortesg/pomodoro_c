#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void pomodoro(int mins);

int main(int argc, char* argv[]) {
	/*error: too few args*/	
	if( argc != 2){
		printf("too few args --- ERROR ---");
		return(1);	
	}

	pomodoro(atoi( argv[1] ));
	return(0);
}

/* pomodoro function*/
void pomodoro(int mins) {
	time_t t1, t2;
	double secs = 0;
	while( secs < (mins*60)) {
		printf(" %f", secs);
		time(&t1);
		sleep(5);
		time(&t2);
		secs += difftime(t2, t1);
		printf("\r");

	}
	return;
}

