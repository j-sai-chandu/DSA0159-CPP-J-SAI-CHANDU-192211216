#include<iostream>
using namespace std;
class bus{
	public:
		bus(int x,int y){
			cout<<"no.of chidren carry by "<<x<<" buses"<<" : "<<x*y;
		}
};
int main(){
	int x,y;
	cout<<"enter number of buses:";
	cin>>x;
	cout<<"enter number of children for each bus:";
	cin>>y;
	bus obj(x,y);
}