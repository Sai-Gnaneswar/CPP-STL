#include<iostream>
#include<array> // STL library for array
#include<vector> // STL libray for vector
#include<deque> // STL libray for deque
#include<list> // STL library for list
#include<stack> // STL library for stack
#include<queue> // STL library for queue and priority queue
#include<set> // STL library for set
#include<map> // STL library for map
#include<algorithm> // STL for algorithms
using namespace std;


// Array
void arraySTL(){

    // Normal array 
    int a[3] = {1, 2, 3};   

    // STL array- We don't use it in CP because it is a static array
    array<int, 5> arr = {2, 4, 6, 8, 10};

    // Size() -> Number of elements present in the array
    int n = arr.size();

    // Printing the array
    cout << "Elements of the array are: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // at() -> returns the element presnt at the specific index
    cout << "Element at 3rd index: " << arr.at(2) << endl;
    
    // empty() -> Checks if the array is empty or not; 0 -> False, 1 -> True
    cout << "Is the array empty or not: " << arr.empty() << endl; 
    
    // front() -> returns the first element of the array
    cout << "First element of the array is: " << arr.front() << endl;
    
    // back() -> returns the last element of the array
    cout << "Last element of the array is: " << arr.back() << endl;

    cout << endl;
    cout << endl;
}


// Vector
void vectorSTL(){

    // Creating a vector
    vector<int> v;

    // Capacity() -> space/memory allocated; Intially it is 0
    cout << "Capacity of vector: " << v.capacity() << endl;

    // Adding elements to the vector
    v.push_back(1);
    cout << "Capacity of vector: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity of vector: " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity of vector: " << v.capacity() << endl;

    // Size() -> Number of elements present in the vector
    cout << "Size of vector: " << v.size() << endl;

    cout << "Element at 0th index: " << v.at(0) << endl;

    cout << "Element at starting of vector: " << v.front() << endl;

    cout << "Element at ending of vector: " << v.back() << endl;

    // Removing elements from back of vector
    cout << "Elements befor popping from back: ";
    for(int i : v)
        cout << i << " ";
    cout << endl;

    v.pop_back();
    
    cout << "Elements after popping from back: ";
    for(int i : v)
        cout << i << " ";
    cout << endl;

    // Emptying/Clearing the vector
    cout << "Size of vector before clearing: " << v.size() << endl;
    v.clear();
    cout << "Size of vector after clearing: " << v.size() << endl;

    // Initializing vector with some size and with an element
    vector<int> v1(5, 1);
    cout << "Element of vector v1: ";
    for(int i : v1)
        cout << i << " ";
    cout << endl;

    // Copying contents of vector into another
    vector<int> v2(v1);
    cout << "Element of vector v2: ";
    for(int i : v2)
        cout << i << " ";
    cout << endl;

    cout << endl;
    cout << endl;
}


// Deque
void dequeSTL(){

    // Creating a deque
    deque<int> d;
    
    // Adding elements to the deque
    d.push_back(2);
    d.push_front(1);
    d.push_back(3);

    // Printing the deque
    cout << "Elements present in the deque are: ";
    for(int i : d)
        cout << i << " ";
    cout << endl;

    /*
    // Popping the elements from the deque
    cout << "Before popping elements of the deque are: ";
    for(int i : d)
        cout << i << " ";
    cout << endl;

    d.pop_back();
    d.pop_front();
    
    
    cout << "After popping elements of the deque are: ";
    for(int i : d)
        cout << i << " ";
    cout << endl;
    */

    cout << "Element at 1th index: " << d.at(1) << endl;

    cout << "Element at starting of deque: " << d.front() << endl;

    cout << "Element at ending of deque: " << d.back() << endl;

    cout << "Check if the deque is empty: " << d.empty() << endl;

    cout << "Size of deque before erasing: " << d.size() << endl;

    // erase() -> used to delete elements in some range
    d.erase(d.begin(), d.begin() + 2); // 1 2 will be deleted
    cout << "Elements of the deque after erasing is: ";
    for(int i : d)
        cout << i << " ";
    cout << endl;

    cout << "Size of deque after erasing: " << d.size() << endl;

    cout << endl;
    cout << endl;
} 


// List
void listSTL(){

    // Creating a list
    list<int> l1;

    // Adding elements to the list
    l1.push_back(2);
    l1.push_front(0);
    l1.push_back(4);
    l1.push_back(6);
    l1.push_back(8);

    // Printing the list
    cout << "Elements present in the list are: ";
    for(int i : l1)
        cout << i << " ";
    cout << endl;

    // Popping elements from the list
    l1.pop_front();
    l1.pop_back();

    cout << "Elements of the list after popping: ";
    for(int i : l1)
        cout << i << " ";
    cout << endl;

    // Size of the list
    cout << "Size of the list is: " << l1.size() << endl;

    // erase()
    cout << "Elements of the list before erasing: ";
    for(int i : l1)
        cout << i << " ";
    cout << endl;

    l1.erase(l1.begin()); // deletes 2 from the list

    cout << "Elements of the list after erasing: ";
    for(int i : l1)
        cout << i << " ";
    cout << endl;

    // Copying elements of one list to another
    list<int> l2(5, 101);
    list<int> l3(l2);

    cout << "Elements present in the list l3: "; 
    for(int i : l3)
        cout << i << " ";
    cout << endl;

    cout << endl;
    cout << endl;
}


