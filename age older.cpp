#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,n4;
	cout<<"enter age1:";
	cin>>n1;
	cout<<"enter age2:";
	cin>>n2;
	cout<<"enter age3:";
	cin>>n3;
	cout<<"enter age4:";
	cin>>n4;
	if(n1>n2 && n1>n3 && n1>n4)
	cout<<n1<<" is older";
	else if(n2>n1 && n2>n3 && n2>n4)
	cout<<n2<<" is older";
	else if(n3>n1 && n3>n2 && n3>n4)
	cout<<n3<<" is older";
	else if(n4>n1 && n4>n2 && n4>n3)
	cout<<n4<<" is older";
}