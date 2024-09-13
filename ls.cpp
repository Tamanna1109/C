// linear search

#include<iostream>
using namespace std;
int main(){

    int array[]={3,9,18,11,7};
    int key=3;       //an integer variable key and assigns the value 11 

    int ans=-1;     
    for(int i=0;i<5;i++){
        if(array[i]==key){      //statement checks if the current element array[i] is equal to the key

            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
     
}