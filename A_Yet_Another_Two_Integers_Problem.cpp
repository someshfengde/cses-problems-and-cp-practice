
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
   ll int a,b;
   cin >> a >> b;
   ll int c = abs(a-b);
   if(c==0){cout << 0 << endl;return;}
   for(int i=1;i<=10;i++){
   	if(c==i){cout << 1 << endl;return;}
   }
   //ll int d = c/10 + c%10;
   ll int g=10e9;
   for(int i=1;i<=10;i++){
   	
   	ll int asd=(c/i);
      if(c%i!=0)asd+=1;
      
   	g=min(g,asd);
      //bcout << asd << " " << i << endl;
   }
   cout << g<< endl;
   return;
}

int main(){

   boost;
   int t;
   cin >>t;
   while(t--)
        solve();
    
}

