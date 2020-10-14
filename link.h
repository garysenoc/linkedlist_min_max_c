typedef struct node* Nodeptr;

typedef struct node{
	int data;
	Nodeptr next;
}Node;

typedef Nodeptr list;

list createNode(int item);
list addNode(list head,int item);

int findItem(list head,int item);
int findMax(list head);
int findMin(list head);

list deleteAt(list head,int pos);

void display(list head);
