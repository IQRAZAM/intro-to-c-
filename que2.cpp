/*#include<iostream>
using namespace std;
int main(){
    //Q1 write a program to check whether a character is alphabet digit or special character 
    char q;
    cout<<"enter the type of character"<<endl;
    cin>>q;
    if((q>='a' && q<='z') || (q>='A' && q <= 'Z') ){
        cout<<"the givem character q is an alphabet";
    }else if(q>='0' && q<='9'){
        cout<<q<<" is a number"<<endl;
    }else{
        cout<<q<<" is a special character"<<endl;
    }
    return 0;
}*/
  

  //Q#2 write a program to reverse a string enter by user 
  
  /*#include<iostream>
  #include<string>
  using namespace std;
  int main(){
   string input;
   cout<<"enter the string you want to enter"<<endl;
   cin>>input;
   for(int i=input.length()-1;i>=0;i--){
    cout<<input[i];
   }
  return 0;
  }*/

    //Q3 write a program to calculate total marks percemtage and division of the student 
    /*#include<iostream>
    using namespace std;
    int main(){
    int physics,chemistry,english,biology,math;
    float percentage,totalmarks;
    cout<<"enter the physics marks of student"<<endl;
    cin>>physics;
    cout<<"enter the chemistry marks of student"<<endl;
    cin>>chemistry;
    cout<<"enter the english marks of student"<<endl;
    cin>>english;
    cout<<"enter the biology marks of student"<<endl;
    cin>>biology;
    cout<<"enter the math marks of student"<<endl;
    cin>>math;
    totalmarks = physics+chemistry+biology+english+math;
    cout<<"so the total marks of the student are "<<totalmarks<<endl;
   // percentage = totalmarks / 500;
    cout<<"percentage of the student is "<<(totalmarks / 500)*100<<endl;
    
    return 0;
    
    }*/

    //Q# 4 write a program to find if a student is eligible for admission in engineer clg based on a  specific criteraia 
    /*#include<iostream>
    using namespace std;
    int main(){
    float percentage,fscMarks,testMarks,fscPerc,testPerc,totalPerc;
    cout<<"enter you FSC marks"<<endl;
    cin>>fscMarks;
    cout<<"enter marks you got in your test "<<endl;
    cin>>testMarks;
    fscPerc = (fscMarks/1100) * 40;
    testPerc = (testMarks/200) * 60;
    totalPerc  = fscPerc+testPerc ;
    cout<<"so total percentage you got is "<<totalPerc<<endl;
   if(totalPerc >= 90){
    cout<<"you are eligible for admission in this clg"<<endl;
   }else{
    cout<<"you are not eligible for admission here"<<endl;
   }
    return 0;
    }*/
//Q5 write a game of guess a number
/*#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
 srand(time(0));
 int guess = rand() % 1001;
 int user;
 do{
    cout << "I'm thinking of a number between 0 and 1000. Can you guess it? ";
    cin >> user;
    if(user > guess){
        cout<<"too high tey again"<<endl;

    }else if(user < guess){
        cout<<"too low try again"<<endl;
    }
 }while(user!=guess);
 cout<<"you guessed it!"<<endl;
return 0;
}*/
//Q6 calculate the product of three integers 
/*#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter the value of three iuntegers"<<endl;
    cin>>num1>>num2>>num3;
    int result = num1 * num2 * num3;
    cout<<"so the product of three numbers is "<<result<<endl;
}*/
//q7 write a program that perform some arthmetics on three numbers then give smallest and largest among them 
/*#include<iostream>
using namespace std;
int main(){
int num1,num2,num3;
cout<<"enter the values of all three numbers "<<endl;
cin>>num1>>num2>>num3;
int sum = num1 +num2+num3;
int average = (num1 + num2 +num3)/3 ;
int product  = num1 * num2 * num3 ;
int smallest = num1;
int largest = num1;
if(num2 < smallest) {
    smallest = num2;
}

if(num2 > largest){
    largest = num2;
}
if(num3 < smallest){
    smallest = num3 ;
    }
if(num3 > largest){
    largest = num3;
}
cout<<"the sum of three numbers is "<<sum<<endl;
cout<<"the averahe of the three numbers is "<<average<<endl;
cout<<"the product of tree numbers is "<<product<<endl;
cout<<"the largest of three num is "<<largest<<endl;
cout<<"the smallest of them is "<<smallest<<endl;
return 0;
}*/
//Q 8 write a program to find diameter , circumference ad area of a circle in output statments 
/*#include<iostream>
using namespace std;
int main(){
float radius;
cout<<"enter the radius of the cicrle "<<endl;
cin>>radius;
cout<<"so the diameter of the circle is "<<radius + radius<<endl;
cout<<"ares of the circle is "<<3.14 * radius * radius <<endl;
cout<<"circumference of the circe is "<<2 * 3.14 * radius <<endl;
return 0;
}*/
//Q9 make circle  patterns 

