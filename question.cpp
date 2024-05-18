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
 /*#include<iostream>
 using namespace std;
 int main(){
 int a=2,b=3,c=4,d=5,e=6,f=7,g=8,h=9;
 for(int i= 1;i<=10;i++){
    cout<<a*i<<b*i<<c*i<<d*i<<e*i<<f*i<<g*i<<h*i<<endl;
 }
 return 0;
 }*/
 //Q7 swapping of two numbers 
 /*#include<iostream>
 using namespace std;
 int main(){
 // swap using a third varaible 
 int a = 32 ;
 int b = 47;
 cout<<"the value of a  before swapping is "<<a<<" and the value of b is "<<b<<endl;
 int c = a ;
 a = b  ;
 b = c ;
 cout<<"after swapping"<<endl;
 cout<<a<<endl;
 cout<<b<<endl;


 return 0;
 }*/
 //METHOD 2  (without a third variable )
 /*#include<iostream>
 using namespace std;
 int main(){
 int a = 4;
 int b =7;
 cout<<"before swapping"<<endl;
 cout<<a<<endl;
 cout<<b<<endl;
 a = a + b;
 b = a - b;
 a = a - b ;
 cout<<"after swapping"<<endl;
 cout<<a<<endl;
 cout<<b<<endl;
 return 0;
 }*/
 //Q 8 check a vowel in c++
 /*#include<iostream>
 using namespace std;
 int main(){
  char l ;
  cout<<"enter the value of an alphabet "<<endl;
  cin>>l;
  if(l== 'A' || l == 'E' || l == 'I' || l == 'O' || l=='U' || l=='a' || l=='e'|| l=='i' || l=='o' || l=='u'){
   cout<<"it's a vowel ";
  }else{
   cout<<"it's a consonant ";
  }
 return 0;
 }*/
 //Q9 FIBONACCI SEQUENCE 
 /*#include<iostream>
 using namespace std;
 int main(){
 int n1 = 0, n2 = 1,n3,i;
 cout<<n1<<endl<<n2<<endl;
 for(i = 1;i<10;i++){
   n3 = n1+n2;
   n1 = n2;
   n2 = n3;
   cout<<n3<<endl;
 }
 
 return 0;
 }*/
 //Q10 FACTORIAL OF A NUMBER
 /*#include<iostream>
 using namespace std;
 int main(){
   int n;
 cout<<"enter the number whose factorial you wnna find"<<endl;
 cin>>n;
 int f = n;
 for(int i = 1; i<n ;i++){
   cout<<f<<"*"<<i<<"=";
   f = f * i ;
   cout<<f<<endl;
 }
 cout<<f;
 return 0;
 }*/
 //Q11 find if the given year is LEAP YEAR or not
 /*#include<iostream>
 using namespace std;
 int main(){
  int year ;
  cout<<"Enter the desired year to know if it's leap year or not"<<endl;
  cin>>year;
  if(year%400==0){
   cout<<"its is a leap year";
  }else if(year%400!=0 && year%100==0 && year%4==0){
   cout<<"it is not a leap year";
  }else if(year%400!=0 && year%100!=0 && year%4==0){
   cout<<"it is a leap year";
  }else{
   cout<<"not a leapy bro"<<endl;
  }
 return 0;
 }*/
 //Q12 see if given umber is prime or not
 /*#include<iostream>
 using namespace std;
 int main(){
  int n ;
  int i ;
  cout<<"enter the number you wanna know if it's prime or not"<<endl;
  cin>>n;
  for( i =2 ; i<n ; i++){
   if(n%i==0){
      cout<<"not a prime number";
      break;
   } 
   }
 if( i==n){
   cout<<"it's a prime number";
 }
  
  
 return 0;
 }*/
 //Q13 give series of prime number 
 /*#include<iostream>
 using namespace std;
 int main(){
 int k ,n ,i ;
 cout<<"enter the value of n to whic you wanna see prime number series "<<endl;
 cin>>n;
 for(i = 2;i<n;i++){
   for(k = 2; k<i ; k++){
      if(i%k==0){
         cout<<"";
         break;
      }
   }
   if(k==i){
      cout<<k<<endl;
   }
 }
 return 0;
 }*/
 //Q14 sum of digits of a number (can help with reverse ,paligdrom , angsdrom)
 /*#include<iostream>
 using namespace std;
 int main(){
   int n , r , sum = 0;
   cout<<"enter the value of n "<<endl;
   cin>>n;
 while(n!=0){
   r = n%10;
   sum = sum + r ;
   n = n/10 ;
 }
 cout<<sum<<endl;
 return 0;
 }*/
 //Q 15 reverse of a number by using more or less above method 
 
 /*#include<iostream>
 using namespace std;
 int main(){
 int n, r ,sum = 0 ;
 cout<<"enter the value of n "<<endl;
 cin>>n;
 while(n>0){
   r = n%10;
   sum = sum*10 + r;
   n = n/10;
 }
 cout<<sum;
 return 0;
 }*/
 //Q16 palindrome number (a nu ber if we read from start or from end is same for example 2002,45654 )
 // if reverse number is equal to the actual number then we call it a palindrome number
 /*#include<iostream>
 using namespace std;
 int main(){
 int n , t ,r ,sum = 0 ;
 t=n;
 cout<<"enter the value of n "<<endl;
 cin>>n;
 while(n!=0){
   r = n%10;
   sum = sum*10 + r;
   n = n/10;
 }
 cout<<sum<<endl;
 if(t==sum ){
   cout<<"palindrome number";
 }else{
   cout<<"not a palindrome";
 }
 return 0;
 }*/
 //Q17 amstrong number(is a number when the sum of cube of every digit of that number is equal to that number  )
