#include<iostream>
#include<string>
using namespace std;

int maze(int cr,int cc,int er,int ec,string dir){
    int rightWays = 0;
    int downWays = 0;

    if(cr==er && cc==ec){
        cout<<dir<<endl;
        return 1;
    }
    else if(cr == er) rightWays += maze(cr,cc+1,er,ec,dir+"R");
    else if(cc == ec) downWays += maze(cr+1,cc,er,ec,dir+"D");
    else{
        rightWays += maze(cr,cc+1,er,ec,dir+"R");
        downWays += maze(cr+1,cc,er,ec,dir+"D");
    }
    return rightWays + downWays;
}

int main(){
    cout<<maze(1,1,3,3,"");
}