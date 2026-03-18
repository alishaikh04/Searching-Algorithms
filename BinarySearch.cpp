#include <iostream>
using namespace std;

int main() {

    int input[10] = {12,23,27,52,56,67,72,78,89,95};
    int left = 0, right = 9;
    int mid;
    int toSearch;

    cout << "Enter value to find: ";
    cin >> toSearch;

    while (left <= right) {
        mid = (left + right) / 2;

        if (toSearch == input[mid]) {
            cout << "Value found." << endl;
            return 0;
        }
        else if (toSearch < input[mid]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    cout << "Value not found." << endl;
    return 0;
}
