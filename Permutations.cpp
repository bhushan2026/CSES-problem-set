#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    if(n >1 && n <= 3){
        cout<<"NO SOLUTION";
    }
    else if(n == 4){
        cout<<3<<" "<<1<<" "<<4<<" "<<2;
    }
    else{
        for(int i = 1;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i = 2;i<=n;i+=2){
            cout<<i<<" ";
        }
    }
    return 0;
}