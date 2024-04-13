/*#include<iostream>
using namespace std;
int main(){
    //Q1 write a program to check whether a character is alphabet digit or special character 
    char q;
    cout<<"enter the type of character"<<endl;
    cin>>q;
    if((q>='a' && q<='z') || (q>='Z' && q <= 'Z') ){
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
    Q