// like 153 = 1+125+27 = 153

/*#include<iostream>
 using namespace std;
 int main(){
 int n , t ,r ,sum = 0 ;
 t=n;
 cout<<"enter the value of n "<<endl;
 cin>>n;
 while(n!=0){
   r = n%10;
   sum = sum + r * r * r;
   n = n/10;
 }
 cout<<sum<<endl;
 if(sum==t ){
   cout<<"amstrong number";
 }else{
   cout<<"not a amstrong";
 }
  return 0;
 }*/
 //Q18 Print ello world without a semi colon
 /*#include<iostream>
 using namespace std;
 int main(){
 if(cout<<"Hello World "){
  
 }
 return 0;
 }*/
 //Q19 find HCF of a number 
 /*#include<iostream>
 using namespace std;
 int main(){
 int a,b,r,hcf;
 cout<<"enter value of a"<<endl;
 cin>>a;
 cout<<"enter the value of b"<<endl;
 cin>>b;
 while(true){
  hcf = b;
  r = a % b;
  a=b;
  b=r;
  if(b==0){
    break;
  }
 }
 cout<<hcf<<endl;
 return 0;
 }*/
 //Q20 Find LCM of the 2 numbers 
 /*#include<iostream>
 using namespace std;
 int main(){
 int a ,b ,r,lcm ;
 cout<<"enter the value of a "<<endl;
 cin>>a;
 cout<<"enter the value of b "<<endl;
 cin>>b;
 while(true){
  lcm = a;
  r = a%b;
   if(r == 0){
    break;
   }
  a = a*2;
 }
 cout<<lcm;

 return 0;
 }*/

 //Q21 finding lcm and HCF together 
 /*#include<iostream>
 using namespace std;
 int main(){
 int a,b,r,LCM,HCF,c,v;
 cout<<"enter the value of a "<<endl;
 cin>>a;
 cout<<"enter the value of b"<<endl;
 cin>>b;
 c = a;
 v = b ;
 while(true){
  LCM = a ;
   r = a%b ;
   if(r == 0){
    break;
   }
   a = a*2 ;
 }
 HCF = c*v / LCM ; 
 cout<<"LCM is "<<LCM<<endl;
 cout<<"HCF is "<<HCF<<endl;
 //cout<<"HCF is "<<(a*b)/LCM<<endl;   (as te values of a and b are changing so we will store them into other containers)
 return 0;
 }*/
 //Q22 make a star pattern starting from 1 to 5 
 /*#include<iostream>
 using namespace std;
 int main(){
 int i,j;
 for(i=1 ; i<=5 ; i++){
  for(j=1; j<=5 ; j++){
    if(j<=i){
      cout <<" * ";
    }else{
      cout<<"";
    }
  }
  cout<<endl;
 }
 return 0;
 }*/
 //Q23 make a star pattern from 5 to 1
 /*#include<iostream>
 using namespace std;
 int main(){
 int i,j;
 for(i=1 ; i<=5 ; i++){
  for(j=1; j<=5 ; j++){
    if(j<=6-i){
      cout <<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
 }
 return 0;
 }*/
 //Q24 another star pattern 
 /*#include<iostream>
 using namespace std;
 int main(){
  for(int i=1; i<=5; i++){
    for(int j=1 ; j<=5; j++){
      if(j>=i){
        cout<<" * ";
      }else{
        cout<<"   ";
      }
    }
    cout<<endl;
  }
 return 0;
 }*/
 //Q 25 star pattern 
