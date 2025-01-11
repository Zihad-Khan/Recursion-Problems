#include<iostream>
using namespace std;

void tower(int n, char s, char h, char d){
    if(n==0) return;

    tower(n-1,s,d,h);
    cout<<"Move "<<s<<"-> "<<d<<endl;
    cout<<n<<endl;
    tower(n-1,h,s,d);
    return;
}
 
int main(){
    tower(3,'A','B','C');
}