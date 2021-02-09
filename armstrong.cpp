#include<bits/stdc++.h>
using namespace std;
int n,q,r,p,s=0;
bool Armstrong(int n);
bool palindrop(int n);

int main()
{
int n;
cout<<"Enter the Number you want to Check armstrong or not =";
cin>>n;
   
if(Armstrong(n)){          // calling the armstrong functions 
     cout<<n <<" is the armstrong number"<<endl;
     } 
else{
    cout<<n <<" is not armstrong number"<<endl;
}
}


bool Armstrong(int n){
     p=n;
while(n>0){
    r=n%10;
    s=s+r*r*r;
    n=n/10;
}
if(p==s)
    return true;

else
    return false;
}
