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
#define int long long
#define boost ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define pai pair<int, int>

using namespace std;

void solve(){
   int n;
   cin >> n;
   ll sn=n*(n+1)/2;
   if(sn%2!=0){
       cout << "NO" << endl;
       return;
   }
   cout << "YES" << endl;
   ll left = sn/2;
    ll sum =0;
   vector<int> accepted , rejected;
    for(int i=n;i>0;i--){
        if(sum+i <= left){
            sum+= i;
            accepted.pb(i);
            continue;
        }
        rejected.pb(i);
    }
    cout << accepted.size() << endl;
    for(auto x: accepted){
        cout << x << " ";
    }
    cout << endl;
    cout << rejected.size() << endl;
    for(auto x:rejected){
        cout << x << " ";
    }
    cout << endl;
}

int32_t main(){
   boost;
        solve();
    
}
