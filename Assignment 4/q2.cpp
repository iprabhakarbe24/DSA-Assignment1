#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE], front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % SIZE == front;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "queue full\n";
            return;
        }
        if (isEmpty()) front = rear = 0;
        else rear = (rear + 1) % SIZE;
        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "queue empty\n";
            return;
        }
        cout << "removed: " << arr[front] << endl;
        if (front == rear) front = rear = -1;
        else front = (front + 1) % SIZE;
    }

    void peek() {
        if (isEmpty()) cout << "queue empty\n";
        else cout << "front: " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "queue empty\n";
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
    int choice, value;
    while (true) {
        cout << "1-enqueue 2-dequeue 3-peek 4-display 5-exit\n";
        cin >> choice;
        if (choice == 1) {
            cin >> value;
            q.enqueue(value);
        } else if (choice == 2) {
            q.dequeue();
        } else if (choice == 3) {
            q.peek();
        } else if (choice == 4) {
            q.display();
        } else break;
    }
    return 0;
}
