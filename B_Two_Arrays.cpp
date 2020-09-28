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
int const nax=2e5;
int const M=1e9;

void solve(){
   int n,un;
   cin>> n >> un;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            cout << 1 << " " << 0 << " " ;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(i%2)cout << 1 << " ";
            else cout << 0 << " " ;
        }
    }
    cout << endl;
}

int main(){
   boost;
   int t=1,z=1;
   cin>>t;
   while(t--){
   //cout<< "Case #"<< z++ <<  ": " ;
        solve();
    }
}
