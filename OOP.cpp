/*q1 (Account Class) Create an Account class that a bank might use to represent customers’ bank
accounts. Include a data member of type int to represent the account balance. [Note: In subsequent
chapters, we’ll use numbers that contain decimal points (e.g., 2.75)—called floating-point values—
to represent dollar amounts.] Provide a constructor that receives an initial balance and uses it to intialize the data member. The constructor should validate the initial balance to ensure that it’s greater
than or equal to 0. If not, set the balance to 0 and display an error message indicating that the initial
balance was invalid. Provide three member functions. Member function credit should add an
amount to the current balance. Member function debit should withdraw money from the Account
and ensure that the debit amount does not exceed the Account’s balance. If it does, the balance
should be left unchanged and the function should print a message indicating "Debit amount exceeded account balance." Member function getBalance should return */
 /*#include<iostream>
 using namespace std;
 class Account{
    private:
    double accountBalance;
    public:
    Account(double balance){
        if(balance<=0){
            cout<<"it is invalid balance"<<endl;
        }else{
        accountBalance = balance ;
    }
    }
    double credit(double c){
      return  accountBalance = accountBalance + c ;
    }
    double debit(double d){ 
        if(d > accountBalance){
            cout<<"it is invlid withdrawal amount"<<endl;
        }else{
            accountBalance = accountBalance - d ;
        }
    }
    void getBalance(){
        cout<<"so the ramaining balance in your account is "<<accountBalance<<endl;
    }

 };
 int main(){
 Account a1(20000) ;
 Account a2(900000);
 double c,d;
 cout<<"enter the amount you wanna enter"<<endl;
 cin>>c;
 a1.credit(c);
 a1.getBalance();
 cout<<"enter the amount you wanna withdraw"<<endl;
 cin>>d;
 a2.debit(d);
 a2.getBalance();
 return 0;
 }*/
    //Q2 CLASS OF INVOIVE 
  /*#include <iostream>
#include <string>

using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    int pricePerItem;

public:
    // Constructor
    Invoice(string partNumber, string partDescription, int quantity, int pricePerItem) {
        setPartNumber(partNumber);
        setPartDescription(partDescription);
        setQuantity(quantity);
        setPricePerItem(pricePerItem);
    }

    // Function to set the part number
    void setPartNumber(string partNumber) {
        this->partNumber = partNumber;
    }

    // Function to get the part number
    string getPartNumber() {
        return partNumber;
    }

    // Function to set the part description
    void setPartDescription(string partDescription) {
        this->partDescription = partDescription;
    }

    // Function to get the part description
    string getPartDescription() {
        return partDescription;
    }

    // Function to set the quantity
    void setQuantity(int quantity) {
        if (quantity > 0) {
            this->quantity = quantity;
        } else {
            this->quantity = 0;
        }
    }

    // Function to get the quantity
    int getQuantity() {
        return quantity;
    }

    // Function to set the price per item
    void setPricePerItem(int pricePerItem) {
        if (pricePerItem > 0) {
            this->pricePerItem = pricePerItem;
        } else {
            this->pricePerItem = 0;
        }
    }

    // Function to get the price per item
    int getPricePerItem() {
        return pricePerItem;
    }

    // Function to calculate and return the invoice amount
    int getInvoiceAmount() {
        return quantity * pricePerItem;
    }
};

int main() {
    // Create an Invoice object
    Invoice invoice1("123", "Widget", 5, 10);

    // Test the member functions of the Invoice class
    cout << "Part Number: " << invoice1.getPartNumber() << endl;
    cout << "Part Description: " << invoice1.getPartDescription() << endl;
    cout << "Quantity: " << invoice1.getQuantity() << endl;
    cout << "Price per Item: " << invoice1.getPricePerItem() << endl;
    cout << "Invoice Amount: " << invoice1.getInvoiceAmount() << endl;

    return 0;
}*/
 /* Q3 (*Employee Class) Create a class called Employee that includes three pieces of information as
data members—a first name (type string), a last name (type string) and a monthly salary (type
int). [Note: In subsequent chapters, we’ll use numbers that contain decimal points (e.g., 2.75)—
called floating-point values—to represent dollar amounts.] Your class should have a constructor that
initializes the three data members. Provide a set and a get function for each data member. If the
monthly salary is not positive, set it to 0. Write a test program that demonstrates class Employee’s
capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Employee a 10 percent raise and display each Employee’s yearly salary aga*/
/*#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string firstName;
    string lastName;
    int monthlySalary;

public:
    // Constructor
    Employee(string firstName, string lastName, int monthlySalary) {
        setFirstName(firstName);
        setLastName(lastName);
        setMonthlySalary(monthlySalary);
    }

    // Function to set the first name
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    // Function to get the first name
    string getFirstName() {
        return firstName;
    }

    // Function to set the last name
    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    // Function to get the last name
    string getLastName() {
        return lastName;
    }

    // Function to set the monthly salary
    void setMonthlySalary(int monthlySalary) {
        if (monthlySalary > 0) {
            this->monthlySalary = monthlySalary;
        } else {
            this->monthlySalary = 0;
        }
    }

    // Function to get the monthly salary
    int getMonthlySalary() {
        return monthlySalary;
    }

    // Function to calculate and return the yearly salary
    int getYearlySalary() {
        return monthlySalary * 12;
    }

    // Function to give the employee a 10% raise
    void giveRaise() {
        monthlySalary = monthlySalary * 1.1;
    }
};

int main() {
    // Create two Employee objects
    Employee employee1("John", "Doe", 3000);
    Employee employee2("Jane", "Doe", 4000);

    // Test the member functions of the Employee class
    cout << "Employee 1 yearly salary: " << employee1.getYearlySalary() << endl;
    cout << "Employee 2 yearly salary: " << employee2.getYearlySalary() << endl;

    // Give each employee a 10% raise
    employee1.giveRaise();
    employee2.giveRaise();

    // Display each employee's yearly salary after the raise
    cout << "Employee 1 yearly salary after raise: " << employee1.getYearlySalary() << endl;
    cout << "Employee 2 yearly salary after raise: " << employee2.getYearlySalary() << endl;

    return 0;
}*/
//Q4 DATE CLASA
/*#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    // Constructor
    Date(int month, int day, int year) {
        setMonth(month);
        setDay(day);
        setYear(year);
    }

    // Function to set the month
    void setMonth(int month) {
        if (month >= 1 && month <= 12) {
            this->month = month;
        } else {
            this->month = 1;
        }
    }

    // Function to get the month
    int getMonth() {
        return month;
    }

    // Function to set the day
    void setDay(int day) {
        this->day = day;
    }

    // Function to get the day
    int getDay() {
        return day;
    }

    // Function to set the year
    void setYear(int year) {
        this->year = year;
    }

    // Function to get the year
    int getYear() {
        return year;
    }

    // Function to display the date
    void display() {
        cout << year << "/" << month << "/" << day << endl;
    }
};

int main() {
    // Create a Date object
    Date date(2, 29, 2020);

    // Test the member functions of the Date class
    cout << "Month: " << date.getMonth() << endl;
    cout << "Day: " << date.getDay() << endl;
    cout << "Year: " << date.getYear() << endl;

    // Display the date
    date.display();

    return 0;
}*/
// **************OOP PILLARS *********
Inheritance: Inheritance is one of the four fundamental principles of object-oriented programming (OOP) in C++. It allows a new class to inherit properties and methods from an existing class. Here's a simple example:
#include <iostream>

