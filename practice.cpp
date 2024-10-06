// #include<iostream>
// using namespace std;
// //its just a simple comment
//    int main(){
//     int star = 2 ;
//      cout<<"hello world!"<< star;
//      return 0;
   
//                 }

  /* #include<iostream>
   using namespace std;
   int main(){
      // int a = 4;
      // int b = 45;
      int a = 23 , b= 43;
      float pi = 3.14;
      char i = 'I';
      bool var = true;
      cout<<"this is my first time writing c++ program,tha value of a is "<<a<<  "  and the value of b is "<<b ;
      cout<<" .\nThe value of pi is: " <<pi;
      cout<<" .\nThe first letter of my name is " <<i<< " and " <<var;

         return 0;
   }*/
 /*#include<iostream>
    using namespace std;

    int main(){
      int num1 , num2 ;
      cout<<"enter the number num1\n";
      cin>>num1;
       cout<<"enter the number num2\n";
      cin>>num2;
      cout<<"so the sum of these two numbers is " <<num1+num2;
      return 0;

    }*/
   //  #include<iostream>
   //  using namespace std;
   //   int main(){
   //    int a=5, b=10;
      //arthmetic operators 
      /* cout<<"this is c++ ";
       cout<<"so the value of a+b is " <<a+b<<endl;
       cout<<"so the value of a-b is " <<a-b<<endl;
       cout<<"so the value of a/b is " <<a/b<<endl;
       cout<<"so the value of a*b is " <<a*b<<endl;
       cout<<"so the value of a++ is " <<a++<<endl;
       cout<<"so the value of a-- is " <<a--<<endl;
       cout<<"so the value of ++a is " <<++a<<endl;
      cout<<"so the value of --a is " <<--a<<endl;
      cout<<"so the value of ++a is " <<++a<<endl;
      cout<<"so the value of a%b is " <<a%b<<endl;*/
      //comparison operators
     /* cout<<"the value of a==b is "<<(a==b)<<endl;
      cout<<"the value of a!=b is "<<(a!=b)<<endl;
       cout<<"the value of a<=b is "<<(a<=b)<<endl;
        cout<<"the value of a>=b is "<<(a>=b)<<endl;
         cout<<"the value of a>b is "<<(a>b)<<endl;
         cout<<"the value of a<b is "<<(a<b)<<endl;*/
         //LOGICAL OPERATORS
   //       cout<<"the value of logical and operator of (a==b) and (a<b) is:  "<<((a==b) && (a<b))<<endl;
   //       cout<<"the value of logical or operator of (a==b) || (a<b) is: "<<((a==b)||(a<b))<<endl;
   //        cout<<"the value of logical or operator of (a==b) || (a<b) is: "<<((a==b)||(a<b))<<endl;
   //     cout<<"the value of logical not operator of  !(a==b)  is: "<<(!(a==b))<<endl;
      
      
   //       return 0;
   //   }
   // we can use scope resolution operator if we want to deal with the global variable or want to prefer it instead of local
  /* #include<iostream>
   using namespace std;
    int c = 64;
   int main(){
    int a ,b , c;
  
    cout<<"enter the value of a";
    cin>>a;
    cout<<"\nenter the value of b";
    cin>>b;
    c = a+b;
    cout<<"so the sum is "<<c<<endl;
    cout<<"the global variable is "<<::c;
    return 0;
   }*/
   //**************float ,double and long double literals ********************
   /*#include<iostream>
   using namespace std;
   int main(){
    float a = 3.14;
    long double b = 3.14;
    cout<<"the size of 3.14 is : "<<sizeof(3.14)<<endl;
    cout<<"the size of 3.14 is : "<<sizeof(3.14f)<<endl;
    cout<<"the size of 3.14 is : "<<sizeof(3.14F)<<endl;
    cout<<"the size of 3.14 is : "<<sizeof(3.14l)<<endl;
    cout<<"the size of 3.14 is : "<<sizeof(3.14L)<<endl;
    
   }*/
   //***************reference variables***************
   //making copy of a varaile giving value of a variable to other one so that both have same value
   /*#include<iostream>
   using namespace std;
   int main(){
     float q = 345;
     float & t = q;
     cout<<q<<endl;
     cout<<t<<endl;
    return 0;
   }*/
   //************type casting**************
   //changing one variable to another 
  /* #include<iostream>
   using namespace std;
   int main(){
    float w = 45.674;
    cout<<"the value of integer w is "<<(int)w;
    return 0;
   }*/
   // manipulators help in formatting the display like we use endl
   /*#include<iostream>
   #include<iomanip>
   using namespace std;
   int main(){
      int a = 1,b=34 ,c = 2453253;
      cout<<"the value of a without setw is "<<a<<endl;
      cout<<"the value of b without setw is "<<b<<endl;
      cout<<"the value of c without setw is "<<c<<endl;
      cout<<"the value of a with setw is "<<setw(3)<<a<<endl;
      cout<<"the value of b with setw is "<<setw(3)<<b<<endl;
      cout<<"the value of c wit setw is "<<setw(3)<<c<<endl;
    return 0;
   }*/
   //***********if-else statements************8
  /* #include<iostream>
   using namespace std;
   int main(){
    int age;
    cout<<"enter your age plz: "<<endl;
    cin>>age;
    if(age<18){
      cout<<"you cannot enter in the party!!"<<endl;
    }else if(age == 18){
      cout<<"you will get a kid pass to the party"<<endl;
    }else{
      cout<<"welcome to the party!!"<<endl;
    }
    return 0;
   }*/
   //*********switch statements*********
   /*#include<iostream>
   using namespace std;
   int main(){
    int age;
    cout<<"enter your age plz: "<<endl;
    cin>>age;
    switch(age){
      case 1:
      cout<<"your a new born baby!!!"<<endl;
      break;
      case 17:
      cout<<"you're under 18 kid"<<endl;
      break;
      case 18:
      cout<<"you are in a golden age best wishes for you"<<endl;
      break;
      default:
      cout<<"ok fine got you!!"<<endl;
      break;
    }
    return 0;
   }*/
   //**********loops in C++***************
   /*#include<iostream>
   using namespace std;
   int main(){
      int i;
      for(i = 0; i<30; i++){
        cout<<i<<endl;
       //i++;
      }
   }*/
  //  
  // #include<iostream>
  //  using namespace std;
  //  int main(){
  //   int i = 10;
  //   while(i<=20)
  //   {
  //     cout<<i<<endl;
  //     i++;
  //   }
  //   return 0;
  //  }
  /*#include<iostream>
   using namespace std;
   int main(){
    int i = 1;
    do
    {
      cout<<i<<endl;
      i++;
    }while(false);
    return 0;
   }*/
  /* #include<iostream>
   using namespace std;
   int main(){
    for(int i = 0;i<12;i++){
      if(i==5){
       // break;
       continue;
        
      }
      cout<<i<<endl;
    }
    return 0;
   }*/
   //*******pointers *******
   //a data type whic holds thw addresse of oter data types
   //&  adress of operator   * derefrerence of operator(value at a operator)
