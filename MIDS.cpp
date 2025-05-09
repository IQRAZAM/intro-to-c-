/////SIMPLE EXAMPLE OF ARRAYS IMPLEMENTATION
/*#include <iostream>
int main() {
    // Declare and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Output the elements of the array
    std::cout << "Elements of the array:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    // Modify an element in the array
    numbers[2] = 100; // Change the third element (index 2) to 100

    // Output the modified array
    std::cout << "\nModified array:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    return 0;
}*/
////ALL SIMPLE OPERATIONS ON ARRAY
/*#include <iostream>
using namespace std;

int main() {
    // Creating an array
    int myArray[5] = {1, 2, 3, 4, 5};

    // Accessing elements
    cout << "First element: " << myArray[0] << endl;  // Output: 1
    cout << "Second element: " << myArray[1] << endl; // Output: 2

    // Modifying an element
    myArray[2] = 10;
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";  // Output: 1 2 10 4 5
    }
    cout << endl;

    // Adding an element (not directly possible in a fixed-size array)
    // Instead, we can create a new array with a larger size
    int newArray[6];
    for (int i = 0; i < 5; i++) {
        newArray[i] = myArray[i];
    }
    newArray[5] = 6; // Adding a new element
    cout << "Array after adding an element: ";
    for (int i = 0; i < 6; i++) {
        cout << newArray[i] << " ";  // Output: 1 2 10 4 5 6
    }
    cout << endl;

    // Removing an element (not directly possible in a fixed-size array)
    // Instead, we can create a new array without the element
    int removeIndex = 2; // Index of the element to remove (10)
    int smallerArray[5];
    for (int i = 0, j = 0; i < 6; i++) {
        if (i != removeIndex) {
            smallerArray[j++] = newArray[i];
        }
    }
    cout << "Array after removing an element: ";
    for (int i = 0; i < 5; i++) {
        cout << smallerArray[i] << " ";  // Output: 1 2 4 5 6
    }
    cout << endl;

    return 0;
}*/
/////INSERTION IN ARRAY 
/*#include <iostream>
using namespace std;

int main() {
    // Original array
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5; // Current size of the array
    int newElement = 10; // Element to be inserted
    int position = 2; // Position to insert the new element (0-based index)

    // Create a new array with one extra size
    int newArr[6];

    // Copy elements to the new array
    for (int i = 0; i < n + 1; i++) {
        if (i < position) {
            newArr[i] = arr[i]; // Copy elements before the position
        } else if (i == position) {
            newArr[i] = newElement; // Insert the new element
        } else {
            newArr[i] = arr[i - 1]; // Copy elements after the position
        }
    }

    // Print the new array
    cout << "Array after insertion: ";
    for (int i = 0; i < n + 1; i++) {
        cout << newArr[i] << " "; // Output: 1 2 10 3 4 5
    }
    cout << endl;

    return 0;
}*/
///DELETION IN ARRAY
/*#include <iostream>
using namespace std;

int main() {
    // Original array
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6; // Current size of the array
    int position = 2; // Position to delete the element (0-based index)

    // Create a new array with one less size
    int newArr[5];

    // Copy elements to the new array, skipping the element to be deleted
    for (int i = 0; i < n; i++) {
        if (i < position) {
            newArr[i] = arr[i]; // Copy elements before the position
        } else if (i > position) {
            newArr[i - 1] = arr[i]; // Copy elements after the position
        }
    }

    // Print the new array
    cout << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++) {
        cout << newArr[i] << " "; // Output: 1 2 4 5 6
    }
    cout << endl;

    return 0;
}*/
/////SINGLY LINKEDLIST
/*#include <iostream>
using namespace std;

class linkedlist {
private:
    struct Node {
        int data;
        Node* next_address;
    };
    Node* head;

public:
    linkedlist() {
        head = NULL;
    }
    void insertlist(int n);
    void display();
    void deleteNode(int n); // Declaration of the delete function
};

void linkedlist::insertlist(int n) {
    Node* new_node = new Node;
    new_node->data = n;
    new_node->next_address = NULL;
    if (head == NULL) {
        head = new_node;
    } else {
        Node* nodeptr = head;
        while (nodeptr->next_address != NULL) {
            nodeptr = nodeptr->next_address;
        }
        nodeptr->next_address = new_node;
    }
}

void linkedlist::display() {
    Node* nodeptr = head;
    while (nodeptr != NULL) {
        cout << nodeptr->data << " -> ";
        nodeptr = nodeptr->next_address;
    }
    cout << "NULL" << endl;
}

void linkedlist::deleteNode(int n) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    // If the node to be deleted is the head   {head always point to the first node of the linkedlist which is 10 in this case }
    if (head->data == n) {
        Node* temp = head;
        head = head->next_address; // Move head to the next node
        delete temp; // Free the memory
        return;
    }

    // Search for the node to be deleted
    Node* current = head;
    Node* previous = NULL;

    while (current != NULL && current->data != n) {
        previous = current;
        current = current->next_address;
    }

    // If the node was not found
    if (current == NULL) {
        cout << "Node with value " << n << " not found." << endl;
        return;
    }

    // Unlink the node from the linked list
    previous->next_address = current->next_address;
    delete current; // Free the memory
}

int main() {
    linkedlist l1;
    l1.insertlist(10);
    l1.insertlist(20);
    l1.insertlist(30);
    l1.insertlist(40);
    l1.insertlist(60);
    
    cout << "Original List: ";
    l1.display();

    // Deleting a node
    l1.deleteNode(30); // Delete node with value 30
    cout << "List after deleting 30: ";
    l1.display();

    l1.deleteNode(100); // Attempt to delete a non-existent node

    return 0;
}*/
///////DOUBLY LINKEDLIST
/*#include <iostream>
using namespace std;

class DoublyLinkedList {
private:
    struct Node {
        int data;
        Node* next_address;
        Node* prev_address; // Pointer to the previous node
    };
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }
    void insertlist(int n);
    void display();
    void deleteNode(int n); // Declaration of the delete function
};

void DoublyLinkedList::insertlist(int n) {
    Node* new_node = new Node;
    new_node->data = n;
    new_node->next_address = NULL;
    new_node->prev_address = NULL; // Initialize previous pointer

    if (head == NULL) {
        head = new_node; // If the list is empty, set head to new node
    } else {
        Node* nodeptr = head;
        while (nodeptr->next_address != NULL) {
            nodeptr = nodeptr->next_address; // Traverse to the end of the list
        }
        nodeptr->next_address = new_node; // Link the last node to the new node
        new_node->prev_address = nodeptr; // Set the previous pointer of the new node
    }
}

void DoublyLinkedList::display() {
    Node* nodeptr = head;
    while (nodeptr != NULL) {
        cout << nodeptr->data << " <-> "; // Display the data
        nodeptr = nodeptr->next_address; // Move to the next node
    }
    cout << "NULL" << endl;
}

void DoublyLinkedList::deleteNode(int n) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    // If the node to be deleted is the head
    if (head->data == n) {
        Node* temp = head;
        head = head->next_address; // Move head to the next node
        if (head != NULL) {
            head->prev_address = NULL; // Update the previous pointer of the new head
        }
        delete temp; // Free the memory
        return;
    }

    // Search for the node to be deleted
    Node* current = head;

    while (current != NULL && current->data != n) {
        current = current->next_address; // Traverse the list
    }

    // If the node was not found
    if (current == NULL) {
        cout << "Node with value " << n << " not found." << endl;
        return;
    }

    // Unlink the node from the doubly linked list
    if (current->next_address != NULL) {
        current->next_address->prev_address = current->prev_address; // Update next node's previous pointer
    }
    if (current->prev_address != NULL) {
        current->prev_address->next_address = current->next_address; // Update previous node's next pointer
    }

    delete current; // Free the memory
}

int main() {
    DoublyLinkedList l1;
    l1.insertlist(10);
    l1.insertlist(20);
    l1.insertlist(30);
    l1.insertlist(40);
    l1.insertlist(60);
    
    cout << "Original List: ";
    l1.display();

    // Deleting a node
    l1.deleteNode(30); // Delete node with value 30
    cout << "List after deleting 30: ";
    l1.display();

    l1.deleteNode(100); // Attempt to delete a non-existent node

    return 0;
}*/
/////////CIRCULAR LINKED LIST
/*#include <iostream>
using namespace std;

class CircularLinkedList {
private:
    struct Node {
        int data;
        Node* next_address; // Pointer to the next node
    };
    Node* head;

public:
    CircularLinkedList() {
        head = NULL;
    }
    void insertlist(int n);
    void display();
    void deleteNode(int n); // Declaration of the delete function
};

void CircularLinkedList::insertlist(int n) {
    Node* new_node = new Node;
    new_node->data = n;
    new_node->next_address = NULL; // Initialize next pointer

    if (head == NULL) {
        head = new_node; // If the list is empty, set head to new node
        new_node->next_address = head; // Point to itself
    } else {
        Node* nodeptr = head;
        // Traverse to the last node
        while (nodeptr->next_address != head) {
            nodeptr = nodeptr->next_address;
        }
        nodeptr->next_address = new_node; // Link the last node to the new node
        new_node->next_address = head; // Point the new node to head
    }
}

void CircularLinkedList::display() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    
    Node* nodeptr = head;
    do {
        cout << nodeptr->data << " -> "; // Display the data
        nodeptr = nodeptr->next_address; // Move to the next node
    } while (nodeptr != head);
    cout << "(back to head)" << endl; // Indicate circular nature
}

void CircularLinkedList::deleteNode(int n) {
    if (head == NULL) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    Node* current = head;
    Node* previous = NULL;

    // Check if the node to be deleted is the head
    if (head->data == n) {
        // If there's only one node
        if (head->next_address == head) {
            delete head; // Free the memory
            head = NULL; // List is now empty
            return;
        }

        // Find the last node to update its next pointer
        while (current->next_address != head) {
            current = current->next_address;
        }
        current->next_address = head->next_address; // Bypass the head
        Node* temp = head; // Store the head to delete
        head = head->next_address; // Move head to the next node
        delete temp; // Free the memory
        return;
    }

    // Search for the node to be deleted
    previous = head;
    current = head->next_address;

    while (current != head && current->data != n) {
        previous = current;
        current = current->next_address; // Traverse the list
    }

    // If the node was not found
    if (current == head) {
        cout << "Node with value " << n << " not found." << endl;
        return;
    }

    // Unlink the node from the circular linked list
    previous->next_address = current->next_address; // Bypass the current node
    delete current; // Free the memory
}

int main() {
    CircularLinkedList l1;
    l1.insertlist(10);
    l1.insertlist(20);
    l1.insertlist(30);
    l1.insertlist(40);
    l1.insertlist(60);
    
    cout << "Original List: ";
    l1.display();

    // Deleting a node
    l1.deleteNode(30); // Delete node with value 30
    cout << "List after deleting 30: ";
    l1.display();

    l1.deleteNode(100); // Attempt to delete a non-existent node

    return 0;
}*/
////SIMPLE EXAMPLE OF STACK 
/*#include <iostream>
#include <stack> // Include the stack header

using namespace std;

int main() {
    // Create a stack of integers
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Display the top element
    cout << "Top element: " << myStack.top() << endl;

    // Pop an element from the stack
    myStack.pop();
    cout << "After popping, the new top element: " << myStack.top() << endl;

    // Display all elements in the stack
    cout << "Elements in the stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " "; // Display the top element
        myStack.pop(); // Remove the top element
    }
    cout << endl;

    return 0;
}*/
////STACK INSERTION ,DELETIONA , serching aND DISPLAY USING ARRAY
/*#include <iostream>
using namespace std;

const int n = 100;  // Size of stack
int stack[n], top = -1; // Stack and top variable

// Function to add an element to the stack
void push(int val) {
    if (top >= n - 1) { // Stack Overflow
        cout << "Stack Overflow" << endl;
    } else {
        top++; // Increment top
        stack[top] = val; // Add value to stack
    }
}

// Function to remove an element from the stack
void pop() {
    if (top <= -1) { // Stack Underflow
        cout << "Stack Underflow" << endl;
    } else {
        cout << "The popped element is " << stack[top] << endl; 
        top--; // Decrement top
    }
}
bool search(int val) {
    for (int i = 0; i <= top; i++) {
        if (stack[i] == val) {
            return true; // element found
        }
    }
    return false; // element not found
}

// Function to display the current stack elements
void display() {
    if (top >= 0) {
        cout << "Current Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is empty!" << endl;
    }
}

// Example usage
int main() {
    push(10);
    push(20);
    push(30);
    display(); // Display elements in the stack
    cout << "Searching for 20 in the stack: " << (search(20) ? "Found" : "Not Found") << endl;
    cout << "Searching for 40 in the stack: " << (search(40) ? "Found" : "Not Found") << endl;

    pop();     // Remove top element
    display(); // Display elements after pop
    return 0;
}
 */
