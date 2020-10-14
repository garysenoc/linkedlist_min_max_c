#include <stdio.h>
#include <stdlib.h>
#include "link.h"


list createNode(int item){
	list temp = (Nodeptr)malloc(sizeof(Node));
	temp->data = item;
	temp->next = NULL;
	return temp;
}

list addNode(list head,int item){
	list temp = createNode(item);
	list ptr = head;
	while(ptr->next!=NULL){
		ptr = ptr->next;
	}
	ptr->next = temp;
	
	return head;
}

void display(list head){
	list temp = head;
	while(temp!=NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int findItem(list head,int item){
	list temp = head;
	int pos = 1;
	while(temp!=NULL){
		if(temp->data == item){
			return pos;
		}
		temp = temp->next;
		pos++;
	}
	return 0;
}

int findMax(list head){
	list temp = head;
	int max = temp->data;
	while(temp!=NULL){
		if(max < temp->data){
			max = temp->data;
		}
		temp = temp->next;
	}
	return max;
}
int findMin(list head){
	list temp = head;
	int min = temp->data;
	while(temp!=NULL){
		if(min > temp->data){
			min = temp->data;
		}
		temp = temp->next;
	}
	return min;
}



list deleteAt(list head,int pos){
	list temp = head;
	list ptr;
	int count = 1;
	
	if(pos == 1){
		head = head->next;
		free(temp);
	}else{
		while(temp!=NULL){
			if(pos == count+1){
				ptr = temp->next;
				temp->next= temp->next->next;
				free(ptr);
				break;
			}
			temp = temp->next;
			count++;
		}
	}
	return head;	
}














