/*#include<iostream>
using namespace std;
int main(){
  int z = 8;
  int* b = &z;
  cout<<"address of z "<<b<<endl;
  cout<<"address of b "<<&z<<endl;
  cout<<"the value of b operator is "<<*b<<endl;
  //pointer to pointer (a varaibble which store the address of a pointer itself )
  int** c = &b;
  cout<<c<<endl;
return 0;
}*/
//#include<iostream>
// using namespace std;
// int main(){
// int marks [] = {44,24,44,2,255,67,7,55,4,23,55};
//cout<<marks[4]<<endl;
//cout<<marks[0]<<endl;
//cout<<marks[10]<<endl;
//cout<<marks[3]<<endl;
//can cahne the value of an array
//marks[10] = 29;
//cout<<marks[10]<<endl;
//making loops in arrays 
/*for(int i=0;i<11; i++){
   cout<<"the value of marks "<<i+1<<" is "<<marks[i]<<endl;
}*/
//using while loop
// int a;
/*while(a<=10){
  cout<<marks[a]<<endl;
  a++;

}
return 0;
}*/
//**********while**********
/*#include<iostream>
using namespace std;
int main(){
  int i = 1;
  while(i<10){
    cout<<i<<endl;
    i++;
  }
}*/
//*********do-while loop***********
/*#include<iostream>
using namespace std;
int main(){
  int a = 0;
  int marks[] = {12,45,2,34,5,78,98};
  /*do{
    cout<<"the value of "<<a<<" is "<<marks[a]<<endl;
    a++;
  }while(a<6);*/
  /*int* p = marks;
  cout<<"the value of *p is "<<*p<<endl;
  cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
  cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
  cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
  cout<<"the value of *(p+4) is "<<*(p+4)<<endl;
  return 0;

}*/
//**********strusctures*********
//you can use diffreent type of data in one type of data type
/*#include<iostream>
using namespace std;
 typedef struct idols 
 {
  int num;
  char favchar;
  float salary;
} id;
int main(){
  struct idols lisa ;
 //id lisa;
  lisa.num = 5;
  lisa.favchar = 'z';
  lisa.salary = 459000000;
  cout<<"so the id number of lisa is "<<lisa.num<<endl;
  cout<<"so the favourite character of her is "<<lisa.favchar<<endl;
  cout<<"so the annal of salary of her is "<<lisa.salary<<endl;
  return 0;
}*/
//*********unions**********
//just like structures but providing better memory management like if you want to use only one type of data from all data then you can use union 
/*#include<iostream>
using namespace std;
union money
{
  char rice; //4
  float amount; //2
  int number; //4
  //it give give min memeory space  fpr whole data like only 4 while in structure all memory of the data is being added for final memeory
};
int main(){
  union money type;
  type.rice = 'g';
  cout<<type.rice;

return 0;
}*/
// make sure to use only one 
//**********Enums*********
//Giving values to data to make code more understandable 
/*#include<iostream>
using namespace std ;
int main(){
  enum meal {breakfast,lunch,dinner,supper};
  meal m1 = lunch;
  cout<<m1<<endl;
  cout<<breakfast<<endl;
  cout<<supper<<endl;
  return 0;
  
}*/
//********FUNCTIONS***********
/*#include<iostream>
using namespace std;
sum(int a,int b){
  int c = a+b ;
  return c;
}
int main(){
  int num1 ,num2;
    cout<<"enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"enter the value of num2 "<<endl;
    cin>>num2;
    cout<<"the sum of two numbers is "<<sum(num1 , num2)<<endl;
  return 0;
}*/
//************function prototype******
//it tells which function is going to come next and how to execute a function mainly
//in above program if we write function sum below int main function then i won't execute without function prototype so te basic syntax is 
/*#include<iostream>
using namespace std;
int sum(int a , int b );

int main(){
  int num1 ,num2;
    cout<<"enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"enter the value of num2 "<<endl;
    cin>>num2;
    cout<<"the sum of two numbers is "<<sum(num1 , num2)<<endl;
    // num1 and num2 are actual parameters while a and b are formal parameters 
  return 0;
}
sum(int a,int b){
  int c = a+b ;
  return c;
}*/
// #include<iostream>
// using namespace std;
// sum(int a,int b){
//   int c = a+b ;
//   return c;
// };
/*void swap(int a,int b){        //temp a  b
  int temp = a;               // 4    4  6
  a =  b ;                    // 4    6  6
  b = temp;                   // 4    6  4
}*///call by reference 
/*void swapPointer(int* a , int* b){
   int temp = *a;
   * a = *b;
   *b = temp;
}*/
/*void swapPointerVar(int &a , int & b){
   int temp = a;
    a = b;
    b = temp;
}
int main(){ 
  int x = 3 ;
  int y = 8;
  cout<<x<<endl;
  cout<<y<<endl;
  cout<<"sum of these two numbers is "<<sum(x,y)<<endl;
  swap(x , y );   //this swap won't work as values are being copied 
  cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
  //swapPointer(&x,&y);   //it works well and swipe the values using pointer reference
  swapPointerVar(x,y);  // this will work using reference variables 
  cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
return 0;
}*/ 
//****area of a circle *****
/*#include<iostream>
using namespace std;
 
int main(){
   float r ;
   cout<<"enter the value of radius "<<endl;
  cin>>r;
  cout<<"the the area of circle of radius "<<r <<" is: " <<3.14 * r * r <<"."<<endl;
  return 0;
}*/

  //********Default arguments *********//and tey shoukd be in left 
//the valuse which are given by defaultt
/*#include<iostream>
using namespace std;
float moneyBack(int mainMoney , float interest = 1.213){
  return mainMoney + interest;
}
int main(){


  int money = 100000;
  cout<<"so the value of "<<money<< " Rs is ,with interest "<<moneyBack(money)<<endl;

return 0;
}*/
//inline function is like request to compiler ,its upto compiler if it wants to make a function inline or not.
//*******finding factorial**********
//recurring function  (never forget to add a base case in your recursive function)
/*#include<iostream>
using namespace std;
int factorial(int n){
  if(n<=1){
    return 1;
  }
  return n * factorial(n-1);
}
int main(){
  int a ;
  cout<<"enter the value of a : "<<endl;
  cin>>a;
   cout<<"so the factorial of given number "<<a<<" is "<<factorial(a);
return 0;
}*/
//********function giving fibonacci sequence**********
/*#include<iostream>
using namespace std;
int fibbo(int n){
  if(n<2){
    return 1;
  }
  return fibbo(n-2) + fibbo(n-1);
}
int main(){
  int x;
  cout<<"enter the value of x ";
  cin>>x;
cout<<"so the fibbonacci series for number "<<x<<" is "<<fibbo(x);
return 0;
}*/
//getting whole series 
/*#include<iostream>
using namespace std;

int fibbo(int n){
  if(n<2){
    return 1;
  }
  return fibbo(n-2) + fibbo(n-1);
}

int main(){
  int x;
  cout<<"enter the value of x ";
  cin>>x;
  cout<<"Fibonacci series up to "<<x<<" is: ";
  for(int i=0; i<=x; i++){
    cout<<fibbo(i)<<" ";
  }
  return 0;
}*/
//*****function overloading(different functions having same name and we are using their different parameters )
/*#include<iostream>
using namespace std;
int sum(int a , int b){
  return a+b;
}
int sum(int a, int b, int c){
  return a+b+c;
}
int main(){    //compiler first match prototype 
  cout<<"the sum of three numbers is "<<sum(3,7,2)<<endl;
  cout<<"the sum of two numbers is "<<sum(3,2)<<endl;
return 0;
}*/
//*******finding volume using functiion*********
/*#include<iostream>
using namespace std;
float volume(float r ,float h){
  return 3.14 * r * r * h;
}
//V of cube
float volume(float a){
 return a * a * a;
}
//of a rectangle
float volume(float l ,float h , float b){
  return l * h * b;
}
int main(){
      cout<<"the volume of a cylinder is "<<volume(3.2 , 8.9)<<endl;
      cout<<"the volume of a cube is "<<volume(3.2 )<<endl;
      cout<<"the volume of a rectangle is "<<volume(3.2 , 8.9,2)<<endl;
return 0;
}*/
//*********classes*******
//strutures are not secure so we use classes for security of data also functions can't be called in structures
/*#include<iostream>
using namespace std;
class Employee{
   private:
     int a,b,c;
   public:
   int d,e;
   void setValue(int a1,int b1,int c1);
   void getValue(){
      cout<<"the value of a is "<<a<<endl;
      cout<<"the value of b is "<<b<<endl;
      cout<<"the value of c is "<<c<<endl;
      cout<<"the value of d is "<<d<<endl;
      cout<<"the value of e is "<<e<<endl;
   }
};
   void Employee :: setValue(int a1,int b1,int c1){
     a = a1;
     b = b1;
     c = c1;
   }

int main(){
  Employee jennie;
  jennie.d = 23;
  jennie.e = 2;
  jennie.setValue(23,87,768);
  jennie.getValue();

return 0;
}*/
//******Nested Functions in classes *******
/*#include<iostream>
#include<string>
using namespace std;
class binary{
  string s;
  public:
  void giveBinary(void);
  void chk_binary(void);
  void ones_complement(void);
  void display(void);
};
void binary :: giveBinary(void){
  cout<<"enter the value of a binary number "<<endl;
  cin>>s;
};
void binary :: chk_binary(void){
  for(int i =0; i<s.length();i++){
    if(s.at(i) != '0' && s.at(i) != '1'){
      cout<<"this is not a binary number"<<endl;
      exit(0);
    }
  }
};
void binary :: ones_complement(void){
  string temp = ""; // create a temporary string to store the one's complement
  for(int i =0; i<s.length();i++){
    if(s.at(i) == '0'){
      temp += '1'; // append '1' to the temporary string
    }else{
      temp += '0'; // append '0' to the temporary string
    }
  }
  s = temp; // assign the temporary string back to s
};
  void binary :: display(void){
  cout<<"The one's complement is: "<<s<<endl;
};

int main(){
binary num;
num.giveBinary();
num.chk_binary();
num.ones_complement();
num.display();
return 0;
}*/
//********radius of a circle ******
/*#include<iostream>
using namespace std;

class circle{
  private:
  float radius;
  public:
  void getValue(void){
    cout<<"enter the value of radius of the circle: "<<endl;
    cin>>radius;
  };
  void getArea(void){
    cout<<"so the value of arera of the circle is : "<<3.14 * radius * radius<<endl;
  };
};
int main(){
 circle r;
 r.getValue();
 r.getArea();
return 0;
}*/
//********marks of a student*******
/*#include<iostream>
using namespace std;
class student{
  private:
  int DLD;
  int OOP;
  int English;
  int Physics;
  public:
  void setMarks (void);
  void getMarks (void);
};
 void student :: setMarks(void){
  cout<<"enter the marks of DLD "<<endl;
  cin>>DLD;
  cout<<"enter the marks of OOP "<<endl;
  cin>>OOP;
  cout<<"enter the marks of English "<<endl;
  cin>>English;
  cout<<"enter the marks of Physics "<<endl;
  cin>>Physics;
 };
 void student :: getMarks(void){
   cout<<"DLD : "<<DLD<<endl;
   cout<<"OOP : "<<OOP<<endl;
   cout<<"English : "<<English<<endl;
   cout<<"Physics : "<<Physics<<endl;
 };

int main(){
  student Sana;
  student Haris;
  student Ali;
  Sana.setMarks();
  cout<<"so the marks of Sana are as follows: "<<endl;
  Sana.getMarks();
  Haris.setMarks();
  cout<<"so the marks of Haris are as follows: "<<endl;
  Haris.getMarks();
  Ali.setMarks();
  cout<<"so the marks of Ali are as follows: "<<endl;
  Ali.getMarks();
return 0;
}*/
//***********A SHOP CLASS *********
/*#include<iostream>
using namespace std;

class shop{
  private:
  int itemID[100] ;
  int itemPrice [100];
  int counter;
  int n;
  public :
  void initcounter (void){
     counter = 0;
  };
  void nValue(void){
    cout<<"enter the no. of items you wanna give tags "<<endl;
    cin>>n;
  };
  void itemId(void);
  void DisplayPrice(void);
  
};
void shop :: itemId(void){
  for( int i=0;i<n;i++){
    cout<<"enter the Id of item no. "<<counter + 1<<endl;
    cin>>itemID[i];
    cout<<"enter the price of the item"<<endl;
    cin>>itemPrice[i];
    counter ++;
  }
};
void shop:: DisplayPrice(void){
  for( int a=0;a<counter;a++){
    cout<<"so the price of the item with item id "<<itemID[a]<<" is "<<itemPrice[a]<<endl;
  }
};
int main(){
 shop coffee ;
 coffee.initcounter();
 coffee.nValue();
 coffee.itemId();
 coffee.DisplayPrice();
return 0;
}*/




