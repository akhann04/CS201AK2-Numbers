//NAME: Aleeza Khan     
//PROGRAM: PGM2
//DATE: August 29,24 
//DESCRIPTION:The point of this code is to allow the user to enter 4 number and then the computer will generate all the numbers first from ascending order
//and then descending order and then it would find the average of all four numbers after that is finished
//it will ask the user if they would like to go again if they type y the program will run again if they type 
//no the program will end. 



#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
//input 4 numbers
//print in increasing & decreasing order
//print largest, smallest, average
int main() {



    char userChoice = 'y';



    while (userChoice == 'y') {
        int arr1[4] = { 0 };
        int sum = 0;
        //input 4 values?
        cout << "Enter 4 values: \n";
        for (int i = 0; i < 4; ++i) {
            cin >> arr1[i];
            sum = sum + arr1[i];
        }
        insertionSort(arr1, 4);
        cout << "Array in Ascending Order:\n ";
        for (int i = 0; i < 4; ++i) {
            cout << arr1[i] << " ";
        }
        cout << endl;
        cout << "Array in Descending Order:\n ";
        for (int i = 3; i >= 0; --i) {
            cout << arr1[i] << " ";
        }
        cout << endl;
        cout << "The smallest number is:\n " << arr1[0] << endl;
        cout << "The largest number is:\n " << arr1[3] << endl;
        cout << "The average is:\n " << sum / 4.0 << endl;




        cout << "Would you like to go again?\n";
        cin >> userChoice;


        if (userChoice == 'n') {
            cout << "End Program";
        }


    }
    return 0;
}
