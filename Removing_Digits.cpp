// /*
// You're my honeybunch, sugar plum
// Pumpy-umpy-umpkin
// You're my sweetie pie
// You're my cuppycake, gumdrop
// Snoogums, boogums, you're
// The apple of my eye

// And I love you so
// And I want you to know
// That I'm always be right here
// And I want to sing
// Sweet songs to you
// Because you are so dear...

// */
// #include <bits/stdc++.h>
// #include<iostream>

// #define boost ios::sync_with_stdio(0); cin.tie(0);
// #define ll long long
// #define endl '\n'
// #define F first
// #define S second
// #define pb push_back
// #define pai pair<int, int>
// #define ar array

// using namespace std;
// int const maxn=2e9;
// int const naxn=1e8;
// ll dp[naxn+1];
// int step = 0;
// int recurse(int n){
//     if(n==0){
//         return step;
//     }
//     if(1){
//         step++;
//         string s = to_string(n);
//         int ma=0;
//         for(int i=0;i<s.length();i++){
//             ma = max(ma,s[i]-'0');
//         }
//         return recurse(n-ma);
//     }
//     return 0;
// }
// void solve(){
//    int n;
//    cin >>n;
//    cout << recurse(n);
// }

// int main(){
//    boost;
//         solve();
    
// }
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
#define ar array

using namespace std;
int const maxn=2e9;
int const naxn=1e8;
ll dp[naxn+1];
void solve(){
   int n;
   cin >> n;
   //dp[0] = 1;
   for(int i=1;i<=n;i++){
       dp[i] = 1e18;
        int i2 = i;
        while(i2){
            dp[i] = min(dp[i] ,dp[i-i2%10]+1);
            i2/=10; 
        }
   }
   cout << dp[n] << endl;
}

int main(){
   boost;
        solve();
    
}

