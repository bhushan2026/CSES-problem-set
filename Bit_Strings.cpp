#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
 
const int MOD = 1e9 + 7;
 
int main(){
    int n;
    cin>>n;
    int ans = 1;
    for(int i=0;i<n;i++){
        ans = (ans * 2)%MOD;
    }
    cout<<ans;
    
    return 0;
}