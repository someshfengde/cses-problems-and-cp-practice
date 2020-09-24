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
int const naxn=1e9;
void DecimalToBinary() {
    int n;
    cin>> n;
   int bin[100], num=n;
   int i = 0;
   while (n > 0) {
      bin[i] = n % 2;
      n = n / 2;
      i++;
   }
   for (int j = i - 1; j >= 0; j--)
   cout << bin[j];
   cout<<endl;
}
int main() {
    boost;
    int t;
    cin >>t;
    while(t--){
        DecimalToBinary();
    }
   return 0;
}