/*#include<iostream>
using namespace std;
class student{
  private:
  string name;
  int rollNo;
  int age;
  float cgpa;
  public:
   int ex = 10;
   void inputInformation(void){
    cout<<"enter the name of the student"<<endl;
    cin>>name;
    cout<<"enter the roll no ."<<endl;
    cin>>rollNo;
    cout<<"enter the age "<<endl;
    cin>>age;
    cout<<"enter the cpga"<<endl;
    cin>>cgpa;
   };
   void outputshutup(void){
    cout<<"so the name of the student is "<<name<<" roll no is "<<rollNo<<" age is "<<age<<"  and cga is "<<cgpa<<endl;
   };

};
int main(){
   student CR;
   student NawaalTuchi;
   cout<<CR.ex;
   CR.inputInformation();
   CR.outputshutup();
   NawaalTuchi.inputInformation();
   NawaalTuchi.outputshutup();

return 0;
}*/
//*********customer class********
/*#include<iostream>
using namespace std;
class customer{
  
  private:
   int customerID;
   string FirstName;
   string lastName;
   string address;
   int creditLimit;
  public:
  
  void setCustomerData(void){
     cout<<"enter the id of the customer "<<endl;
     cin>>customerID;
     cout<<"enter te first name of the customer "<<endl;
     cin>>FirstName;
     cout<<"enter the last name of the customer"<<endl;
     cin>>lastName;
     cout<<"enter the address of the student"<<endl;
     cin>>address;
     cout<<"enter the credit limit of the customer"<<endl;
     cin>>creditLimit;
  };
 void getCustomerData(void){
  cout<<"so the  id of the customer is "<<customerID<<" ,  first name of the customer "<<FirstName<<" last name is "<<lastName<<" address is "<<address<<" and credit limit "<<creditLimit<<endl;
 }

};
int main(){
  customer c1;
  customer c2;
  c1.setCustomerData();
  c1.getCustomerData();
  c2.setCustomerData();
  c2.getCustomerData();


return 0;
}*/
//********class question********
/*#include<iostream>
using namespace std;
class customer{
  private:
  int customerID;
  string FirstName;
  string lastName;
  string address;
  int creditLimit;
  public:
  customer(){};
  customer(int ID , string fName,string lName,string location , int c_limit);
  void setCustomerId(void){
    this->customerID = customerID;
  };
  void setFirstName(void){
    this->FirstName = FirstName;
  };
  void setLastName(void){
    this->lastName = lastName;
  };
  void setAddress(void){
    this->address = address;
  };
  void setCreditLimit(void){
    this->creditLimit = creditLimit;
  };
  void getCustomerData(void){
    cout<<"enter the id of the customer "<<endl;
     cin>>customerID;
     cout<<"enter te first name of the customer "<<endl;
     cin>>FirstName;
     cout<<"enter the last name of the customer"<<endl;
     cin>>lastName;
     cout<<"enter the address of the student"<<endl;
     cin>>address;
     cout<<"enter the credit limit of the customer"<<endl;
     cin>>creditLimit;
  };
  void Display(void){
    cout<<"so the customer with ID "<<customerID<<endl<<" has first name "<<FirstName<<endl<<" and last name as "<<lastName<<endl<<" . His address is " <<address<<endl<<" and  his credit limit is "<<creditLimit<<endl;
  };

};
customer :: customer(int ID , string fName,string lName,string location , int limit)
{
        string firstName = fName;
        int customerID = ID ;
       string lastName = lName;
       string address = location;
       int creditLimit = limit;
  };
int main(){
  customer C1;
  int ID ;
   string fName;
   string lName;
   string location ;
   int limit;
  C1 = customer(ID,fName,lName,location,limit);
  C1.getCustomerData();
  C1.Display();

return 0;
}*/
//******STATIC DATA MEMEBERS**********
//a type of variable which we can use for every object in class is lnown as static varibale and its got its own ways to be declared (make sure to declare it outside the class as well ,default value is always zero ,a count given below is hared by every object not only by one so thats why it will increment everytime we use a new object )
/*#include<iostream>
using namespace std;
class Employee{
  int id;
   static int count;
  public:
  int setData(void){
    cout<<"enter the vakue of id "<<endl;
    cin>>id;
    count++;
  }
  int getData(void){
    cout<<"so the id of the employee is "<<id<<" and count is "<<count<<endl;
  }
};
int Employee :: count;
int main(){
  Employee harry,rohan,tasha,adam;
  harry.setData();
  harry.getData();

  rohan.setData();
  rohan.getData();

  tasha.setData();
  tasha.getData();

  adam.setData();
  adam.getData();


return 0;
}*/
//********STATIC FUNCTION ***********
//a type of function which can access all types of static memebers only is known as static function
/*#include<iostream>
using namespace std;
class Employee{
  int id;
   static int count;
  public:
  int setData(void){
    cout<<"enter the vakue of id "<<endl;
    cin>>id;
    count++;
  }
  int getData(void){
    cout<<"so the id of the employee is "<<id<<" and count is "<<count<<endl;
  }
  static void getCount(void){
    //count<<id;   (it will throw an error as id is not a static varaible )
    cout<<"so the value of count is "<<count<<endl;
  }
};
int Employee :: count;
int main(){
  Employee harry,rohan,tasha,adam;
  harry.setData();
  harry.getData();
  Employee::getCount();

  rohan.setData();
  rohan.getData();
Employee::getCount();

  tasha.setData();
  tasha.getData();
  Employee::getCount();

  adam.setData();
  adam.getData();


return 0;
}*/
 //*******array of objects ********
 /*#include<iostream>
 using namespace std;
 class student{
  int rollNo ;
  int marks;
  public:
  int setrollNo(){
    marks = 100;
    cout<<"enter the roll no. of the student "<<endl;
    cin>>rollNo;
  }
  int getrollNo(){
    cout<<"so the roll no. of the student is "<<rollNo<<" with marks "<<marks<<endl;
  }
 };
 int main(){
  student class3[10];
  for(int i=0 ; i<10 ; i++){
    class3[i].setrollNo();
    class3[i].getrollNo();
  }
 
 return 0;
 }*/

 //******passing objects as functions *********
 /*#include<iostream>
 using namespace std;
 class complex{
  int a;
  int b ;
  public:
  void setData(int s1 , int s2){
    a = s1;
    b = s2;
  }
  void setDataSum(complex d1 , complex d2){ // d1 and d2 being objects of complex class and are used in a function
    a = d1.a + d2.a ;
    b = d1.b + d2.b ; 
  }
  void printNumber(){
    cout<<"so your complex number is "<<a<<" + "<<b<<"i"<<endl;
  }
 };
 int main(){
  complex x1 ,x2,x3;
  x1.setData(2,4);
  x1.printNumber();
  x2.setData(3,7);
  x2.printNumber();
  x3.setDataSum(x1,x2);
  x3.printNumber();

 
 return 0;
 }*/

 //*******friend function*******
 //a function outside the class cannot access the private data of the class normally,but  if we decalre it as friend function then it can do so ,  but it still cannot be called by using objects in class as it is a foriegn function which got little permissions ,contains objects as arguments , can be invoked without the help of any object ,can be decalred inside public or private part of the class 
 /*#include<iostream>
 using namespace std;
 class complex {
  int a;
  int b ; 
  public:
  int setNumber( int n1 , int n2){
    a = n1;
    b = n2;
  }
  void printNumber(){
    cout<<"so the complex number is "<<a<<" + "<<b<<"i"<<endl;
  }
  friend complex sumComplex(complex q1 , complex q2);

 };
 complex sumComplex(complex q1 , complex q2){
  complex q3;
  q3.setNumber((q1.a+q2.a),(q1.b+q2.b));
    return q3 ;
  

 }
 int main(){
   complex c1 ,c2 ,c3,sum;
   c1.setNumber(1,3);
   c1.printNumber();
   c2.setNumber(1,6);
   c2.printNumber();
  //c3.sumComplex(c1,c2);  can not call it directly as it is not declared in the class
  sum = sumComplex(c1,c2);
  sum.printNumber();
 return 0;
 }*/

 //*****making function of one class friend of another class 
 /*#include<iostream>
 using namespace std;
 class complex;
 class calculator{
  public:
   int add(int a, int b){
    return (a+b);
   }
   int sumRealComplex(complex,complex);
 };
 class complex{
  int a;
  int b;
  friend int calculator::sumRealComplex(complex,complex);
  public:
  int setNumber(int n1 , int n2){
    a = n1;
    b = n2;
  }
  int printData(){
    cout<<"so the complex number is "<<a<<" + "<<b<<"i"<<endl;
  }
 };
 int calculator::sumRealComplex(complex q1,complex q3){
    return (q1.a + q3.a);
 }
 int main(){
    complex x1,x2;
    x1.setNumber(2,6);
    x1.printData();
    x2.setNumber(7,9);
    x2.printData();
    calculator c3;
    int calc = c3.sumRealComplex(x1,x2);
    cout<<"so the sum of rea parts of x1 and x2 are "<<calc<<endl;
 return 0;
 }*/

 //******** making whole class as friend to another class

