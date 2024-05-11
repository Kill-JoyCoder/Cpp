#include <iostream>
// constructor examples
using namespace std;

class calc{
	public:
		int a, b, add;
		calc(int i, int j): a(i), b(j) , add(a+b) {} //class object; notice how values are assigned to the variables with a parenthesis
};
int main(){
	calc d(10, 20); //class instance
	cout<<d.a<<endl;
	cout<<d.b<<endl;
	cout<<d.add;
}
