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

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    map<int,int> mp;
    int ans =0;
    for(int i=0,j=0;i<n;i++){
        while(j<n && mp[a[j]]<1){
            mp[a[   j]]++;
            ++j;
        }
        ans = max(j-i,ans);
        mp[a[i]]--;
    }
    cout << ans << endl;
   
}

int main(){
   boost;
        solve();
    
}
