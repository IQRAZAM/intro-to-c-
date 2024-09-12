//Q1 write a program to convert centigrade to forenheit
/*#include<iostream>
using namespace std;
int main(){
    float Ctemp ,   Ftemp ;
cout<<"what is the temp you convert into farhrenheit"<<endl;
cin>>Ctemp;
Ftemp = (Ctemp * 9/5)+32 ;
cout<<"so the temp in fahrenheit is "<<Ftemp<<endl;
return 0;
}*/
//Q2 VOLUME OF A BOX
/*#include<iostream>
using namespace std;
int main(){
int length ,volume;
cin>>length;
volume =length *length*length;
cout<<volume;
return 0;
}*/
//Q3 a PROGRAM TO FIND THE GREATEST NUMBER BY CONDITIOnal operator 
/*#include<iostream>
using namespace std;
int main(){
int a,b ,c ;
cin>>a>>b>>c;
int largest = (a>b)?((a>c)?a:c):((b>c)?b:c);
cout<<largest<<endl;
int smallest = (a<b)?((a<c)?a:c):((b<c)?b:c);
cout<<"smallest is "<<smallest<<endl;
return 0;
}*/
//4 wrITE A PROGRAM THAT SWAP TWO NUMBERS WITHOUT INVOLVING TIRD 
/*#include<iostream>
using namespace std;
int main(){
int num1 ,num2 ;
cin>>num1>>num2 ;
cout<<num1<<endl;
cout<<num2<<endl;
cout<<"after swapping"<<endl;
num1 = num1 + num2;
num2 = num1 - num2;
num1 = num1 - num2;
cout<<num1<<" "<<num2;
return 0;
}*/
//Q5 wRITE A PROGRAM THAT READ CHARACTERS AND PRINT THEIOR ASCII CODE 
/*#include<iostream>
using namespace std;
int main(){
char character;
 cin>>character;
 cout<<"ascll code is "<<int(character)<<endl;
return 0;
}*/
//Q6 wrITE A PROGRAM THATS FINS THE REAL ROOTS OF QUADRATIC EAUATIOSN 
/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
double a ,b ,c;
cin>>a>>b>>c;
double discriminant =(pow(b,2) - 4*a*c);
double positiveRoot, negativeRoot ; 
if(discriminant > 0){
    positiveRoot = (((-b) + sqrt(discriminant))/2*a);
    negativeRoot = (((-b) - sqrt(pow(b,2) - 4*a*c))/2*a);
    cout<<"so the equation has two real roots "<<endl;
    cout<<"the postive rooot is given as" <<positiveRoot<<" and negative root is "<<negativeRoot<<endl;
}else if(discriminant = 0){
    positiveRoot = -b/(2*a);
    cout<<"the equation has a sigke root "<<endl;
    cout<<" the root of the qyadratic equation will be "<<positiveRoot<<endl;
}else{
    double realPart = -b/(2*a);
    double imaginaryPart = sqrt(-discriminant)/(2*a) ;
    cout<<"the equation has two complex roots "<<endl;
    cout<<"so the roots of quadratic equation are "<<realPart<<" - "<<imaginaryPart<<"i"<<endl;
}
return 0;
}*/
//Q7 WRITE A PROGRAM THAT TALES CARACTERS IN UPPER CASE AND CONVERST IT LOWERCASE IN REVERSE ORDER
/*#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    // Variable Declarations
    char ch1, ch2, ch3, ch4, ch5;

    // Variable Inputs
    cout << "Enter the first character in uppercase: ";
    cin >> ch1;
    cout << "Enter the second character in uppercase: ";
    cin >> ch2;
    cout << "Enter the third character in uppercase: ";
    cin >> ch3;
    cout << "Enter the fourth character in uppercase: ";
    cin >> ch4;
    cout << "Enter the fifth character in uppercase: ";
    cin >> ch5;

    // Computations
    char lowercase_ch5 = tolower(ch5);
    char lowercase_ch4 = tolower(ch4);
    char lowercase_ch3 = tolower(ch3);
    char lowercase_ch2 = tolower(ch2);
    char lowercase_ch1 = tolower(ch1);

    // Output
    cout << "The characters in reverse order and in lowercase are: " << endl;
    cout << lowercase_ch5 << " " << lowercase_ch4 << " " << lowercase_ch3 << " " << lowercase_ch2 << " " << lowercase_ch1 << endl;

    return 0;
}*/
//Q8 WRITE A PROGRAM TO FIND THE FACTORIAL OF A NUMBER
/*#include<iostream>
using namespace std;
int main(){
int n ;
cout<<"give vlaue of n"<<endl;
cin>>n;
for(int i=n-1; i>0 ; i--){
 n =n*i ;

}
cout<<"so the factorial  is "<<n;
return 0;
}*/
//Q9 WRITE A PROGRAM TO PRINT THE OUTPUT 
/*#include<iostream>
using namespace std;
int main(){
int i ,j;
for(i=1 ; i<=5; i++){
    int s=1;
    for(j=1;j<=5;j++){
        if(j<=i){
            cout<<" "<<s;
            s++;
        }
    }
    cout<<endl;
}
return 0;
}*/
//  Q10  WRITE A PROGRAM USING LOOP AND CONTINIUE STATEMNT TO FIND SUM OF EVEN  NUMBER FROM 1 TO N 
/*#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"enter the number whose sum you wnna get"<<endl;
cin>>n;
for(int i=1; i<=n;i++){
   
    if(i%2!=0){
        continue;
    }
    sum = sum+i ;
}
cout<<sum;
return 0;
}*/
//Q11 WRITE A PROGRAM THAT REVERSE AN INTEGER NUMBER 
/*#include<iostream>
using namespace std;
int main(){
int n,r,sum=0;
cin>>n;
while(n>0){
    r = n%10 ;
    sum = sum*10 +r ;
    n = n/10 ;
}
cout<<sum ;
return 0;
}*/
//  Q 12 PROGRAM OF SUM OF DIGITS OF A NUMBER 
/*#include<iostream>
using namespace std;
int main(){
int n,r,sum=0;
cin>>n;
while(n>0){
    r = n%10 ;
    sum = sum +r ;
    n = n/10 ;
}
cout<<sum ;
return 0;
}*/
// Q13 exp 2 Q#6 telephone problem 
/*#include<iostream>
using namespace std;
int main(){
int calls ,Bill;
cout<<"how many number of calls a person got "<<endl;
cin>>calls;
if(calls<=100){
    cout<<"So the mothly telephone bill is Rs. "<<600<<endl;
}else if (calls<=150){
    cout<<"So the mothly telephone bill is Rs. "<<600+((calls-100)*0.6)<<endl;
}else if(calls <=200){
    cout<<"So the mothly telephone bill is Rs. "<<600+50*0.60+(calls-150)*0.50<<endl;
}else{
    cout<<"So the mothly telephone bill is Rs. "<<600+50*0.60+50*0.5+(calls-200)*0.40<<endl;
}

return 0;
}*/
//Q14 WRITE A PROGRAM OF BASIC CALCULATOR USING SWITCH STATE,NETS 
/*#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;
    double result;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            result = static_cast<double>(num1) / num2;
            break;
        default:
            cout << "Error: Invalid operation. Please enter a valid operation (+, -, *, /)." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}*/
