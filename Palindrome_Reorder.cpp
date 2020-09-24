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
   cin >>s;
   int a[27]={};
   for(char x:s){
       ++a[x-'A'];
   }
   int cnt =0;
   int mx=0;
   for(int i=0;i<26;i++){
        cnt+= a[i]&1;
        
   }
   if(cnt > 1 ){
       cout << "NO SOLUTION" << endl;
       return;
   }
   string t;

   for(int i=0;i<26;i++){
       if(a[i]&1^1){
           for(int j=0;j<a[i]/2;++j){
               t+=(char)'A'+i;
           }
       }
   }
   cout << t;
   for(int i=0;i<   26;i++){
       if(a[i]&1){
            for(int j=0;j<a[i];j++){
                cout << (char) ('A' + i);
            }
       }
   }
   reverse(t.begin(),t.end());
   cout << t << endl;
   
}

int main(){
   boost;
        solve();
    
}
