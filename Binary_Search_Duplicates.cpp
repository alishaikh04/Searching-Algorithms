#include <iostream>
using namespace std;

int main() {
  int input[15] = {1,75,75,75,75,75,75,75,75,75,75,80,81,82,83}; //Array must be sorted.
 int mid, n = 15, left = 0, right = n, found = -1, target;
 
  cout << "Enter the Number to Search.";
  cin >> target;

   while(left <= right) {
     mid = (left + right) / 2;
      if(target == input[mid]){
        found = mid;
         cout << "Value finded at index number First Occurence. " << mid  << endl;
        break;
      }
      else if (target > input[mid]) {
          left = mid + 1;
      }
       else {
         right = mid - 1;
       }
    }
       if (found == -1) {
        cout << "Value not found." << endl;
       }

   // Left side searching
     int leftbound = found;
     right = found;
     left = 0;
      
     while (left <= right){      // when left become greater than right so it braeks loop.
        mid = (left + right) / 2;
        if(target == input[mid]) {
            leftbound = mid;
          right = mid - 1; //Beacuse of this we travel at every index using binary search.On left 
        }
        else {
            left = mid + 1;
        }
     }

     //Right side seacrhing Duplicates
     int rightbound = found;
     left = found;
     right = n - 1;

      while (left <= right) {
         mid = (left + right) / 2;
         if(target == input[mid]){
            rightbound = mid;
            left = mid + 1;//Beacuse of this we travel at every index using binary search.On Right
         }
         else{
            right = mid - 1;
         }
      }
   
      for( int i = leftbound; i <= rightbound; i++) {
        cout << "Value that are repeated/Dupliacted at index Number." << i << endl;
      // Leftbound and Rightbound store the 1st and the last value index number as data is sorted
      // so they print from 1 to 10 all values index number.
      }

    cout << "\nCount: " << (rightbound - leftbound + 1) << endl;
    //Number of times  it occured in array Using Index Number. 10 - 1 + 1 = 10.
    return 0;
}