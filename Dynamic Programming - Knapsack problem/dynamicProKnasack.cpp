#include <iostream>
using namespace std;

int knapsack(int n, int W, int *wt, int *val){
    int K[n+1][W+1]; // 2D array to store the result of subproblems

    for(int i = 0; i <= n; i++){
        for(int w = 0; w <= W; w++){
            if(i == 0 || w == 0){
                K[i][w] = 0; // base case
            }else if(wt[i-1] <= w){
                K[i][w] = max(K[i-1][w], K[i-1][w-wt[i-1]] + val[i-1]); // max of skip and include case
            }else{
                K[i][w] = K[i-1][w]; // skip case(when weight of item is greater than capacity of knapsack)
            }
        }
    }
    return K[n][W];
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
