// deleting at nth position
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *head;

void Insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node *itr = head;
    while (itr->next != NULL)
    {
        itr = itr->next;
    }
    itr->next = temp;
}

void Print()
{
    Node *temp = new Node();
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void Delete(int n)
{
    Node* temp = head;
    if (n==1){
        head = temp->next;
        delete temp;
        return;
    }
    for(int i=0;i<n-2;i++)
        temp = temp->next;
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
}

int main()
{
    Insert(3);
    Insert(5);
    Insert(1);
    Insert(9);
    Print();
    int n;
    cout << "Enter Position  : ";
    cin >> n;
    Delete(n);
    Print();
}