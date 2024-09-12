/*#include<iostream>
using namespace std ;
int main(){
    int a =2 ;
    int b = a+1 ;  
    if((a=3) == b){   // value 3 is assigned to a now value of a is 3 below this code even if the codition is true or not 
        cout<<a<<endl;
    }else{
        cout<<a+1 ;
    }
    return 0 ;
}*/

// if else conditions 
/*#include<iostream>
using namespace std;
int main(){
 char s ;
 cout<<"enter the value of char "<<endl;
 cin>>s;
 if(s>='a' && s<='z'){
    cout<<"lower case alphabets "<<endl;
 }else if(s>='A' && s<='Z'){
    cout<<"upper case"<<endl;
 }else if (s>='0' && s<='9'){
    cout<<"positive integers" ;
 }else{
    cout<<"try again" ;
 }
return 0;
}*/

//*****************find sum of even numbers from 1 to n using while loop 
/*#include<iostream>
using namespace std;
int main(){
     int i=2 , sum = 0 ,n ;
   cout<<"enter the value of n "<<endl;
   cin>>n;
   
   while(i<make a=n){
    if(i%2==0){
    sum = sum+i ; 
    }
    i++;
   }
   cout<<"so the sum is "<<sum<<endl;
return 0;
}*/
//*******make a square pattern asked by user using while loop 
#include<iostream>
using namespace std;
int main(){
  int n , i =1 ;
  cin>>n;
  while(i<=n){
    cout<<"*" ;
    int j = 1 ;
    while(j<=n){
        cout<<"*";
        j++ ;
    }
    cout<<endl;
    i++ ;
  }
return 0;
}