#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int divide(int dividend, int divisor) {
        // if(dividend==0)
        // return 0;
        // bool negative=(dividend<0) != (divisor<0);
        // long long a=abs((long long)dividend);
        // long long b=abs((long long)divisor);
        // long long ans=0;
        // while(a>=b){
        //     a-=b;
        //     ans++;
        // }
        // if(negative)
        // ans=-ans;
        // if(ans>INT_MAX)
        // return INT_MAX;
        // return ans;
        if(dividend==INT_MIN && divisor==-1)
        return INT_MAX;
        bool negative=(dividend<0)!=(divisor<0);
        long long a=abs((long long)dividend);
        long long b=abs((long long)divisor);
        long long ans=0;
        while(a>=b){
            long long temp=b;
            long long multiple=1;
            while(a>=(temp<<1)){
                temp<<=1;
                multiple<<=1;
            }
            a-=temp;
            ans+=multiple;
        }
        if(negative)
            ans=-ans;
        return ans;
    }

int main(){
    cout<<divide(10,3);
    return 0;
}