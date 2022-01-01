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

};

int main(){
    return 0;
}