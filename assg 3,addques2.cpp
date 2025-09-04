#include <iostream>
#include <stack>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    stack<int> s;
    stack<int> minStack;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        s.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        } 
    }
    cout << "Minimum element: " << minStack.top() << endl;
    return 0;
}
