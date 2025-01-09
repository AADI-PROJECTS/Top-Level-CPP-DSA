#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insert(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void output(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
void EvenOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenstart = even;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenstart;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
}
int main()
{
    node *head = NULL;
    for (int i = 0; i <= 7; i++)
    {
        insert(head, i);
    }
    output(head);
    cout << endl;
    EvenOdd(head);
    output(head);
}