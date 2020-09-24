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
// bool ispalin(string a){
//     int l = a.length();
//     for(int i=0;i<l;i++){
//         if(a.charAt(i)!=a.charAt(l-i-1))return false;
//     }
//     return true;
// }
void solve(){
   string s;
   cin >> s;
  int c;
   int n=s.size();
   int i;
   for(i=0;i<n/2-1;i++){
       if(s[i]!=s[i+1])break;
   }

    if(i==n/2-1 || n<=3){
        cout << "Impossible" << endl;
        return;
    }
    // string count=""
    // count+=s/2;
   
    int j;
    for(i=0;i<n/2;i++){
        if(s[i]!=s[i+1])continue;
        for(j=0;j<n/2;j++){
            if(s[(i-j+n)%n]!=s[(i+j+1)%n])break;
            if(j==n/2){
                if(s[j]!=s[(i+j+1)%n])break;
               
            } if(j!=n/2){cout << 1 << endl ; return;}
        }

    }
    cout << 2 << endl;
}

int main(){
   boost;
        solve();
    
}
