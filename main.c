#include <stdio.h>
#include <stdlib.h>
#include "link.h"
/* run this program using th#e console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	list head = createNode(1);
	addNode(head,2);
	addNode(head,3);
	addNode(head,4);
	head = deleteAt(head,4);
	display(head);
	
	printf("\n\n%d ",findItem(head,2));
	printf("\nmax = %d ",findMax(head));
	printf("\nmin = %d ",findMin(head));
	return 0;
}
