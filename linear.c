#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10 
int a[MAX];
int front,rear;
void reset(){
    front=-1;
    rear=-1;
}
void display(){
    if(isempty()){
        printf("the queue is empty\n");
        return;
    }
    int i=front;
    for(;i<rear;i++){
        printf("%d\n",a[i]);
    }
}
void pop(){
    if(front==rear){
        printf("the queue is empty");
        reset();
        return;
    }
    int temp;
    temp = a[front];
    a[front]=0;
    front++;
    printf("the %d is removed from the queue\n",temp);
    
}
int isempty(){
    if(front== 0 && rear==0){
        return 1;
    }
    return 0;
}
int isfull(){
    if(rear==MAX-1){
        return 1;
    }
    return 0;
}
void push(){
    int num;
    printf("enter the number for putting inside queue\n");
    scanf("%d", &num);
    if(isfull()){
        printf("the queue is full\n");
    }
    else if(front==-1 && rear==-1){
        front++;
        rear++;
        a[rear]=num;
    }
    a[rear]=num;
    rear++;
    

}

int main(){
    //implementation of the linear queue first in first out basis 
    // Fengade Somesh Ramesh Comps 10 
    int x;
    front = -1;
    rear=-1;
    do{
        
        printf("Enter 1 for entering no's in queue\n");
        printf("Enter 2 for deletion of the numbers in queue\n");
        printf("Enter 3 for displaying the elements inside queue\n");
        printf("Enter 4 for finding out if queue is full\n");
        printf("Enter 5 for exiting the program\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            push();
            break;
        case 2:
        pop();
            break;
        case 3:
            display();
            break;
        case 4:
            if(isfull()){
                printf("the queue is full\n");
            }
            else {
                printf("the queue is not full\n");
            }
            break;
        default:
        printf("enter the void choice\n");
            break;
        }
    }while(x!=5);
}