/////SIMPLE EXAMPLE OF QUEUE
/*#include <iostream>
#include <queue> // Include the queue header

using namespace std;

int main() {
    // Create a queue of integers
    queue<int> myQueue;

    // Enqueue elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Display the front element
    cout << "Front element: " << myQueue.front() << endl;

    // Dequeue an element from the queue
    myQueue.pop();
    cout << "After dequeuing, the new front element: " << myQueue.front() << endl;

    // Display all elements in the queue
    cout << "Elements in the queue: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " "; // Display the front element
        myQueue.pop(); // Remove the front element
    }
    cout << endl;

    return 0;
}*/
////QUEUE ISERTION ,DELETION ,SEARCH, AND DISPLAY USING ARRAY IMPLEMENTATION
/*#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void Insert() {
    int val;
    if (rear == n - 1)
        cout << "Queue Overflow" << endl;
    else {
        if (front == -1)
            front = 0;
        cout << "Insert the element in queue: " << endl;
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void Delete() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow " << endl;
        return;
    } else {
        cout << "Element deleted from queue is: " << queue[front] << endl;
        front++;
    }
}

void Display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

void Search() {
    int val;
    cout << "Enter the element you want to search: ";
    cin >> val;
    bool found = false;
    for (int i = front; i <= rear; i++) {
        if (queue[i] == val) {
            cout << "Element " << val << " found at position " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << val << " not found in the queue." << endl;
    }
}

int main() {
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Search for an element in the queue" << endl;
    cout << "5) Exit" << endl;

    do {
        cout << "Enter your choice: " << endl;
        cin >> ch;
        switch (ch) {
            case 1:
                Insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 4:
                Search();
                break;
            case 5:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (ch != 5);
    
    return 0;
}*/
///QUEUE ISERTION ,DELETION ,SEARCH, AND DISPLAY USING linkedlist IMPLEMENTATION
/*#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Function to insert an element into the queue
    void Insert() {
        int val;
        cout << "Insert the element in queue: ";
        cin >> val;
        
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;

        if (rear == nullptr) { // If queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to delete an element from the queue
    void Delete() {
        if (front == nullptr) {
            cout << "Queue Underflow" << endl;
            return;
        } else {
            cout << "Element deleted from queue is: " << front->data << endl;
            Node* temp = front;
            front = front->next;
            delete temp;

            if (front == nullptr) { // If queue is now empty
                rear = nullptr;
            }
        }
    }

    // Function to display all elements of the queue
    void Display() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements are: ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to search for an element in the queue
    void Search() {
        int val;
        cout << "Enter the element you want to search: ";
        cin >> val;

        Node* temp = front;
        bool found = false;
        int position = 0;

        while (temp != nullptr) {
            if (temp->data == val) {
                cout << "Element " << val << " found at position " << position << endl;
                found = true;
                break;
            }
            temp = temp->next;
            position++;
        }

        if (!found) {
            cout << "Element " << val << " not found in the queue." << endl;
        }
    }
};

int main() {
    Queue q;
    int choice;

    do {
        cout << "1) Insert element to queue" << endl;
        cout << "2) Delete element from queue" << endl;
        cout << "3) Display all elements of queue" << endl;
        cout << "4) Search for an element in the queue" << endl;
        cout << "5) Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                q.Insert();
                break;
            case 2:
                q.Delete();
                break;
            case 3:
                q.Display();
                break;
            case 4:
                q.Search();
                break;
            case 5:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}*/
