#include <iostream>
using namespace std;
int main(){
	int i;
	int j;
	//s problem {structure}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0 || i==2 || i==4){
				cout<<" *";
			}else if( (i<3 && j==0)){
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		}
	 cout<<"\n";
//H	 [ok]
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==2){
				cout<<" *";
			}else if(j==0 || j==4){
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		}	
		cout<<"\n";
//R	problem	{structure}
		
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0 || i==2){
				cout<<" *";
			}else if(j==0 || i>=3 && i==j){
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		}	
		cout<<"\n";
//E	[ok]	
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0 || i==2 || i==4){
				cout<<" *";
			}else if(j==0){
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		}	
		cout<<"\n";
//Y	problem {the code only}[structure ok]	
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j && j<=2 || i+j==4 && j>=3){
				cout<<" *";
			}else if(i>=2 && j==5/2){
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		}	
		cout<<"\n";
//A	[ok]	
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0 || i==2){
				cout<<" *";
			}else if(j==0 || j==4){
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		}	
		cout<<"\n";
//S	problem	{structure}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0 || i==2 || i==4){
				cout<<" *";
			}else if( (i<3 && j==0)){
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		}
	 cout<<"\n";
//H	 [ok]
	 for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==2){
				cout<<" *";
			}else if(j==0 || j==4){
				cout<<" *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		}	
		cout<<"\n";
//I	[ok]	
		for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0 || i==4 || j==5/2){
				cout<<" *";
			
			}else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
		}	
		cout<<"\n";	
		
	
	return 0;
}