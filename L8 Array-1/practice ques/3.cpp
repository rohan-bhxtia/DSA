//WAF to ptint all the unique values in an array 
//WAF to print intersection of 2 arrays



#include <iostream>
using namespace std;                                                // both these ques can be solved easily using hash tables 
// Function to print all unique elements                            // but u can try if u want
void unique(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        int count = 0; // count how many times arr[i] appears

        // Check arr[i] with every element
        for (int j = 0; j < sz; j++) {
            if (arr[i] == arr[j]) {
                count++; // increase count if match found
            }
        }

        // If count is 1, it means it appears only once (unique)
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 1, 2, 3};
    int sz = 5;

    unique(arr, sz);

    return 0;
}
