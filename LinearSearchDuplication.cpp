#include <iostream>
using namespace std;

int main() {

    int input[15] = {77,98,32,65,99,32,32,27,99,12,15,32,72,99,57};
    int toSerach ;
    int count = 0;
    bool found = false;
   // int firstIndexNUmber = 0;

    cout << "Enter value to search : " ;
    cin >> toSerach ;
    int i = 0;
    for (i = 0; i < 15; i++){
        if(toSerach == input[i]){
         
            count++;
              if (count == 1)
            cout << "ELement at first is at Index Number." << i << endl; 
            cout << "Index number. " << i << endl;
           
        } 
    }
    if(!found)
       cout <<"Value finded." << endl;
    cout << "Number of occurence ." << count << endl;
    return 0;

     cout << "Value not founded .";
    return 0;
}
