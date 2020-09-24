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
char w[100000001];
bool f;
void solve(){
   string s;
   cin >> s;
   int z=s.length();
   int x;
   cin >> x;
   for(int i=0;i<z;++i)w[i]='1';w[z]=0;f=0;
   for(int i=0;i<z;++i){
       if(s[i]=='0'){if(i-x>=0)w[i-x]='0';
       if(i+x<z)w[i+x]='0';}
   }
   for(register int i=0;i<z;++i){
       if(s[i]=='1' && (i-x<0|| w[i-x]=='0') && (i+x>=z || w[i+x]=='0'))f=1;
   }
   if(f)cout << -1 << endl;
   else cout << w << endl;

}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        solve();
    
}