/*#include<iostream>
 using namespace std;
 class complex;
 class calculator{
  public:
   int add(int a, int b){
    return (a+b);
   }
   int sumRealComplex(complex,complex);
   int sumCompComplex(complex,complex);
 };
 class complex{
  int a;
  int b;
  friend class calculator;
  public:
  int setNumber(int n1 , int n2){
    a = n1;
    b = n2;
  }
  int printData(){
    cout<<"so the complex number is "<<a<<" + "<<b<<"i"<<endl;
  }
 };
 int calculator::sumRealComplex(complex q1,complex q3){
    return (q1.a + q3.a);
 }
 int calculator::sumCompComplex(complex q1,complex q3){
    return (q1.b + q3.b);
 }
 int main(){
    complex x1,x2;
    x1.setNumber(2,6);
    x1.printData();
    x2.setNumber(7,9);
    x2.printData();
    calculator c3;
    int calc = c3.sumRealComplex(x1,x2);
    cout<<"so the sum of rea parts of x1 and x2 are "<<calc<<endl;
    calculator c4;
    int calculus = c4.sumCompComplex(x1,x2);
    cout<<"so the sum of complex parts of x1 and x2 are "<<calculus<<endl;
 return 0;
 }*/
  //**********example of friend function ******
 /* #include<iostream>
  using namespace std;
  class Y;
  class X {
    int num1 ;
    public:
    int setValue(int a){
      num1 = a;
    }
    friend void add(X,Y);
  };
  class Y {
    int num2 ;
    public:
    int setData(int b){
      num2 = b;
    }
    friend void add(X,Y);
  };
  void add(X z1 , Y z2){
    cout<<"suming of numbers is "<<z1.num1 + z2.num2<<endl;
  };
  int main(){
    X c1;
    c1.setValue(4);
    Y c2;
    c2.setData(6);
   add(c1,c2);
  
  return 0;
  }*/

  //*********CONSTRUCTORS *********
  //constructor is a specail memeber function with the same name as of the class and it is used to initalize the objects of it's class .is is automatically invoked whenever an object is created .should be in the public secton of the class. don't have return types . we cannot refer to their address.
  /*#include<iostream>
  using namespace std;
   class complec{
    int a , b ;
    public:
     complec(void); //comstructor function a default one as it takes no parameter
     int printData(){
    cout<<"so the complex number is "<<a<<" + "<<b<<"i"<<endl;
  }

   };
   complec :: complec(void){
    a = 4;
    b = 45;
    cout<<"Doing great bro "<<endl;
   }
  int main(){
  complec q;
  q.printData();
  return 0;
  }*/
  //***********parameterized constructor *******
  /*default constructor: it takes no parameter and of couse is invoked or called automatically while permetarized constructor : it takes paarmeter and again can be invoked automatically ut takes parameter values */
  /*#include<iostream>
  using namespace std;
  class complex{
    int a;
    int b;
    public:
    complex(int , int );
    void printValue(){
      cout<<"so the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
  };
  complex::complex(int x,int y){
    a = x;
    b = y;
  };
  int main(){
  complex w(3,9); //implicit method

  w.printValue();
  complex s = complex(5,0); //explicit method
  s.printValue();
  return 0;
  }*/
  //*********8QUESTION******
  //create a function which takes two point objects and computes the distance between those two points
//Hint :make it a friend function
/*#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x ,y ;
    friend void distance(point o1 ,point o2 );
    public:
    point (int a ,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
void distance(point o1 ,point o2){
    float dist;
dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));   //pow used to take squre as 2 is given if this 2 was 3 then it meant its cube and just like that 
cout<<dist<<endl;
}
int main()
{
   point p(1,1);
   p.display();
   point q(2,2);
   q.display(); 
   distance(p,q);

    return 0;
}*/
//AGAIN
/*#include<iostream>
#include<cmath>
using namespace std; 
class point{
  int a;
  int b ;
  public:
  friend void distance(point q1,point q2);
  point(int x ,int y){
    a = x;
    b = y;
  }
  void display(){
    cout<<"so the point is ("<<a<<" , "<<b<<")"<<endl;
  }
};
void  distance (point q1 , point q2){
 float disc;
 disc = sqrt((pow(q2.a-q1.a,2))+(pow(q2.b-q1.b,2)));
 cout<<disc;
 }
int main(){
point zebra(3,8);
zebra.display();
point cheetah(9,5);
cheetah.display();
distance(zebra,cheetah);
return 0;
}*/
//***********CONSTRUCTOR OVERLOADING ********
/*#include<iostream>
using namespace std;
class complex{
  int a,b,c;
  
  public:
  complex(int x,int y ,int z=56){ //can use constructor with default arguments 
    a = x;
    b = y;
    c=z;
  }
  complex(int x ){  //the paraememters that match the function will use the constructor accordingly in more than two functions 
  a=x;
 b = 0;
  }
  void printNum(){
    cout<<"so the number is "<<a<< " + "<< b <<c<<endl;
  }
};
int main(){
complex c(3,6);
c.printNum();
complex b(2);
b.printNum();
return 0;
}*/
//*******DYNAMIC INITIALIZATION OF OBJECT *******
//we decide the type of the object when the user gives input like a value is int float etc 
/*#include<iostream>
using namespace std;
class BankDeposit{
  int principal;
  int years;
  int interestRate;
  int returnAmount;
  public:
  BankDeposit(){}
  BankDeposit(int p,int y, float r);
  BankDeposit(int p , int y , int r);
  void show();
};
BankDeposit :: BankDeposit(int p,int y, float r){
  principal = p;
  years = y ; 
  interestRate = r;
  returnAmount = principal;
  for(int i = 0; i<y ; i++){
    returnAmount= returnAmount * (1+interestRate);
  }
}
BankDeposit :: BankDeposit(int p,int y , int r){
  principal = p;
  years = y ; 
  interestRate = float(r)/100;
  returnAmount = principal;
  for(int i = 0; i<y ; i++){
    returnAmount= returnAmount * (1+interestRate);
  }
}
void BankDeposit :: show(){
  cout<<"principal amount was "<<principal<<" return value after "<<years<<" yaers is "<<returnAmount<<endl;
}
int main(){
BankDeposit bd1,bd2,bd3;
int p ,y ,R;
float r;
cout<<"enter the value of p ,y and r "<<endl;
cin>>p>>y>>r;
bd1 = BankDeposit( p , y , r);
bd1.show();

cout<<"enter the value of p ,y and R "<<endl;
cin>>p>>y>> R;
bd1 = BankDeposit( p , y , R);
bd1.show();
return 0;
}*/
//***********COPY CONSTRUCTOR**********
//our compiler allocates a default copy constructor to every program but firts it checks if the constructor is present or not 
/*#include<iostream>
using namespace std;
class number{
  int a = 2;
  public:
  number(){};
  number(int num){
    a = num;
  }
 void  Display(){
   cout<<"so the default value of number is "<<a<<endl;
  }
  number(number &obj){
    cout<<"this is a copy constructorrrrr"<<endl;
    a = obj.a;
  }
};
int main(){
number q1 , w2(67),y;
q1.Display();
w2.Display();
number r(w2); //copy constructior invoked 
y = w2;  //copy constructor wont be invoked bc y is already being called it should be called in a Conctructor
r.Display();
return 0;
}*/
//*****************DESTRUCTOR
//neither takes an argument nor retuens a value 
//can be called by compiler automatically
/*#include<iostream>
using namespace std;
int count = 0;
class num{
  public:
  num(){
    count++;
    cout<<"this is the time when the constructor is called for bject no. "<<count<<endl;

  }
  ~num(){
    cout<<"this is the time when the destructor is being called off for the object  no. "<<count<<endl;
    count--;
  }
};
int main(){
  cout<<"we are in main"<<endl;
  cout<<"this is the time we make first object"<<endl;
  num q1;
  cout<<"entering block"<<endl;
  {
    cout<<"creating object 1 and 2 "<<endl;
    num q2,q3;
    cout<<"exiting"<<endl;
  }
cout<<"reentering in main and working on first object"<<endl;
  
return 0;
}*/
// a FUNCTION WHICH FINDS SQUARE ROOT OF A NUMBER 
/*#include<iostream>
#include<cmath>
using namespace std;
float squareRoot(float num);
int main(){
 float number;
 cin>>number;
 float response;
 response = squareRoot(number);
 cout<<"so the square root of the given number is "<<response<<endl;
return 0;
}
float squareRoot(float num){
  float answer;
  answer = sqrt(num);
  return answer;
}*/
// ARRAY AS A PARAMETER OF A FUNCTION 
/*#include<iostream>
using namespace std;
void print(int A[] ,int length){
  for(int i = 0 ;i<5;i++){
    cout<<A[i]<<" ";
    
  }
}
int main(){
int arr[5]={6,22,57,8,9};
print(arr,5);
return 0;
}*/
//SEARCHING ARRAY BY LINAER SEARACH 
/*#include<iostream>
using namespace std;
void search( int A[] ,int n , int data ){
  for(int i=0;i<n;i++){
    if( A[i]==data){
      cout<<data<<" is present in array"<<endl;
      return ;
    }
  }
  cout<<"it is not present in array ";
}
int main(){
  int arr[] = {2,5,6,8,9};
search(arr,5,5);
return 0;
}*/
//SEARCHING ARRAY BY BINARY SEARCH 
/*#include<iostream>
using namespace std;
void BinarySearch( int A[] ,int n , int data ){
  int s=0;
  int e=n;

  while(s<=e){
    
    int mid = (s+e)/2 ;
    if(A[mid]==data){
      cout<<data<<" is present at index "<<mid<<endl;
      return;
    }else if (A[mid]>data){
      e = mid-1;
    }else{
      s=mid + 1;
    }
}
cout<<"not present";
}
int main(){
  int arr[] = {2,5,6,8,9};
BinarySearch(arr,5,5);
return 0;
}*/
//SORTING OF AN ARRAY THROUGH SELECTION METHOD (swap first element with last if smaller and keep doing it )
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
  cin>>arr[i];
}
for(int i=0; i<n-1; i++){
  for(int j=i+1 ; j<n; j++){
    if(arr[j] < arr[i]){
      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp ;
    }
  }
}
for(int i = 0; i<n; i++){
  cout<<arr[i]<<" ";
}
return 0;
}*/
//SORTING OF ARRAY USING BUBBLE METHOD ( reapetedly swap two adjacent elemnts if they are in wrong order )
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
  cin>>arr[i];
}
int counter=1;
while(counter<n-1){
  for(int i=0; i<n-counter; i++){
  if(arr[i]>arr[i+1]){
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
  }
  }
  counter ++;
}
for(int i = 0; i<n; i++){
  cout<<arr[i]<<" ";
}

