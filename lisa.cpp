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

#include<iostream>
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
}