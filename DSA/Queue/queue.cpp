#include <iostream>
using namespace std;

class Queue{
public:
    int max_size;
    int* arr;
    int front;
    int rear;

    Queue(int n){
        cout << "Allocation of static and dynamic..." << "\n";
        max_size = n;
        arr = new int[max_size];
        front = -1;
        rear = -1;
    }

    void enqueue(int element){
        if(rear == max_size - 1){
            cout << "Queue Overflow : Can't Enqueue" << "\n";
        }
        else{
            rear++;
            arr[rear] = element;
            cout << "Enqueued : " << element << "\n";
            if(front == -1){
                front++;
            }
        }
    }

    void dequeue(){
        if(front == -1 || front > rear){
            cout << "Queue Underflow : Can't Dequeue" << "\n";
        }
        else{
            cout << "Dequeued : " << arr[front] << "\n";
            front++;
        }
    }

    void peek(){
        if(front == -1 || front > rear){
            cout << "Queue is empty" << "\n";
        }
        else{
            cout << "Peek element : " << arr[front] << "\n";
        }
    }

    void display(){
        if(front == -1 || front > rear){
            cout << "Queue is empty" << "\n";
        }
        else{
            for(int i = front; i <= rear; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }

    ~Queue(){
        cout << "De-Allocation of static and dynamic..." << "\n";
    }
};

int main(){
    Queue q(4);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.peek();
    q.enqueue(4);
    q.display();
    q.enqueue(5);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    q.dequeue();

    return 0;
}