#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double sum(double, double);
double mul(double, double);
double sub(double, double);
double div(double, double);
double power_to(double, double);

int main()
{
    double num1, num2;
    char op;
    cout << "Enter the Expression number=" << endl;
    cin>>num1>>op>>num2;
  
    switch(op){

        case '+':
          cout<<"the addition="<<sum(num1,num2);
          break;
          cin>>num1>>op>>num2;
          case '-':
          cout<<"the substraction="<<sub(num1,num2);
          break;
          cin>>num1>>op>>num2;
          case '/':
          cout<<"the division="<<div(num1,num2);
          break;
          cin>>num1>>op>>num2;
          case '*':
          cout<<"the product="<<mul(num1,num2);
          break;
          cin>>num1>>op>>num2;
          case '^':
          cout<<"the power_to"<<pow(num1,num2);
          break;
          cin>>num1>>op>>num2;
          default:
          break;
    }
    return 0;
}

double sum(double a, double b)
{
    double sum = (a + b);
    return sum;
}
double mul(double a, double b)
{
    double mul = (a * b);
    return mul;
}
double sub(double a, double b)
{
    double sub = (a - b);
    return sub;
}
double div(double a, double b)
{
    double div = (a / b);
    return div;
}
double power_to(double a,double b){
     return pow(a,b);
}