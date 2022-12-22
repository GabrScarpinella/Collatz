#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Input a number: ";
    cin>>x;
    if(x!=0){
        while (x!=1){
            if(x%2==0){
                x/=2;
            }
            else{
                x=x*3+1;
            }
            cout<<x<<"\n";
        }
    }
    else{}
}
