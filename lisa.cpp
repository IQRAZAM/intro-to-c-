/*#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    string st;
    cout<<"enter some data in file "<<endl;
getline(cin , st) ;
ofstream out("sample.txt") ;
out<<st<<endl;
ifstream in("sample.txt") ;
cout<<"contens of the file are"<<endl;
while(getline(in,st)){
    cout<<st<<endl;
}
return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n ;
int* arr = new int[n];
cout<<"enter the values of array"<<endl;
for(int i = 0 ; i<n ; i++){
    cin>>*(arr+i);
}
cout<<"so the array is "<<endl;
for(int a= 0 ; a<n ; a++){
    cout<<*(arr+a) <<" ";
}
return 0;
}*/

//Write a C++ code to get record 3 students in which student enter their name, age as well university information (i.e., name and campus details). Provide a suitable menu-oriented program which helps user to enter their details. 
//Also provide user the searching facility through the campus information.

/*#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
struct University{
       string name ;
       string campus;
};
struct Student{
    string name ;
    int age ;
    University university ; 
};
vector<Student> students ;
void addStudent(){
     Student student;
    cout << "Enter student's name: "<<endl;
    getline(cin, student.name);
    cout << "Enter student's age: "<<endl;
    cin >> student.age;
    cout << "Enter university name: ";
    getline(cin, student.university.name);
    cout << "Enter university campus: ";
    getline(cin, student.university.campus);
    students.push_back(student);
    cout << "Student added successfully!" << endl ;
}
void DisplayStudent(){
cout<<"so the llist of the students is"<<endl;
for(int i=0;i<students.size();i++){
    cout<<"name : "<<students[i].name <<endl;
    cout<<"age "<<students[i].age <<endl;
    cout<<" university " <<students[i].university.name <<endl;
    cout<<" campus "<<students[i].university.campus<<endl;
    }
}
void CampusSearch(){
    string campus ;
    cout<<"enter the name of the campus "<<endl;
    getline(cin , campus);
   bool found = false ;
   for(int i= 0 ; i< students.size();i++){
   if( students[i].university.campus == campus ){
    cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "University: " << students[i].university.name << ", " << students[i].university.campus << endl;
            cout << endl;
            found = true;
   }else{
    cout<<"no student found "<<endl;
   }

}
}


int main(){
    int choice ;
    while(true){
    cout<<"enter your choice "<<endl;
    cout<<"1.enter data of the student "<<endl;
    cout<<"2.Display data of the student with university information as well "<<endl;
    cout<<"3.serch student by campus name "<<endl;
    cout<<"4.exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            addStudent();
        break;
        case 2:
            DisplayStudent();
        break;
        case 3:
                CampusSearch();
        break;
        case 4:
            return 0;
        break;
        default:
        cout<<"invalid choice you can try again"<<endl;
        break;
    }
}
return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
   int i , j ;
   for(i=1 ; i<=7 ; i++){
    for(j=1 ; j<=i ;j++){
        cout<<"*";
    }
    cout<<endl;
   }
return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int i , j ;
for(i=1 ; i<=9 ;i++){
    for(j=1; j<=5 ; j++){
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
/*#include<iostream>
using namespace std;
int main(){
int i , j ,k=0 ;
for(i=1;i<=9;i++){
    i<=5?k++:k--;
    for(j=1;j<=9;j++){
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
/*#include<iostream>
using namespace std;
int main(){
int i ,j ,s ;
s= 1 ;
for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
        if(j<=i){
            cout<<" "<<s;
            s++ ;
        }else{
            cout<<" " ;
        
        }
    }
    cout<<endl;
}
return 0;
}*/
//Write a C++ program to demonstrate encapsulation using a simple class with private data members and public member functions.
/*#include<iostream>
using namespace std;
class circle{
    private:
    int radius ;
    public:
    void getRadius(int r){
            radius = r ;
    }
    void getArea(){
        cout<<"area of the circle is "<<3.14 * radius * radius<<endl;
    }
};
int main(){
 circle cir ;
 cir.getRadius(6);
 cir.getArea();
return 0;
}*/
//Write a C++ program to demonstrate encapsulation using a class with private data members and friend functions.
/*#include<iostream>
using namespace std;
class bank{
    private:
    double balance ;
    public:
    void getBalance(){
        cout<<"enter the total balance of your account "<<endl;
        cin>>balance;
    }
 void DisplayBalance(){
    cout<<"total balance of your account is "<<balance<<endl;
 }
  friend void Deposit(bank& B1);
  friend void Withdraw(bank& B2);
};
void Deposit(bank& B1){
    cout<<"enter the amount you wnna deposit in your account "<<endl;
    double deposit;
    cin>>deposit;
    B1.balance = B1.balance + deposit ;
}
void Withdraw(bank& B2){
    double amount;
    cout<<"enter the amount you wanna withdraw"<<endl;
    cin.ignore();
    cin>>amount;
    if(B2.balance >= amount){
        B2.balance = B2.balance - amount ;
    }else{
        cout<<"insufficient balance "<<endl;
    }
}
int main(){
     bank broke;
     broke.getBalance();
     broke.DisplayBalance();
       Deposit(broke);
     broke.DisplayBalance();
     Withdraw(broke);
     broke.DisplayBalance();
return 0;
}*/
//Write a C++ program to demonstrate single inheritance using a base class Vehicle and a derived class Car.
/*#include<iostream>
#include<string>
using namespace std;
class vehicle{
    protected:
    string color ,model ;
    int wheels ;
    public:
    vehicle(string c , string m ,int w){
        color = c ;
        model = m ;
        wheels = w ;
    }
    void Display(){
        cout<<"so the color of the vehicle is "<<color<<endl;
        cout<<"model is "<<model<<endl;
        cout<<"it has "<<wheels<<" wheels"<<endl;
    }

};
class car:public vehicle{
    public:
    int doors ;
   car(string a , string r , int s , int d):vehicle(a , r ,s){
    doors = d ;
   }
   void Display(){
    cout<<"so the color of the car is "<<color<<endl;
        cout<<"model is "<<model<<endl;
        cout<<"it has "<<wheels<<" wheels"<<endl;
        cout<<"and has "<<doors<<" doors"<<endl;
   }
};
int main(){
    car car1("red","ri897",4,8);
    vehicle *poi;
    poi = &car1;
    poi->Display();  //displaying vehichle display function
// car car1("red","ri897",4,8);
// car1.Display();
return 0;
}*/
//Modify the BankAccount class to include a derived class SavingsAccount that inherits from BankAccount and adds an additional private data member interestRate
/*#include<iostream>
using namespace std;
class bank{
    private:
    double balance ;
    public:
    void getBalance(){
        cout<<"enter the total balance of your account "<<endl;
        cin>>balance;
        
    }
    double getbal(){
        return balance;
    }
 void DisplayBalance(){
    cout<<"total balance of your account is "<<balance<<endl;
 }
  friend void Deposit(bank& B1);
  friend void Withdraw(bank& B2);
};
void Deposit(bank& B1){
    cout<<"enter the amount you wnna deposit in your account "<<endl;
    double deposit;
    cin>>deposit;
    B1.balance = B1.balance + deposit ;
}
void Withdraw(bank& B2){
    double amount;
    cout<<"enter the amount you wanna withdraw"<<endl;
    cin.ignore();
    cin>>amount;
    if(B2.balance >= amount){
        B2.balance = B2.balance - amount ;
    }else{
        cout<<"insufficient balance "<<endl;
    }
};
class savingAccount:public bank{
    private:
    double interestRate;
    public:
    void interest(){
        double intersetRate = 0.67 ;
        cout<<"so the interset rate of the accout is "<<getbal() * interestRate<<endl;
    }
};
int main(){
     bank broke;
     broke.getBalance();
     broke.DisplayBalance();
       Deposit(broke);
     broke.DisplayBalance();
     Withdraw(broke);
     broke.DisplayBalance();
     savingAccount acc;
     acc.interest();
     acc.getBalance();
     Deposit(acc);
     acc.DisplayBalance();
return 0;
}*/
//make a shape function use polymorphism to make draw function of derived classes 
/*#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw() = 0 ;
};
class circle:public shape{
    public:
    void draw(){
        cout<<"drawing a circle"<<endl;
    }
};
class rectangle : public shape{
    public:
    void draw(){
        cout<<"drawing a rectamgle "<<endl;
    }
};
class square:public shape{
    public:
    void draw(){
        cout<<"drawing a square "<<endl;
    }
};

int main(){
    shape *point[3];
   circle c1 ; 
  square sq1 ;
  rectangle rec1 ;
   point[0] = &c1 ;
   point[1] = &sq1;
   point[2] = &rec1 ;
   c1.draw();   //can use that simple method as well 
   point[0]->draw();
point[2]->draw();
point[1]->draw();
 
return 0;
}*/
//write a data to stor content of a file
/*#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
  string str1 ;
  ofstream file("data.txt");
  if(!file){
    cout<<"cant open file"<<endl;
    return 0;
  }
  string str = "na hai ye ppana na khona hi hai ";
  file<<str<<endl ;
  file.close();
  ifstream file2("data.txt");
  file2>>str1;
  getline(file2,str1);
  cout<<str1;
return 0;
}*/
//making a strucrure and entering data into file 
/*#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct student{
    string name;
    string department;
    string registration;
    string university;
};
int main(){
    student stu;
    string file = "data.txt";
    ofstream filein(file , ios::app);
    cout<<"enter the name of the student"<<endl;
    getline(cin , stu.name);
    cout<<"enter the department of the student"<<endl;
    getline(cin , stu.department);
    cout<<"enter the registration of the student"<<endl;
    getline(cin , stu.registration);
    cout<<"enter the university of the student"<<endl;
    getline(cin , stu.university);
    //getting data into file
    filein<<" name: "<<stu.name <<endl;
    filein<<" department: "<<stu.department <<endl;
    filein<<" registration: "<<stu.registration <<endl;
    filein<<"university: "<<stu.university<<endl;

    ifstream fileout("data.txt");
    string str;
    while(getline(fileout ,str)){
        cout<<str<<endl;
    }

return 0;
}*/
//1.	Write a class with the name “circle”, which has “radius” as a data member. Create a function that calculates circumference of circle (circumference of circle= 2πr).
// In the main instantiate two circles and compare their circumference to show which circle has greater value for circumference.
/*#include<iostream>
using namespace std;
class circle{
    private:
   double radius ;
   public:
   circle(double r){
    radius = r ;
   }
   double getcircum(){
      double cir = 2 * 3.14 * radius ;
      return cir ;
   }
};
int main(){
circle c1(5) , c2(5) ;
if(c1.getcircum()>c2.getcircum()){
    cout<<"circumference of first circle is greater than the other"<<endl;
}else if(c2.getcircum()>c1.getcircum()){
   cout<<"circumference of second circle is greater than the first"<<endl;
}else{
    cout<<"they are same "<<endl;
}
return 0;
}
*/
//write a box code 
/*#include<iostream>
using namespace std;
class box{
    private:
    double length ,breadth,height ;
    public:
    void getinfo(){
             cout<<"enter the length,breadth and heigt values :"<<endl;
             cin>>length>>breadth>>height;
    }
    void display_info(){
        cout<<"length :"<<length<<endl
        <<"breadth : "<<breadth<<endl
        <<"heught : "<<height<<endl;
    }
    void cal_volume(){
          double volume = length * breadth * height ;
          cout<<"so the volume of the box is "<<volume<<endl;
    }
};
int main(){
  box b1;
  b1.getinfo();
  b1.display_info();
  b1.cal_volume();
return 0;
}*/
//1.	Write a program in C++ to find the maximum number between two numbers using a pointer. Use call by reference methods to implement.  

