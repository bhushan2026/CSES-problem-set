#include <iostream>
#include <vector>
using namespace std;

int n = 8;
vector<bool> row(n, false);
vector<bool> col(n, false);
vector<bool> diga(n+n-1, false);
vector<bool> digb(n+n-1, false);

bool valid(int i, int j){
    return !row[i] && !col[j] && !diga[i+j] && !digb[i-j+n-1];
}

void solve(vector<vector<char>> &mat, int &ans, int idx){
    if(idx >= n){
        ans++;
        return;
    }

    for(int i = 0;i<n;i++){
        if(valid(idx, i) && mat[idx][i] != '*'){
            row[idx] = true;
            col[i] = true;
            diga[idx+i] = true;
            digb[idx-i+n-1] = true;
            solve(mat, ans, idx+1);
            row[idx] = false;
            col[i] = false;
            diga[idx+i] = false;
            digb[idx-i+n-1] = false;
        }
    }
    return;
}

int main(){
    vector<vector<char>> mat(n, vector<char>(n, '.'));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    
    int ans = 0;
    solve(mat, ans, 0);
    cout<<ans<<endl;
    return 0;
}