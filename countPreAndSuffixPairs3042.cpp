#include<iostream>
#include<string>
#include<vector>
using namespace std;
int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;

        //traversing through the array
        for(int i=0; i<n-1; i++){
            string str1 = words[i];
            int l1 = str1.length();
            
            //comparing two adjacent elements
            for(int j=i+1; j<n; j++){
                string str2 = words[j];
                int l2 = str2.length();
                if(l1 < l2){
                    cout<<l2-l1-1<<endl;
                    if(str1 == str2.substr(0,l1) && str1 == str2.substr(l2-l1,l1)){
                        count++;
                    }
                }
                else continue;
            }
        }
        return count;
    }

int main(){
    vector<string> words{"a","aba","ababa","aa"};
    cout<<countPrefixSuffixPairs(words);

}