#include<iostream>
using namespace std;
int main(){
	int var1=2;
	
	float var2=20.5;
	
	char var3='A';
	
	cout<<"the address of var1 is"<<&var1<<endl;
	
	cout<<"the address of var2 is"<<&var2<<endl;
	
	cout<<"the address of var3 is"<<static_cast<void*>(&var1)<<endl;
	
}