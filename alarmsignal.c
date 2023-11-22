#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

int pw = 123;
void intHandler1();
void intHandler2();

int main(){
	signal(SIGALRM,intHandler1);
	signal(SIGINT,intHandler2);
	alarm(10);

	int correct = 0;
	while(!correct){
		if(getchar()=='1'){
			if(getchar()=='2'){
				if(getchar()=='3'){
					if(getchar()=='\n'){
						correct=1;
					}
				}
			}
		}	
	}
	printf("Correct \n");
}

void intHandler1(){
	printf("Fire !\n");
	exit(0);
}

void intHandler2(){
	printf("10 sec reset... \n");
	alarm(10);
}
