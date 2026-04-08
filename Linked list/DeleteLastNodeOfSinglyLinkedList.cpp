// Time complexity = Theta(n) , where n is no. of nodes

#include <bits/stdc++.h>
using namespace std;

struct Node {
int data;
Node *next;
Node(int x) {
  data = x;
  next = NULL;
}
};

Node *delLast(Node *head) {
if(head == NULL) return NULL;
if(head->next == NULL) {
  delete head;
  return NULL;
}
Node *temp = head;
while(temp->next->next != NULL) {
  temp = temp->next;
}
delete (temp->next);
temp->next = NULL;
return head;
}



int main() {
  
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head = delLast(head);
  while(head != NULL) {
    cout<<head->data<<" ";
    head = head->next;
  }
  return 0;

}