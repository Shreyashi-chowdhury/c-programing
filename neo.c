#include <stdio.h>
void main(){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			if( i+j==4 || j-i==4){
				printf("  ");
			}else
			{
				printf("* ");
			}
		
		}
		
		printf("\n");
		}
		
		for(i=0;i<4;i++){
			printf("* ");
		for(j=0;j<7;j++){
			if( i+j==6 || i==j){
				printf("  ");
			}else
			{
				printf("* ");
			}
		
		}
		
		printf("\n");
		}
	}
