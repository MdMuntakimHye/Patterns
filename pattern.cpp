#include<vector>
#include<iostream>
using namespace std;

void pattern1(int n){
    
            // * * * * *
            // * * * * *
            // * * * * *
            // * * * * *
            // * * * * *

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
        
    }
    
}
void pattern2(int n){
            // *
            // **
            // ***
            // ****
            // *****
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    
}
void pattern3(int n){
        //    1
        //    12
        //    123
        //    1234
        //    12345
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
        
    }
    
}
int main(){

    int n;
    pattern3(5);
    return 0;
}