/////CIRCULAR QUEUE USING ARRAY IMPLEMENATTION
/*#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void Insert() {
    int val;
    if ((rear + 1) % n == front) {
        cout << "Queue Overflow" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        cout << "Insert the element in queue: " << endl;
        cin >> val;
        rear = (rear + 1) % n;     //The rear pointer is incremented using (rear + 1) % n, which ensures that if rear reaches the end of the array, it wraps around to the beginning.
        queue[rear] = val;
    }
}

void Delete() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
    } else {
        cout << "Element deleted from queue is: " << queue[front] << endl;
        if (front == rear) {
            front = -1; // Queue is now empty
            rear = -1;
        } else {
            front = (front + 1) % n;
        }
    }
}

void Display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements are: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % n;
        }
        cout << endl;
    }
}

void Search() {
    int val;
    cout << "Enter the element you want to search: ";
    cin >> val;
    bool found = false;
    int i = front;
    while (true) {
        if (queue[i] == val) {
            cout << "Element " << val << " found at position " << i << endl;
            found = true;
            break;
        }
        if (i == rear) break;
        i = (i + 1) % n;
    }
    if (!found) {
        cout << "Element " << val << " not found in the queue." << endl;
    }
}

int main() {
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Search for an element in the queue" << endl;
    cout << "5) Exit" << endl;

    do {
        cout << "Enter your choice: " << endl;
        cin >> ch;
        switch (ch) {
            case 1:
                Insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 4:
                Search();
                break;
            case 5:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (ch != 5);
    
    return 0;
}*/
/////DOUBLE ENDED QUEUE
/*#include <iostream>
using namespace std;

class Deque {
private:
    int queue[100];
    int front, rear, n;

public:
    Deque() {
        n = 100;
        front = -1;
        rear = -1;
    }

    void InsertFront(int val) {
        if ((front == 0 && rear == n - 1) || (front == rear + 1)) {
            cout << "Deque Overflow" << endl;
            return;
        }
        if (front == -1) { // If deque is empty
            front = 0;
            rear = 0;
        } else if (front == 0) { // Wrap around
            front = n - 1;
        } else {
            front--;
        }
        queue[front] = val;
    }

    void InsertRear(int val) {
        if ((front == 0 && rear == n - 1) || (front == rear + 1)) {
            cout << "Deque Overflow" << endl;
            return;
        }
        if (front == -1) { // If deque is empty
            front = 0;
            rear = 0;
        } else if (rear == n - 1) { // Wrap around
            rear = 0;
        } else {
            rear++;
        }
        queue[rear] = val;
    }

    void DeleteFront() {
        if (front == -1) {
            cout << "Deque Underflow" << endl;
            return;
        }
        cout << "Element deleted from front is: " << queue[front] << endl;
        if (front == rear) { // Only one element was present
            front = -1;
            rear = -1;
        } else {
            if (front == n - 1) { // Wrap around
                front = 0;
            } else {
                front++;
            }
        }
    }

    void DeleteRear() {
        if (front == -1) {
            cout << "Deque Underflow" << endl;
            return;
        }
        cout << "Element deleted from rear is: " << queue[rear] << endl;
        if (front == rear) { // Only one element was present
            front = -1;
            rear = -1;
        } else {
            if (rear == 0) { // Wrap around
                rear = n - 1;
            } else {
                rear--;
            }
        }
    }

    void Display() {
        if (front == -1) {
            cout << "Deque is empty" << endl;
            return;
        }
        cout << "Deque elements are: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % n;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;
    int choice, val;

    do {
        cout << "1) Insert element at front" << endl;
        cout << "2) Insert element at rear" << endl;
        cout << "3) Delete element from front" << endl;
        cout << "4) Delete element from rear" << endl;
        cout << "5) Display all elements of deque" << endl;
        cout << "6) Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to insert at front: ";
                cin >> val;
                dq.InsertFront(val);
                break;
            case 2:
                cout << "Enter the element to insert at rear: ";
                cin >> val;
                dq.InsertRear(val);
                break;
            case 3:
                dq.DeleteFront();
                break;
            case 4:
                dq.DeleteRear();
                break;
            case 5:
                dq.Display() ;
                break;
            case 6:
                cout<<"exiting!!"<<endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (choice != 6);
    
    return 0;
}*/