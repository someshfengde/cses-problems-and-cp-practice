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
   //first 0---2
   // second 3 -- (x)+2)
   //3rd (x+3)=--(2(x)+2)
   int n,x;
   cin >> n >> x;
   int xe=2;
   int floo=1;
   while((xe<n)){
       floo++;
       xe+=x;
   }
   cout << floo << endl;
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
