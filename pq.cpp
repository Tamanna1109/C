#include<iostream>
using namespace std;
int main(){

    int p=5;   // Step 1: Declare an integer variable 'p' and initialize it to 5.
    int &q=p;  // Step 2: Declare a reference variable 'q' that refers to 'p'.


    q++;             // Step 3: Increment the value of 'q' by 1.
    cout<<p<<endl;   // Step 4: Print the value of 'p'.

    cout<<&p<<endl;
    cout<<&q<<endl;


   
    return 0;        // Step 5: Return 0, indicating successful execution.
}     