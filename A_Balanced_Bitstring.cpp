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

// void solve(){
//    int n;
//    cin >> n;
//    int k; 
//    cin >>  k;
//    string s;
//    cin >> s;
//    vector<int> a(n+1);
//    int zero=0;
//    int one =0;
//    int ques=0;
//    bool chk=true;
//    for(int i=0;i<n;i++){
//        int temp = -1;
//        for(int j=i;j<n;j+=k){
//            if(s[j] != '?'){
//            if(temp != -1 && s[j]-'0'!=temp){
//                chk=false;
//                break;
//            }
//            temp=s[j]-'0';
//        }    
//         } 
//     if(temp!=-1){
//         (temp== 0?zero:one)++;
//     }
//    }
//    if(max(zero,one)>k/2){
//        chk=false;
//    }
//    cout << (chk?"YES":"NO");    
//    cout << endl;
// }
void bolve(){
    int n;
    int k;
    string s;
    cin >> n >> k >> s;
    bool bol=true;
    int zero =0;
    int one =0;
    for(int i=0;i<k;i++){
        int temp = -1;
        for(int j=i;j<n;j+=k){
            if(s[j]!='?'){
                if(temp != -1 && s[j]-'0'!= temp){
                    bol = false;
                    break;
                }
                temp = s[j] -'0';
            } 
      
        }  if(temp!=-1){
            (temp == 0 ? zero:one)++;
        }   
       
    }
    if(max(zero,one)>k/2){
        bol = false;
    }
    if(bol)cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        bolve();
    
}

