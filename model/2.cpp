#include<iostream>
using namespace std;
int main(){
	int age,e_a=18;
	cout<<"enter the age";
	cin>>age;
	if(age>=e_a){
		cout<<"you are eligible to vote"<<endl;
	}else{
		int y_l=e_a-age;
		cout<<y_l<<" years left to get vote eligibility"<<endl;
	}
	return 0;
}