#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	cout<<"Enter how many numbers needed"<<endl;
	int a;
	cin>>a;
	cout<<"Enter the range"<<endl<<" -1 for default";
	int r;
	cin>>r;
	if (r == -1){
	for (int i = 0; i<a; i++){
		cout<<rand()<<", ";
	}}
	
	else{
	for (int i = 0; i<a; i++)
		cout<<rand(0,r)<<", ";
	}
	

}

