#include<iostream>
using namespace std;

int findXORBeauty(int n[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans ^= n[i];
    }
    return ans;
}

int main(){
    int n[]={1, 4};
    int size=sizeof(n)/sizeof(n[0]);
    cout<<findXORBeauty(n, size)<<endl;
    return 0;
}