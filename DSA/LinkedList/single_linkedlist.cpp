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

class SingleLinkedList
{
public:
    Node *head;
    SingleLinkedList()
    {
        head = NULL;
    }
    void insertAtBeginning(int val)
    {
        Node *new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    int checkSize()
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void insertAtPosition(int val, int position)
    {
        if (position == 0)
        {
            insertAtBeginning(val);
            return;
        }
        int max_size = checkSize();
        if (position > max_size - 1)
        {
            cout << "Position Doesn't exist..." << "\n";
            return;
        }

        Node *new_node = new Node(val);
        Node *temp = head;
        int current = 0;
        while (current != position - 1)
        {
            temp = temp->next;
            current++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void updateAtPosition(int new_val, int position)
    {
        if (position == 0)
        {
            head->val = new_val;
            return;
        }
        int max_size = checkSize();
        if (position > max_size - 1)
        {
            cout << "Position Doesn't exist..." << "\n";
            return;
        }
        Node *temp = head;
        int current = 0;
        while (current != position)
        {
            temp = temp->next;
            current++;
        }
        temp->val = new_val;
    }

    void deleteAtBeginning()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty, Can't Delete..." << "\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        cout << "Deleted : " << temp->val << "\n";
        free(temp); // frees up the space i.e.., deleted node is removed from memory.
    }

    void deleteAtEnd()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty, Can't Delete..." << "\n";
            return;
        }
        if (head->next == NULL)
        {
            cout << "Deleted : " << head->val << "\n";
            head = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        cout << "Deleted : " << temp->next->val << "\n";
        temp->next = NULL;
    }

    void deleteAtPosition(int position)
    {
        if (position == 0)
        {
            deleteAtBeginning();
            return;
        }
        int max_size = checkSize();
        if (position > max_size - 1)
        {
            cout << "Position Doesn't exist..." << "\n";
            return;
        }
        Node *temp = head;
        int current = 0;
        while (current != position - 1)
        {
            temp = temp->next;
            current++;
        }
        Node *del = temp->next;
        temp->next = temp->next->next;
        cout << "Deleted : " << del->val << "\n";
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
    SingleLinkedList sll;
    sll.insertAtBeginning(1);
    sll.display();
    sll.insertAtBeginning(2);
    sll.display();
    sll.insertAtEnd(10);
    sll.display();
    sll.insertAtEnd(20);
    sll.display();
    sll.insertAtPosition(31, 2);
    sll.display();
    sll.insertAtPosition(59, 10);
    sll.display();

    sll.updateAtPosition(7, 1);
    sll.display();

    sll.deleteAtBeginning();
    sll.display();

    sll.deleteAtEnd();
    sll.display();

    sll.deleteAtPosition(2);
    sll.display();
    return 0;
}