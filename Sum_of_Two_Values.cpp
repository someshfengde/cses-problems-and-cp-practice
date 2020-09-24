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
const int maxe = 2e7;
int n,x;
int a[maxe];
void solve(){
   cin >> n >> x;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int z;
        cin >> z;
        if(mp.find(x-z)!=mp.end()){
            cout << mp[x-z]+1 << " " <<i+1;
            return;
        }
        mp[z]=i;
        }
        cout << "IMPOSSIBLE" << endl;
}

int main(){
   boost;
        solve();
    
}
