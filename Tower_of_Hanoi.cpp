/*

The idea is solve Tower of Hanoi problem using recursion. A recursive approach is employed, 
breaking down the problem into three main steps: moving 'n-1' disks to an auxiliary stack, 
transferring the largest disk to the target stack, and finally, moving the 'n-1' disks from 
the auxiliary stack to the target stack. This recursive strategy ensures an optimal solution 
with minimal moves for the Tower of Hanoi puzzle.

*/


#include <iostream>
#include<vector>
using namespace std;

void moveDisk(int n, vector<vector<int>> &moves, int src, int des, int aux){

    if(n == 1){
        moves.push_back({src, des});
        return;
    }

    moveDisk(n-1, moves, src, aux, des);

    moves.push_back({src, des});

    moveDisk(n-1, moves, aux, des, src);
    
    return;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> moves;

    int source = 1, destination = 3, auxiliary = 2;
    moveDisk(n, moves, source, destination, auxiliary);

    cout<<moves.size()<<endl;
    for(vector<int> move : moves){
        cout<<move[0]<<" "<<move[1]<<endl;
    }

    return 0;
}