#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define gotoxy(x, y) printf("\033[%d;%dH", (x), (y))

int main(){
	int i = 0, j = 0, width = 64, height = 64;
	char c = '@';
	int mul = 4, sleepTime = 5000;
    int sleep = mul * sleepTime;


	system("clear");
	gotoxy(0, 0);
	while(1){
		
		if(i < width && j == 0){
			gotoxy(j, i);
			printf("%c", c);
			if(i != 0){
			    gotoxy(j, i-1);
			    printf(" ");
			}
		    i ++;
		}	
        if(i == width && j < height){
            gotoxy(i, j);
            printf("%c", c);
			if(i != 0){
			    gotoxy(j-1, i);
			    printf(" ");
			}
            j ++;
        }
        
        if(i == width && j <= height){
            	gotoxy(j, i);
		printf("%c",c);
		if(j != width)
		{
			gotoxy(j + 1, i);
			printf("%c", c);
		} 
		j --;
        }
        
		fflush(stdout);
		usleep(sleep);
        
	}

	return 0;
}
