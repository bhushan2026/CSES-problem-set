#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<bool> arr(n+1, false);
    for(int i = 0;i<n-1;i++){
        int x;
        cin>>x;
        arr[x] = 1;
    }
    for(int i = 1;i<=n;i++){
        if(arr[i] == false) cout<<i;
    }
    return 0;
}