// Stack
void stackSTL(){

    // Creating a stack
    stack<string> s;

    // Pushing elements on to the stack
    s.push("Sutrave");  // first element
    s.push("Gnaneswar");
    s.push("Sai"); // last element

    // Top element of the stack
    cout << "Top element of the stack is: " << s.top() << endl;

    // Popping elements from the stack
    s.pop(); // Sai will be popped

    cout << "Top element of the stack is: " << s.top() << endl;

    // Size of the stack
    cout << "Size of the stack is: " << s.size() << endl;

    // empty()
    cout << "Check whether stack is empty or not: " << s.empty() << endl;

    cout << endl;
    cout << endl;
}


// Queue
void queueSTL(){

    // Creating a queue
    queue<string> q;

    // Adding elements to the queue
    q.push("Sai");
    q.push("Gnaneswar");
    q.push("Sutrave");

    // Top element of the queue
    cout << "Top element of the queue is: " << q.front() << endl;

    // Popping elements from queue
    q.pop(); // Sai will be popped out

    cout << "Top element of the queue is: " << q.front() << endl;

    // Size of the queue
    cout << "Size of the queue is: " << q.size() << endl;

    // empty()
    cout << "Check whether the queue is empty or not: " << q.empty() << endl;

    cout << endl;
    cout << endl;
}


// Priority Queue
void priorityQueueSTL(){

    // Creating max heap
    priority_queue<int> maxi;

    // Adding elements to max heap
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);

    // Printing the max heap
    cout << "Elements present in the max heap are: ";
    int n = maxi.size();
    for(int i = 0; i < n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    // Creating min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    // Adding elements to min heap
    mini.push(5);
    mini.push(2);
    mini.push(4);
    mini.push(1);
    mini.push(2);

    // Printing the min heap
    cout << "Elements present in the min heap are: ";
    int m = mini.size();
    for(int i = 0; i < m; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << endl;
    cout << endl;
}


// Set
void setSTL(){

    // Creating a set
    set<int> s;

    // Adding elements into the set
    s.insert(5);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(5);

    // Printing the set
    cout << "Elements present in the set are: ";
    for(auto i : s)
        cout << i << " ";
    cout << endl;

    // erase()
    cout << "Elements present in the set before erasing: ";
    for(auto i : s)
        cout << i << " ";
    cout << endl;

    s.erase(s.begin()); // 1 will be deleted
    
    cout << "Elements present in the set after erasing: ";
    for(auto i : s)
        cout << i << " ";
    cout << endl;

    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it); // 3 will be deleted
    cout << "Elements present in the set after erasing using iterator: ";
    for(auto i : s)
        cout << i << " ";
    cout << endl;

    // count() -> tells if an element is present in the set or not
    cout << "Is 4 present in the set: " << s.count(4) << endl;

    // find() -> returns the iterator if found
    cout << "Elements present in the set returned by iterator using find(): ";
    set<int> :: iterator itr = s.find(2);
    for(auto it = itr; it != s.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << endl;
    cout << endl;
}


// Map
void mapSTL(){

    // Creating a map
    map<int, string> m;

    // Inserting elements into the map
    m[1] = "Sai";
    m[2] = "Gnaneswar";
    m[3] = "Sutrave";

    // Inserting elements into map using insert({key, value}) method
    m.insert({4, "Hero"});

    // Printing the map
    cout << "Elements of the map are: " << endl;
    for(auto i : m)
        cout << i.first << " -> " << i.second << endl;

    // count(key) -> returns 1 if key is present else 0
    cout << "Check whether the key exists in the map: " << m.count(5) << endl;

    // erase(key) -> deletes both the key and value associated 
    cout << "Elements of the map before erasing a specific key: " << endl;
    for(auto i : m)
        cout << i.first << " -> " << i.second << endl;

    m.erase(4); 

    cout << "Elements of the map after erasing a specific key: " << endl;
    for(auto i : m)
        cout << i.first << " -> " << i.second << endl;

    // find(key) -> returs an iterator if the key is found
    cout << "Using find and returing an iterator: ";
    auto it = m.find(2);
    for(auto i = it; i != m.end(); i++)
        cout << (*i).first << " ";
    cout << endl;

    cout << endl;
    cout << endl;
}


// Algorithms
void algos(){

    // Binary Search -> binary_search(v.begin(), v.end(), key)
    // Returns 1 if found else 0
    vector<int> v;

    // Adding elements to the vector
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);

    // Sorting the vector
    sort(v.begin(), v.end()); // 1 2 3 4 5

    cout << "Finding an element using Binary Search" << endl;
    cout << "Finding 5: " << binary_search(v.begin(), v.end(), 5) << endl;

    // Lower and Upper bounds
    cout << "Lower Bound is: " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << "Upper Bound is: " << upper_bound(v.begin(), v.end(), 1) - v.begin() << endl;

    // Max, Min, Swap
    int a = 2, b = 3;
    cout << "Max is: " << max(a, b) << endl;
    cout << "Min is: " << min(a, b) << endl;

    cout << "Before swapping a is: " << a << " and b is " << b << endl;
    swap(a, b);
    cout << "After swapping a is: " << a << " and b is " << b << endl;

    // Reversing a string
    string s = "Hello";
    reverse(s.begin(), s.end());
    cout << "Reversed string is: " << s << endl;

    // Rotating a vector
    cout << "Before rotating the vector is: ";
    for(auto i : v)
        cout << i << " ";
    cout << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotating the vector is: ";
    for(auto i : v)
        cout << i << " ";
    cout << endl;

    cout << endl;
    cout << endl;
}


int main(){

    // Calling the functions

    arraySTL();

    vectorSTL();
    
    dequeSTL();
    
    listSTL();
    
    stackSTL();
    
    queueSTL();
    
    priorityQueueSTL();
    
    setSTL();
    
    mapSTL();
    
    algos();
    
    return 0;
}