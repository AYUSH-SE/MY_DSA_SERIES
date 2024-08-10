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
            cout << "Stack Overflow\n";
            return;
        }
    }
    void push2(int x) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        } else {
            cout << "Stack Overflow\n";
            return;
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        } else {
            return -1; 
        }
    }

    int pop2() {
        if (top2 < size) {
            int x = arr[top2];
            top2++;
            return x;
        } else {
            return -1; 
        }
    }
};

int main() {
    twoStacks ts(5);
    ts.push1(2);
    ts.push1(3);
    ts.push2(4);
    cout << ts.pop1() << " "; 
    cout << ts.pop2() << " "; 
    cout << ts.pop2() << "\n"; 
    return 0;
}
