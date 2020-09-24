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
   int n;
   cin >> n;
   string s;
   cin >> s; int ans=0;
   int cnt=0;
   while(s.size() && s[0]==s.back()){
       cnt++;
       s.pop_back();
   }
   if(s.empty()){
       if(cnt<=2){cout << 0 << endl;return;}
        else{ cout <<( n+2)/3 << endl;return;}
   }
  
   
   s.push_back('$');
{
    
       
       for(int i=0;i+1<s.size();i++){
           cnt++;
           if(s[i]!=s[i+1]){
               ans+=cnt/3;
               cnt=0;   
           }
       }

    //    int p=-1;
    //    for(int i=1;i<n;i++){
    //        if(s[i] !=s[i-1]){
    //            p=i;
    //            break;
    //        }
    //    }
    //    for(int i=1;i<n;i++){
    //        int start=(p+i-1)%n;
    //        int cur=(p+i)%n;
    //        if(s[start]==s[cur]){
    //            int j=i;
    //            while(j<n&& s[start] ==s[(p+j)%n])j++;
    //            int len=j-i+1;
    //            ans+x=len/3;
    //            i=j;
    //        }
    //    }
   }
   cout << ans << endl;

}

int main(){
   boost;
   int t;
   cin >> t;
   
   while(t--)
        solve();
    
}