return 0;
}*/
//SORTING OF AN ARRAY USING INSERTION METHOD 
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
  cin>>arr[i];
}
for(int i=1; i<n; i++){
  int current = arr[i];
  int j = i-1;
  while(arr[j]>current && j>=0){
    arr[j+1]=arr[j];
    j--;

  }
  arr[j+1] = current;


}
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
return 0;
}*/
//MAX OF iTH IN AN ARRAY 
/*#include<iostream>
using namespace std;
int main(){
int n;
int mx = 0;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
  cin>>arr[i];
}
for(int i=0; i<n; i++){
int mx = max(mx , arr[i]);
cout<<mx<<" ";
 
}
return 0;
}*/
//MERGING OF TWO ARRAYS INTO THIRD ONE 
/*#include<iostream>
using namespace std;
int main(){
int a[] = {1,4,6,7};
int b[] = {3,885,13,1,87};
int al = sizeof(a)/sizeof(a[0]);
int bl = sizeof(b)/sizeof(b[0]);
int cl = al +bl ;
int c[cl];
for(int i=0 ; i<al;i++){
  c[i] = a[i];
}
for(int i=0 ; i<bl;i++){
  c[al + i] = b[i];
}
for(int i=0 ; i<cl;i++){
  cout<< c[i]<<" ";
}
return 0;
}*/

//**********INHERITANCE IN OOP*********
/*#include<iostream>
using namespace std;
class employee{

  public:
  int id ;
  void getid(int ID){
    id = ID;
  
}
void setid(){
  cout<<"so the id of the employee is "<<id<<endl;
}
};
class programmer :public employee{
  public:
 int num = 10;
};
int main(){
employee s1,s3;
s1.getid(6);
s1.setid();
programmer s2;
cout<<s2.num<<endl;
s2.getid(9);
s2.setid();
return 0;
}*/

//********example of sinmple inheritance********
/*#include<iostream>
using namespace std;
class base{
  private:
  int data1;
  public:
  int data2;
  void getdata(){
     data1 = 3 ;
      data2 = 5 ;
  }
  int setdata1(){
    return data1;
  }
  int setdata2(){
    return data2;
  }
};
class derived:public base{
  int data3;
  public:
  int process(){
     return data3 = data2 * setdata1() ;
  }
  int display(){
    cout<<"data 1 is "<<setdata1()<<endl;
    cout<<"data2 is "<<data2<<endl;
    cout<<"product of them is "<<data3<<endl;
  }
};
int main(){
  derived b1;
  b1.getdata();
  b1.process();
  b1.display();

return 0;
}*/

//**********OPERATOR OVERLOADING EXAMPLE *********
//FINDING DISTENCE IN FEET AND INCHES BETWEEN TWO POINTS 
/*#include<iostream>
using namespace std;
class distance{
  double feet;
  double inches;
  public:
  distance(){};
  distance(){
    feet = 0;
    inches = 0 ;
  }
    distance(double f , double i){
      feet = f ;
      inches = i ;
    }
  
  distance operator+(distance param){
    distance t;
    t.feet = feet + param.feet ;
    t.inches = inches + param.inches ;
    return t ;

  }
  void display(){
    cout<<"feet "<<feet<<endl;
    cout<<"inches "<<inches<<endl;
  }
};
int main(){
   distance d1(6 ,3.4) ;
   distance d2(7,9.3);
   distance d3;
   d3 = d1 + d2 ;
   d3.display();
return 0;
}*/


//*********EXAMPLE 2***********
/*#include<iostream>
using namespace std;
class Complex
{
 private :
 double real;
 double imag;
 public:
 Complex () {};
 Complex (double, double);
 Complex operator + (Complex);
 void print();
};
Complex::Complex (double r, double i)
{
 real = r;
 imag = i;
}
Complex Complex::operator+ (Complex param)
{
 Complex temp;
 temp.real = real + param.real;
 temp.imag = imag + param.imag;
 return (temp);
}
void Complex::print()
{
 cout << real << " + i" << imag << endl;
}
int main ()
{
 Complex c1 (3.1, 1.5);
 Complex c2 (1.2, 2.2);
 Complex c3;
 
 c3 = c1 + c2; //use overloaded + operator
 c1.print();
 c2.print();
 c3.print();
 return 0;
}*/

//********MULTILEVEL INHERTITANCE ********
/*#include<iostream>
using namespace std;
class student{
  protected:
  int roll_no;
  public:
  void set_rollNo(int r){
       roll_no = r ;
  }
  void get_rollNo(){
    cout<<"so the roll no of the student is "<<roll_no<<endl;
      }
};
class Exam : public student{
  protected:
  float maths ;
  float english ;
  public:
  void set_marks(float m , float e){
       maths = m ;
       english = e ;
  }
  void get_marks(){
    cout<<"so the maths marks of the student are "<<maths<<endl;
     cout<<"so the english marks of the student are "<<english<<endl;
      }

};
class result : public Exam{
  protected:
  float percentage  ;
  public:
  void display(){
    get_rollNo();
    get_marks();
    cout<<"so the percentage of the student is "<<(maths + english)/2<<endl;
  }
};
int main(){
  result sana;
  sana.set_rollNo(345);
  sana.set_marks(70,89);
  sana.display();
return 0;
}*/
 
//**********MULTIPLE INHERITANCE ***********
/*#include<iostream>
using namespace std;
class base1{
  protected:
  int base1;
  public:
  void setbase1(int a){
    base1 = a ;
  }
};
class base2{
  protected:
  int base2;
  public:
  void setbase2(int a){
    base2 = a ;
  }
};
class base3{
  protected:
  int base3;
  public:
  void setbase3(int a){
    base3 = a ;
  }
};
class derived :public base1 ,public base2,public base3 {
  public:
  void show(){
    cout<<"so the value of base1 is "<<base1<<endl;
    cout<<"so the value of base2 is "<<base2<<endl;
    cout<<"so the value of base3 is "<<base3<<endl;
      }
};
int main(){
 derived spark;
 spark.setbase1(67);
 spark.setbase2(5643);
 spark.setbase3(6);
 spark.show();
return 0;
}*/

//*********EXERCISE ODF INHERITANCE***********
/*
 Create two classes :
1. SimmpleCalculator- Takes input of 2 number using a utility function and perfoms +,-,*,/
and displays the result using another function
2. ScientificCalculator - Takes input of 2 numbers using a utility functionand performs any four scientific operations
of your choice and displays the results using another functions

create a class hybridcalculator and inhherit it usinng these 2 classes:
Q1. What type of inheritance you are using ?--> Multiple
Q2. Which mode of inheritance are you using?--> public
Q3. Create an object of hybridcalculator and displaybresults of simple and scientific calculator.
Q4. How is code reusibility implemented?*/