//Q15 WRITE A FUUNCTION THAT TAKES TWO INTEGERS AND RETURN THE LARGER ONE 
/*#include<iostream>
using namespace std;
int larger(int a,int b );
int main(){
    int num1 ,num2 ;
  cout<<"enter the value of num1 and num2 "<<endl;
  cin>>num1>>num2;
  larger(num1 , num2);
return 0;
}
int larger(int a , int b){
if(a>b){
    cout<<a<<" is larger";
}else{
    cout<<b<<" is larger";
}
}*/
//Q 16 WRITE A FUNCTIOn THAT ASK FOR USENAME AND PASSWOR FROM USER AND IFF PASSWORD IS PAKISTAN AND USERNEMA IS ABCD THEN LOGIN SUCCESSFUL ELSE FAILED 
/*#include<iostream>
#include<cstring>
using namespace std;
void Login(string a ,string b){
    if(a == "abcd" &&  b == "pakistan" ){
        cout<<"logged in successfully "<<endl;
    }else{
        cout<<"login failed "<<endl;
    }
}
int main(){
 string username ,password ;
 cout<<"enter username and password ";
 cin>>username>>password;
 Login(username , password);
return 0;
}*/
//Q17 WRITE A FUNCTION TO SAWP TWO NUMBERS USING REFERENCE PARAMETER 
/*#include<iostream>
using namespace std;
int swap(int &a ,int &b){
   cout<<"before swapping "<<a<<" "<<b<<endl;
    int temp = a;
    a = b ;
    b = temp ;
    cout<<"after swapping "<<a<<" "<<b<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
swap(x,y);
return 0;
}*/
//Q18 write a c++ program with a function int find_char(char* , char) that fuinds out whether tere is a given character in a string the return value of the function should be 1 if the given character is present in the string and 0 if not