/*#include <iostream>
using namespace std;

int main() {
    int radius = 7; // You can change the radius of the circle here
    int x, y;

    for (int i = -radius; i <= radius; i++) {
        for (int j = -radius; j <= radius; j++) {
            x = i;
            y = j;

            // Check if the current point is inside the circle
            if (x * x + y * y <= radius * radius) {
                // Check if the current point is on the circumference of the circle
                if (x * x + y * y == radius * radius && (x == 0 && y == 0)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}*/
// arrow pattern 
/*#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=9; i++){
    for(int j=1; j<=5; j++){
        if(j==3 || j>=4-i && i<=3 && j<= 2+i && i<=3){
            cout<<" * ";
        }else{
            cout<<"   ";
        }
    }
    cout<<endl;

}
return 0;
}*/
// 
/*#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main(){
int count; // declaring a LOCAL variable
 for(count = 1; count <=65; count++)
 cout<< "*";
 cout<<endl;
   
return 0;
}*/
/*Q21 A class of ten students took a quiz. The grades (0 to 100) for this quiz are available to
you. Calculate and display the total of the grades and the class average.*/

/*#include<iostream>
using namespace std;
int main(){
int NumStudent = 10;
int total = 0;
int marks ;
for(int i =0 ; i<NumStudent ; i++){
    cout<<"enter marks of student "<<i+1<<":";
    cin>>marks;
    total = total + marks;
}
cout<<"so total marks of the students are "<<total<<endl;
double average = static_cast <double>(total)/NumStudent;
cout<<"average is : "<<average<<endl; 
return 0;
}*/
//Q 22 Develop a class average program that processes grades for an arbitrary number of students each time it’s run.
/*#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
srand(time(0));
int studentNum = rand() % 100+1 ;
cout<<studentNum<<endl;
int total = 0;
int marks ;

for(int i=0;i<studentNum;i++){
    cout<<"enter the marks of student : "<<i+1<< " ";
    cin>>marks;
    total = total + marks ;
}
double average = static_cast <double> (total)/studentNum ;
cout<<"so the total marks of "<<studentNum<<" no. of stuents randomly generated are "<<total<<" and the average is "<<average<<endl;
return 0;
}*/
/*Q23 A college offers a course that prepares students for the state licensing exam for real
estate brokers. Last year, ten of the students who completed this course took the exam.
The college wants to know how well its students did on the exam. You’ve been asked to
write a program to summarize the results. You’ve been given a list of these 10 students.
Next to each name is written a 1 if the student passed the exam or a 2 if the student
failed.*/
/*#include<iostream>
using namespace std;
int main(){
int marks;
int a1=0,a2=0,pass=0,fail=0 ;
for(int i=0;i<10;i++){
    cout<<"enter the marks of the student "<<i+1<<" out of 10 ";
    cin>>marks;
    if(marks<5){
        fail = fail+1;
    }else{
        pass = pass+1;
    }
}
cout<<"sp the number of pass students is "<<pass<<endl;
cout<<"no. of fail studnets is "<<fail<<endl;
if(pass>8){
    cout<<"as no. of passed student is greater than 8 so bonus to instructoe!!!"<<endl;
}
return 0;
}*/
//Q24 
/*#include<iostream>
using namespace std;
class cla{
    public:
   int  result;
   int X(){
    cout<<"result is : " <<result;
       }
};
int main(){
cla c1;
c1.result=78;
c1.X();


return 0;
}*/
#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=9;i++){
    for(int j=1;j<=5;j++){
        if(j<=i && j<=10-i) {
            cout<<" * ";
        } else{
            cout<<"   ";
        }

          }
          cout<<endl;
}
return 0;
}

    