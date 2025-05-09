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
   
   while(i<make , a=n){
    if(i%2==0){
    sum = sum+i ; 
    }
    i++;
   }
   cout<<"so the sum is "<<sum<<endl;
return 0;
}*/
//*******make a square pattern asked by user using while loop 
/*#include<iostream>
using namespace std;
int main(){
  int n , i =1 ;
  cout<<"enter the number of stars you want in height "<<endl;
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
}*/
//A star pattern in exercise 
/*#include<iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) {
        // Print left side numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print stars or spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " * " ; // Fill space with stars
        }

        // Print right side numbers
        for (int j = i; j >= 1; j--) {
            cout <<j;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}*/
//reverse of the same star pattern
 /*
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 0; i < n; i++) { // Loop for each line
        // Print left side numbers
        for (int j = 1; j <= n - i; j++) {
            cout << j; // Print numbers from 1 to (n - i)
        }

        // Print stars
        for (int j = 0; j < 2 * i; j++) {
            cout << "*"; // Print stars, 2 * i stars for each line
        }

        // Print right side numbers
        for (int j = n - i; j >= 1; j--) {
            cout << j; // Print numbers from (n - i) down to 1
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}*/
//is a prime number or not 
/*#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
bool isprime = 1;
for(int i = 2 ; i<n ;i++){
    if(n%i == 0 ){
        isprime = 0 ;
        break;
    }
}
if(isprime == 1){
    cout<<"is a prime number"<<endl;
}else{
    cout<<"not a prime number"<<endl;
}
return 0;
}*/
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 10; i++) {
//         if (i & 1) { // Check if i is odd
//             continue; // Skip the rest of the loop for odd i
//         }
//         cout << i << " is even." << endl; // This line will only execute for even i
//     }
//     return 0;
// }
////seconf max and second min for an array 
/*#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    // Input values into the array
    for (int i = 0; i < 5; i++) {
        cout << "Enter the values of the array: ";
        cin >> arr[i];
    }

    cout << "So the array is: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0];
    int min = arr[0];
    
    // Find max and min
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
      int secmax = arr[0];
      int secmin = arr[5];
    // Find second max
    for (int i = 0; i < 5; i++) {
        if (arr[i] > secmax && arr[i] < max) {
            secmax = arr[i];
        }
    }

    // Find second min
    for (int i = 0; i < 5; i++) {
        if (arr[i] < secmin && arr[i] > min) {
            secmin = arr[i];
        }
    }
  cout<<"so sec in and max is "<<secmin<<secmax<<endl;
    
    return 0;
}*/
//suntract the product ans sum of digits of an integer
/*#include<iostream>
using namespace std;
int main(){
int n , r ,sum =0 ,product=1;
cout<<"enter the integer "<<endl;
cin>>n;
while(n!=0){
    r = n % 10 ;
    sum = sum + r ;
    product = product * r ;
    n = n/10 ;
}

int result = product - sum ;
cout<<"so the final result is "<<result;
return 0;
}*/
//getti g the numer od 1's in a binary number (inputting as decinal)
/*#include <iostream>
using namespace std;

int hummingWeight(uint32_t n) {
    int count = 0; // Declare count variable
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1; // Right shift n to check the next bit
    }
    return count; // Return the count of 1's
}

int main() {
    uint32_t n;
    cout << "Enter a number: ";
    cin >> n; // Input number
    int result = hummingWeight(n); // Call the function
    cout << "So the number of 1's: " << result << endl; // Output result
    return 0;
}*/
//now inputting binary number 
/*#include <iostream>
#include <string>
using namespace std;

int hummingWeight(const string& binaryStr) {
    int count = 0; // Declare count variable
    for (char bit : binaryStr) {
        if (bit == '1') {
            count++; // Increment count for each '1'
        }
    }
    return count; // Return the count of 1's
}

int main() {
    string binaryStr;
    cout << "Enter a binary number: ";
    cin >> binaryStr; // Input binary number as a string
    int result = hummingWeight(binaryStr); // Call the function
    cout << "So the number of 1's: " << result << endl; // Output result
    return 0;
}*/
//converting decimal number into binar
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n ;
cin>>n ;
int ans = 0 ;
int i = 0 ;
while(n!=0){
    int bit = n&1;
    ans = (bit * pow(10,i)+ans);
    n = n>>1;
    i++ ;
}
cout<<"so the answer is "<<ans <<endl;
return 0;
}*/
//converting negative binary number into decimal 
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
    cin >> n;
    int binary = 0;

    for(int i = 0; i < 8; i++)
    {
        int bit = n & 1;
        binary += (bit * pow(10, i));
        n = n >> 1;
    }

    cout<<binary<<endl;

