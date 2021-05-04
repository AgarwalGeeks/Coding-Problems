#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct  Node{
    int data;
    struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = new Node;
 
    /* put in the data  */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}



Node* isLoop(Node *root) {
    Node *slow = root, *fast = root;

    while(slow  && fast->next  && fast) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                return slow;
    }

    return NULL;
}

int getLengthOfLoop(Node *root) {
    if(!isLoop(root))
        return 0;
    else {
        Node *start = isLoop(root);
        Node *temp = start;
        int count = 1;

        while (temp->next != start)
        {
             temp = temp->next;
             count++;
        }

        return count;
    }
}

struct Node *newNode(int key) 
{ 
    struct Node *temp = 
   (struct Node*)malloc(sizeof(struct Node)); 
    temp->data = key; 
    temp->next = NULL; 
    return temp; 
} 


int main() {
    struct Node *head = newNode(1); 
    
    head->next = newNode(2); 
    head->next->next = newNode(3); 
    head->next->next->next = newNode(4); 
    head->next->next->next->next = newNode(5); 
  
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next; 
 
    cout<<getLengthOfLoop(head);
        
}