#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <math.h>
using namespace std;

int main ()
{
    string code = "Jrypbzr gb Avtug Inyr";
    

    int copy;
    char tester;
    int mover;
    int counter = 1;
    
    for(int z = 0; z < 26; z++)
    {
        for(int i = 0; i < code.length(); i++)
        {
            if(isupper(code[i]) == true)
            {
                copy = code[i];
//                cout << copy;
                if(copy+counter >= 91)
                {
                    mover = (copy + counter) - 91;
                    copy = 65;
                    copy = copy + mover;
                    tester = copy;
                    cout << tester;
                }
                else
                {
                    copy= copy + z;
                    tester = copy;
                    cout << tester;
                }
            }
            else if(code[i] == 32)
            {
                cout << " ";
            }
            else if (islower(code[i]) == true)
            {
                copy = code[i];
//                cout << copy;
                if((copy+counter) >= 123)
                {
                    mover = (copy + counter) - 123;
                    copy = 97;
                    copy = copy + mover;
                    tester = copy;
                    cout << tester;
                }
                else
                {
                    copy = copy + counter;
                    tester = copy;
                    cout << tester;
                }
                
            }
           
            
            
        }
        counter++;
        cout << endl;
    }
    
    
}
