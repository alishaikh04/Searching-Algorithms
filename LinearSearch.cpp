#include <iostream>
using namespace std;

int main() {

    int input[10] = {77,75,45,235,45,99,122,345,56,45};
    int toSerach ;
    cout << "Enter value to search : " ;
    cin >> toSerach ;
    int i = 0;
    for (i = 0; i < 10; i++){
        if(toSerach == input[i]){
            cout << "Value founded " ;
            return 0;
        }
    }
     cout << "Value not founded .";
    return 0;
}