#include <iostream>
#include <cmath>
using namespace std;

void task1() {
    int N;
    cout << "Enter size of arrays: ";
    cin >> N;
    int A[100], B[100], C[100];
    cout << "Enter elements of array A:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << "Enter elements of array B:\n";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < N; i++) {
        C[i] = A[i] * B[i];
    }
    cout << "Array C:\n";
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
}

void task2() {
    int N, A[100], maxEven;
    bool found = false;
    cout << "Enter size of array: ";
    cin >> N;
    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 != 0)
            break;
        if (!found || A[i] > maxEven) {
            maxEven = A[i];
            found = true;
        }
    }
    if (found)
        cout << "Max even: " << maxEven << endl;
    else
        cout << "No even elements" << endl;
}

void task3() {
    int n, A[200], B[200];
    int k = 0;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++) {
        int a = 1;
        int b = 3 * A[i];
        int c = 5;
        int D = b * b - 4 * a * c;
        if (D >= 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            if (x1 > 0 && x2 > 0) {
                B[k] = A[i];
                k++;
            }
        }
    }
    for (int i = 0; i < k; i++) {
        cout << B[i] << " ";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }
    cout << endl;
}

int main() {
    int choice;
    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Task 1 - Array C = A * B\n";
        cout << "2. Task 2 - Max even element\n";
        cout << "3. Task 3 - Quadratic equation filter\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 0: cout << "Goodbye!\n"; break;
        default: cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
