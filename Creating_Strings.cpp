#include <iostream>
#include <vector>
using namespace std;

void solve(int arr[], vector<string> &ans, string &k, int n){
    if(k.length() >= n){
        ans.push_back(k);
        return;
    }
    for(int i = 0;i<26;i++){
        if(arr[i] > 0){
            arr[i]--;
            k.push_back('a' + i);
            solve(arr, ans, k, n);
            k.pop_back();
            arr[i]++;
        }
    }
    return;
}

int main(){
    int n = 0;
    string s;
    cin>>s;

    n = s.length();

    int arr[26] = {0};
    vector<string> ans;

    for(char c : s){
        arr[c-'a']++;
    }
    string k = "";
    solve(arr, ans, k, n);

    cout<<ans.size()<<endl;
    for(string t : ans){
        cout<<t<<endl;
    }

    return 0;
}