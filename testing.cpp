#include <iostream>
using namespace std;

        
int main()
{

    int *ptr = NULL;
    ptr = new int[10];
    
    int *temp = NULL;
    int current=0;
    int size=10;
    
    for (int i=0; i<current; i++)
    {
        if (current<size)
        {
            cout << "what" << endl;
            cin >> ptr[i];
            current++;
        }
        else
        {
            temp=ptr;
            ptr=new int [size*2];
            size*=2;
        }
    }
    
    

    return 0;
}
