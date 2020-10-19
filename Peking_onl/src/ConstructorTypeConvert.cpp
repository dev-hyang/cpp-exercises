#include<iostream>
using namespace std;
class Complex{
	public:
		double real, imag;
		Complex(int i){//type converting constructors
			cout<<"InitConstructor called"<<endl;
			real = i; imag = 0;
		}
		//convenient constructor
		Complex(double r, double i){
			real = r; imag = i;
		}
};

int main(){
	Complex c1(7,8);
	Complex c2 = 2;//
	c1 = 9;//
	return 0;
}
