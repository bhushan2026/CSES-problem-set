#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
 
const int MOD = 1e9 + 7;
 
int main(){
    int n;
    cin>>n;
    
    int ans = 0;
    long long temp = 5;
    while(temp <= n){
        ans += n/temp;
        temp *= 5;
    }
    cout<<ans;
    
    return 0;
}