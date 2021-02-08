#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Calculator
{
    public:

double power_to(double a,double b){
    return pow(a,b);
}
double sum(double a,double b){
    return a+b;
} 
double multi(double a,double b){
    return a*b;
}
double div(double a,double b){
    return a/b;
}
double sub(double a,double b){
    return a-b;
}
};
int main()
{  
    
    double a, b;
    char op;

  cout<<"Enter the two no and opperater b/w them :-"<<endl;
    cin >> a >> op >> b;
   
Calculator s;
     
    switch (op)
    {

    case '+':
        cout<<"sum a+b ="<<s.sum(a,b);
       break;
      
         cin >> a >> op >> b;
    case '-':
        cout<<"sub a-b ="<<s.sum(a,b);
      break;
       
 cin >> a >> op >> b;

    case '*':
        cout<<"product a*b ="<<s.multi(a,b);
       break;
      
 cin >> a >> op >> b; 

    case '^':
        cout<<"power to a^b ="<<s.power_to(a,b);
        break;
        
 cin >> a >> op >> b; 

    case '/':
       cout<<"division a/b ="<<s.div(a,b);
       break;
       
 cin >> a >> op >> b; 
    default:
        break;
    }
}