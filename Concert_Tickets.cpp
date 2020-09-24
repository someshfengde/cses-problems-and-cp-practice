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
#define ar array
#define pai pair<int, int>

using namespace std;

void solve(){
    int n,m;
    cin >>n>>m;
    int a[n];
    // for (int i = 0; i < n; i++) cin>>a[i];
    set <ar<int ,2>> s;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        s.insert({a,i});
    }
    // for(auto x:s){
    //     cout << x[0]<< " " << x[1] << endl;
    // }
    for(int i=0;i<m;++i){
        int t;
        cin >> t;
        auto it = s.lower_bound({t+1 ,0});
        if(it == s.begin())cout << -1 << endl;
        else {
            --it;
            cout << (*it)[0] << endl;
            s.erase(it);
        }
    }
    
    
    
   
}

int main(){
   boost;
        solve();
    
}
