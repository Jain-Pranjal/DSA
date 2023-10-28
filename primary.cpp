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
    
// // for converting the datatype just put the datatype in front of the thing 
// char ch=99;
// cout<<ch<<endl;

// int a='C';
// cout<<a<<endl;
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
    // unsigned int b=-55;
    // cout<<b<<endl;
    
    cout<<(float)2/5<<endl;
    // so we can take multiple input from a same line 
    // int a,b;
    // cin>>a>>b;
    // cout<<"the value of a and b is "<<a<<b<<endl; 
    

/*

// basically if we wnat to take the char then we will convert that into the int 
char ch;
cout<<"enter : ";
cin>>(ch);
int ascii=int(ch); //typecasting the character into the numeric so that we can compare with the ascii value stable 
cout<<"The enter charcter maps to  : "<<ascii<<endl;
// so basically we have convert the character into the ASCII value

// to print the number from 1 to n 
int num;
cout<<"enter to which u want the sum  : "<<endl;
cin>>num;
int i=1;
while(i<=num){
    cout<<i;
    i++;
}


// print the sum of the numbers 
int num,sum=0;
cout<<"enter to which u want the sum  : "<<endl;
cin>>num;
for(int i=1;i<=num;i++){
    sum=sum+i;
} 
cout<<sum;


// fiding sum of all even numebrs
int num,sum=0;
cout<<"enter to which u want the sum  : "<<endl;
cin>>num;
for (int i=1;i<=num;i++){
    if (i%2==0){  //the condition to check for the even number to print only 
        sum=sum+i;
    }
}
cout<<sum;


// 2nd logic
int num,sum=0;
cout<<"enter to which u want the sum  : "<<endl;
cin>>num;
int i =2;
while (i<=num)
{
    sum=sum+i;
    i=i+2;
}
cout<<sum;

// to find wheterher the number is prime or not 
int num,count=0;
cout<<"enter to which u want the check for prime  : "<<endl;
cin>>num;
// bool prime=true;
int count=2;
*/


/*
// pattern making 

// * * * *
// * * * *
// * * * *
// * * * *
int n;
cout<<"how many u want : ";
cin>>n;
// as the i is fixed so we will print the i in the inner loop not the j as j is chaning in every iteration  
for (int i =0;i<n;i++){
    for (int j=0;j<n;j++){
        cout<<"$"<<"\t";
    }
    cout<<"\n";
}


*/

// 4444
// 333
// 22
// 1

int n;
cout<<"how many u want : ";
cin>>n;
for (int i =n;i>=1;i--){
    for (int j=n;j>=1;j--){
        cout<<i<<"\t";
    }
    cout<<endl;
}
























    return 0;

}

// so to find out how -ve nmber are stored inside the memory see the first bit of the number 
// to storing the -ve number we need to take the 2's compliment 
// for and && and for or || and for not !