/*#include<iostream>
#include<cmath>
using namespace std;
class simpleCalculator{
  public:
  double num1 ,num2 ;
  void getdata(){
    cout<<"enter the values of two numbers "<<endl;
    cin>>num1>>num2;
  }
  double operate(){
    char d;
    cout<<"enter the operation you want to perform (+,-,*,/) "<<endl;
    cin>>d;
    switch(d){
      case '+':
      cout<<"the addition of two numbers is "<<num1+num2<<endl;
      break;
      case '-':
      cout<<"the subtraction of two numbers is "<<num1-num2<<endl;
      break;
      case '*':
      cout<<"the multiplication of two numbers is "<<num1*num2<<endl;
      break;
      case '/':
      cout<<"the division of two numbers is "<<num1/num2<<endl;
      break;
      default:
      cout<<"invalid data"<<endl;
      break;
        }
  }

};
class ScientificCalculator{
  public:
  double num;
  void getdata(){
    cout<<"enter the value of number "<<endl;
    cin>>num;
  } 
  double operate(){
    char d;
    cout<<"enter the operation you want to perform (log(l),cos(c),sqrt(s),exp(e)) "<<endl;
    cin>>d;
    switch(d){
      case 'l':
      cout<<"the log of the given number is "<<log(num)<<endl;
      break;
      case 'c':
      cout<<"the cos of the number is "<<cos(num)<<endl;
      break;
      case 's':
      cout<<"the square root of the number is "<<sqrt(num)<<endl;
      break;
      case 'e':
      cout<<"the exponent of the number is "<<exp(num)<<endl;
      break;
      default:
      cout<<"invalid data"<<endl;
      break;
        }
  } 
};
class hybridCalculator : public simpleCalculator ,public ScientificCalculator{
  public:
  void choose(){
    char x;
    cout<<"enter which calculator you wanna use, c for simple amd s fr scientific  "<<endl;
    cin>>x;
    switch(x){
      case 'c':
      simpleCalculator::getdata();
      simpleCalculator::operate();
      break;
      case 's':
      ScientificCalculator::getdata();
      ScientificCalculator::operate();
      break;
      default:
      cout<<"invalid response"<<endl;
    }
  }
};
int main(){
hybridCalculator s1;
s1.choose();
return 0;
}*/

//********virtula class **********
/*
student ---> test -----> result
student -----> sport ----> result
*/
/*#include<iostream>
using namespace std;
class student{
  protected:
    int rollNo;
    public:
   void set_rollNo(int a){
      rollNo = a ;
          }
          void get_rollNo(){
            cout<<"so your roll no is "<<rollNo<<endl;
          }
};
class test : virtual public student{
  protected:
    float physics , maths ;
    public:
      void set_marks(float m1 ,float m2){
        physics = m1 ;
        maths = m2 ;
      }
      void get_marks(){
        cout<<"so the marks of subjects are :"<<endl
        <<"physics : "<<physics<<endl
        <<"maths : "<<maths<<endl;
      }
};
class sport : virtual public student{
  protected:
    float scores;
    public:
    void set_scores(float s){
      scores = s ;
    }
    void get_scores(){
      cout<<"so the scores of the student in game are "<<scores<<endl;
    }
};
class result : public test, public sport{
  protected:
   float total;
   public:
   void display(){
   total = physics + maths + scores ;
    get_rollNo();
    get_marks();
    get_scores();
    cout<<"so the total marks of the sudent are "<<total<<endl;
   }
};
int main(){
  result name;
  name.set_rollNo(234);
  name.set_marks(34.5 ,56.4);
  name.set_scores(45);
  name.display();
return 0;
}*/

//*********constructors in inheritance**********

/*#include<iostream>
using namespace std;
class base1{
  int data1;
  public:
  base1(int i){
    data1 = i ;
    cout<<"base1 class constructor called "<<endl;
  }
  void printdata(){
    cout<<"the value of data 1 is "<<data1<<endl;
  }
};
class base2{
  int data2;
  public:
  base2(int i){
    data2 = i ;
    cout<<"base2 class constructor called "<<endl;
  }
  void printdata(){
    cout<<"the value od data 2 is "<<data2<<endl;
  }
};
class derived : public base1 , public base2{
  int d1 , d2 ;
  public:
  derived(int q ,int d ,int y ,int u):base1(q),base2(d){
        d1 = y ;
        d2 = u ;
        cout<<"derived constructor is being called "<<endl;
  }
};
int main(){
   derived scam(3,6,87,453);
   scam.base1::printdata();
   
return 0;
}*/
//*********initialiozation list of constructor *******just a way of giving value to the class objects in construtor
/*#include<iostream>
using namespace std;
class test{
  int w ,r ;
  public:
  //test(int s ,int d):w(s),r(d)
  test(int s ,int d):w(s),r(d + s)
  //test(int s ,int d):w(s),r(d * 78)
  //test(int s ,int d):w(s),r(d + w)
  //test(int s ,int d):w(s + r),r(d)   it will give error as r was decalerd later even if we change their positiion in this lines it will still give error we have to declared them to solve the problem 

  {
    cout<<"constructir is being called "<<endl;
    cout<<"the value of a is "<<w <<" amd b is "<<r<<endl;
  }
};
int main(){
test harry (47,78);
return 0;
}*/

