#include<bits/stdc++.h>
using namespace std;


float arr[10];  //Global variables
        //Global variables

double array_sum(float arr[]);
float array_prod(float arr[]);
int main(){

float s,p;
cout<<"Enter the numbers="<<endl;
 for(int i=0;i<10;i++){
    cin>>arr[i];
 }
      char array;
      cout<<"Enter the s or p for sum and product of array"<<endl;
      cin>>array;
      switch(array){
          case 's':
          cout<<"the sum is ="<<array_sum( arr);
            
          case 'p':
          cin>>array;
          cout<<"the product of array ="<<array_prod(arr);
          break;
          default:
             break;
      }
}
double array_sum(float arr[]){
   
   double c=0;
  
   for(int i=0;i<10;i++){
       c=c+arr[i];
   }
 return c;
}
float array_prod(float arr[]){
   
 float r=1;
  
   for(int i=0;i<10;i++){
       r=r * arr[i];
   }
   return r;
}