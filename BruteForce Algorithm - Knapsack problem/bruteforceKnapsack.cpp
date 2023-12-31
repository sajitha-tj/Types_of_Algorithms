#include <iostream>
using namespace std;

int knapsack(int n, int w, int *wt, int *val) {
    if (n == 0 || w == 0) {
        return 0;   // base case
    }
    if (wt[n - 1] > w) {
        return knapsack(n - 1, w, wt, val); // skip case(when weight of item is greater than capacity of knapsack)
    } else {
        return max(knapsack(n - 1, w, wt, val), val[n - 1] + knapsack(n - 1, w - wt[n - 1], wt, val)); // max of skip and include case
    }
}

int main() {
    int n, w;
    cout << "number of items: ";
    cin >> n;
    cout << "capacity of knapsack: ";
    cin >> w;

    int *wt = new int[n];
    int *val = new int[n];

    cout << "weight of items: ";
    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    cout << "value of items: ";
    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }
    
    cout << endl;
    cout << "maximum value: " << knapsack(n, w, wt, val);

    delete[] wt;  // deallocate memory
    delete[] val;
    return 0;
}
