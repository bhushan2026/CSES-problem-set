#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int n){
    return (i >= 0 && i < n && j >= 0 && j < n);
}

void solve(vector<vector<int>> &mat, int n){
    queue<pair<int,int>> q;
    q.push(make_pair(0, 0));
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();

        int i = p.first/n;
        int j = p.first%n;

        if(mat[i][j] != -1) continue;
        int val = p.second;
        mat[i][j] = val;

        if(isValid(i+2, j-1, n)) q.push(make_pair((i+2)*n+(j-1), val+1));
        if(isValid(i+2, j+1, n)) q.push(make_pair((i+2)*n+(j+1), val+1));
        if(isValid(i-2, j-1, n)) q.push(make_pair((i-2)*n+(j-1), val+1));
        if(isValid(i-2, j+1, n)) q.push(make_pair((i-2)*n+(j+1), val+1));
        if(isValid(i-1, j+2, n)) q.push(make_pair((i-1)*n+(j+2), val+1));
        if(isValid(i+1, j+2, n)) q.push(make_pair((i+1)*n+(j+2), val+1));
        if(isValid(i-1, j-2, n)) q.push(make_pair((i-1)*n+(j-2), val+1));
        if(isValid(i+1, j-2, n)) q.push(make_pair((i+1)*n+(j-2), val+1));
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n, -1));
    solve(mat, n);

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}