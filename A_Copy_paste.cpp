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
// int const nax=2e5;
// int const M=1e9;

// void solve(){int ways =0;
//    int n,k;
//    cin >> n>>k;
//    int a[n];
//    for(int i=0;i<n;i++)cin>> a[i];
//    if(n==2){
//        if(a[1]+a[0]>k){
//            cout << 0 << endl;
//            return;
//        }
//    }
//    int z =min(a[0],a[1]);
//    int indz;
//    if(z=a[0])indz=0;
//    else indz =1;
//    for(int i=0;i<n;i++){
//        if(i==indz)i++;
//        while(a[i]<k){
//            ways ++;
//            a[i]+=z;
//        }
//     //    while(a[i]<k){
//     //        a[i]+=z;
//     //        ways++;
//     //    }
//    }
//    if(indz=1){
//        while(a[1]<k){
//            a[1]+=a[0];
//            ways++;
//        }
//    }
//    cout << ways << endl;
   
// }

// int main(){
//    boost;
//    int t=1,z=1;
//    cin>>t;
//    while(t--){
//    //cout<< "Case #"<< z++ <<  ": " ;
//         solve();
//     }
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
int const nax=2e5;
int const M=1e9;

void solve(){
   int n,k;
   int ways =0;
   cin>> n >> k;
   int a[n];
   int mni=-1;
   int mn = -1;
   for(int i=0;i<n;i++){
    cin >> a[i];
   if(mn==-1||a[mn]>a[i])mn=i;
   }
   for(int i=0;i<n;i++){
       if(i!=mn){
           ways+=((k-a[i])/a[mn]);
       }
   }
   cout << ways << endl;
}

int main(){
   boost;
   int t=1,z=1;
   cin>>t;
   while(t--){
   //cout<< "Case #"<< z++ <<  ": " ;
        solve();
    }
}