/*#include<iostream>
using namespace std;
 void findMax(int *a , int *b , int *max){
    if(*a>*b){
        *max = *a ;
    }else{
        *max = *b ;
    }
 }
int main(){
  int num1,num2,max ;
  cout<<"enter the values of num1 and num2 "<<endl;
  cin>>num1>>num2;
  findMax(&num1 , &num2 ,&max);
  cout<<"so the max number is "<<max<<endl;
return 0;
}*/
//usage of poietrs in ararys + memory allocation
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elemnts you wanna store"<<endl;
    cin>>n;

int *arr = new int[n];
cout<<"enter the value sof array"<<endl;
for(int i = 0;i<n ;i++){
    cin>>*(arr+i);
}
cout<<"displayng the values of arraus"<<endl;
for(int i = 0;i<n ;i++){
    cout<<*(arr+i)<<" " ;
}
//dealocating memortu 
delete[] arr;
return 0;
}*/
//
/*#include <iostream>
using namespace std;
int main () {
   int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable 
   ip = &var;       // store address of var in pointer variable
   int **ipp  ;
   ipp = &ip ;
   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;
   cout<<"address stored in **ipp "<<ipp<<endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
   cout<<"vlue stored in **ipp "<<**ipp<<endl;

   return 0;
}*/
//adding record of persons 
/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct person{
    string name;
    int age ;
};
vector<person> persons;
void getdata(){
    person people;
    cout<<"enter the name of the person :"<<endl;
    getline(cin,people.name);
    cout<<"enter the age of the person: "<<endl;
    cin>>people.age ;
    persons.push_back(people);
    cout<<"record added successfully :"<<endl;
}
void display(){
    cout<<"list of the persons is :"<<endl;
    for(int i=0 ; i< persons.size();i++){
        cout<<"name : "<<persons[i].name<<endl;
        cout<<"age : "<<persons[i].age<<endl;
    }
}
int main(){
 int choice;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add person" << endl;
        cout << "2. Display persons" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // ignore newline character left in input buffer
        switch (choice) {
            case 1:
                getdata();
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
return 0;
}*/
//complex nubers 
/*#include<iostream>
using namespace std;
struct complex{
    double real ;
    double imag ;
};
complex addcomplex(complex c1 , complex c2){
    complex result ;
    result.real = c1.real + c2.real ;
    result.imag = c1.imag + c2.imag ;
    return result ;
}
complex subcomplex(complex c1 , complex c2){
    complex result ;
    result.real = c1.real - c2.real ;
    result.imag = c1.imag - c2.imag ;
    return result ;
}
complex display(complex c){
    cout<<"so the complex number is "<<c.real <<" + "<<c.imag<<"i"<<endl;
}
int main(){
int choice;
    complex c1, c2, result;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add two complex numbers" << endl;
        cout << "2. Subtract two complex numbers" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter first complex number (real and imaginary parts): ";
                cin >> c1.real >> c1.imag;
                cout << "Enter second complex number (real and imaginary parts): ";
                cin >> c2.real >> c2.imag;
                result = addcomplex(c1, c2);
                cout << "Result: ";
                display(result);
                break;
            case 2:
                cout << "Enter first complex number (real and imaginary parts): ";
                cin >> c1.real >> c1.imag;
                cout << "Enter second complex number (real and imaginary parts): ";
                cin >> c2.real >> c2.imag;
                result = subcomplex(c1, c2);
                cout << "Result: ";
                display(result);
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

return 0;
}*/
//1.	Write a Parent Class Shape and define a virtual function display() in it . Derive classes Rectangle and Triangle from Shape class. Override display() function in derived classes. Make a pointer to base class. call the display function of rectangle and triangle using pointer.
/*#include<iostream>
using namespace std;
class shape{
    public:
   virtual void display() = 0 ;
};
class triangle : public shape{
    public:
    void display(){
        cout<<"displaying triangle image"<<endl;
    }
};
class rectangle : public shape{
    public:
    void display(){
        cout<<"displaying rectangle image"<<endl;
    }
};
int main(){
    triangle t1;
    rectangle rec1;
   shape *base_class_pointer[2];
   base_class_pointer[0] = &t1 ;
   base_class_pointer[1] = &rec1 ;
   base_class_pointer[0]->display();
   base_class_pointer[1]->display();
return 0;
}*/
//2.	In the above program define height and width fields and write virtual functions getArea(),setHeight(float) and setWidth(float) in shape class. Override getArea() in Rectangle and Triangle to calculate the area . in Main() create objects of Rectangle and Triangle and a Shape pointer to point them. Call the getArea() of both classes.
/*#include<iostream>
using namespace std;
class shape{
    protected:
    double height;
    double width;
    public:
    virtual void setHeight(double h){
        height = h ;
    }
    virtual void setWidth(double w){
        width = w ;
    }
    virtual void getArea() = 0 ;
   // virtual void display() = 0 ;
};
class rectangle : public shape{
  public:
  void setHeight(double h)override{
    height = h ;
  }
  void setWidth(double w)override{
    width = w ;
  }
  void getArea()override{
    cout<<"area of the rectangle is "<<height * width<<endl;
  }
};
class triangle:public shape{
    public:
    void setHeight(double h)override{
    height = h ;
  }
  void setWidth(double w)override{
    width = w ;
  }
  void getArea()override{
    cout<<"area of the triangle is "<<(height * width)/2<<endl;
  }
};
int main(){
 shape *ptr ;
 rectangle rec1 ;
 triangle tri1 ;
 ptr = &rec1 ;
 ptr->setHeight(3.4);
 ptr->setWidth(6.3);
 ptr->getArea();
 ptr = &tri1 ;
 ptr->setHeight(3.4);
 ptr->setWidth(6.3);
 ptr->getArea();
return 0;
}*/
//1.	Write 3 statements in the main function 
// (1) Initialize the pointer ptr to point to a book structure memory location.
// (2) Set the price of that book to 99.25 using ptr.
// (3) Delete the memory location to which ptr points.

//    struct book 
//    {
//     int id;
//     float price;
//    };

/*#include<iostream>
using namespace std;
struct book{
    int id;
    float price ;
}
int main(){
    struct book *ptr; 
    ptr = new stuct book ;
    ptr->price = 99.25 ;
    delete ptr ;
   
return 0;
}*/
//2.	Write a program that creates a dynamic array of numbers using pointer and 'new'. Length of array is taken from user. Display the elements of array and 'delete' the pointer
/*#include<iostream>
using namespace std;
int main(){
 int n ;
 cout<<"enter the size of the array"<<endl;
 cin>>n;
 int *arr = new int[n] ;
 cout<<"enter va;ue s farray"<<endl;
 for(int i=0;i<n;i++){
    cin>>*(arr+i);
 }
 cout<<"getting values "<<endl;
 for(int i = 0 ;i<n ; i++){
    cout<<*(arr+i)<<" ";
 }
 cout<<endl;
 cout<<"deleting "<<endl;
 delete[] arr;
return 0;
}*/
//1.	Write a program that declares 3 pointers of type float. Initialize these pointers using three float variables. Assign values to data variables using pointer notation. Compute the sum of variables and print the result.
/*#include<iostream>
using namespace std;
int main(){
float a,b,c ;
float *p1 = &a;
float *p2 = &b;
float *p3 = &c;
*p1  = 23.7 ;
*p2 = 75.5 ;
 *p3 = 974.3 ;
 float sum  = *p1 + *p2 + *p3 ;
 cout<<"so sum of the pointer varaibles is "<<sum<<endl;
return 0;
}*/
//q2
/*#include<iostream>
using namespace std;
int main(){
int x = 5;
float y = 8 ;
int *p1 = &x;
float*p2 = &y;
cout<<"so the value of x is "<<*p1<<" and the value of y is "<<*p2<<endl;
cout<<"while thier addresses are "<<p1<<" and "<<p2<<endl;
return 0;
}*/
//q3
/*#include<iostream>
using namespace std;
int main(){

int *arr = new int[4];
cout<<"enter values of essay"<<endl;
for(int i  =0 ; i<5;i++){
    cin>>*(arr+i);
}
return 0;
}*/
//q3 again
/*#include<iostream>
using namespace std;
int main(){
int arr[6] = {2,4,7,8,6,4};
int* p = arr ;
for(int i=0;i<6;i++){
    cout<<*p<<" ";
    *p++ ;
}
return 0;
}*/
//q4 define a function to add ten in each element iof an array 
/*#include<iostream>
using namespace std;
void addten(int *arr,int n){
    for(int i = 0 ; i<n ; i++){
        *(arr+i)+=10;
    }
}
int main(){
int arr[10] = {1,2,3,4,4,5,6,6,7,3};
addten(arr , 10);
for(int i = 0; i<10 ; i++){
    cout<<arr[i]<<" ";
}
return 0;
}*/
//q5 calculatelength of string 
/*#include<iostream>
using namespace std;
int cal_length(const string *str){
    int length ;
    length = str->length();
    return length ; 
};
int main(){
  string st = "ab bawara hua man " ;
  string *pt = &st;
  cout<<"so length of the string is "<<cal_length(pt);
return 0;
}*/
//cube function pointer as argume nt
/*#include<iostream>
using namespace std;
int cube(int *num){
  return (*num)*(*num)*(*num);
}
int main(){
    int number;
cin>>number;

int num = cube(&number);
cout<<num;
return 0;
}*/
//pointer function
/*#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b ;
}
int sub(int a, int b){
    return a-b ;
}
int main(){
int (*fun)(int , int);
fun = sum ;
int re1 = fun(8,5);
cout<<re1<<endl;
fun= sub;
int re2 = fun(7,2);
cout<<re2<<endl;
return 0;
}*/
//// 2.Define a Class Laptop

	// Define following fields
	// Screen size, hasWebcam, hasWIFI, hasBluetooth, romType 

	// Define function, powerON, Osloading, powerOFF 

	// Inherit Class Dell, HP 

	// Define custom fields of DELL and HP

	// Display Details of DELL

	// Display Details of HP
/*#include<iostream>
#include<string>
using namespace std;
class laptop{
    protected:
    string screenSize;
    bool hasWebcan;
    bool hasWIFI;
    bool hasBluetooth;
    string romType;
    public:
    laptop(string screenSize,bool hasWebcan,bool hasWIFI,bool hasBluetooth,string romType){
        this->screenSize = screenSize;
        this->hasWebcan = hasWebcan;
        this-> hasWIFI =  hasWIFI;
        this->hasBluetooth = hasBluetooth ;
        this->romType = romType ;
    };
 
    virtual void powerON(){
        cout<<"switching on the laptop without any special type"<<endl;
    }
    virtual void OsLoading(){
        cout<<"loading OS"<<endl;
    }
    virtual void powerOFF(){
        cout<<"switching off"<<endl;
    }
};
class DELL : public laptop{
  string specific;
    public:
    DELL(string screenSize,bool hasWebcan,bool hasWIFI,bool hasBluetooth,string romType,string specific):laptop(screenSize,hasWebcan,hasWIFI,hasBluetooth,romType){
        this->specific = specific ;
    }
     void display() {
        cout << "Dell Laptop Details:" << endl;
        cout << "Screen size: " << screenSize << " inches" << endl;
        cout << "Has webcam: " << (hasWebcan ? "Yes" : "No") << endl;
        cout << "Has WIFI: " << (hasWIFI ? "Yes" : "No") << endl;
        cout << "Has Bluetooth: " << (hasBluetooth ? "Yes" : "No") << endl;
        cout << "ROM type: " << romType << endl;
        cout << "Dell specific feature: " << specific << endl;
    }

};
int main(){
    DELL d1("456",true,false,true,"df688","fingerprint sensor");
    d1.display();
return 0;
}*/
//complex numbers with operator overloading 
/*#include<iostream>
using namespace std;
class complex{
    private:
    double real , imag ;
    public:
    void getdata(){
        cout<<"enter the value of real part"<<endl;
        cin>>real;
        cout<<"enter the value of imagiary part"<<endl;
        cin>>imag;
    }
    void display(){
        cout<<"so the complex number is "<<real<<" + "<<imag<<"i"<<endl;
    }
    //+operator 
    complex operator+(complex bb){
     complex cc ;
     cc.real = real + bb.real ;
     cc.imag = imag + bb.imag ;
     return cc;
    }
    //-operator
    complex operator-(complex bb){
        complex cc;
        cc.real = real - bb.real ;
        cc.imag = imag -bb.imag ;
        return cc;
    }
    //*operator
    complex operator*(complex bb){
        complex cc ;
        cc.real =(real*bb.real)-(imag*bb.imag);
        cc.imag = (real * bb.imag)+( imag * bb.real);
        return cc;
    }
    ///operator
    complex operator/(complex bb){
        complex cc ;
        double denominator = (bb.real * bb.real)+(bb.imag*bb.imag);
        cc.real = ((real*bb.real)+(imag*bb.imag))/denominator ;
        cc.imag = ((imag*bb.real)-(real*bb.imag))/denominator ;
        return cc ;
    }
    //prefix ++
    complex operator++(){
        real++;
        imag++;
        return *this ;
    }
    //--prefix
    complex operator--(){
        real--;
        imag--;
        return *this ;
    }
    //++postfix
    complex operator++(int){
        complex temp = *this ;
        real++;
        imag++;
        return temp ;
    }
    //postfix--
    complex operator--(int){
        complex temp = *this ;
        real--;
        imag--;
        return temp ;
    }
    bool operator>(complex bb){
          return (real*real + imag*imag)>(bb.real * bb.real + bb.imag*bb.imag);
    }

};
int main(){
  complex a,b,c;
  a.getdata();
  a.display();
  b.getdata();
  b.display();
  c=a+b;
  c.display();

return 0;
}*/
//using []operator 
/*#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    string arr[5];
    public:
    student(string n){
        name = n ;
    }
    string& operator[](int index){
        if(index<0 || index>=5){
            throw out_of_range("out of range");
        }
         return arr[index] ;
    }
    void add_course(int index , string course){
        if(index<0 || index>=5){
            throw out_of_range("out of range");
        }
         arr[index] = course;
    }

};
int main(){
student st1("alia");
st1.add_course(0,"yabhhinsg");
st1.add_course(2,"vinkay");
st1.add_course(1,"jithn");
st1.add_course(3,"oihgfc");
for(int i = 0 ; i<4 ;i++){
    cout<<" course "<<st1[i]<<endl;
}

return 0;
}*/
//point clas 
/*#include<iostream>
using namespace std;
class point{
    private:
    int x , y ;
    public:
    void getdata(){
        cout<<"enter values of x and y"<<endl;
        cin>>x>>y;
    }
    void display(){
        cout<<"so the x coordinate is "<<x<<" and y coorindiante is "<<y<<endl;
    }
    point operator+(point bb){
        point cc;
        cc.x = x+bb.x;
        cc.y = y + bb.x ;
        return cc ;
    }

   point operator-(point bb){
        point cc;
        cc.x = x - bb.x;
        cc.y = y - bb.x ;
        return cc ;
    }
    int operator*(point bb){
        return (x * bb.x)+(y * bb.y);
    }
    bool operator==(point bb){
      return (x ==bb.x && y==bb.y);
    }
    bool operator>(point bb){
      return (x > bb.x && y > bb.y);
    }
    bool operator<(point bb){
      return (x < bb.x && y < bb.y);
    }

};
int main(){
    point p1,p2,p3 ;
    p1.getdata();
    p2.getdata();
    p1.display();
    p2.display();
    p3 = p1+p2 ;
    p3.display();
    if(p1>p2){
        cout<<"p1 is greater than p2"<<endl;
    }else{
        cout<<"p2 is greater than p1"<<endl;
    }
return 0;
}*/
//time class 
/*#include<iostream>
using namespace std;
class time{
    private:
    int hour , min ,sec ;
    public:
    void getData() {
    cout << "Enter the hour: ";
    cin >> hour;
    cout << "Enter the minute: ";
    cin >> min;
    cout << "Enter the second: ";
    cin >> sec;
  }

  void show() {
    cout << hour << ":" << min << ":" << sec << endl;
  }
  time operator++(){
    min++;
    if(min>=60){
        hour++;
        min = 0 ;
    } 
      if(hour>=24){
        hour=0;
      }
      return *this;
    }
    time operator++(int){
        time temp = *this ;
        min++;
    if(min>=60){
        hour++;
        min = 0 ;
    } 
      if(hour>=24){
        hour=0;
      }
      return temp;
    }
    time operator--(){
        min--;
    if(min<0){
        hour--;
        min = 59 ;
    } 
      if(hour<0){
        hour=23;
      }
      return *this;
    }
    time operator--(int){
        time temp = *this ;
        min--;
    if(min<0){
        hour--;
        min = 59 ;
    } 
      if(hour<0){
        hour=23;
      }
      return temp;
    }
    
  
};
int main(){
time t1;
t1.getData();
t1.show();
(t1++).show();
(++t1).show();

return 0;
}*/
//employee 
/*#include<iostream>
#include<string>
using namespace std;
class employee{
    string name;
    int year,month,day ;
    public:
    void getData() {
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the day of joining: ";
    cin >> day;
    cout << "Enter the month of joining: ";
    cin >> month;
    cout << "Enter the year of joining: ";
    cin >> year;
  }
  void show() {
    cout << "Name: " << name << endl;
    cout << "Date of Joining: " << day << "-" << month << "-" << year << endl;
  }
  bool operator>(employee bb){
        if(year > bb.year )return true ;
        else if(year == bb.year && month > bb.month) return true ;
        else if(year == bb.year && month == bb.month && day > bb.day) return true ;
        else return false ;
  }
  bool operator<(employee bb){
        if(year < bb.year )return true ;
        else if(year == bb.year && month < bb.month) return true ;
        else if(year == bb.year && month == bb.month && day < bb.day) return true ;
        else return false ;
  }
};
int main(){
 employee e1 ,e2 ;
 e1.getData();
 e2.getData();
 e1.show();
 e2.show();
 if(e1>e2){
   cout<<"so the employee 2 has more time in company than the one"<<endl;
 }else if(e1<e2){
    cout<<"employee 1 has more time than the other"<<endl;
 }else{
    cout<<"oth have same time"<<endl;
 }
return 0;
}*/
//
/*#include<iostream>
using namespace std;
class Animal {
public:
    virtual void sound() = 0;  // pure virtual function
    void eat() {
    cout << "Eating..." <<endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
    cout << "Woof!" <<endl;
    }
};
int main(){
    Dog d1;
    d1.sound();
    d1.eat();
return 0;
}
*/
//finding factoruial
/*#include<iostream>
using namespace std;
int fibo(int n){
    if(n<2){
        return 1 ;
    }
    return fibo(n-2)+fibo(n-1);
    
}
int main(){
   int num;
   cin>>num;
   cout<<"so the fibo  series is "<<endl;
   for(int i = 0 ; i<=num ; i++){
    cout<<fibo(i)<<" ";
   }
return 0;
}*/
//selection method sorting 
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i= 0 ; i<n ; i++){
    cin>>arr[i];
}
cout<<"before sorting"<<endl;
for(int i= 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}
for(int i=0;i<n-1;i++){
    for(int j = i+1 ; j< n;j++){
        if(arr[j]<arr[i]){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp ;
        }
    }
}
cout<<"after sorting"<<endl;
for(int i= 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}

