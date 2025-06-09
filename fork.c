#include<stdio.h>
#include<unistd.h>

int main(){
	fork();
	printf("Hello World \n");
	return 0;
}

#include<stdio.h>
#include<unistd.h>

int main(){
	int f1 = fork();
	if (f1 == 0){
		printf("im child process!");
	}
	else{
		printf("im parent process!");
	}
}


//print numbers from 1-10 and 
//1-5 should be print by child process and from 6-10 should be parent process calculate sum of those numbers

#include<stdio.h>
#include<unistd.h>

int main(){
	int sum =0;
	int sum2 =0;
	int f1 = fork();
	if (f1 == 0){
		printf("i'm child process! \n");
		for(int i=1;i<6;i++){
			printf("%d",i);
			sum += i;
			
		}
		printf("\n Sum is: %d \n", sum);
	}
	else{
		printf("i'm parent process! \n");
		for(int i=6;i<11;i++){
			printf("%d",i);
			sum2 += i;
		
		}
			printf("\n Sum is: %d \n", sum2);
	}
}










