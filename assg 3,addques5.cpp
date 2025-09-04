#include <iostream>
#include <stack>
using namespace std;
void solve(int A[], int n) {
    int sortedA[100];
    for (int i = 0; i < n; i++) sortedA[i] = A[i];
    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k < n; k++) {
            if (sortedA[i] > sortedA[k]) {
                int temp = sortedA[i];
                sortedA[i] = sortedA[k];
                sortedA[k] = temp;
            }
        }
    }
    stack<int> S;
    int i = 0, j = 0;
    int B[100], b_index = 0;
    while (i < n || !S.empty()) {
        if (!S.empty() && S.top() == sortedA[j]) {
            B[b_index++] = S.top();
            S.pop();
            j++;
        } else if (i < n) {
            S.push(A[i]);
            i++;
        } else {
            break;
        }
    }
    cout << "Output array B: ";
    for (int k = 0; k < b_index; k++) {
        cout << B[k] << " ";
    }
    cout << endl;
    if (b_index == n) {
        cout << "Yes, full sorted transfer possible.\n";
    } else {
        cout << "No, only partial sorted transfer possible.\n";
    }
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int A[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> A[i];
    solve(A, n);
    return 0;
}
