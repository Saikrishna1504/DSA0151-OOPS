#include<iostream>
using namespace std;
int getperson(){
	int age;
	cout << "enter your age";
	cin >> age;
	return age;
}
int main(){
	int n, voting_age = 18;
    n = getperson();
	if(n>=voting_age){
		cout << "you are eligible to vote \n";
	}else{
		int years_left = voting_age - n;
		cout << "You are allowed to vote after " << years_left << " years \n";
	}
	return 0;
}