#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

class Queue {
    private:
        Node *front;
        Node *rear;

    public:
        Queue() {
            front = NULL;
            rear = NULL;
        };

        bool isEmpty() {
            return front == NULL;
        };

        void addNode(int data) {
            Node *n = new Node;
            n->data = data;
            n->next = NULL;

            if(rear != NULL) {
                rear->next = n;
            }
            rear = n;
            if(isEmpty()) {
                front = rear;
            }
        };

        int deleteNode() {
            if(isEmpty()) {
                cout << "Queue is empty!" << endl;
                return -1;
            }

            Node *temp = front;
            int x = front->data;
            front = front->next;
            delete temp;
            return x;
        };
};

int main(){
    return 0;
}