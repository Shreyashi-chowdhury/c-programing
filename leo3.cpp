#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
	string u;
	string c;
	int score_u=0;
	int score_c=0;
//t[stone] p[paper] c[scissor]	
	string arr[3]={"t","p","c"};
	int a;
	for(int i=0;i<5;i++){
		cin>>u;
		a=(rand()%3);
		c=arr[a];
		cout<<u<<" "<<c<<"\n";
//for stone
		if(u=="t" && c=="p"){
			cout<<"user wins!"<<"\n";
			score_u+=1;
		}else if(u=="t" && c=="c"){
		     cout<<"user losses...."<<"\n";
		     score_c+=1;
		}else if(u=="t" && c=="st"){
			cout<<"Draw"<<"\n";
		}
//for paper
        if(u=="p" && c=="t"){
			cout<<"user wins!"<<"\n";
			score_u+=1;
		}else if(u=="p" && c=="c"){
		     cout<<"user losses...."<<"\n";
		     score_c+=1;
		}else if(u=="p" && c=="p"){
			cout<<"Draw"<<"\n";
		}
//for scissor
        if(u=="c" && c=="t"){
			cout<<"user wins!"<<"\n";
			score_u+=1;
		}else if(u=="c" && c=="p"){
		     cout<<"user losses...."<<"\n";
		     score_c+=1;
		}else if(u=="c" && c=="c"){
			cout<<"Draw"<<"\n";
		}
		cout<<"user:"<<score_u<<" computer:"<<score_c<<"\n";	
		
	}
	cout<<"\n";
//final 		
		if(score_u>score_c){
			cout<<"User Wins !!"<<"\n";
		}else if(score_u<score_c){
			cout<<"User Losses..."<<"\n";
		}else if(score_u=score_c){
			 cout<<"|Draw|"<<"\n";
		}
	
	
	return 0;
	}
	
