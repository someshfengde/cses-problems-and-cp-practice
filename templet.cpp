
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
#define max 10
using namespace std;
int left;
int right;
int a[10];
void insertright(){
	int x;
	cout << "enter the elemnt to be inserted to left"<< endl;
	cin >> x;
	if(left == -1){
		left =0;
		right=0;
	}
	else if(!isfull()){
		right ++;
	}
	else if(isfull()){
		cout <<"queue is full"<< endl;
	}
	a[right]=x;
}
void deleteleft(){
	if(!isempty()){
		cout << "deleted element is " + a[left] << endl;
		a[left]=0;
		left=(left+1)%max;
	}
}
void deleteright(){
	if(!isempty()){
		cout << "deleted element is " + a[right] << endl;
		a[right]=0;
		right=(right-1)%max;
	}
}
bool isempty(){
	if(left==-1 && right ==-1){
		return true;
	}
	return false;
}
bool isfull(){
	if((left+1)%max == right){
		return true;
	}
	return false;
}

void inputrest(){
	left =-1;
	right =-1;
	i
	//you can only input through one side;
	//i.e you can delte from any side;
	int x;
	do{
		cout<<"enter 1 for insertion of the element from right side" << endl;
		cout<<"enter 2 for deletion of element from left side " << endl;
		cout<<"enter 3 for deletion of element from right side" << endl;
		cout<<"enter 4 for viewing the entire queue" << endl;
		cout<<"enter 5 for finding the queue is empty or not" << endl;
		cout<<"enter 6 for finding queue is full or not" << endl;
		cout<<"enter 7 for exiting the program" << endl;
		cin >>x;
		switch(x){
			case 1:
				insertright();
				break;
			case 2:
				deleteleft();
				break;
			case 3:
				deleteright();
				break;
			case 4:
				//display();
				break;
			case 5:
				isempty();
				break;
			case 6:
				isfull();
				break;
		}
	}while(x!=7);

}

int main(){
   boost;
   // building the deque operation in ds class;
   //driver main is here;
	int t;
	cin >> t;
	cout << "enter 1 for insetion restricted queue"<< endl;
	cout << "enter 2 for output restricted queue" << endl;
	if(t==1){
		inputrest();
	}    
	else{
	//	outputrest();
	}
}

