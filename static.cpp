#include <iostream>  
using namespace std;  
int f(int a) //定义f函数,a为形参  
{  
  auto int b=0; //定义b为自动变量  
  static int c=3; //定义c为静态局部变量  
  b=b+1;  
  c=c+1; 
  cout<<"b的值："<< b<<"c的值："<< c<<endl; 
  return a+b+c;  
}  
int main( )  
{  
  int a=2,i;  
  for(i=0;i<3;i++)  
  cout<<f(a)<<" ";  
  cout<<endl;  
  return 0;  
}  