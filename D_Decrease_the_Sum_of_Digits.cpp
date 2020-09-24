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
#include <bits/stdc++.h>
#include<iostream>

#define boost ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define pai pair<int, int>

using namespace std;

ll tot(ll int x){
    ll int bot=0;
    while(x>0){
        bot+=x%10;
        x/=10;
    }
    return bot;
}
ll solve(ll n, ll s){
    if(tot(n)<=s){
        return 0;
    }
    if(n%10==0){
        return solve(n/10,s)*10;
    }
    return solve(n+(10-n%10),s)+10-n%10;
}
void solve(){
   ll n,s;
   cin >> n >> s;   
    cout << solve(n,s)<<endl;

}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        solve();
    
}
