#include <bits/stdc++.h>
using namespace std; 

struct Node
{
int data;
struct Node* next;
};
void append(struct Node** headRef, int newData)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *headRef;
	new_node->data = newData;
	new_node->next = NULL;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}
void printList(struct Node* head){
    while(head){
        cout<<head->data<<' ';
        head = head->next;
    }
}
int countPairs(struct Node* head1, struct Node* head2,	int x);
// Driver program to test above
int main()
{
    int T;
    cin>>T;
    while(T--){
        struct Node* head1 = NULL;
	    struct Node* head2 = NULL;
	    int n1, n2, tmp, x;
	    cin>>n1;
	    while(n1--){
	        cin>>tmp;
	        append(&head1, tmp);
	    }
	    cin>>n2;
	    while(n2--){
	        cin>>tmp;
	        append(&head2, tmp);
	    }
	    cin>>x;
	    cout<<countPairs(head1, head2, x)<<' ';
    }
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the node of the linked list is as
struct Node
{
   int data;
   struct Node* next;
};
*/
// your task is to complete this function 

int countPairs(struct Node* head1, struct Node* head2,	int x)
{
      int count = 0;
      struct Node* curr1;
      struct Node* curr2;
      curr1 = new Node;
      curr2 = new Node;
      curr1 = head1;
      curr2 = head2;
      while(curr1 != NULL) {
          while(curr2 != NULL) {
              //cout << curr1 -> data + curr2 -> data << "\n";
              if(curr1 -> data + curr2 -> data == x) count++;
              curr2 = curr2 -> next;
          }
          curr1 = curr1 -> next;
          curr2 = head2;
      }
      return count;
}