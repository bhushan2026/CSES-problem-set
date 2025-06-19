#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(int idx, ll* arr, ll sum1, ll sum2, ll n)
{
    if (idx == n) {
        return abs(sum1 - sum2);
    }
    ll include = solve(idx + 1, arr, sum1 + arr[idx], sum2, n);

    ll exclude = solve(idx + 1, arr, sum1, sum2 + arr[idx], n);

    return min(include, exclude);
}

int main()
{
    ll n = 0;
    cin>>n;
    ll arr[n] = {0ll};
    for(int i = 0;i<n;i++) cin>>arr[i];

    ll ans = solve(0, arr, 0, 0, n);
    cout<<ans<<endl;
}