/*#include <iostream>

int find_char(char* str, char c) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char str[] = "Hello, World!";
    char c = 's';

    if (find_char(str, c)) {
        std::cout << "Character '" << c << "' is present in the string." << std::endl;
    } else {
        std::cout << "Character '" << c << "' is not present in the string." << std::endl;
    }

    return 0;
}*/
//Q20 WRITE A PROGRAM THAT FINDS THE LARGETS NUMBER IN AN ARRAY 
/*#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n "<<endl;
cin>>n;
int arr[n];
for(int i=0; i<n ;i++){
    cin>>arr[i];
    
}
for(int i=0; i<n ; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int greatest = arr[0];
 for(int i=0;i<n;i++){
    if(arr[i]>greatest){
        greatest = arr[i];
    }
 }
cout<<"greatest of array is "<<greatest<<endl;
return 0;
}*/
//Q21 SORT AN ARRAY USING BUBBLE METHOD 
/*#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n "<<endl;
cin>>n;
int arr[n];
for(int i=0; i<n ;i++){
    cin>>arr[i];
    
}
cout<<"before sorting array is "<<endl;
for(int i=0; i<n ; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int counter=1;
while(counter < n-1){
    for(int i =0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp ;
            }
    }
    counter ++;
}
cout<<"array after swaaping "<<endl;
for(int i=0; i<n ; i++){
    cout<<arr[i]<<" ";
}
return 0;
}*/
//Q 22 WRITE A PROGRAM THAT INPUTS AN INTEGER ARRAY AND CHECKS IF ALL THE ELEMENTS IN THE ARRAY ARE UNIQUE (we can not find any pair of elements that are equal)
/*#include <iostream>
#include <set>
using namespace std;

int checkUnique(int arr[], int n) {
     set<int> s(arr, arr + n);
    return s.size() == n;
}

int main() {
    
int n ;
cout<<"enter the size of the array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    if (checkUnique(arr, n)) {
        cout << "All elements in the array are unique." << std::endl;
    } else {
        cout << "There are some duplicate elements in the array." << std::endl;
    }

    return 0;
}*/
// Q23 WRITE A FUNCTION THAT REVERSE THE ELEMENT OF AN ARRAY SO THAT THE LAST EMENT BECOMES TE FIRST AND SECOND BECOMES SECOND LAST AND SO ON 
/*#include<iostream>
using namespace std;
int reverse(int arr[] ,int  n){
    cout<<"the reverse of the array is "<<endl;
    for(int i = n-1; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int arr[n];
cout<<"enter the value of array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"so the array is: "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
reverse(arr , n);
return 0;
}*/
//Q24   WE HAVE TWO ARRAYS A AND B EACH OF 10 INTEGERS WRITE A FUNCTION TO TEST IF EVERY ELEMENT OF ARRAYS A IS EQUAL TO CORRESPONDING ELEMENT OF ARRAY B , IN OTHER WORDS THE FUNCTION MUST CHECKL IF A[0] = B[0] AND SO FORTH. THE FUNCTION IS TO RETURN TRUE IF ELEMNTS ARE EQUAL AND FALSE IF NOT .
/*#include<iostream>
using namespace std;
bool checkCorrespondence(int A[] ,int B[] , int n){
    for(int i =0 ; i<n ;i++){
        if( A[i]!=B[i] ){
            return false;
        }
               
    }
    return true;
    }

int main(){
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int A[n];
int B[n];
cout<<"enter the value of array 1"<<endl;
for(int i=0;i<n;i++){
    cin>>A[i];
}
cout<<"enter the value of array 2"<<endl;
for(int i=0;i<n;i++){
    cin>>B[i];
}
cout<<"so the array A is: "<<endl;
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}
cout<<endl;
cout<<"so the array B is: "<<endl;
for(int i=0;i<n;i++){
    cout<<B[i]<<" ";
}
cout<<endl;
if(checkCorrespondence( A , B ,  n)){
       cout<<"are equal"<<endl;
}else{
    cout<<"not equal";
}
return 0;
}*/
//Q25 WRITE A C++ CODE WHICH GEENRATES THE FOLLOWING MENU AND PERFORM TE TASK ACCORDING TO THE MENU .THE WHOLE TASK SHOULD BE REAPETED TILL THE USER WANTS TO EXIT ;
/*#include<iostream>
using namespace std;
void Display(){
    cout<<"MENU"<<endl;
    cout<<"1.addition"<<endl;
    cout<<"2.subtarction"<<endl;
    cout<<"3.division"<<endl;
    cout<<"4.multiplication"<<endl;
}
double calculate(double a , double b , int choice){
    if(choice==1){
        double result = a+b ;
        cout<<"addition of two numbers wull be "<<result<<endl;
    }else if(choice == 2) {
        double result = a-b ;
        cout<<"subtraction of two numbers wull be "<<result<<endl;
    }else if(choice == 3) {
        double result = a/b ;
        cout<<"division of two numbers wull be "<<result<<endl;
    }else if(choice == 4) {
        double result = a*b ;
        cout<<"multiplication of two numbers wull be "<<result<<endl;
    }
}
int main(){
    pqr:
    double a ,b ;
    int choice ;
    char repeat;
Display();
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"choose number according to the opwration you wanna perform"<<endl;
    cin>>choice;
    calculate(a,b,choice);
   cout<<"do you want to perform more operations ? if yes enter 'y' if not enter 'n' "<<endl;
   cin>>repeat;
   if( repeat == 'y'){
    goto pqr;
   }else{
    return 0;
   }
return 0;
}*/
//Q26 write a menu oriented code which allow user to perform addition of two numbers as well as three numbers 
/*#include<iostream>
using namespace std;
int TwoNumbers(int a , int b){
    cout<<"enter two numebrs of your choice "<<endl;
    cin>>a>>b;
    int result = a+b ;
    cout<<"result is "<<result<<endl;
}
int ThreeNumbers(int a , int b ,int c){
    cout<<"enter three numebrs of your choice "<<endl;
    cin>>a>>b>>c;
    int result = a+b+c ;
    cout<<"result is "<<result<<endl;
}
int main(){
int A ,B ,C ,choice;
cout<<"do you want addirion of two number or three"<<endl;
cin>>choice;
if(choice == 2){
TwoNumbers(A , B);
}else if(choice == 3){
    ThreeNumbers(A,B,C);
}else{
    cout<<"you got an invalid choice";
}
return 0;
}*/
//Q26 WRITE A C++ CODE WHICH GEENRATES THE FOLLOWING MENU AND PERFORM TE TASK ACCORDING TO THE MENU .THE WHOLE TASK SHOULD BE REAPETED TILL THE USER WANTS TO EXIT  make the separate functios of the operatios 
/*#include<iostream>
using namespace std;
void Display(){
    cout<<"MENU"<<endl;
    cout<<"1.addition"<<endl;
    cout<<"2.subtarction"<<endl;
    cout<<"3.division"<<endl;
    cout<<"4.multiplication"<<endl;
}
int add(int a,int b){
    double result = a+b ;
        cout<<"addition of two numbers wull be "<<result<<endl;
}
int sub(int a, int b){
    double result = a-b ;
        cout<<"subtraction of two numbers wull be "<<result<<endl;
}
int mul(int a, int b){
    double result = a*b ;
        cout<<"multiplication of two numbers wull be "<<result<<endl;
}
int div(int a,int b){
    
    double result = a/b ;
        cout<<"division of two numbers wull be "<<result<<endl;
    float
}

int main(){
    pqr:
    int a ,b ;
    int choice ;
    char repeat;
Display();
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;
    cout<<"choose number according to the opwration you wanna perform"<<endl;
    cin>>choice;
    if(choice ==1){
        add(a,b);
    }else if(choice ==2){
        sub(a,b);
    }else if(choice ==3){
        div(a,b);
    }else{
        mul(a,b);
    }
   cout<<"do you want to perform more operations ? if yes enter 'y' if not enter 'n' "<<endl;
   cin>>repeat;
   if( repeat == 'y'){
    goto pqr;
   }else{
    return 0;
   }
return 0;
}*/
//Q27 WRITE A MENU ORIENTED PROGRAM USING FUNCTTION THAT WILL ALLOW THE USER TO CONVERT TEMPERATURES  I.E, FROM CENTIGRADE TO FAHREHEIT AND KELVIN 
/*#include<iostream>
using namespace std;
void Display(){
    cout<<"TEMPERATURE CONVERSIONS "<<endl;
    cout<<"1.celcius conversion"<<endl;
    cout<<"2.fahrenheit conversion"<<endl;
    cout<<"3.kelvin conversion"<<endl;
}
float celcius(float C, float K,float F){
    cout<<"enter the value of celcius temp you wanna convert"<<endl;
    cin>>C;
    F = (C *9/5) + 32 ;
    K = C + 273.16 ;
    cout<<"celcius to fahrenheit is : "<<F<<endl;
    cout<<"celcius to kelvin is : "<<K<<endl;
}
float fahrenheit(float C, float K,float F){
    cout<<"enter the value of fahrenheit temp you wanna convert"<<endl;
    cin>>F;
    C = (F-32) * (5/9) ;
    K = ((F - 32)*(5/9) ) +273.15 ;
    cout<<" fahrenheit to celcius  is : "<<C<<endl;
    cout<<"fahrenheit to kelvin is : "<<K<<endl;
}
float kelvin(float C, float K,float F){
    
    cout<<"enter the value of kelvin temp you wanna convert"<<endl;
    cin>>F;
    F =((K - 273.16) * (9/5))  +32;
    C =  K - 273.15 ;
    cout<<" kelvin to celcius  is : "<<C<<endl;
    cout<<" kelvin to fahrenheit is : "<<F<<endl;
}

int main(){
float C ,K ,F ,choice;
Display();
cout<<"enter the number acceording to conversion you want"<<endl;
cin>>choice;
if(choice == 1){
celcius( C,  K, F);
}else if (choice == 2){
    fahrenheit(C,K,F);
}else if(choice == 3){
    kelvin( C,  K, F);
}
return 0;
}*/
//Q28 WRITE C++ TO IMPLEMENT FIBONACCI series 
/*#include<iostream>
using namespace std;
int main(){
int n1 =0 ,n2 =1 ,n3 ;
cout<<n1<<" "<<n2<<" ";
for(int i = 0 ;i<=20 ;i++){
     n3 = n1+n2;
     n1 = n2;
     n2=n3;
     cout<<n3<<" ";
}
return 0;
}*/
//Q29 WRITE A PROGRAM TO FIND THE GCD OF TWO POSUITUIVE INTEGERS (ENTERETD BY THE USER) USING RECURSSION FUNCTION IN C++
/*#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }else{
        return gcd(b , a%b);
    }
}
int main(){
int num1 ,num2 ;
cout<<"enter numbers"<<endl;
cin>>num1>>num2;
cout<<"GCD is : " <<gcd(num1,num2);
return 0;
}*/
//Q30 FINDING FIBONACCI nth number USING RECURSIVE FUNCTION

