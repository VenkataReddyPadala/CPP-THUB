/* CHECK IF IT IS POSSIBLE TO MOVE FROM LOCATION (1,1) T0 CERTAIN POINT (X,Y)
CONDITION : YOU CAN ONLY GO TO A LOCATION BASED ON (A+B,A) (OR) (A,A+B) WHERE A = 1, B=1 INITIALLY*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,a,b;
    cout<<"enter the direction you want to go from (1,1) : ";
    cin>>x>>y;
    a=x;
    b=y;
    //CODE FOR GCD
    while(1){
        if(x<y)
            swap(x,y);
        x%=y;
        if(x==0){
            
            break;
        }
    }
    if(y==1)
     cout<<"you can go to the location "<<a<<","<<b<<" from (1,1) ";
     else
     cout<<"you can't go to the location "<<a<<","<<b<<" from (1,1) ";
return 0;
}