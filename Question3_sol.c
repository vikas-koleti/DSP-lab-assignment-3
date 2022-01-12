#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int array[50];
char name[50][20];
int front=-1, rear=-1;
int size;
void insert()
{
    if (rear >= size - 1)
    {
        printf("Queue overflow\n");
    }
    else{
    	char temp[20];
    	int tempdata;
    	printf("Enter the name ");
    	scanf("%s",temp);
    	printf("Enter the gate score ");
    	if(scanf("%d",&tempdata)==1){
    	if(tempdata<0 || tempdata >1000)
		printf("Enter valid gate score b/w 0 to 1000 \n");
		else{    		
    if ((front == -1) && (rear == -1))
    {
        ++front;
        ++rear;
        strcpy(name[rear],temp);
        array[rear]=tempdata;
    }    
    else{	
    int i,j;
    for (i = 0; i <= rear; i++)
    {
        if (tempdata > array[i])
        {
            for (j = rear + 1; j > i; j--)
            {
                array[j] = array[j - 1];
                strcpy(name[j],name[j-1]);
            }
            array[i] = tempdata;
            strcpy(name[i],temp);
            rear++;
            return;
        }
    }
    array[i] = tempdata;
    strcpy(name[i],temp);
    rear++;
}
}
	}
	else{
		printf("Invalid input. Only integers allowed\n");
		exit(0);
	}     
}
}
void Delete()
{
    int i;
    int data=0;
    if ((front==-1) && (rear==-1))
    {
        printf("Queue underflow\n");
    }
    else{
    printf("%s      %d\n",name[0],array[0]);
    for (i=0; i < rear; i++)
    {
        array[i] = array[i + 1];
        strcpy(name[i],name[i+1]);
    }
	rear--;
    if (rear == -1) 
    front = -1;
}
}
void display()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty\n");
    }
    else{
    int iterate;
	for (iterate=front;iterate <= rear; iterate++)
    {
        printf("%s         %d\n",name[iterate],array[iterate]);
    }
}
}
void main()
{
    int choice=0;
    printf("Enter the size: ");
    if(scanf("%d",&size) == 1){
    while (choice!=4)
    {
    	printf("Enter your choice :\n1.Insert 2.Delete 3.Display 4.Exit: ");    
        if(scanf("%d", &choice)==1){
        if(choice==1)
            insert();
        else if(choice== 2)
            Delete();
        else if(choice== 3) 
            display();
        else if(choice==4) 
            break;
        else
        	printf("Enter valid choice\n");
        }
        else{
        	printf("Invalid input. Only integers allowed\n");
        	exit(0);
		}
}
}
else{
	printf("invalid input. Only integers allowed\n");
	exit(0);
}
}
