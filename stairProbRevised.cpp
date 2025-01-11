#include<iostream>
using namespace std;

int jumpStair(int n){
    if(n==0) return 1;
    if(n==1){
        cout <<1<<" "<<endl;
        return jumpStair(0);
    }
    else if(n>1){

        cout <<1<<" ";
        int singleStep = jumpStair(n-1);
        cout<<2<<" ";
        int doubleStep = jumpStair(n-2);
        int totalWays = singleStep + doubleStep;
        return totalWays;
    }
}

int main(){
    cout<<jumpStair(3)<<endl;
}