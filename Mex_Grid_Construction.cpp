#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<vector<int>> &mat){
    vector<unordered_set<int>> arr(n);
    for(int i = 1;i<n;i++){
        for(int j = 0;j<i;j++){
            int k = 1;
            while(arr[i].find(k) != arr[i].end() || arr[j].find(k) != arr[j].end()) k++;
            arr[i].insert(k);
            arr[j].insert(k);
            mat[i][j] = k;
            mat[j][i] = k;
        }
    }
    return;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> mat(n, vector<int>(n, 0));
    solve(n, mat);
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}