class Animal {
public:
    void makeSound() {
        std::cout << "The animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        std::cout << "The dog barks" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound(); // Output: The dog barks
    return 0;
}
2. Encapsulation:
Encapsulation is another OOP pillar. It refers to the bundling of data and methods that operate on that data within a single unit (class). Here's a simple example:

#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    double getArea() {
        return length * width;
    }
};

int main() {
    Rectangle myRect;
    myRect.setLength(5);
    myRect.setWidth(3);
    std::cout << "Area: " << myRect.getArea() << std::endl; // Output: Area: 15
    return 0;
}
3. Polymorphism:
Polymorphism is a way to use a single interface to represent different types. In C++, this can be achieved using function overloading, operator overloading, or inheritance. Here's a simple example of function overloading:
#include <iostream>

class Animal {
public:
    void makeSound() {
        std::cout << "The animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        std::cout << "The dog barks" << std::endl;
    }
};

void makeSound(Animal& animal) {
    animal.makeSound();
}

void makeSound(Dog& dog) {
    dog.makeSound();
}

int main() {
    Dog myDog;
    makeSound(myDog); // Output: The dog barks
    return 0;
}
4. Abstraction:
Abstraction is the process of removing or hiding complexity. In OOP, abstraction can be achieved by using abstract base classes and interfaces. Here's a simple example of abstraction using an abstract base class:

#include <iostream>

class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "The dog barks" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.makeSound(); // Output: The dog barks
    return 0;
}

