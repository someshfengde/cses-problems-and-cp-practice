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

int solve(){
   int n;
   cin >> n;
   int b;
   cin >>b;
   vector<int> a(n);
   for(int i=0;i<n;i++){
       cin >> a[i];
   }
   sort(a.begin(),a.end());
   ll box=0;
   for(int i=0;i<n;i++){
       if(a[i]<=b){
           box++;
           b-=a[i];
       }
   }
   return box;
}

int main(){
   boost;
   int t;
   cin >> t;
   for(int i=1;i<=t;i++){
       int x = solve();
        cout << "Case #" <<i <<": " << x <<endl;
        }
    
}
