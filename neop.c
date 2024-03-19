#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	int v=0;
	int i;
	
	printf("Enter A Name: ");
	gets(str);
	
	
	for(i=0;str[i]>0;i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			v++;
		}
	}
	printf("No of Vowels: %d\n",v);
	return 0;
}