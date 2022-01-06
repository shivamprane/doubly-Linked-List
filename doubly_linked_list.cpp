#include <iostream>
using namespace std;
// structure Data + pointer for next addres
struct Node{
    int data;
    Node* next;
    Node* prev;
};
int main(){
    // memory allocation to 4 pointers of node
    Node* new_node1 = new Node;
    Node* new_node2 = new Node;
    Node* new_node3 = new Node;
    Node* new_node4 = new Node;
    // stored data in all 4 locations    
    new_node1->data = 10;
    new_node2->data = 20;
    new_node3->data = 30;
    new_node4->data = 40;
    new_node1->prev = NULL;       //previous address
    new_node1->next = new_node2;  //next node address
    new_node2->prev = new_node1;  //previous address
    new_node2->next = new_node3;  //next node address
    new_node3->prev = new_node2;  //previous address
    new_node3->next = new_node4;  //next node address
    new_node4->prev = new_node3;  //previous address
    new_node4->next = NULL;       //next node address
    // for display
    Node* ptr = new_node1;
    while (ptr!=NULL)
    {   //print address of node, previous node, next node
        cout << "Address: " << ptr;
        cout << " Data: " << ptr->data << " Previous Address: " << ptr->prev << " Next Address: " << ptr->next << endl;
        ptr=ptr->next;
    }
}