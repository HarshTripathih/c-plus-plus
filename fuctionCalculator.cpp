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
    cout << "Enter the First number=" << endl;
    cin >> num1;
    cout << "Enter the Second number=" << endl;
    cin >> num2;
    cout << "Sum=" << sum(num1, num2);
    cout << "mul=" << mul(num1, num2);
    cout << "Sub=" << sub(num1, num2);
    cout << "div=" << div(num1, num2);
     cout<<"power_to="<<pow(num1,num2);
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
double power_to(double a, double b){
     return pow(a,b);
}