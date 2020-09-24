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
   string s;
   cin >> s;
   ll mum=0;
   ll occ=0;
    char fi='A';
    for(char d:s){
        if(d==fi){
            occ++;
            mum= max(occ,mum);
        }
        else {
            fi=d;
            occ=1;
        }
    }
   cout << mum << endl;
}

int main(){
   boost;
        solve();
    
}
