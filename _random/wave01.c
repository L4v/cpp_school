#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#define PI 3.14
#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))

int main(){

	char c = '#';
	int i, j, back = 0, max = 64, h = 0;
	unsigned int timew = 2;
	system("clear");

	gotoxy(0, 0);
//	printf("%c", c);
	i = 0;

	/*while(1){
		if(i < max && back == 0){
			gotoxy(h, i);
//			for(j = 0; j < i; j ++){
				printf("%c", c);
				usleep(10000*timew);
				fflush(stdout);
//			}
			i ++;
			if(i == max){
				back = 1;
		}else if(back == 1){
			//back = 1;
			
			gotoxy(h, i);
			printf(" ");
			fflush(stdout);
			usleep(10000*timew);
			
			i--;
			if(i == 0)
				back = 0;
		}

	}*/

	double step = 0.5;
	double t = 0;
	double t_len = 100;
	for(t = 0; i < t_len; t += step){
		gotoxy(((int)sin(t*PI))*10 , (int)t);
		printf("#");
		fflush(stdout);
		usleep(10000*timew);
		
}


	return 0;
}
