#include <iostream>
using namespace std;

const int size = 10;
int stack[size];
int top = -1;

int isFull() {
    return top == size - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int x) {
    if (isFull()) {
        cout << "Stack is full.\n";
    } else {
        stack[++top] = x;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
    } else {
        top--;
    }
}

void deleteMiddle() {
    if (isEmpty()) {
        cout << "stack is empty.\n";
        return;
    }
    int mid = top / 2;
    for (int i = mid; i < top; i++) {
        stack[i] = stack[i + 1];
    }
    top--;
}

void traverse() {
    if (isEmpty()) {
        cout << "stack is empty.\n";
        return;
    }
    cout << "stack elements are:\n";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << "\n";
    }
}

int main() {
    int n;

    cout << "enter size of stack:\n";
    cin >> n;

    cout << "enter elements of stack:\n";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        push(element);
    }

    deleteMiddle();
    traverse();

    return 0;
}

