#include<iostream>
using namespace std;
class Demo{
private:
  int i;
public:
  Demo(int n){
    i = n;
    cout<<"id="<<i<<"Constructed"<<endl;
  }
  ~Demo(){
    cout<<"id="<<i<<"Destructed"<<endl;
  }
};

Demo d1(1);

void foo(){
  static Demo d2(2);
  Demo d3(3);
  cout<<"foo end"<<endl;
}

int main(int argc, char const *argv[]) {
  /* code */
  cout<<"main start"<<endl;
  Demo d4(4);
  d4 = 6;
  {Demo d5(5);};
  foo();
  cout<<"main ends"<<endl;
  return 0;
}
