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
vector<vector<int>> edges;
vector<int>dist;
void dfs(int a,int par){
    for(int b:edges[a]){
        if(b!=par){
            dist[b]=dist[a]+1;
            dfs(b,a);
        }
    }
}
void solve(){
   int n,sa,sb,A,B;
   cin>> n >> sa >> sb >> A >> B ;
   edges.clear();
   dist.clear();
   edges.resize(n+1);
   dist.resize(n+1);
   for(int i=0;i<n-1;++i){
       int a , b;
       cin >> a >> b;
       edges[a].pb(b);
       edges[b].pb(a);
   }
   if(B<=2*A){
       cout << "Alice" << endl;
       return;
   }
   dist[sa]=0;
   dfs(sa,-1);
   if(dist[sb]<=A){
       cout << "Alice" << endl;
       return;
   }
   int best =1 ;
   
   for(int i=2;i<=n;++i){
       if(dist[i] > dist[best])best = i;
   }
   dist[best] =0;
   dfs(best,-1);
   for(int i=1; i<=n;++i){
       if(dist[i] >=2*A+1){
            cout << "Bob" << endl;
            return;
       }
   }
   cout <<"Alice" << endl;
}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        solve();
    
}
