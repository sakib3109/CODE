#include<iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a alphabet: ";
    cin >> c;

    if(c =='a' || c =='e' || c =='i' || c =='o' || c=='u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << c << "is a vowel."<<endl;
    }
    else{
        cout << c << "is a consonant." << endl;
    }
    return 0;
}