/*#include<iostream>
 using namespace std;
 int main(){
 for(int i=5; i>=1; i--){
  for(int j=1; j<=5; j++){
    if(j>=i){
      cout<<"*";
    }else{
      cout<<" ";
    }
  }
  cout<<endl;
 }
 return 0;
 }*/
 //Q 26 pattern
 /*#include<iostream>
 using namespace std;
 int main(){
  for( int i=1; i<=5; i++){
    for(int j=1; j<=9; j++){
      if(j>=6-i && j<=4+i){
        cout<<" * ";
      }else{
        cout<<"   ";
      }
    }
    cout<<endl;
  }
 return 0;
 }*/
 //Q 27 pattern
 /*#include<iostream>
 using namespace std;
 int main(){
 for(int i=1; i<=5; i++){
  for(int j=1; j<=9; j++){
    if(j>=i && j<=10-i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
 }
 return 0;
 }*/
 //Q28 pattern
 /*#include<iostream>
 using namespace std;
 int main(){
  int i,j,k;
  for(  i=1; i<=5; i++){
    k=1;
    for( j=1; j<=9; j++){
      if(j>=6-i && j<=4+i && k==1){
        cout<<"*";
        k=0;
      }else{
        cout<<" ";
        k=1;
      }
    }
    cout<<endl;
  }
 return 0;
 }*/

 //Q 29 PATTERN 
 /*#include<iostream>
 using namespace std;
 int main(){
 for(int i=1; i<=9; i++){
  for(int j=1; j<=5; j++){
    if(j<=i && j<=10-i){
      cout<<" * ";
    }else{
      cout<<" ";
    }
  }
  cout<<endl;
 }
 return 0;
 }*/

 //Q30 pattern

