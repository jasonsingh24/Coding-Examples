#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{

    int check1;
    int check2;
    int check3;
    
        
    vector<int> numbers(7);
        
    cout << "Enter Hamming code: ";
    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }
    
    if(((numbers[0]+numbers[2]+numbers[4]+numbers[6]) % 2) == 1)
    {
        cout << "Checkbit 1 is odd" << endl;
        check1 = 1;
    }
    else
    {
        check1 = 0;
    }
    
    if(((numbers[1]+numbers[2]+numbers[5]+numbers[6]) % 2) == 1)
    {
        cout << "Checkbit 2 is odd" << endl;
        check2 = 1;
    }
    else
    {
        check2 = 0;
    }
    
    if(((numbers[3]+numbers[4]+numbers[5]+numbers[6]) % 2) == 1)
    {
        cout << "Checkbit 3 is odd" << endl;

        check3 = 1;
    }
    else
    {
        check3 = 0;
    }

    int space;
    //001
    if (check1 == 1 && check2 == 0 && check3 == 0)
    {
        space = 1;
    }
    //011
    if (check1 == 1 && check2 == 1 && check3 == 0)
    {
        space = 3;
    }
    //111
    if (check1 == 1 && check2 == 1 && check3 == 1)
    {
        space = 7;
    }
    //010
    if (check1 == 0 && check2 == 1 && check3 == 0)
    {
        space = 2;
    }
    //100
    if (check1 == 0 && check2 == 0 && check3 == 1)
    {
        space = 4;
    }
    //000
    if (check1 == 0 && check2 == 0 && check3 == 0)
    {
        space = 0;
        cout << "no error" << endl;
    }
    
    //101
    if (check1 == 1 && check2 == 0 && check3 == 1)
    {
        space = 5;
        
    }
    
    //110
    if (check1 == 0 && check2 == 1 && check3 == 1)
    {
        space = 6;
    }
    
    
    if (space != 0)
    {
        if(numbers[space-1] == 1)
        {
            numbers[space-1] = 0;
        }
        if(numbers[space-1] == 0)
        {
            numbers[space-1] = 1;
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout << endl<<  "Hamming code: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i];
    }
    
    vector<int> conversion(4);
    
    conversion[0] = numbers[2];
    conversion[1] = numbers[4];
    conversion[2] = numbers[5];
    conversion[3] = numbers[6];
    
    
    cout << endl<<  "Binary Code: ";
    for (int i = 0; i < conversion.size(); i++)
    {
        cout << conversion[i];
    }
    cout << endl;
    
    int num = 0;
    int factor = 1;
    
    for(int i = 0; i<conversion.size(); i++)
    {
        num += (conversion[i] *factor);
        factor *=10;
    }
    
    int value;
    int temp = num;
    int base = 1;
    
        while (temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;
        
        value += last_digit*base;
        
        base = base*2;
    }
    
    cout << endl;
    cout << value << endl;
        numbers.clear();
        conversion.clear();
    
    
}
