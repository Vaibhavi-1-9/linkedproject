// This file should have a function for the following feature.

// 1. get all the entries from stocks_available.txt and store in single linked list structure. i.e Init function
//      The entries in the text file will be of format
//          <stockname>,<modelnumber>,<count>,<vendor>
// 2. print all the stocks.
// 3. print a particular stock by model number.
// 4. Add a new stock to the existing linked list.

// Bring this task in git using git init and do a commit with bare file structure. 
// For every feature described above. Do a commit





#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
	char* stockname;
	char* modelnumber;
	int count;
	char* vendor;
	struct Node *next;
};

void addNewStock(struct Node** head,char* sn,char* mn,int c,char* vn)
{
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->stockname=(char*)malloc(strlen(sn)+1);
	strcpy(newNode->stockname,sn);

	newNode->modelnumber=(char*)malloc(strlen(mn)+1);
	strcpy(newNode->modelnumber,mn);

	newNode->vendor=(char*)malloc(strlen(vn)+1);
	strcpy(newNode->vendor,vn);

	newNode->count=c;
	newNode->next=NULL;

	//checking if the list is empty or not
	if(*head==NULL)
		*head=newNode;
	else
	{
		//Traverse to the end of list 
		struct Node* current=*head;
		while(current->next != NULL)
		{
			current=current->next;

		}
	
		//Append the New Node
		current->next=newNode;
	}

	
}

void displayAllStocks(struct Node* head)
{
	struct Node* current=head;
	while(current!=NULL)
	{
		printf("StockName: %s %s %d %s\n\n",current->stockname,current->modelnumber,current->count,current->vendor);
		current=current->next;
	}
}

void displayParticularStockByModelNumber(struct Node* head,char* modelNumber)
{
	int flag=0;
	struct Node* current=head;
	while(current!=NULL)
	{
		if(strcmp(current->modelnumber,modelNumber)==0)
		{
			flag=1;
			printf("Stock Name : %s",current->stockname);
		        break;
                       // return
		}

		current=current->next;
	}

	if(flag==0)
		printf("Not Found !");
}






