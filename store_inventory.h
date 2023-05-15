
struct Node
{
	char* stockname;
	char* modelnumber;
	int count;
	char* vendor;
	struct Node *next;
};


//to add a new stock to the existing linked list
void addNewStock(struct Node** head,char* sn,char* mn,int c,char* vn);

//display all stocks
void displayAllStocks(struct Node* head);

//display stock by perticular model number
void displayParticularStockByModelNumber(struct Node* head,char* modelNumber);
