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
void pattern4(int n){
        //   1
        //   22
        //   333
        //   4444
        //   55555
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
        
    }
}
void pattern5(int n){
        //   *****
        //   ****
        //   ***
        //   **
        //   *
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i ; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
}
void pattern6(int n){
        //   1 2 3 4 5 
        //   1 2 3 4
        //   1 2 3
        //   1 2
        //   1
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i-1 ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        
    }
}
void pattern7(int n){
        //       *    
        //      ***
        //     *****
        //    *******
        //   *********
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i-1 ; j++)
        {
            cout <<  " ";
        }
        for(int j=1;j<=2*i+1;j++){
            cout << "*";
        }
        for (int j = 1; j <= n-i-1 ; j++)
        {
            cout <<  " ";
        }
        cout << endl;
        
    }
}
void pattern8(int n){
        //   *********
        //    *******
        //     *****
        //      ***
        //       *
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout <<  " ";
        }
        for(int j=1;j<=2*n-(2*i+1);j++){
            cout << "*";
        }
        for (int j = 1; j <=i ; j++)
        {
            cout <<  " ";
        }
        cout << endl;
        
    }
}
void pattern9(int n){
        //       *    
        //      ***
        //     *****
        //    *******
        //   *********
        //   *********
        //    *******
        //     *****
        //      ***
        //       *
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i-1 ; j++)
        {
            cout <<  " ";
        }
        for(int j=1;j<=2*i+1;j++){
            cout << "*";
        }
        for (int j = 1; j <= n-i-1 ; j++)
        {
            cout <<  " ";
        }
        cout << endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout <<  " ";
        }
        for(int j=1;j<=2*n-(2*i+1);j++){
            cout << "*";
        }
        for (int j = 1; j <=i ; j++)
        {
            cout <<  " ";
        }
        cout << endl;
        
    }
}
int main(){

    int n;
    pattern9(5);
    return 0;
}