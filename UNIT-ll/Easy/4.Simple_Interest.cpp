#include<iostream>
using namespace std;
int main(){
	int p,t,r,x,y,senior;
	cout<<"enter the p amount";
	cin>>p;
	cout<<"enter the time";
	cin>>t;
	cout<<"enter person is senior citizen or not (y or n)";
	cin>>senior;
	if(senior==y){
		x=p*t*10/100;
		cout<<x;
	}
	else{
		x=p*t*12/100;
		cout<<x;
	}
}