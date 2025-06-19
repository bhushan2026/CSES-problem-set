#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
 
    int n = s.length();
 
    int arr[26] = {0};
    for(char c : s){
        arr[c-'A']++;
    }
 
    bool flag = false;
    int c;
    string part1 = "";
    string part2 = "";
    int i;
    for(i = 0;i<26;i++){
        if(arr[i]%2 == 0){
            string temp = "";
            for(int j = 0;j<arr[i]/2;j++) temp += ('A' + i);
            part1 = part1 + temp;
            part2 = temp + part2;
        }
        else{
            if(flag) break;
            flag = true;
            c = i;
        }
    }
    if(i < 26) cout<<"NO SOLUTION"<<endl;
    else{
        string temp = "";
        if(flag){
            for(int i = 0;i<arr[c];i++){
                temp += ('A' + c);
            }
        }
        cout<<part1<<temp<<part2<<endl;
    }
    
    return 0;
}