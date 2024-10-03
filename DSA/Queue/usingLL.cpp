#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class Queue
{
public:
    Node *head;
    Queue()
    {
        head = NULL;
    }

    void enqueue(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        new_node->next = head;
        head = new_node;
    }

    void dequeue()
    {
        if (head == NULL)
        {
            cout << "Queue underflow, Can't dequeue..." << "\n";
            return;
        }
        if (head->next == NULL)
        {
            cout << "Dequeued : " << head->val << "\n";
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Node *del = temp->next;
        temp->next = temp->next->next;
        cout << "Dequeued : " << del->val << "\n";
        free(del);
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << "\n";
    }
};

int main()
{
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.display();

    queue.dequeue();
    queue.dequeue();
    queue.display();

    queue.enqueue(5);
    queue.display();
    return 0;
}