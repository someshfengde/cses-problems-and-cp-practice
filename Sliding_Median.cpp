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
// #define mp make_pair<int,int>
// #define ar array
// using namespace std;
// int const maxn=2e9;
// int const naxn=1e9;
//  int n,k;
// void solve(){
//    cin >> n >> k;
//    vector<int> a(n); 
//    for(int i=0;i<n;i++){
//        cin >> a[i];
//    }
//    multiset<int> elems;
//    for(int i=0;i<k;i++){
//        elems.insert(a[i]);
//    }
//    auto it  = elems.begin();
//    for(int i=0;i<(k-1)/2;i++)it++;
//    cout << *it << " " ;
//    for(int i=k;i<n;i++){
//           if (a[i] > * it && a[i - k] < *it) {
//             elems.insert(a[i]);
//             auto itDel = elems.find(a[i - k]);
//             elems.erase(itDel);
//             it++;
//         }
//         else if (a[i] > * it && a[i - k] == *it) {
//             elems.insert(a[i]);
//             auto it_copy = it;
//             it++;
//             elems.erase(it_copy);
//         } else if (a[i] > * it && a[i - k] > *it) {
//             elems.insert(a[i]);
//             auto itDel = elems.find(a[i - k]);
//             elems.erase(itDel);
//         }
//         else if (a[i] < * it && a[i - k] > *it) {
//             elems.insert(a[i]);
//             auto itDel = elems.find(a[i - k]);
//             elems.erase(itDel);
//             it--;
//         }
//         else if (a[i] < *it && a[i - k] == *it) {
//             elems.insert(a[i]);
//             auto it_copy = it;
//             it--;
//             elems.erase(it_copy);
//         }
//         else if (a[i] < * it && a[i - k] < *it) {
//             elems.insert(a[i]);
//             auto itDel = elems.find(a[i - k]);
//             elems.erase(itDel);
//         }
//         else if (a[i] == *it && a[i - k] > *it) {
//             elems.insert(a[i]);
//             auto itDel = elems.find(a[i - k]);
//             elems.erase(itDel);
//         }
//         else if (a[i] == *it && a[i - k] < *it) {
//             elems.insert(a[i]);
//             auto itDel = elems.find(a[i - k]);
//             elems.erase(itDel);
//             it++;
//         }
//         cout << *it << " " ;
//    }
  

   
// }

// int32_t main(){
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
int const naxn=2e5;
int n,k;
ar<int,2> med ={-1};
int a[naxn];
multiset<ar<int,2>> top,bot;
void fast(){

    int m =1+top.size()+bot.size();
    if(bot.size()<(m-1)/2){
        bot.insert(med);
        med = *top.begin();
        top.erase(med);
    }
    if(bot.size()>(m-1)/2){
        top.insert(med);
        med = *--bot.end();
        bot.erase(med);
    }  
}
void add(ar<int,2> x){
    if(med[0] == -1){
        med = x;
        return ;
    }
    if(x<med){
        bot.insert(x);
    }
    else{
        top.insert(x);
    }
    fast();
}
void remove(ar<int,2> y){
    if(y==med){
        med = *top.begin();
        top.erase(med);
        }
    else if(y<med){
        bot.erase(y);
    }
    else{
        top.erase(y);
    }
    fast();
}
void solve(){
    cin >> n>> k;
    for(int i=0;i<n;i++)cin>>a[i];
    if(k==1){
        for(int i=0;i<n;i++){
            cout << a[i] << " " ;
        }
        return ;
    }
    for(int i=0;i<k-1;i++){
        add({a[i],i});
    }
    for(int i=k-1;i<n;i++){
        add({a[i],i});
        cout << med[0] << " " ;
        remove({a[i-k+1],i-k+1});
    }
   
}

int main(){
   boost;
        solve();
    
}

