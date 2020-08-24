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
   ll int n;
   cin >> n;
   if(n<=2){
       cout << 0 << endl;
   }
   else{
       if(n/2 % 2 ==0)
       cout << (n/2)-1 << endl;
       else cout << n/2 <<endl;
   }
}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        solve();
    
}
