//==========================================================
//
// Title:      SET BUBBLE THEORY
// Course:     CSC 1501
// Lab Number: ASSINGMNET 7
// Author:     Jason Singh
// Date:       JUNE 5
// Description:
// ORGANIZE THE SET OF NUMBERS AND THEN BE ABLE TO SAY HOW MANY OPERATIONS
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
    int temp1;
    int temp2;
    int counter = 0;
    int arr1 [10] = {1,3,7,5,2,4,6,8,9,10};
    int arr2 [10] = {10,9,8,7,6,5,4,3,2,1};
    int arr3 [10] = {1,10,2,9,3,8,4,7,5,6};
    
    for ( int i = 0; i < 9; i++)
    {
        counter = counter + 1;
        for ( int i = 0; i < 9; i++)
    {
        counter = counter + 1;
        if(arr1[i] > arr1[i+1])
        {
            temp1 = arr1[i];
            temp2 = arr1[i+1];
            
            arr1[i] = temp2;
            arr1[i+1] = temp1;
            counter = counter + 4;
        }
    }
}
    for ( int i = 0; i < 10; i++)
    {
        cout << arr1[i] << ",";
    }
    cout << endl;
    cout << "It took me this many times: " << counter << endl;

    ////////////////////////////////////////////////////////
    counter = 0;
    for ( int i = 0; i < 9; i++)
    {
        counter = counter + 1;
        for ( int i = 0; i < 9; i++)
        {
            counter = counter + 1;
            if(arr2[i] > arr2[i+1])
            {
                temp1 = arr2[i];
                temp2 = arr2[i+1];
                
                arr2[i] = temp2;
                arr2[i+1] = temp1;
                counter = counter + 4;
            }
        }
    }
    for ( int i = 0; i < 10; i++)
    {
        cout << arr2[i] << ",";
    }
    cout << endl;
    cout << "It took me this many times: " << counter << endl;
    
    /////////////////////////////////////////////////////////////
    
    counter = 0;
    for ( int i = 0; i < 9; i++)
    {
        counter = counter + 1;
        for ( int i = 0; i < 9; i++)
        {
            counter = counter + 1;
            if(arr3[i] > arr3[i+1])
            {
                temp1 = arr3[i];
                temp2 = arr3[i+1];
                
                arr3[i] = temp2;
                arr3[i+1] = temp1;
                counter = counter + 4;
            }
        }
    }
    for ( int i = 0; i < 10; i++)
    {
        cout << arr3[i] << ",";
    }
    cout << endl;
    cout << "It took me this many times: " << counter << endl;
}


