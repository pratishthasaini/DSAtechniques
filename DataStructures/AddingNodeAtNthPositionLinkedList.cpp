#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;
void insert(int data, int n){
    // n is position
    //new memory
    Node* temp = new Node();
    //we are adding a particular temp with some data and NULL which we are going to insert
    temp -> data = data;
    temp -> next = NULL;
    // if we are inserting at starting position then we have to point head to temp
    if(n == 1){
        temp->next = head;
        head = temp;
        return;
    }
    // now we are making another temp variable for point the position at n-2 like we have linked list 1 2 3 4 
    // if we want to add at 3rd position in the list then we have to break the link of 2 and 3 , and add the link of the new node at 2nd position 
    // we have to add the link of previous 3rd position to the new node 
    Node* temp1 = head;
    for (int i = 0; i < n-2; i++) {
        temp1 = temp1->next;
    }
    temp -> next = temp1 -> next;
    temp1 -> next = temp;
}
void print(){
    // another temp variable pointing to head to start with head
    Node* temp = head;
    // we will print data until last position reached
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(){
    head = NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(1, 2);
    print();
    return 0;
}
