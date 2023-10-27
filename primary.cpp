#include <iostream>
#include <string>
#include<cmath>
using namespace std;
// this means that we need to use the std vala namespace

int main(){
    // for(int i=1;i<11;i++){
    //     if (i%2==0){
    //         cout<<i<<"\n";
    //     }
    // }



// factorial 
// int num,mul=1;
// cout<<"Enter the  num : ";
// cin >> num;
// for (int i =num; i>=1;i--){
//     mul=mul*i;
// }
// cout<<mul;
    
// for converting the datatype just put the datatype in front of the thing 
char ch=99;
cout<<ch<<endl;

int a='C';
cout<<a<<endl;
// so basically we can convert any datatype into another 

    
    int v=99;
    cout<<(char)v<<endl;
    
    // so basicall by putting the datatype in fromnt we can do the type casting aslo 
    // dorectly we can change the datatype of ot 
    // for the negative number to be stored we can see the first bit of it 
    // 0 means + and 1 means - 

    // we can also have the unsigned value of th einteger 
    // unsigned measn that we are only taking the positive value of the integer range and neglecting the negative numbe r
    // but overlal int takes both the value
    unsigned int b=-55;
    cout<<b<<endl;
    
    cout<<(float)2/5;
    
    
    return 0;

}

// so to find out how -ve nmber are stored inside the memory see the first bit of the number 
// to storing the -ve number we need to take the 2's compliment 
// for and && and for or || and for not !