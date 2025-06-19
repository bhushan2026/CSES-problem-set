#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long y, x;
        cin>>y>>x;
 
        long long n = max(y, x);
        long long num = 1LL*n*n - n + 1;
 
        if(y == x){
            cout<<num<<endl;
        }
        else if(y < x){
            if(x%2){
                num += (n-y);
            }
            else{
                num -= (n-y);
            }
            cout<<num<<endl;
        }
        else{
            if(y%2){
                num -= (n-x);
            }
            else{
                num += (n-x);
            }
            cout<<num<<endl;
        }
    }
    
    return 0;
}
