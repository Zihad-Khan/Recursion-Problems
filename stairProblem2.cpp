#include<iostream>
using namespace std;

int stairPath(int stairs){

    if(stairs == 1) return 1;
    if(stairs == 2) return 2;
    if(stairs == 3) return 4;

    int singleStep = stairPath(stairs-1);
    int doubleStep = stairPath(stairs-2);
    int trippleStep = stairPath(stairs-3);

    int totalWays = singleStep + doubleStep + trippleStep;
}

int main(){
    cout<<stairPath(4);
}