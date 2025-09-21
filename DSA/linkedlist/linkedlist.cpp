#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Insert at head 

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}


// Insert at tail
void InsertAttail(Node* &tail , int data){
    Node *temp = new Node(data);
    tail -> next = temp;
    tail = temp;

}

void printdata(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);
    cout << " Printing address : " << node1 << endl;
    cout << " Printing data/value : " << node1->data << endl;
    cout << " Printing data/value : " << node1->next << endl;

    Node *head = node1;
    Node *tail= node1;

    cout << " Inserting the data : " << endl;
    cout << " Before Inserting : " << endl;
    printdata(head);
    InsertAtHead(head, 15);
    InsertAttail(tail,45);
    cout << " After Inserting : " << endl;
    printdata(head);



    return 0;
}