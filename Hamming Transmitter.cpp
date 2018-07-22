#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void print_elem(int elem)
{
    cout << elem << endl;
}

int main ()
{
    int code1;
    int code2;
    int code3;
    
    int decnum;
    vector<int> numbers;
    cout << "Enter Decimal Number: ";
    cin >> decnum;
    while(decnum != 0)
    {
        if( decnum%2 == 0)
        {
            numbers.push_back(0);
        }
        else
        {
            numbers.push_back(1);
        }
        decnum = (int)floor(decnum/2);
    }
    
        reverse(numbers.begin(), numbers.end());
    
    while(numbers.size() < 4)
    {
        numbers.insert(numbers.begin(), 0);
    }
    
    cout << "Binary code: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i];
    }
    
    
    if (((numbers[0]+numbers[3]+numbers[1]) % 2) == 1)
    {
        code1 = 1;
    }
    else
    {
        code1 = 0;
    }
    
    if (((numbers[0]+numbers[2]+numbers[3]) % 2) == 1)
    {
        code2 = 1;
    }
    else
    {
        code2 = 0;
    }
    
    if (((numbers[1]+numbers[2]+numbers[3]) % 2) == 1)
    {
        code3 = 1;
    }
    else
    {
        code3 = 0;
    }
    
    numbers.insert(numbers.begin(), code1);
    numbers.insert(numbers.begin() + 1, code2);
    numbers.insert(numbers.begin() + 3, code3);
    
    cout << endl<<  "Hamming code: ";
        for (int i = 0; i < numbers.size(); i++)
        {
            cout << numbers[i];
        }
    cout << endl;
}
