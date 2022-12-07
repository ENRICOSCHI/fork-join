#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int x,y,z,value;
int main() 
{
	value= fork();
	if( value== 0){//Child
		y = 5+3;
	}else{//Main
		x = 3+2;	
	}
	if(value!=0){
	   wait(0);//join
	}
	z = x+y;
	printf("la somma di x e y è uguale a: %d \n", z);
	return 0;
}



