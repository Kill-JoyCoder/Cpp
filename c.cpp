#include <iostream>

using namespace std;

class calc{
	public:
		int a, b, add;
		calc(int i, int j): a(i), b(j) , add(a+b) {}
};
int main(){
	calc d(10, 20);
	cout<<d.a<<endl;
	cout<<d.b<<endl;
	cout<<d.add;
}
