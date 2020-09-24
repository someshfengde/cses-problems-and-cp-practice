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
void solve(){
   int n;
    cin  >> n;
    int i=1;
    int s=0;
    while(i<n){
        if(n%i==0){s+=i;}
        ++i;
    }
    if(s==n){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--) 
        solve();
    
}
