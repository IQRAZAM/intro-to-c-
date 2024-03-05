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
      cout<<"you will get a kid pas sto the party"<<endl;
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

  //********Default arguments *********
//the valuse which are given by defaultt
#include<iostream>
using namespace std;
int main(){
  float moneyBack();
float moneyBack(int mainMoney , float interest = 1.009){
  return mainMoney + interset;
}
  int money = 1000;
  cout<<"so the value of "<<money<< " Rs is ,with interest "<<moneyBack(money)<<endl;

return 0;
}