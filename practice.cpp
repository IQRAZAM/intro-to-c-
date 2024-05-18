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
  cout<<"address of a "<<b<<endl;
  cout<<"address of a "<<&z<<endl;
  cout<<"the value of b operator is "<<*b<<endl;
  //pointer to pointer (a varaibble which store the address of a pointer itself )
  int** c = &b;
  cout<<c<<endl;
return 0;
}*/
// using namespace std;
// int main(){
// int marks [] = {44,24,44,2,255,67,7,55,4,23,55};
//cout<<marks[4]<<endl#include<iostream>
//;
//cout<<marks[0]<<endl;
//cout<<marks[10]<<endl;
//cout<<marks[3]<<endl;
//can cahne the value of an array
//marks[10] = 29;
//cout<<marks[10]<<endl;
//making loops in arrays 
/*for(int i=0;i<11; i++){
   cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
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
//recurring function 
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
  for(int i =0; i<s.length();i++){
    if(s.at(i) == '0'){
      s.at(i)=='1';
    }else{
      s.at(i)=='0';
    }
      
    
    }
  }

int main(){
binary num;
num.giveBinary();
num.chk_binary();
num.ones_complement();
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
  //constructor is a specail memeber function with the same name as of the class and it is used to initalize the obje cts of it's class .is is automatically invoked whenever an object is created .should be in the public secton of the class. don't have return types . we cannot refer to their address.
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
//oue compiler allocates a default copy constructor to every program but firts it checks if the constructor is present or not 
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