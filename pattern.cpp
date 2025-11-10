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
void pattern10(int n){
            //  *
            //  **
            //  ***
            //  ****
            //  *****
            //  ****
            //  ***
            //  **
            //  *    
    for(int i=1;i<=2*n-1;i++ ){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}    
void pattern11(int n){
            // 1
            // 01
            // 101
            // 0101
            // 10101

    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0) // if the row number is even it'll start with 1
        {
            start =1 ;
        }
        else start = 0;// row number is odd. so it'll start with 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
            
    }
    
}            
void pattern12(int n){

        //   1        1
        //   12      21
        //   123    321
        //   1234  4321
        //   1234554321

    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for (int j = 1; j < 2*n-(2*i-1); j++)
        {
            cout << " ";
        }
        // for (int j = i; j >= 1; j--)
        // {
        //     cout << j;
            
        // }
        for(int j=1;j<=i;j++){
            cout << (i-j+1);
        }
        
        cout << endl;
    }
    
}           
void pattern13(int n){
        //   1 
        //   2 3
        //   4 5 6
        //   7 8 9 10
        //   11 12 13 14 15          

    int start = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << start << " ";
            start = start + 1;
        }
        cout << endl;
    }
}       
void pattern14(int n){
        //    A
        //    AB
        //    ABC
        //    ABCD
        //    ABCDE
    
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch <='A'+i ;ch++){
            cout << ch;
        }
        cout << endl;
    }
}   
void pattern15(int n){
            //  ABCDE
            //  ABCD
            //  ABC
            //  AB
            //  A
    
    for(int i=0;i<n;i++){
        
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout << ch;
        }
        cout << endl;
    }
}
void pattern16(int n){
            //  A
            //  BB
            //  CCC
            //  DDDD
            //  EEEEE
    //char cha = 'A';
    for(int i=0;i<n;i++){
        char cha = 'A'+i;
        for(char ch = 'A';ch <='A'+i ;ch++){
            cout << cha;
            
        }
        //cha +=1;
        cout << endl;
    }
}
void pattern17(int n){
//     A    
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
    
    
    for(int i=0;i<n;i++){
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=0;j<=n-i-1;j++){
            cout << " ";
        }
        for(int j=1;j<=2*i+1;j++){
            cout << ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(int j=0;j<=n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern18(int n){
            //   E
            //   DE
            //   CDE
            //   BCDE
            //   ABCDE

    for (int i = 0; i < n; i++)
    {
        char ch = 'E'-i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch ;
            
            ch++;
        }
        cout << endl;
        
    }
}
void pattern19(int n){
        
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
        
    
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=n-i-1;j++){
            cout << "*";
        }
        for(int j=1;j<2*i+1;j++){
            cout << "|";
        }
        for(int j=0;j<=n-i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=1;j<2*n-(2*i+1);j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    
}
void pattern20(int n){
            //    *        *
            //    **      **
            //    ***    ***
            //    ****  ****
            //    **********
            //    ****  ****
            //    ***    ***
            //    **      **
            //    *        *

    int spaces = 2*n -2;
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
        if(i<n) spaces -= 2;
        else spaces +=2;
    }    
}

int main(){

    int n;
    pattern16(5);
    return 0;
}