#include <iostream>
using namespace std;

class twoStacks {
    int* arr;    
    int top1;    
    int top2;    
    int size;    

public:
    twoStacks(int n = 100) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    void push1(int x) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
        } else {
            cout << "Stack Overflow for stack1\n";
            return;
        }
    }

    void push2(int x) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        } else {
            cout << "Stack Overflow for stack2\n";
            return;
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        } else {
            cout << "Stack Underflow for stack1\n";
            return -1;
        }
    }

    int pop2() {
        if (top2 < size) {
            int x = arr[top2];
            top2++;
            return x;
        } else {
            cout << "Stack Underflow for stack2\n";
            return -1;
        }
    }

    ~twoStacks() {
        delete[] arr;
    }
};

int main() {
    twoStacks stacks(10);

    stacks.push1(10);
    stacks.push1(20);
    stacks.push1(30);

    stacks.push2(40);
    stacks.push2(50);
    stacks.push2(60);

    cout << "Popped from stack1: " << stacks.pop1() << endl;
    cout << "Popped from stack1: " << stacks.pop1() << endl;

    cout << "Popped from stack2: " << stacks.pop2() << endl;
    cout << "Popped from stack2: " << stacks.pop2() << endl;

    cout << "Popped from stack1: " << stacks.pop1() << endl;
    cout << "Popped from stack1: " << stacks.pop1() << endl;

    cout << "Popped from stack2: " << stacks.pop2() << endl;

    return 0;
}
