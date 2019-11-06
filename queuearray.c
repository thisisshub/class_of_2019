//QUEUE IMPLIMENTATOIN USING ARRAY





#include<stdio.h>


int main(void){
	int SIZE=0,i=0,front=-1,rear=-1;
	printf("Enter the size of Queue\n");
	scanf("%d",&SIZE);
	int Queue[SIZE];
	int key=0;
	while(key!=4){
				printf("\nEnter the choice \n1.Insert\n2.Deletion\n3.Display\n4.Exit\n");
				scanf("%d",&key);
		switch(key){
			case 1:
			//INSERTION
				if(rear == -1){
					front++;
					rear++;
				}
				else if(rear == SIZE -1){
					printf("\nOVERFLOW\n");
					break;
				}
				else{
					rear++;
				}
				printf("Enter the value to be inserted\n");
				scanf("%d",&Queue[rear]);
				printf("\nEntered Element is %d",Queue[rear]);
			//INSERTION	
				break;		
			case 2:
			//DELETION
				if(front == -1){
					printf("No Queue\n");
					break;
				}
				else if(front == rear){
					printf("\nUNDERFLOW\n");
					break;
				}
				else{
					front++;
				}
			//DELETION
				break;
			case 3:
			//DISPLAY
				if(front == -1 || front == rear){
					printf("No Queue\n");
					break;
				}
				printf("\nElements of the Queue are:\n");
				for( i = front ; i <= rear ; i++ ){
					printf("%d\n//QUEUE",Queue[i]);
				}
			//DISPLAY
				break;	
			case 4:
				printf("EXITING\n");
				break;				
			default:
				printf("Enter correct choice\n");		
		}
	}
}
