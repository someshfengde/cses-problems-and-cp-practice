/*
You're my honeybunch, sugar plum
Pumpy-umpy-umpkin
You're my sweetie pie
You're my cuppycake, gumdrop
Snoogums, boogums, you're
The apple of my eye

And I love you so
And I want you to know
That I'm always be right here
And I want to sing
Sweet songs to you
Because you are so dear...

*/
#include<iostream>

#define boost ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define pai pair<int, int>
#define ar array

using namespace std;
int const maxn=2e9;
int const naxn=1e9+7;
ll dp[3000];

void solve(){
    dp[3]=1;
   int n;
   cin >> n;
   for(int i=4;i<=n;i++)   dp[i]=(dp[i-1]+dp[i-3])%1000000007;
    cout << dp[n];
}

int main(){
   boost;
        solve();
    
}
