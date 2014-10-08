

#include <stdio.h> 
#include <malloc.h> //分配类存的模板
#define MAXQUEUESIZE 100 
bool rightNULL = false;
typedef struct BiTNode { 
	char data;  
	struct BiTNode *leftChild, *rightChild; 
} 
BiTNode, *BiTree; 
 typedef struct {  
	 BiTree *base;  int front;  int rear; 
 } SqQueue;  
 void initQueue(SqQueue &queue) {  
	 queue.base = (BiTree*)malloc(MAXQUEUESIZE * sizeof(BiTree)); 
	 queue.front = queue.rear = 0; 
 }  
 int queueLength(SqQueue &queue) { 
	 return (queue.rear - queue.front + MAXQUEUESIZE) % MAXQUEUESIZE; 
 } 
 void enQueue(SqQueue &queue, BiTree biTree) {  
	 if((queue.rear + 1) % MAXQUEUESIZE == queue.front) return ;  
	 queue.base[queue.rear] = biTree; 
	 queue.rear = (queue.rear + 1) % MAXQUEUESIZE; 
 } 
 void deQueue(SqQueue &queue, BiTree &biTree) { 
	 if(queue.front == queue.rear) return ;  
	 biTree = queue.base[queue.front];  
	 queue.front = (queue.front + 1) % MAXQUEUESIZE; 
 }  
void createBiTree(BiTree &biTree) {  
	char c;  
	c = getchar(); 
	if(c == '*') {   
		biTree = NULL; 
} 
	else 
	{   
		biTree = (BiTree)malloc(sizeof(BiTNode));
		biTree->data = c;   
		createBiTree(biTree->leftChild);  
		createBiTree(biTree->rightChild);  
	} 
}
bool isCompleteTree(BiTree biTree) {  
	SqQueue queue;  initQueue(queue);  
	enQueue(queue, biTree);  BiTree t;  
	while(queueLength(queue) > 0) {   
		deQueue(queue, t);   
		if(rightNULL && (t->leftChild || t->rightChild)) 
			return false;   
		if(t->leftChild) 
			enQueue(queue, t->leftChild);   
		if(t->rightChild) 
			enQueue(queue, t->rightChild);   
		if(!t->leftChild && t->rightChild) 
			return false;   
		if(!t->rightChild)
			rightNULL = true;  
	} 
	return true; 
}  
void main() {  
	BiTree biTree;  
	createBiTree(biTree);  
	if(isCompleteTree(biTree)) {   
		printf("This tree is complete tree!!\n");  
	}
	else {  
		printf("This tree is NOT complete tree!!\n");
	}
}