return 0;
}*/
////////reversing an int but with an exception increasing thei limit of min and max 
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
int ans  = 0;
int n;
cout<<"enter the number"<<endl;
cin>>n;
while(n!=0){
 int digit = n%10;
 if(ans > INT_MAX/10 || ans < INT_MIN/10 ){
    return 0;
 }
 ans = (ans*10) + digit ;
 n = n/10 ;
}
cout<<ans;
return 0;
}*/
//whenever you run your code make sure to be aware of edge case and exceptions they can make your code weak so be careful run multiple exmaples on your code to prove it right 
////////////complement of base 10 integer (given in the form of base 10 convert into binary get complement and convert that complement into base 10 )
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int m = n; 
    int mask =  0;
    if(n== 0){
        return 1;
    }
    while(m!=0){
        mask = (mask<<1) | 1;
        m = m >> 1 ;
    }
    int ans = (~n) & mask ;
    cout<<ans<<endl;
return 0;
}*/
/////////power of two (if the number is power of two then return true if not thrn false )
/*#include<iostream>
#include<cmath>
using namespace std;
bool ispoweroftwo(int n){
    for(int i = 0 ; i<= 30 ; i++){
        int ans = pow(2 , i);
        if(ans == n){
            return true;
        }
    }
    return false;
}
int main(){
    int number = 1; // You can change this to test other numbers
    if (ispoweroftwo(number)) {
        cout << number << " is a power of two." << endl;
    } else {
        cout << number << " is not a power of two." << endl;
    }
return 0;
}*/
/////////so the question is we have a certain amouont of money , and we have to divide it into bills of 10,20 ,50 and 100 for example let we have 1330 , now first we will see how many bills of 100 we need dicinf it by 100 we will get 13 now reaming is 1330 - 1300 = 30 , now checking for 50 we will get a 0 moving toeads 20 we will get a 1 with reamaing 10 and lastly again get a 1 for 10 and thats it . For solving this question we will be using a switch statement.
/*#include<iostream>
using namespace std; 
int main ()
{
    int amount;
    cout<<"Enter the Amount : "<<endl;
    cin>>amount;

    int num = 1;
    int note = 0;
    switch (num){
        case 1: {
            note = amount/100;
            amount = amount - (100 * note);
            cout<<note<<" Rs.100 note requied."<<endl;
        }
        case 2:{
            note = amount/50;
            amount = amount - (50 * note);
            cout<<note<<" Rs.50 note requied."<<endl;
        }
        case 3:{
            note = amount/20;
            amount = amount - (20 * note);
            cout<<note<<" Rs.20 note requied."<<endl;
        }
        case 4:{
            note = amount/1;
            amount = amount - (1 * note);
            cout<<note<<" Rs.1 note requied."<<endl;
        }
    }
}*/
/////////solving an nCr  programs which includes factorial and prper formula
/*#include<iostream>
using namespace std;
int factorial(int s){
    int fact = 1 ;
    for(int i = 1 ; i<=s ; i++){
        fact = fact * i ;

    }
    return fact;
}
int nCr(int n , int r){
    if(n<r){
        return 0;
    }
    int nomi = factorial (n);
    int denomi = factorial(r) * factorial(n-r);
    return nomi/denomi ;
}
int main(){
int ans = nCr(6,3);
cout<<ans<<endl;
return 0;
}
*/
//FINDING MIN AND MAX OF AN ARRAY 
/*#include<iostream>
using namespace std;
int main(){
int arr[10] = {1,4,7,9,2,-5,3,5,2,10} ;
int  max = arr[0] ;
int min = arr[0] ;

for(int i = 0 ; i<10 ;i++){
    if(arr[i]>max){
         max = arr[i] ;
    }
    if(arr[i]<min){
        min = arr[i];
    }
}
cout<<"so the max num is "<<max<<endl;
cout<<"so the min num is "<<min<<endl;
return 0;
} */ //in case f array we give address of the array to that function so its not the ciopy of the rray its real array now if we change the array in function it will change the array in main function as well contarary to what we learned about variables 
//printing sum of an array 
/*#include<iostream>
using namespace std;
int main(){
int arr[10] = {1,4,7,9,2,-5,3,5,2,10} ;
int sum  = 0 ;
for(int i = 0 ;i < 10 ; i++){
    sum  =  arr[i] + sum ;

}
cout<<"sum of elements of array is "<<sum<<endl;
return 0;
}*/
///linear serach in arrays 
/*#include<iostream>
using namespace std;
bool search(int arr[], int size , int key){
    for(int i= 0 ; i< size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0 ;
}
int main(){
int size ;
cin>>size;
int arr[size];
int key;
cout<<"enter array elements "<<endl;
for(int i=0 ;i<size;i++){
    cin>>arr[i];
}
cout<<"enter the key yiu want to find"<<key<<endl;
cin>>key;
bool found = search(arr , size ,key );
if(found){
    cout<<key<<" is present in the array"<<endl;
}else{
    cout<<key<<" is not present in the array"<<endl;
}
return 0;
}*/
//swaping two arrays 
/*#include<iostream>
using namespace std;
void printarr(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
}
void reverse(int arr[], int n){
    int start = 0 ;
    int end  = n-1 ;
    while(start<=end){
    swap(arr[start] ,arr[end]);
        start ++ ;
        end--;
}
}
int main(){
int arr[6] = {3,7,1,9,3,5};
reverse(arr , 6);
printarr(arr,6);


return 0;
}*/
///swapping alternates in array 
/*#include<iostream>
using namespace std;
void printarr(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
}
void swapalter(int arr[], int n){
    int first = 0 ;
    int second = 1 ;
    while(second < n){
    swap(arr[first],arr[second]);
        first = first + 2;
        second = second + 2 ;
}
}
int main(){
int arr[7] = {3,7,1,9,3,5,7};
swapalter(arr , 7);
printarr(arr,7);


return 0;
}*/
//we have an array of size n where n is equal to 2m+1 so there are numbers in array that come twice like m and there is only one that comes for once and is unique we have to find tat unique number from that array and print it 
/*#include<iostream>
using namespace std;
int main(){
    int ans = 0 ;
int arr[7] = {1,4,4,3,1,3,8};
for(int i = 0 ;i< 7 ; i++){
    ans = ans ^ arr[i];

}
cout<<"so the unique element is "<<ans<<endl;
return 0;
}*/
///finding occurences of a numbers in an array that how many times they came now if they have difference occurences the ans is true like let we have an array now if 2 is repeated 3 time or have occurence of 3 4 has occurence of 1 and 7 has occurence of 2 then all of them have unique occurences so the ans will e 1 
//***********have to do it with hash map and learn it */
/*#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    // Step 1: Count occurrences of each number
    unordered_map<int, int> countMap;
    for (int num : arr) {
        countMap[num]++;
    }

    // Step 2: Use a set to track the counts
    unordered_set<int> occurrences;
    for (const auto& pair : countMap) {
        // If the count already exists in the set, return false
        if (occurrences.find(pair.second) != occurrences.end()) {
            return false;
        }
        // Otherwise, insert the count into the set
        occurrences.insert(pair.second);
    }

    // If all counts are unique, return true
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    cout << (uniqueOccurrences(arr1) ? "true" : "false") << endl; // Output: true

    vector<int> arr2 = {1, 2};
    cout << (uniqueOccurrences(arr2) ? "true" : "false") << endl; // Output: false

    vector<int> arr3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    cout << (uniqueOccurrences(arr3) ? "true" : "false") << endl; // Output: true

    return 0;
}*/
//getting the duplicate number in an array
/*#include<iostream>
using namespace std;
int main(){
int arr[7] = {1,2,3,4,5,6,6};
int ans = 0;
for(int i=0;i<7;i++){
    ans = ans ^ arr[i];
}
for(int i= 1 ; i< 7;i++){
    ans = ans ^ i ;
}
cout<<"so the repeated element is "<<ans ;
return 0;
}*/
////vectors in c++
//represnting vectors 
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<char> vec = {'a','D','d','f','j'};
//will be using a specific loop known as for each loop where i won't be an index it would give a value
for(char i : vec){
    cout<<i<<endl;
}
vec.push_back('k');
vec.push_back('z');
vec.push_back('p');
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
cout << "Contents of the vector: ";
    for (char& element : vec) {
        cout << element << " "; // Output each element followed by a space
    }
    cout << endl;
return 0;
}*/
//coerting decinal into binary number 
/*#include<iostream>
using namespace std;
int main(){
int num ;
cout<<"enter the numbe "<<endl;
cin>>num;
int pow = 1 ;
int ans = 0 ;
while(num!=0){
   int rem = num % 2 ;
    num =  num /2 ;
    ans =  ans + ( rem * pow);
    pow = pow * 10 ;

}
cout<<"so the number in binary is "<<ans<<endl;
return 0;
}*/
//converting from binary to decimal 
#include<iostream>
using namespace std;
int bintodec(int num){
    int ans = 0 , pow =1;
    while(num!=0){
        int rem = num % 10;
        num = num / 10;
        ans += rem * pow;
        pow *= 2 ;
    }
    return ans;
    
}
int main(){
cout<<bintodec(11);
return 0;
}