return 0;
}*/
//bubble method sorting 
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i= 0 ; i<n ; i++){
    cin>>arr[i];
}
cout<<"before sorting"<<endl;
for(int i= 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}
int counter = 1 ;
while(counter < n-1){
    for(int i= 0 ; i< n-counter;i++){
        if(arr[i+1]<arr[i]){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp ;
        }
    }
    counter++ ; 
}
cout<<"after sorting"<<endl;
for(int i= 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}
return 0;
}*/
//insertion sorting 
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i= 0 ; i<n ; i++){
    cin>>arr[i];
}
cout<<"before sorting"<<endl;
for(int i= 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}
for(int i=1 ; i<n ; i++){
    int current = arr[i];
    int j = i-1 ;
    while(arr[j]>current && j>=0){
         arr[j+1] = arr[j];
         j-- ;
    }
    arr[j+1] = current ;
}
cout<<"after sorting"<<endl;
for(int i= 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}
return 0;
}*/
//finding max 
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i= 0 ; i<n ; i++){
    cin>>arr[i];
}
cout<<"array is "<<endl;
for(int i= 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}
int max  = arr[0] ;
for(int i=0 ; i<n ; i++){
    if(max < arr[i]){
        max = arr[i] ;
    }
}
cout<<"max is "<<max;
return 0;
}*/
//revesreing an array
/*#include<iostream>
using namespace std;
void reverse(int arr[],int n){
     int s = 0 ;
      int e = n-1 ;
      while(s<e){
        int temp = arr[s];
        arr[s] = arr[e] ;
        arr[e] = temp ;
        s++ ;
        e-- ; 
      }


}
int main(){
int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr , n);
    cout << "reverse array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}*/
