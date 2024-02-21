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