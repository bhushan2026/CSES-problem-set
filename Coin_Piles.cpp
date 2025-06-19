#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
 
const int MOD = 1e9 + 7;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
 
        if((a+b)%3 || min(a,b) < max(a,b)/2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}