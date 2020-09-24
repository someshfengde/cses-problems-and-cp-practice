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
int const naxn=1e9;

void solve(){
   int n,t;
    cin >> n>> t;
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    ll lb = 1;
    ll rb = 1e18;
    while(lb<rb){
        ll mb = (lb+rb)/2,s=0;
        for(int i=0;i<n;i++){
            s+=min(mb/a[i],(ll)1e9);
        }
        if(s>=t)rb=mb;
        else lb=mb+1;
    }
    cout << lb ;
}

int main(){
   boost;
        solve();
    
}
