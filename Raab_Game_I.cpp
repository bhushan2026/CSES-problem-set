#include <iostream> 
using namespace std;

void solve(int n, int a, int b){
    if(a+b > n || a == n || b == n) cout<<"NO"<<endl;
    else if(a == 0 && b == 0){
        cout<<"YES"<<endl;
        for(int i = 1;i<=n;i++) cout<<i<<" ";
        cout<<endl;
        for(int i = 1;i<=n;i++) cout<<i<<" ";
        cout<<endl;
    }
    else if(a == 0 || b == 0) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;

        int arr[n] = {0};
        int brr[n] = {0};

        int p = a+b;
        int q = a;
        int i;
        int temp = a+b;
        for(i = 0;i<a+b;i++){
            arr[i] = temp-i;
            if(i < a) brr[i] = a-i;
            else brr[i] = arr[i-a];
        }

        while(i < n){
            arr[i] = brr[i] = i+1;
            i++;
        }

        for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
        for(int i = 0;i<n;i++) cout<<brr[i]<<" ";
        cout<<endl;
    }
}


int main(){
    int t = 0;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;

        solve(n, a, b);
    }
    return 0;
}