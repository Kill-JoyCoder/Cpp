#include <iostream>
#include <vector> 
#include <deque>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;	

template <class t>
class calc(){
	private:
		t n1, n2;
	public:
		calc(t num1, t num2){
			n1 = num1;
			n2 = num2;
		}
		int show()
			return n1+n2;
};

int main(){
 	calc <int> o;
	o.calc
}   
