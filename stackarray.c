//STACK IMPLIMENTATOIN USING ARRAY




#include<stdio.h>


int main(void){
	int capacity = 0, top = -1,item,i=0;
	printf("Enter the size of stack\n");
	scanf("%d",&capacity);
	int stack[capacity];
	int key=0;
	while(key!=4){
				printf("\nEnter the choice \n1.Insert\n2.Deletion\n3.Display\n4.Exit\n");
				scanf("%d",&key);
		switch(key){
			case 1:
			//INSERTION
				if(top == capacity - 1){
					printf("Overflow\n\n");	
				}
				else{
					printf("Enter the numer you want to enter\n");
					scanf("%d",&item);
					top++;
					stack[top]=item;
					printf("your entery is %d\n",stack[top]);
				}
			//INSERTION	
				break;		
			case 2:
			//DELETION
				if(top == -1){
					printf("Underflow\n\n");
				}
				else{
					printf("Item deleted is %d",stack[top]);
					top--;
				}
			//DELETION
				break;
			case 3:
			//DISPLAY
				if(top == -1){
					printf("No elements in stack\n");
				}
				printf("Elements of stack are\n");
				for(i = 0 ; i <= top ; i++ ){
					printf("%d\n",stack[i]);
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
