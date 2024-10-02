#include <iostream>
#include <string>
using namespace std;

class Stack
{
public:
    int max_size;
    int *arr; // dynamic allocation
    int top;
    Stack(int n)
    {
        cout << "Allocating static and dynamic..." << "\n";
        max_size = n;
        arr = new int[max_size];
        top = -1;
    }

    void push(int element)
    {
        if (top == max_size - 1)
        {
            cout << "Stack Overflow : Can't Push" << "\n";
        }
        else
        {
            top++;
            arr[top] = element;
            cout << "Pushed : " << element << "\n";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow : Can't Pop" << "\n";
        }
        else
        {
            cout << "Popped : " << arr[top] << "\n";
            top--;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << "\n";
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    ~Stack(){
        cout << "De-allocating static and dynamic allocation..." << "\n";
        delete arr;
    }
};

int main()
{
    Stack s(4);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    s.push(5);
    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    s.pop();
    s.display();
    return 0;
}