#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int queue[SIZE];
int front=0,rear=0;
void main()
{
void enqueue(int);
int dequeue(),opt,item;
void display();
do{
printf("\n1.insert\n2.delete\n3.Display\n4.Exit\n");
printf("enter your choice:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("enter your item:");
scanf("%d",&item);
enqueue(item);
break;
case 2:
item=dequeue();
if(item!=-9)
printf("deleted value=%d",item);
break;
case 3:
display();
break;
case 4:
exit(0);
}
}while(9);
}
//function to insert an item
void enqueue(int item)
{
int temp;
temp=(rear+1)%SIZE;
if(temp==front)
printf("queue is full");
else
{
rear=temp;
queue[rear]=item;
}
return;
}
//function to delete an item from queue
int dequeue()
{
if(front==rear){
printf("queue is empty!...\n");
return -9;
}
else{
front=(front+1)%SIZE;
return queue[front];
}
}
//function to display an item
void display(){
int i;
if(front==rear)
printf("queue is empty!...");
else{
i=(front+1)%SIZE;
do
{
printf("%d ",queue[i]);
i=(i+1)%SIZE;
}
while(i!=(rear+1)%SIZE);
}
return;
}
