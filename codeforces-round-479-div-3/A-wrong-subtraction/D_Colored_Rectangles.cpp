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
// #include <stdio.h>
// #include<iostream>
// #include <algorithm>
// #include<stdlib.h>
// #include<vector>
// #include<math.h>
// #include<mem.h>
// #include<memory.h>
#include <__msvc_all_public_headers.hpp>

#define boost ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define pai pair<int, int>

using namespace std; 
 ll  r,g,b;
 vector<int> red , green , blue;
 ll ans=0;
 ll dp[300][300][300];
 ll ok(int x, int y , int z){
     if((x>=r && y>=g)||(x>=r && z>=b) || (y>=g && z>=b)){
         return 0;
     }
     if(dp[x][y][z]!=-1){
         return dp[x][y][z];
     }
     ll maxi=0;
     if(x<r && y<g)maxi=max(maxi,red[x]*green[y] + ok(x+1,y+1,z));
      if(y<g && z<b)maxi=max(maxi,blue[z]*green[y] + ok(x,y+1,z+1));
       if(x<r && z<b)maxi=max(maxi,red[x]*blue[z] + ok(x+1,y,z+1));
     ans=max(ans,maxi);
     return dp[x][y][z]=maxi;
 }



int main(){
   boost;
   int x;
         cin >> r >> g >> b;
    for (int i = 0; i < r; i++) {cin >> x; red.push_back(x);}
    for (int i = 0; i < g; i++) {cin >> x; green.push_back(x);}
    for (int i = 0; i < b; i++) {cin >> x; blue.push_back(x);}
    sort(red.rbegin(),red.rend());
    sort(blue.rbegin(),blue.rend());
    sort(green.rbegin(),green.rend());
    memset(dp,-1,sizeof(dp));
    ok(0,0,0);
    cout << ans << endl;
    
}
