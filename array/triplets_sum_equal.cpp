#include<iostream>
using namespace std;
int main()
{
    int array[1000] ;
    int size;
    cout << "enter the size of array:";
    cin >> size;
    cout << "enter the element of the array: ";
    for(int i=0; i<size; i++)
    {
        cin >> array[i];
    }
    int targetsum ;
    cout << "Enter the target sum which i need: ";
    cin >> targetsum;

    int pair  = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
           for(int k=j+1; k<size; k++)
           {
             if(array[i] + array[j] + array[k] == targetsum)
            {
                pair++;
            }
           }
        }
    }
    cout << pair << endl;
    return 0;
}