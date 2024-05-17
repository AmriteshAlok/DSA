//Function to print roots of a quadratic equation
#include <iostream>
#include<cmath>
using namespace std;

void roots(float a, float b, float c ){
  float x1,x2,real,imag;
  float D;
  
  D = (b*b)-(4*a*c);

    if(D>0){
    cout<<"Real and Unequal Roots "<<endl;
    x1 = (-b + sqrt(D))/(2*a);
    cout<<"First Root is:"<<x1<<endl;
    x2 = (-b - sqrt(D))/(2*a);
    cout<<"Second Root is:"<<x2;
    
  }
  else {
    if(D==0){
    cout<<"Real and Equal Roots "<<endl;
    x1 = (-b + sqrt(D))/(2*a);
    cout<<"First Root is:"<<x1<<endl;
    x2 = (-b - sqrt(D))/(2*a);
    cout<<"Second Root is:"<<x2;
    
  }
  else{
    cout<<"Imaginary Roots"<<endl;
    real= -b/(2*a);
    imag = sqrt(-D)/(2 * a);
    cout << "Real root is " << real << endl<<"Imaginary root is/are " << imag << "i, "
        << real << "-" << imag << "i";
  }
  }
}


int main() {
  float a, b, c;
  cout<<"Enter the coefficient of x^2 with sign: "<<endl;
  cin>>a;
  cout<<"Enter the coefficient of x with sign: "<<endl;
  cin>>b;
  cout<<"Enter the constant value with sign: "<<endl;
  cin>>c;

  roots(a,b,c);

  return 0;
}
