#include <iostream>
using namespace std;
int main(){
	int i;
	int j;
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