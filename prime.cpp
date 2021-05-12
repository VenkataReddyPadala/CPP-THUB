#include<bits/stdc++.h>
using namespace std;
// 1ST METHOD
int isprime1(int num){
    for(int i=2;i<num;i++)
      if(num%i==0)
        return 1;
    return 0;
}
// 2ND METHOD
int isprime2(int num){
    for(int i=2;i<=num/2;i++)
      if(num%i==0)
        return 1;
    return 0;
}
// 3RD METHOD
int isprime(int num){
    for(int i=2;i< int(sqrt(num))+1;i++)
      if(num%i==0)
        return 1;
    return 0;
}
int main(){
    int num,a;
    cout<<"Enter a number : ";
    cin>>num;
    if(isprime(num))
      cout<<num<<" is Not a prime";
    else
      cout<<num<<" is a prime";

}
