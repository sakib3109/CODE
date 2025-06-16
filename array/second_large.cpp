//problem
#include<iostream>
using namespace std;

int largestelementIndex(int array[], int size)
{
    int max= array[0];
    int maxindex =0;
    for(int i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
            maxindex = i;
        }
        return maxindex;
    }

}
int main()
{
    int array[] = {2,3,5,7,6,1};
    int indexoflargest = largestelementIndex(array,6);
    cout << array[indexoflargest] <<endl;

    array[indexoflargest] = -1;
    int indexofsecondlargest = largestelementIndex(array,6);
    cout << array[indexofsecondlargest] <<endl;
    return 0;
}