/*#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1) +fib(n-2) ;
}
int main(){
    int num;
    cin>>num;
   cout<< fib(num);

return 0;
}*/

//q31 MAKING FIBONACCI SERIES USING RECURSSION 
/*#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1) +fib(n-2) ;
}
int main(){
    int num;
    cin>>num;
    for(int i=0;i<=num;i++){
        cout<<fib(i)<<" ";
    }
   

return 0;
}*/
/*Q32 Define a class Customer that holds private fields for a customer's ID, first name, last name, address and credit limit.
Define functions that set the fields of customer. For example setCustomerID(). 
Define functions that show the fields of customer. For example getCustomerID().
Use constructor to set the default values to each of the field.
Overload at least six constructor of the customer class.
Define a function that takes input from user and set the all fields of customer data.
Define a function that displays the entire customer’s data. */


/*#include <iostream>
#include <string>

class Customer {
private:
    int id;
    std::string firstName;
    std::string lastName;
    std::string address;
    double creditLimit;

public:
    // Default constructor
    Customer() {
        id = 0;
        firstName = "";
        lastName = "";
        address = "";
        creditLimit = 0.0;
    }

    // Constructor with default values
    Customer(int id = 0, std::string firstName = "", std::string lastName = "", std::string address = "", double creditLimit = 0.0) {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->address = address;
        this->creditLimit = creditLimit;
    }

    // Constructor with user input
    Customer(std::istream& in) {
        setCustomerData(in);
    }

    // Setters
    void setCustomerID(int id) { this->id = id; }
    void setFirstName(std::string firstName) { this->firstName = firstName; }
    void setLastName(std::string lastName) { this->lastName = lastName; }
    void setAddress(std::string address) { this->address = address; }
    void setCreditLimit(double creditLimit) { this->creditLimit = creditLimit; }

    // Getters
    int getCustomerID() const { return id; }
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getAddress() const { return address; }
    double getCreditLimit() const { return creditLimit; }

    // Function to set all fields of customer data
    void setCustomerData(std::istream& in) {
        in >> id >> firstName >> lastName >> address >> creditLimit;
    }

    // Function to display the entire customer’s data
    void displayCustomerData() const {
        std::cout << "ID: " << id << std::endl;
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << "Credit Limit: " << creditLimit << std::endl;
    }
};

int main() {
   // Customer c1; // Default constructor
    Customer c2(1, "John", "Doe", "123 Main St", 5000); // Constructor with default values
    Customer c3(std::cin); // Constructor with user input

    //c1.displayCustomerData();
    c2.displayCustomerData();
    c3.displayCustomerData();

    return 0;
}*/
//Q33 COUNTRY CONSTRUTOT WITH SOME FUNCTIONS 
/*#include <iostream>
#include <string>
using namespace std;
class country{
    private:
    string name;
    float location;
    string area;
    float population;
    string capital;
    public:
    country(){}

    country(string n,float l,string a,float p,string c){
        name = n ;
        location = l;
        area = a ;
        population = p;
        capital = c ;
    }
   void UserInput(){
    cout<<"enter the name of country"<<endl;
    cin>>name;
    cout<<"enter the location of the country"<<endl;
    cin>>location;
    cout<<"enter the area of the country"<<endl;
    cin>>area;
    cout<<"what is population of the country"<<endl;
    cin>>population;
    cout<<"enter capital nam eof the country"<<endl;
    cin>>capital;
   }
   void DisplayAllInfo(){
    cout<<"so the name of the country is "<<name
    <<endl<<"with location "<<location<<endl<<" area is "<<area<<endl<<"population of the country is "<<population<<endl<<"capital of the country is"<<capital<<endl;
   }
   void DiplayName(){
    cout<<"name of the country is"<<name<<endl;
   }
   void DisplayLocation(){
    cout<<"location of the country is "<<location<<endl;
   }
};
int main(){
country c1("pakistan",234,"guixsg",567890,"islamabad");
//c1.UserInput();
c1.DisplayAllInfo();

return 0;
}*/
//Q34 MAKE A CLASS BOX AND CALCULATE THE VOLUME OF THE BOX AND MAKE SOME FUNCTIONS AS WELL 
/*#include<iostream>
using namespace std;
class BOX{
    private:
    double length ,breadth,height;
public:
 double getInfo(double l,double h,double b){
       length = l;
       height = h;
       breadth = b;
 }
 void displayInfo(){
    cout<<"so the length of the box is : "<<length<<endl;
    cout<<"height : "<<height<<endl<<"width : "<<breadth<<endl;
 }
 double cal_Vol(){
    double volume = length * height * breadth ;
    cout<<"so the volume of the box is "<<volume<<endl;
 }
};
int main(){
BOX b1 ,b2 ;
b1.getInfo(3,6,3);
b1.displayInfo();
b1.cal_Vol();
b2.getInfo(5.3,67,23.1);
b2.displayInfo();
b2.cal_Vol();

return 0;
}*/
//Q35 WRITE A CLASS NAME CIRCLE HAVING RADIUS AS DATA MEMBER CREATE A FUNCTION THAT CALCULATES CIRCUMFERENCE IN THE MAIN INSTANTIATE TWO CIRCLES AND COMPARE THEIR CIRCUMFERENCE TO SEE WHICH ONE HAS A GREATER VALUE 
/*#include<iostream>
using namespace std;
class circle{
   private:
   double radius;
   public:
  void getValue(){
    cout<<"enter the value of the radius"<<endl;
    cin>>radius;
  }
  double circum(){
    double circumference = 2 * 3.14 * radius ;
    return circumference ;
  }
};
int main(){
circle c1,c2;
c1.getValue();
cout<<c1.circum()<<endl;
c2.getValue();
cout<<c2.circum()<<endl;
double cir1 = c1.circum();
double cir2 = c2.circum();
if(cir1 > cir2){
    cout<<"circle 1 has the larger circumference"<<endl;
}else if(cir2 > cir1){
    cout<<"circle 2 has the larger circumference"<<endl;
}else{
    cout<<"they are equal"<<endl;
}
return 0;
}*/
//Q36  shape 
/*#include<iostream>
#include<cmath>
using namespace std;
class shape{
    private:
    double side1 ,side2 ,side3 ;
    public:
    double setsides(double s1,double s2,double s3){
        side1 = s1 ;
        side2 = s2;
        side3 = s3 ;
    }
    void displaySides(){
        cout<<"side 1 : "<<side1<<endl;
        cout<<"side 2 : "<<side2<<endl;
        cout<<"side 2 : "<<side3<<endl;
    }
};
class Triangle : public shape{
    public:
    double calcArea(){
        double s = (side1+side2+side3)/2;
        double area = sqrt(s*(s-side1)*(s-side2)*(s-side3)) ;
         return area;
    }
    void printArea(){
        cout<<"so the area of the triangle will be "<<area<<endl;
    }
};
int main(){
    int choice;
    double s1,s2,s3;
  Triangle t1;
  do{
    
    cout<<"1.do you want to set the values of sides "<<endl;
    cout<<"2. display values of the sides"<<endl;
    cout<<"3. calculate area using sides "<<endl;
    cout<<"4.display area of the triangle "<<endl;
    cout<<"5.exit"<<endl;
    cout<<"enter the number according to oepration you wanna perform"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"enter the value of side plz"<<endl;
        cin>>s1>>s2>>s3;
        t1.getsides(s1,s2,s3);
        break;
        case 2:
        t1.displaySides();
        break;
        case 3:
        t1.calcArea();
        break;
        case 4:
        t1.printArea();
        break;
        case 5:
        cout<<"exiting program"<<endl;
        break;
        default:
        cout<<"invalid choice"<<endl;
        break;
    }
  }while(choice != 5);
return 0;
}*/

