#include<stdio.h>
#include<stdlib.h>

			struct node{
				int data; 
				struct node *next;
			};

		    typedef struct node NODE;

		NODE *head=NULL;
		NODE *tail=NULL;
		NODE *newI=NULL;
		NODE *temp=NULL;

	void insertFirst(){
		newI = (NODE*)malloc(sizeof(NODE));
		if(head == NULL){
			head = newI;
			tail = newI;
			newI->next = NULL;	
			printf("Enter Data\n");
			scanf("%d",&newI->data);
		}
		else{
			newI->next = head;
			head = newI;
			printf("Enter Data\n");
			scanf("%d",&newI->data);
		}
	}
	
	void display(){
		temp = head;
		
		
		printf("ELEMEMTS OF THE LIST ARE : \n");
		
		while(temp != NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
		}
	}

	void deleteFirst()
	{
		printf("DELETING FIRST NODE\n NODE DELETED IS %d\n",head->data);
		temp = head;
		head = head->next;
		free(temp);
	}

	void deleteMiddle(){
		temp = head;
		int val;
		printf("THE ELEMENTS OF THE LIST ARE\n")
		display();
		printf("ENTER THE ELEMENT TO BE DELETE\n");
		scanf("%d"&val);
		while(temp->data!=val){
			temp = temp->next;
		}
	}

	void deleteLast(){
		printf("DELETING LAST NODE\n NODE DELETED IS %d\n",tail->data);
		temp = head;
		while(temp->next->next != NULL){
			temp = temp->next;
		}
		tail = temp;
		temp = temp->next;
		tail->next = NULL;
		free(temp);
	}


int main(void){
		
		insertFirst();
		insertFirst();
		insertFirst();
		insertFirst();
		insertFirst();
		display();
		deleteFirst();
		display();
		deleteFirst();
		display();
		deleteLast();
		display();
}
