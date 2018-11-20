#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

int main(){

	char *c;
	c[0] = '_'; c[1] = '-';
	int i, j, back = 0, max = 64;
	unsigned int timew = 1;
	system("clear");

	gotoxy(0, 0);
	printf("%c", c);
	i = 0;

	while(1){
		if(i < max && back == 0){
			gotoxy(0, i);
//			for(j = 0; j < i; j ++){
			printf("%c", c);
			usleep(5000*timew + i*800);
			fflush(stdout);
				
//			}
			i ++;
			if(i == max)
				back = 1;
		}else if(back == 1){
			//back = 1;
			
			gotoxy(0, i);
			printf(" ");
			fflush(stdout);
			usleep(5000*timew + i*800);
					
			i--;
			if(i == 0)
				back = 0;
		}

	}

	return 0;
}
