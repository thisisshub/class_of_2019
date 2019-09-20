/*
			Write a program to create a node
			A program to insert and tervers in a linked list
*/


#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};
typedef struct node NODE;
	NODE *tail = NULL;
	NODE *head = NULL;
	NODE *new = NULL;

void insert(){
	int choice;
	while(choice != 5){
		printf("Enter the choice\n1.In the starting\n2.At a location\n3.After a value\n4.At the end\n5.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1: 
				new = (NODE*)malloc(sizeof(NODE));
				new->next = NULL;
				if(head == NULL){
					head = new; 
					tail = new;
					printf("Enter the value to be inserted\n");
					scanf("%d",&new->data);			
				}
				else{
					new->next=head;
					head = new;
					printf("Enter the value to be inserted\n");
					scanf("%d",&new->data);	
				}
				break;
			case 2:
				new = (NODE*)malloc(sizeof(NODE));
				new->next = NULL;
				NODE *loc;
				printf("0");
				break;
			case 3:
				if(head == NULL){
				printf("LIST NOT FOUND\n");
				}
				new = (NODE*)malloc(sizeof(NODE));
				new->next = NULL;
				NODE *curr = head;
				printf("Enter the value\n");
				scanf("%d",&new->data);
				do{
				curr = curr->next;
				}
				while(curr->data < new->data);
				new->next = curr->next;
				curr->next = new;
						
		}
	}		
}

void display(){
		NODE *cur = head;
		if(head == NULL){
		printf("NO LIST FOUND\n");	
		}
		while(cur!= NULL && head!= NULL){
			printf("Value : %d\n",cur->data);
			cur = cur->next;
		}		
}

int main(void){
	
	insert();	
	display();	

}
