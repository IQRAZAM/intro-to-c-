//Q1 print a number from 0 to 100
/*#include<iostream>
using namespace std;
int main(){
  for(int i = 0; i<=100; i++){
    cout<<i<<endl;
  }
return 0;
}*/
    //Q2 printing a table 
    /*#include<iostream>
    using namespace std;
    int n;
    
    int main(){
        cout<<"enter the value of n "<<endl;
        cin>>n;
       for(int a = 1; a<=10;a++){
        cout<<n<<" * "<<a<<" = "<<n*a<<endl;
       }
    return 0;
    }*/
    //Q3 how to make reverse of a table 
   /* #include<iostream>
    using namespace std;
    int main(){
    int n ;
    cout<<"enter the valiue of n "<<endl;
    cin>>n;
    for(int i = 10; i>=1; i--){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
    }*/
    //Q4 to check if the number is even or odd 
 /*#include<iostream>
 using namespace std;
 int main(){
 int n ; 
 cout<<"enter the value of n"<<endl;
 cin>>n;
 if(n%2==0){
    cout<<"this is an even number"<<endl;
 }else{
    cout<<"this is an odd number "<<endl;
 }
 return 0;
 }*/
 //Q5 print odd or even numbers only from 1 to 100
/* #include<iostream>
 using namespace std;
 int main(){
 for(int i = 1;i<=100;i+=2){
    cout<<i<<endl;

 }
 return 0;
 }*/
 /*#include<iostream>
 using namespace std;
 int main(){
 for(int i = 0;i<=100;i+=2){ //even
    cout<<i<<endl;

 }
 return 0;
 }*/
 // Q6 all tables in one console 
 #include<iostream>
 using namespace std;
 int main(){
 int a=2,b=3,c=4,d=5,e=6,f=7,g=8,h=9;
 for(int i= 1;i<=10;i++){
    cout<<a*i<<b*i<<c*i<<d*i<<e*i<<f*i<<g*i<<h*i<<endl;
 }
 return 0;
 }