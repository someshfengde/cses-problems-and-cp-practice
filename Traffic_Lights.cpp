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
#define ar array
using namespace std;
int const maxn=2e9;

int x,n;
void solve(){
    cin >> x >> n;
    int p[n];
    map<int,int > mp;
    set<int>s;
    s.insert(0);
    s.insert(x);
    mp[x]=1;
    for(int i=0;i<n;i++){
        cin>>p[i];
        auto it = s.lower_bound(p[i]);
        int r=*it;
        --it;
        int l = *it;
        --mp[r-l];
        if(!mp[r-l]){
            mp.erase(r-l);
        }
        s.insert(p[i]);
        ++mp[r-p[i]];
        ++mp[p[i]-l];
        cout << ((--mp.end())->first)<< " " ;

    }
}

int main(){
   boost;
        solve();
    
}
