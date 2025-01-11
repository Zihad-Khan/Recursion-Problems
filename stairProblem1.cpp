#include<iostream>
using namespace std;

int countWay(int stairs,int way){
     cout<<"stairs:"<<stairs<<" ways:"<<way<<endl;
    if(stairs == 0){
        way++;
        return way;
    }
    if(stairs == -1){
        return way;
    }
    way = countWay(stairs-1,way);
    // cout<<way<<endl;
    way = countWay(stairs-2,way);
    return way;
}

int main(){
    cout<<countWay(5,0)<<endl;
}