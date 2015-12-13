#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function Add(int, int)*/
int add(int a, int b){
	return a + b;
}

/* Function show message() */
void showMessage(){
	printf("This is a message box.\n\n");
}

/* Main */
void main(){
	int num = 0;
	
	printf("add Func : %x\nshowMessage Func: %x\nnum -> %x .\n", add, showMessage, &num );
	printf("Process Started.");

	void (*pShowMsg)() = showMessage;
	pShowMsg();

	while(1){
		printf("Process : %d\n", num++);
		usleep(5000000); /* Micro-seconds */
	}
}