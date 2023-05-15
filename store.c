#include<stdio.h>
#include "store_inventory.h"

int main()
{

/*
    1. call the init function to fetch all the details
    This user interface should ask for the following options.
        1. Print all list.
        2. Add an entry.
        3. Get stock by model number.
        4. exit.
    
    and do the same by calling the corresponding function from store_inventory.h
*/



	int quit=0;
	char modelno[20];
	char mn[20];
	char sn[20];
	int count;
	int ch;
	char vn[20];
	struct Node* head=NULL;

	//Adding New data s
	addNewStock(&head,"cpu","BHJ3456",2,"Intel");
	addNewStock(&head,"chip","BCM7410",3,"Broadcom");
	addNewStock(&head,"mouse","GHU8798",10,"Dell");
	addNewStock(&head,"graphic card","DFH7863",0,"AMD");



	while(!quit)
	{
	printf("\nEnter your Choice->\n 1> Printall data  \n 2> Enter New data \n 3> print a specific item by model number \n 4> exit \n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				displayAllStocks(head);
				break;
			case 2:
				
				scanf("%s%s%d%s",sn,mn,&count,vn);
				addNewStock(&head,sn,mn,count,vn);
				break;
			case 3:

                                scanf("%s",modelno);
                                displayParticularStockByModelNumber(head,modelno);

				
				break;

			case 4:
				quit=1;
				break;

		}
	}

return 0;

}


