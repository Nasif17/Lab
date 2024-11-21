#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the dimension matrix : ";
    cin >> n;

    int matrix[n][n]; 
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    
    int diagonal[n]; 
    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][n - i - 1];
    }


    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (diagonal[j] < diagonal[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            int temp = diagonal[i];
            diagonal[i] = diagonal[minIndex];
            diagonal[minIndex] = temp;
        }
    }

   
    cout << "Sorted diagonal elements (from top-right to bottom-left):" << endl;
    for (int i = 0; i < n; i++) {
        cout << diagonal[i] << " ";
    }
    cout << endl;

   
    for (int i = 0; i < n; i++) {
        matrix[i][n - i - 1] = diagonal[i];
    }

    cout << "Matrix after sorting the right diagonal elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
