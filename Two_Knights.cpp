#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int k;
    cin>>k;
    for(long long n = 1;n<=k;n++){
        long long total = (n*n * (n*n - 1))/2;
        long long req = (4 * (n - 1) * (n - 2));
        cout<<total - req<<endl;
    }
    
    return 0;
}