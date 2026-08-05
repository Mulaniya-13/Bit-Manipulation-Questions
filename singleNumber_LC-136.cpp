#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> num){
    int ans=0;
    for(int i=0;i<num.size();i++){
        ans ^= num[i];
    }
    return ans;
}

int main(){
    vector<int> num={2,2,1};
    cout << singleNumber(num) << endl;
    return 0;
}