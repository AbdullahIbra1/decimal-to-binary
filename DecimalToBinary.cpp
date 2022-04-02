#include <iostream>
using namespace std;
int top = -1;
const int stackstize = 128;
int stack[stackstize];
void push(int item) {
    stack[++top] = item;
}
int pop() {
    return stack[top--];
}

int main()
{
    int num;
    cout << "enter a decimal number to convert it into binary: ";
    cin >> num;
    int H = num;                // hold the number for display porpuse 

    int r;                  // hold the reminder
    for (; num > 0; num /= 2) {

        r = num % 2;   // get the reminder
        push(r);    // push it into the stack
    }

    cout << "the binary representation of the number " << H << " is: ";

    while (top != -1)     //while the stack is not empty,
        cout << pop();     //pop the binary representation from the stack
    cout << endl;

    return 0;
}

