#include <iostream>
using namespace std;
class complex{
	public:
		double real , imag;
		complex(){}
		complex(double r, double i):real(r), imag(i){}

   complex friend operator + (complex a, complex b)
   {
	return complex(a.real+b.real, a.imag+b.imag);
  }
};
ostream& operator<<(ostream& out , complex a){
	out<<a.real<<'+'<<a.imag<<'i';
}
int main()
{
	complex a(3,2),b(4,7),c;
	c=a+b;
	cout<<c;
}
