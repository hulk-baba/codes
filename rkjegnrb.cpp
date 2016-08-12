#include<bits/stdc++.h>
using namepsapce std;

struct queue{
	int front, rear, size, maxi;
	int *a;
};

queue* createQueue(int maxi){
	queue *q = new queue();
	q->maxi  = maxi;
	q->front = q->size = 0;
	a->rear = maxi - 1;
	q->a = (int *) malloc(sizeof(int)*q->maxi);
	return q;
};

int isFull(queue *q){
	if(size == q->maxi)
		return 1;
	return 0;
}