//***********REMINDING POINTERS ******** */
/*#include<iostream>
using namespace std;
int main(){
  //BASIC EXAMPLE 
 int a = 6 ;
 int* ptr = &a ;  //first adress os a is stored in ptr 
 cout<<"the value of ptr is "<<*(ptr)<<endl;  //here we got the value of a as we de-refrenced ptr means we got value from address . 
 //NEW KEYWORD (to dinamically initialize values )
 int *p = new int(78);
 cout<<"the value at address p is "<<*(p)<<endl;
 //can also add a whole block of code like arrays 
 int *arr = new int[3];
  arr[0] = 45 ;
  arr[1] = 36 ;
  arr[2] = 82 ;
 cout<<"the value of a arr[0] is "<<arr[0]<<endl;
 cout<<"the value of a arr[1] is "<<arr[1]<<endl;
 cout<<"the value of a arr[2] is "<<arr[2]<<endl;

 //DELETE OPERATOR / KEYWORD ( to free the block of space that we made using new keyword )

int *arr = new int[3];
  arr[0] = 45 ;
  arr[1] = 36 ;
  arr[2] = 82 ;
  delete[] arr;
 cout<<"the value of a arr[0] is "<<arr[0]<<endl;
 cout<<"the value of a arr[1] is "<<arr[1]<<endl;
 cout<<"the value of a arr[2] is "<<arr[2]<<endl;

return 0;
}*/
 //***********POinters to obejct 
 /*#include<iostream>
 using namespace std;
 class complex{
  int real ;
  int imaginary ;
  public:
  void setdata(int a , int b){
    real = a ;
    imaginary = b ;
  }
  void getdata(){
    cout<<"real part of matrix is "<<real<<endl;
     cout<<"imaginary part of matrix is "<<imaginary<<endl;
  }
 };

 int main(){
  complex c1 ;
  complex *ptr = &c1; 
 // c1.setdata(34,78);
  (*ptr).setdata(6,0);
  (*ptr).getdata();
   c1.setdata(34,78);
  c1.getdata();
 
 return 0;
 }*/
 //************ arrow operator ******
 /*#include<iostream>
 using namespace std;
 class complex{
  int real ;
  int imaginary ;
  public:
  void setdata(int a , int b){
    real = a ;
    imaginary = b ;
  }
  void getdata(){
    cout<<"real part of matrix is "<<real<<endl;
     cout<<"imaginary part of matrix is "<<imaginary<<endl;
  }
 };

 int main(){
  complex c1 ;
  complex *ptr = &c1; 
 // c1.setdata(34,78);
  (*ptr).setdata(6,0);
  ptr->getdata(); arrow means to dereference 
   c1.setdata(34,78);
  c1.getdata();
 
 return 0;
 }*/
 //***************ARRAYS OF OBJECT USING POITERS ***********
 /*#include<iostream>
 using namespace std;
 class shopItem{
  int price ;
  int id ;
  public:
  int setdata(int p , int i){
    price = i ;
    id = p;
  }
  void getdata(){
    cout<<"id of the item is "<<id<<endl;
    cout<<"so the price of the item is "<<price<<endl;
  }
 };
 int main(){
  int size = 3 ;
   shopItem *ptr = new shopItem[size] ;
   shopItem *ptrtemp = ptr ;
   for(int i = 0 ; i< size ; i++){
    int s ,q ;
    cout<<"enter the id and price of the item no. "<<i+1<<endl;
    cin>>s>>q ;
    (*ptr).setdata(s,q) ;
    ptr++ ;
   }
   for(int i = 0 ; i < size ; i++){
    cout<<"Item No . "<<i+1<<endl;
    (*ptrtemp).getdata();
    ptrtemp++ ;
   }
 return 0;
 }*/
 //**********************this keyword or pointer 
 /*#include<iostream>
 using namespace std;
 class test {
  int a ;
  public :
 test& setdata(int a){
     this->a = a ;
    }
    void getdata(){
      cout<<"the value of a is "<<a<<endl;
    }
 };
 int main(){
 test A ;
 A.setdata(567).getdata();
 A.getdata();
 return 0;
 }*/
 //***************************pointers to derived class****************
 /*#include<iostream>
 using namespace std;
 class base{
  public:
  int var_base ;
  void display(){
    cout<<"the value of the base class variable is "<<var_base<<endl;
  }
 };
 class derived : public base{
  public:
  int var_derived;
  void display(){
    cout<<"displaying the base class vraible "<<var_base<<endl;
    cout<<"the value of the derived class variable is "<<var_derived<<endl;
  }
 };
 int main(){
  base *base_class_pointer ;
  derived obj_derived;
  base obj_base ;
  base_class_pointer = &obj_base ;
  base_class_pointer = &obj_derived ; //pointing base class pointer to derived class object 
  base_class_pointer->var_base = 678 ;
  base_class_pointer->display();
  derived *derived_class_pointer ;
  derived_class_pointer = &obj_derived ;
  derived_class_pointer->var_base = 567;
  derived_class_pointer->var_derived = 67;
  derived_class_pointer->display();

 return 0;
 }*/
 //*****************VIRTUAL FUNCTION ********
 //it is besically used to over-ride the default values like if a base class is getting values of derived class object then it gonna simply run display of derived class with the help of virtual function(without it will display function of base class )
 /*#include<iostream>
 using namespace std;
 class base{
  public:
  int var_base = 997 ;
  virtual void display(){
    cout<<"the value of the base class variable is "<<var_base<<endl;
  }
 };
 class derived : public base{
  public:
  int var_derived = 467;
  void display(){
    cout<<"displaying the base class vraible "<<var_base<<endl;
    cout<<"the value of the derived class variable is "<<var_derived<<endl;
  }
 };
 int main(){
  base *base_class_pointer ;
  derived obj_derived;
  base obj_base ;
  base_class_pointer = &obj_derived ;
  base_class_pointer->display();

  
 return 0;
 }*/
 //*******************EXAMPLE OF VIRUAL FUNCTION ***********8
 /*#include<iostream>
 #include<cstring>
 using namespace std;
 class CWH{
  protected :
  string title ;
  float rating ;
  public:
  CWH(string s , float r){
    title = s ;
    rating =  r ;
  }
  virtual void display(){
    cout<<"yupta!!"<<endl;
  }
 };
 class CWH_video : public CWH{
  public :
    float videoLength ;
    CWH_video(string s , float r , float vl) : CWH( s ,  r){
      videoLength = vl ;
    }
    void display(){
      cout<<"so the title of the video is "<<title<<endl<<"with ratings of "<<rating<<" stars"<<endl<<"And lengt of te video is "<<videoLength<<" minutes "<<endl;
    }

 };
 class CWH_text : public CWH {
  public : 
  float wordLength ;
  CWH_text(string s , float r , float wl) :CWH(s,r){
    wordLength = wl ;
  }
  void display(){
      cout<<"so the title of the video is "<<title<<endl<<"with ratings of "<<rating<<" stars"<<endl<<"And the word length is "<<wordLength<<" per paragraph "<<endl;
    }
   };
 int main(){
  CWH *base_class_pointer ;
   CWH_video video_tutorials("python tutorials " , 4.6 , 20) ;
  CWH_text text_tutorials ("java tutorials " , 2.6 , 20);
  base_class_pointer = &video_tutorials ;
  base_class_pointer = &text_tutorials ;
  base_class_pointer->display();
   base_class_pointer->display();
   
 return 0;
 }*/
 //**************ABSTRATCT BASE CLASS  ********
 //(a base class that we make in a sense that we have to make derived classes from it is known as abstract base class{should have atkleast onr virtual function} and a pure virtual function is do nothing function that can't be used a display we there is no display function in derived classes  )
 /*#include<iostream>
 #include<cstring>
 using namespace std;
 class CWH{
  protected :
  string title ;
  float rating ;
  public:
  CWH(string s , float r){
    title = s ;
    rating =  r ;
  }
  virtual void display() = 0 ;  //pure virtual function 
   
  
 };
 class CWH_video : public CWH{
  public :
    float videoLength ;
    CWH_video(string s , float r , float vl) : CWH( s ,  r){
      videoLength = vl ;
    }
    void display(){
      cout<<"so the title of the video is "<<title<<endl<<"with ratings of "<<rating<<" stars"<<endl<<"And lengt of te video is "<<videoLength<<" minutes "<<endl;
    }

 };
 class CWH_text : public CWH {
  public : 
  float wordLength ;
  CWH_text(string s , float r , float wl) :CWH(s,r){
    wordLength = wl ;
  }
  void display(){
      cout<<"so the title of the video is "<<title<<endl<<"with ratings of "<<rating<<" stars"<<endl<<"And the word length is "<<wordLength<<" per paragraph "<<endl;
    }
   };
 int main(){
  CWH *base_class_pointer [2];
   CWH_video video_tutorials("python tutorials " , 4.6 , 20) ;
 CWH_text text_tutorials ("java tutorials " , 2.6 , 20);
  base_class_pointer[0] = &video_tutorials ;
base_class_pointer[1] = &text_tutorials ;
  base_class_pointer[0]->display();
   base_class_pointer[1]->display();
   
 return 0;
 }*/
 //*********************FILE I/O ****************
 /*
 the useful classes for working with files in c++
 1.fstream (base class)
 2.ifstream   (derived from fstream)
 3.ofstream  (derived from fstreambase)


 in order to work with files in c++ , you will have to open it , primarily there are 2 ways to open a file 
 1.using the constructor 
 2.using the memer function open() of the class 
 */  

 /*#include<iostream>
 #include<fstream>
 #include<cstring>
 using namespace std;
 int main(){
  //string str1 = "what a day !" ;
  string str2 ;
  //writing in a text file using constructor
 // ofstream out("sample.txt");
 // out<<str1 ;
 out.close() ; //closing the link between that file ad our c++ program 
  //reading from a file 
ifstream in("sample.txt") ;
in>>str2 ;
getline(in , str2) ;
//getline(in , str2) ;
//getline(in , str2) ;
cout<<str2 ;
 return 0;
 }*/
 //********************using open() function for opening a file  */
/*#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
  ofstream out ;
  out.open("sample.txt") ;
  out<<"well its working like that ";
  out.close() ;
  ifstream in ;
  string st , st2 ;
  in.open("smaple.txt");
  //using while loop to read all  lines  in file 
  while(in.eof()== 0){
    getline(in , st);
    cout<<st<<endl; 
  }
return 0;
}*/
//********************TEMPLATES IN C++*************
/*#include<iostream>

using namespace std;
template <class T>
class vector{
  public:
  T *arr ;
  int size ;
  vector(int m){
    size = m ;
    arr = new T[size] ;
  }
  T dotProduct(vector &v){
    T d = 0 ;
    for(int i = 0 ; i < size ; i++){
      d = d +  this->arr[i] * v.arr[i] ;
    }
      return d ;
  }
};
int main(){
 vector <float>v1(3);
 v1.arr[0] = 4.6;
 v1.arr[1] = 5.38;
 v1.arr[2] = 1;
 vector <float>v2(3);
 v2.arr[1] = 0;
 v2.arr[2] = 1.3;
 v2.arr[0] = 1;
 float a = v1.dotProduct(v2);
 cout<<a ;

return 0;
}*/
//******************TEMPLATES WITH MULTIPLE PARAMETERS *********
/*#include<iostream>
#include<cstring>
using namespace std;
template <class T1, class R2>
class sta{
  public:
    T1 data1 ;
    R2 data2 ;
    sta(T1 a , R2 b){
      data1 = a ;
      data2 = b ;
    }
    void display(){
      cout<<"the name of the girl is "<<data1<<endl<<"height of the girl is "<<data2<<endl;
    }
};
int main(){
  sta <string , float>star("rosa ninean" , 5.6) ;
  star.display();

return 0;
}  */
//*****************TEMPLATES WITH DEFAULT PARAMETERS **********
/*#include<iostream>
using namespace std;
template<class t1 = int , class t2 = float >
class potter{
  public:
  t1 data1 ;
  t2 data2 ; 
  potter(t1 a , t2 b){
    data1 = a ;
    data2  =b ;
  }
  void display(){
    cout<<"the value od data1 id "<<data1<<endl;
    cout<<"the value of data2 is "<<data2<<endl;
  }
};
int main(){
    potter< > h(4  ,  .078);
    h.display();
return 0;
}*/
///**********function template we can use different data types in saame function using function template
/*#include<iostream>
using namespace std;
template<class  T1 , class T2>
float avgFun(T1 a , T2 b){
  float avg = (a+b)/2.0 ; 
  return avg ; 
}

//**************making swap function as wll 

template<class t>
int swapp(t &a , t &b){
  int temp = a ;
  a = b ;
   b = temp ;
}
int main(){
   float f ;
   f  = avgFun(4 ,7.7 );
  cout<<"average of two numbers is "<<f<<endl ; 
  int x =5 ,  y = 9 ;
  swapp(x , y) ;
  cout<<x<<endl<<y ;
return 0;
}*/
// ********************  making  template functions out of the class 
/*#include<iostream>
using namespace std;
template<class t1 = int , class t2 = float >
class potter{
  public:
  t1 data1 ;
  t2 data2 ; 
  potter(t1 a , t2 b){
    data1 = a ;
    data2  =b ;
  }
  void display();
};
template<class t1 , class t2 >
void potter<t1 , t2 > :: display(){
    cout<<"the value od data1 id "<<data1<<endl;
    cout<<"the value of data2 is "<<data2<<endl;
}
int main(){
    potter< > h(4  ,  .078);
    h.display();
return 0;
}*/
//**********************function overloading ******************
/*#include<iostream>
using namespace std;
template <class T>
void display(T a){
  cout<<"thsi is a tempelized function "<<a<<endl;
}
void display(int a){
  cout<<"thsi is a normla function "<<a<<endl;
}

int main(){
display(8) ;  //exact match takes the highest priority (now the function value is int so normla function wll be displayd if we cahnge the value then tenmplate func will be displayed )
return 0;
}*/