/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=9; i++){
  for(int j=1; j<=5; j++){
    if(j>=6-i && j>=i-4){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
 //Q 31 pattern
 /*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=5; i++){
  for(int j=1; j<=5; j++){
    if(j>= i || j<=i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
// Q32 

/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=5; i++){
  for(int j=1; j<=9; j++){
    if(j<=6-i || j>=4+i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 33 
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=5; i++){
  for(int j=1; j<=9; j++){
    if(j<=i || j>=10-i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 34 
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=9; i++){
  for(int j=1; j<=5; j++){
    if(j<=6-i || j<=i-4){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 35
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=9; i++){
  for(int j=1; j<=5; j++){
    if(j>=i || j>=10-i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 36
/*#include<iostream>
using namespace std;
int main(){
  int i,j,k=0;
for( i=1; i<=9; i++){
  i<=5?k++:k--;
  for( j=1; j<=9; j++){
    if(j<=6-k || j>=4+k){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 37 
/*#include<iostream>
using namespace std;
int main(){
  int i , j ,k=0 ;
for( i=1; i<=9; i++){
  i<=5?k++:k--;
  for( j=1; j<=9; j++){
    if(j>=6-k && j<=4+k){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q38
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(i==1 || i==8 ||j==1 ||j==8){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 39
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(i==1 || i==8 ||j==1 ||j==8 || j==i || j==9-i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 40
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if( i==8 ||j==1 ){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q41
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(i==1 || i==8 || j==9-i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 41
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(j==i || j==9-i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q42 
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(i==1 || i==8 ||j==i ||j==9-i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q43 
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(j==1 ||j==8 || j==i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q43
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(i==1 || j==5 ){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 44
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(j==1 ||j==8 || j==i && i<=5 || j==9-i &&i<=5){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 45 
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(i==5 || j==1 || j==8){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//  Q 46
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=8; i++){
  for(int j=1; j<=8; j++){
    if(j==1 || i==8 || j==i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 47
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=5; i++){
  for(int j=1; j<=9; j++){
    if(i==5 || j==5 || j==6-i || j==4+i ){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q 48
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=9; i++){
  for(int j=1; j<=5; j++){
    if(j==5 || i==5 || j==6-i || j==i-4){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q49

/*#include<iostream>
using namespace std;
int main(){
  int k=0;
for(int i=1; i<=9; i++){
  i<=5?k++:k--;
  for(int j=1; j<=9; j++){
    if(j==5 || i==5 || j==6-k || j==4+k){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}
*/
//Q50 
/*#include<iostream>
using namespace std;
int main(){
int i,j,k=0;
for(i=1;i<=9;i++){
  i<=5?k++:k--;
  for(j=1;j<=9;j++){
    if(j==5 || i==5 || j==k || j==10-k){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q51
/*#include<iostream>
using namespace std;
int main(){
int i,j;
for(i=1;i<=5;i++){

  for(j=1;j<=9;j++){
    if(j>=6-i && j<=10-i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q52
/*#include<iostream>
using namespace std;
int main(){
int i,j;
for(i=1;i<=5;i++){

  for(j=1;j<=9;j++){
    if(j>=6-i && j<=10-i){
      cout<<" * ";
    }else{
      cout<<"   ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q53 PRINTING ALPJABETS AS  PATTERNS 
/*#include<iostream>
using namespace std;
int main(){
int i , j;
char c;
for(i=1 ; i<=5 ; i++){
  c = 'A';  // will be inside loop if we want  to start everyline from a
  for(j=1 ; j<=5 ; j++){
    if(j<=i){
      cout<<" "<<c;
      c++;
    }else{
      cout<<" ";
    }
  }
  cout<<endl;
}
return 0;
}*
//Q54 it is also known as floyde triangle which is a triangle of alphabets or also may be of numbers where ever row got the same no. of elements as its number like 1st got one element third got three elements etc 
/*#include<iostream>
using namespace std;
int main(){
int i , j;
char c;
  c = 'A';  // will be INSIDE loop if we want  pattern keep going  from a
for(i=1 ; i<=5 ; i++){
  for(j=1 ; j<=5 ; j++){
    if(j<=i){
      cout<<" "<<c;
      c++;
    }else{
      cout<<" ";
    }
  }
  cout<<endl;
}
return 0;
}*/
//Q55 find the max element of an array 
/*#include<iostream>
using namespace std;
int main(){
int n,max;
cout<<"enter the length of an array "<<endl;
cin>>n;
int arr[n];
for(int i=0; i<n ; i++){
  cout<<"enter array values now "<<endl;
  cin>>arr[i];
}
max = arr[0];
for(int i = 0; i<n ; i++){
  if(max<arr[i]){
    max=arr[i];
  }
}
cout<<"hence the max value from the array is "<<max<<endl;
return 0;
}*/
//Q 56 remove a vowel from a string 
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
 string str;
 cout<<"enter the string you want to enter"<<endl;
 getline(cin,str);
 
 for(int i=0 ; i<str.length() ; i++){
  if(str[i]=='a' || str[i]=='A'){
    continue;
  }else if(str[i]=='e' || str[i]=='E'){
    continue;
  }else if(str[i]=='i' || str[i]=='I'){
    continue;
  }else if(str[i]=='o' || str[i]=='O'){
    continue;
  }else if(str[i]=='u' || str[i]=='U'){
    continue;
  }
  else{
    cout<<str[i];
  }
  }

return 0;
}*/
//Q57 check if the gven number is a perfect square or not 
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int num;
  int root;

cout<<"enter a number you want to get perfect square of"<<endl;
cin>>num;
root = sqrt(num);
if(root*root == num){
  cout<<"it a perfect square ";
}else{
  cout<<"it is not a perfect square";
}
return 0;
}*/
//Q 58 find all the factors of a number 
#include <iostream>
using namespace std;

void factors(int num) {
    int i;
    for(i=1; i <= num; i++) {
        if (num % i == 0)
            cout << i << " ";
    }
}

int main() {
    int num = 6;
    cout << "The factors of " << num << " are : ";
    factors(num);
    return 0;
}



