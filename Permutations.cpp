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
   ll n;
   cin >> n;
   if(n==1){
       cout << 1 << endl;
       return;
   }
   if(n==2 || n==3){
       cout << "NO SOLUTION"<< endl;
        return;
   }
   if(n%2==0){
       for(int i=2;i<=n;i+=2){
           cout << i << " ";
       }
       for(int i=1; i<n;i+=2){
           cout << i << " " ;
       }
   }
   else {
       for(int i=n;i>0;i-=2){
           cout << i << " " ;
       }
       for(int i=n-1;i>0;i-=2){
           cout << i << " ";
       }
   }
}

int main(){
   boost;
        solve();
    
}