//Write a C++ program which takes two 2-D arrays (input from user). Perform addition & subtraction on the arrays and then store the result into resultant arrays.
/*#include<iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2 ;
    cout<<"enter the no of rows of array 1"<<endl;
    cin>>r1;
    cout<<"enter the no of rows of array 2"<<endl;
    cin>>r2;
    cout<<"enter the no of column of array 1"<<endl;
    cin>>c1;
    cout<<"enter the no of colimns  of array 2"<<endl;
    cin>>c2;
 int arrA[r1][c1] ,addition[2][2]  , sub[2][2];
  int arrB[r2][c2] ;
  cout<<"enter the elemts of fisrt array"<<endl;
  for(int i = 0 ; i<r1 ; i++){
    for(int j = 0 ; j<c1 ; j++){
        cin>>arrA[i][j];
    }
  }
  cout<<"enter the elemts of 2nd array"<<endl;
  for(int i = 0 ; i<r2 ; i++){
    for(int j = 0 ; j<c2 ; j++){
        cin>>arrB[i][j];
    }
  }
  cout<<"so the array 1 is "<<endl;
  for(int i = 0 ; i<r1 ; i++){
    for(int j = 0 ; j<c1 ; j++){
        cout<<arrA[i][j]<<" ";
    }
  }
  cout<<"so array 2 is "<<endl;
  for(int i = 0 ; i<r1 ; i++){
    for(int j = 0 ; j<c1 ; j++){
        cout<<arrB[i][j]<<" ";
    }
  }
  
  for(int i = 0 ; i<r1 ; i++){
    for(int j = 0 ; j<c1 ; j++){
        addition[i][j] = arrA[i][j] + arrB[i][j] ;
    }
  }
  cout<<"so the addition of two arrarys is "<<endl ;
  for(int i = 0 ; i<r1 ; i++){
    for(int j = 0 ; j<c1 ; j++){
        cout<<addition[i][j]<<" ";
    } 
    cout<<endl;}
return 0;
}*/
