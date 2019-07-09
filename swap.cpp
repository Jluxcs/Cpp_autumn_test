#include <iostream>
using namespace std;
int main(){

	int a = 100;
	int b = 200;
	int temp;
	cout<<"调用之前a的值："<< a << endl;
	cout<<"调用之前b的值："<< b << endl;

	temp = a;
	a = b;
	b = temp;

	cout<<"调用之后a的值："<< a << endl;
	cout<<"调用之后b的值："<< b << endl;

	return 0;

}