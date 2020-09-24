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
bool b[15];
void solve(){
   int n=8;
   string s[4];
    for(int i=0;i<4;i++){
        cin >> s[i];
    }
    int p[4],ans=0;
    iota(p,p+4,0);
    int bns=0;
    do{
        bool ok=1;
        bns++;
        for(int i=0;i<4;i++)ok=ok&(s[i][p[i]]=='.');
        memset(b,0,15);
        for(int i=0;i<4;i++){
            if(b[i+p[i]])ok=0;
            b[i+p[i]]=1;
        }
        memset(b,0,15);
        for(int i=0;i<4;i++){
            if(b[i+3-p[i]])ok=0;
            b[i+3-p[i]]=1;
        }
        ans+=ok;
    }while(next_permutation(p,p+4));
    cout << ans;

}

int main(){
   boost;
        solve();
    
}
