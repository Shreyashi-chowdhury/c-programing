#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
	string u;
	string c;
	int score_u=0;
	int score_c=0;
	string arr[3]={"st","p","s"};
	int a;
	for(int i=0;i<=5;i++){
	cin>>u;
	a=(rand()%3);
	c=arr[a];
	cout<<u<<" "<<c<<"\n";
	}
	
	return 0;
}