//*****************vectors in STL C++ ********************
/*#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
  for(int i = 0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
   // cout<<v.at(i)<<" "; //will teel us where the element is present 
  }
  cout<<endl;
}
int main(){
  vector<int> vec1 ;  //zero length vector 
  //vector<char> vec2(4) 4-eleemnt character vector 
  //vector<char> vec3(vec2) 4 element char vector from vec 2
 // vector<int> vec4 (7,13) ;7 element vector of 13s (13 will be displayed 7 times )
  //display(vec4);

  int element;
  int size ;
  cout<<"enter the value of size"<<endl;
  cin>>size;
  for(int i = 0 ; i <size ; i++){
    cout<<"enter the value of element "<<i<<endl;
    cin>>element;
    vec1.push_back(element);   //using push_back vector method
  }
 vec1.pop_back(); //will remove last element of the vector 
  display(vec1) ;
  vector<int>  :: iterator iter = vec1.begin();
  vec1.insert(iter+1,5 , 8776); //insert method of the vector  & 5 copies will be inserted after 1
  display(vec1) ;
return 0;
}*/
//*************LIST IN C++**********************
/*#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
      list<int> :: iterator it;
      for(it = lst.begin();it!=lst.end();it++){
        cout<<*it<<"  ";
      }
      cout<<endl;
}
int main(){
   list<int> list1 ;  //list of zero length
   list<int> list2(3);   //empty list of size 7
   list1.push_back(6);
   list1.push_back(48);
   list1.push_back(9);
   list1.push_back(8);
   list1.push_back(142);
   display(list1);
   //list1.remove(48);    remove method
   //list1.pop_front();
   //list1.sort();   sorting the list
   //display(list1);
   list<int>::iterator iter;
   iter = list2.begin();
   *iter = 67 ;
   iter++ ;
   *iter = 3 ;
   iter++ ;
   *iter = 90 ;
   iter++ ;
   display(list2);
   //merding the two lists
   cout<<"after merging"<<endl;
   list1.merge(list2);
   display(list1);
   //reversing 
   cout<<"after reversing"<<endl;
   list1.reverse();
   display(list1);
   return 0;
}*/
//***********MAP IN STL C++*************
/*#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
//maps are associative arrays 
map<string , int> marksMap;
marksMap["sabashta"] = 46 ;
marksMap["halim"] = 8 ;
marksMap["adam"] = 92 ;
marksMap["haya"] = 14 ;
marksMap.insert({{"taliya",46}, {"fateh",79}}) ;
map<string , int>::iterator iter ;
for(iter = marksMap.begin();iter!=marksMap.end();iter++){
  cout<<(*iter).first<<" "<<(*iter).second<<endl;
}
return 0;
}*/
//************functional objects in c++ **********
//function object(functor) : function wrapped in a class so that it is available as an object
/*#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
  int arr[] = {3,81,1,5,96,13,6,8,2,34};
  //sort(arr,arr+10) ;
  sort(arr,arr+10 , greater<int>() ) ;
  for(int i=0 ; i<10 ; i++){
    cout<<arr[i]<<" " ; 
  }
return 0;
}*/
//***************** 2-D arrays ********
/*#include<iostream>
using namespace std;
int main(){
  int arr[4][4];
  for(int i=0 ;i<4 ; i++){
    for(int j=0 ; j<4 ; j++){
      cin>>arr[i][j];
    }
  }
  cout<<"so the final output is "<<endl;
  for(int i=0 ;i<4 ; i++){
    for(int j=0 ; j<4 ; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

return 0;
}*/

//*************************linked list *******
/*(a linear data structure which is formed by the collection of nodes in node there is data ad the next node's address(pointer of node type ) )A dynamic data structure can grow or shrink at runtime (no waste of mamory, inserction and delection is easy) TYPES OF LINKED LIST 
* sigly linkedlist
*doubly linkedlist 
*circular linkedlist  */
/*#include<iostream>
using namespace std;
class Node{
  public:
  int data = 93;
  Node* next ;
  Node(int data){   //constructor 
    this->data = data ;
    this->next = NULL ;
  }

};
void InsertAtHead(Node* &head , int d){
      //creating new node
      Node* temp = new Node(d);
      temp->next = head ;
      head = temp ;
}
void InsertAtTail(Node* &head , int d){
  Node* temp = new Node(d);
  temp->next = head;
  head = temp ; 
}
// void print(Node* &head){
//   Node* temp = head ;
//   while(temp != NULL){
//     cout<<temp->data<<endl;
//     temp = temp->next;
//   }
//   cout<<endl;
// }
void print(Node* &head){
  Node* temp = head ;
  while(temp != NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
  }
  cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    //cout<<node1 -> data <<endl;
    //cout<<node1->next<<endl;
  Node* head  = node1 ;
// Node* tail = node1 ;
    print(head);
    //InsertAtHead(head , 20) ;
    InsertAtTail(head, 20);
    print(head);
InsertAtTail(head, 30);
    print(head);

return 0;
}*/
//********************linked list 
/*#include<iostream>
using namespace std;
class node{
  public:
  int data ;
  node* next ;
  node(int val){
    data = val ;
    next = NULL ;
  }
};
 void insertAtTail(node* &head , int val){
   node* n = new node(val);
   if(head == NULL){
    head =  n ;
    return ;
   }
   node* temp = head ;
   while(temp->next != NULL){
    temp = temp->next ;
  
   }
   temp->next = n ;
 }
 void insertAtHead(node* &head , int val){
  node* n = new node(val);
  n->next = head ;
  head = n ;
 }
 bool search(node* head , int key){
  node* temp = head ;
  while(temp->next != NULL){
    if(temp->data == key){
      cout<<"your key is found "<<endl;
    }   
    temp = temp->next ;

    }
    return false ;
  }
  void deleteAtHead(node* &head){
    node* todelete = head ;
    head = head->next ;
    delete todelete ;
  }
  void deletion(node* &head , int del){
    node* temp = head ;
    while(temp->next->data != del){
      temp = temp->next ;
    }
  node* todelete = temp->next ;
  temp->next = temp->next->next ;
  delete todelete ;

  }
  
 void display(node* head){
  node* temp = head ;  // a temp poinetr starting from haed
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next ; 
  }
  cout<<endl;
 }
int main(){
  node* head = NULL ;
  insertAtTail(head , 10);
  insertAtTail(head , 20);
  insertAtTail(head , 30);
   display(head);
  insertAtHead(head , 40);
  display(head);
  cout<<search(head , 60)<<endl;
  search(head, 20);
  deletion(head , 20); // gonna get an error if delete the first node but can delete from end easily
  //deleteAtHead(head);  //deleting from head
  display(head);

return 0;
}*/
//***********operator overloading 
// we can perform operations on data tupes like int a + b (biuld in data types )_but we cannot perform them on aa or cc (objects taht we make ) thats why operator overloading was intrioduced 
// now if we overload the function like cc = aa + bb
// which means that the plus is acting like a fuinction here and with the reference of aa we are calling plus operator function and passing bb as an argument and in return the value will be stored in cc (function with argument and with return) .
//we will pass bb as an argument  -->>
            //  demo(return type) operator+(demo bb){
            //     demo cc ;
            //     cc.a = a + bb.a ;
            //     return cc ;
            //  }
            // void operator++(){
            //   x = x+1 ;   //for ++a
            // }
            //void operator++(){
            //   x = x+1 ;   //for a++
            // }
            //assignment opertaor aa=bb
            // void operator=(demo bb){
            //   a=bb.a ;
            // }
            //a function with argument and with return (demo is a class type in above code )
//adding complex numbers using operator overloading 
/*#include<iostream>
using namespace std;
class complex{
  int r , i ;
  public:
  int getdata(){
    cout<<"enter the value of real :"<<endl;
    cin>>r;
    cout<<"enter the value of imaginary"<<endl;
    cin>>i;
  }
  void display(){
    cout<<r<<" + "<<i<<"i"<<endl;
  }
  complex operator+(complex bb){
    complex cc ;
    cc.r = r + bb.r ;
    cc.i = i + bb.i ;
    return cc ;
  }
};
int main(){
  complex aa ,bb ,cc ;
  aa.getdata();
  bb.getdata();
  cc = aa+bb ;
  aa.display();
  bb.display();
  cc.display();

return 0;
}*/
//************tower of hanoi (recurssion)***************
//let we have 3 towers A, B and C .we want to move disks from A to C with the help of B . so here A = source , B = auxillary and C = destination . so we will move our end-1 disks from source to aux and then finally to destination by using recurssion function .
/*#include<iostream>
using namespace std;
void towersOfHanoi(int start , int end , char source , char aux , char destination){
    if(start > end ){
      return ;
    }
    towersOfHanoi(start ,end-1 , source , destination , aux) ;
    cout<<"move disk "<<end<<" from "<<source<<" to "<<destination<<endl;
    towersOfHanoi(start , end-1 , aux, source , destination);
    }
int main(){
     towersOfHanoi(1,5,'A','B','C');

return 0;
}*/
//***********recurssion ***********
//when a function calls its own self to make the code esaier its called recurssion 
//let's find factorial using recurssion function 
/*#include<iostream>
using namespace std;
int factorial(int n ){
  if (n==0){  //base condition to decide where to stop
    return 1;
  }
  
  int f = n * factorial(n-1);
  
}
int power(int x){
  if(x==0){
    return 1;
  }
  int po= 2 * power(x-1);
}
int main(){
  cout<<"enter the value of factorial no. you want"<<endl;
  int n;
  cin>>n;
       cout<<factorial(n)<<endl;
       cout<<"enter the power value"<<endl;
       int p;
       cin>>p;
      cout<< power(p);

return 0;
}*/