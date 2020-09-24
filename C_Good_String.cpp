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
#define pai make_pair<int, int>

using namespace std;

void solve(){
   int n;
   cin >> n;
   int a[n];
   for(int i=0;i<n ;i++)cin >> a[i];
   int x;
   cin >> x ;
   //the element which are we going to search 
	int firstpos =0;
	int lastpos =0;
   int left=0;
   int right = n-1;
   while(left<=right){
	   int mid=left+(right-left)/2;
	   if(a[mid]>=x){
		   firstpos=mid;
		   right=mid-1;
	   }
	   else{
		   left=mid+1;
	   }
   }
   int low =0;
   int high =n-1;
    while(low<=high){ 
	   int mid=low+(high-low)/2;
	   if(a[mid]>=x+1){
		   lastpos=mid;
		   high=mid-1;
	   }
	   else{
		low=mid+1;
	   }
   }
   cout << firstpos << " " << lastpos-1 << endl;
}

int main(){
   boost;
   int n;
   cin >> n;
	vector<int> a(n,0);
   for(int i=0;i<n;i++)cin >> a[i];
   int x;
   cin >> x;
   vector<int>::iterator first,last;
	 first=lower_bound(a.begin(),a.end(),x);
	 last=lower_bound(a.begin(),a.end(),x+1);
	cout << first-a.begin() << " " << last - a.begin()-1<< endl;
}
