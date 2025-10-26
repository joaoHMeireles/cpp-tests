#include <iostream> //AND
#include <fstream>
#include <string>
#include <cmath>
#include <functional>
#include <ctime>
#include <algorithm>
#include <cstdlib> //random

// Include the vector library
#include <vector>

// Include the list library
#include <list>

// Include the set library
#include <set>

// Include the map library
#include <map>

// Include the stack library
#include <stack>

// Include the queue library
#include <queue>

using namespace std;

void myFunction() {
    // code to be executed
    cout << "aaa";
}

void myFunction2(string fname = "word") {
  cout << fname << " Refsnes\n";
}

void myFunction3(string fname = "word", int number = 0) {
  cout << fname << " Refsnes\n" << "number: " << number;
}

string myFunction4(string name) {
  return "Olá" + name;
}

void changeValue(int &num) {
  num = 50;
}

struct Car {
  string brand;
  int year;
};

void myFunctionCar1(Car c) {
  cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

void updateYear(Car& c) {
  c.year++;
}

void myFunction5(function<void()> func) {
  func();
  func();
}

class MyClass {       // The class
  public:             // Access specifier

    MyClass() {     // Constructor
      cout << "Hello World!";
    }
    MyClass(string x, string y, int z); //ALternative cnstructor declaration

    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    

    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }

    void myMethod2();   // Method/function declaration
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }

    friend void displaySalary(MyClass emp);

  private:   // Private access specifier
    int y;   // Private attribute
    int salary;
};

void MyClass::myMethod2() {
  cout << "Hello World!";
}

// Constructor definition outside the class
MyClass::MyClass(string x, string y, int z) {
  cout << x << y << z;
}

void displaySalary(MyClass emp) {
  cout << "Salary: " << emp.salary;
}

class MyClass2: public MyClass {
  public:

    void myclass2OnlyMethod() {
        cout << "only for myclass2";
    }
};

class NewClass {
  public:
    virtual void printar() {
        cout << "lindio";
    }
};

class MultipleClass: public MyClass2, public NewClass {
  public:
    void printar() override {
        cout << "feio d mais";
    }
};

template <typename T>
T addTemplateAAA(T a, T b) {
  return a + b;
}

template <typename T>
class Box {
  public:
    T value;
    Box(T v) {
      value = v;
    }
    void show() {
      cout << "Value: " << value << "\n";
    }
};

template <typename T1, typename T2>
class Pair {
  public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b) {
      first = a;
      second = b;
    }

    void display() {
      cout << "First: " << first << ", Second: " << second << "\n";
    }
};

namespace MyNamespace {
  int x = 42;
}

int main()
{
    const float pi = 3.14;

    int num = 15, num2 = 16;

    float fNum = 9.99;

    double result = num + fNum;

    int sameNumber1, sameNumber2;
    sameNumber1 = sameNumber2 = 5;

    char myNameStartsWith = 'J';
    string myNameIs = "joao";

    cout << "Hello World" << endl;

    cin >> num;

    ++num;

    --num2;

    auto something = 'a';

    getline(cin, myNameIs);

    char nameLetters[] = myNameIs;

    cout << sqrt(64);
    cout << round(2.6);
    cout << log(2);

    if (20 > 18) {
        cout << "20 is greater than 18";
    } else if (20 == 18) {
        cout << "20 is equal too 18";
    } else {
        cout << "20 is not greater than 18";
    }

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    int day = 4;
    switch (day) {
      case 1:
        cout << "Monday";
        break;
      case 2:
        cout << "Tuesday";
        break;
      case 3:
        cout << "Wednesday";
        break;
      case 4:
        cout << "Thursday";
        break;
      case 5:
        cout << "Friday";
        break;
      case 6:
        cout << "Saturday";
        break;
      case 7:
        cout << "Sunday";
        break;
    }

    int i = 0;
    while (i < 5) {
      cout << i << "\n";
      i++;
    }

    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
      cout << num << "\n";
    }

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    // A vector with 3 elements
    vector<string> cars = {"Volvo", "BMW", "Ford"};
    // Adding another element to the vector
    cars.push_back("Tesla");

    cout << sizeof(myNumbers);

    string letters[2][4] = {
      { "A", "B", "C", "D" },
      { "E", "F", "G", "H" }
    };

    struct {
      int myNum;
      string myString;
    } myStructure1, myStructure2;

    struct car {  // This structure is now named "car"
      string brand;
      string model;
      int year;
    };

    car myCar1;

    enum Level {
      LOW,
      MEDIUM,
      HIGH
    };

    enum Level myVar = MEDIUM;

    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food

    meal = "Burger"; // changes both meal and food

    cout << &food; //endreço da variael

    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";

    int* ptr2 = new int;
    *ptr2 = 35;
    cout << *ptr2;

    delete ptr2; // Note: For arrays, use new[] and delete[]

    
    myFunction();
    myFunction2("aaaaa");
    myFunction3("wroororods", 15);
    myFunction4(myNameIs);

    int value = 10;
    changeValue(value);  // Call the function and change the value to 50
    cout << value;

    Car myCar = {"Toyota", 2020};
    myFunctionCar1(myCar);
    updateYear(myCar);

    auto message = []() {
      cout << "Hello World!\n";
    };

    message();

    auto add = [](int a, int b) {
      return a + b;
    };

    cout << add(3, 4);

    auto message = []() {
      cout << "Hello World!\n";
    };

    myFunction5(message);

    int x = 10;
    auto show = [x]() { //capture clause
      cout << x;
    };

    show();

    int x = 10;

    auto show2 = [&x]() {
      cout << x;
    };

    x = 20;  // Change x after the lambda is created

    show2(); //shows 20

    MyClass myObj;  // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

    myObj.myMethod();

    // NewClass* ptr;
    // MultipleClass mClass;
    // ptr = &mClass;
    // ptr->printar();  // Same as (*ptr).printar();

    cout << addTemplateAAA<int>(5, 3) << "\n";
    cout << addTemplateAAA<double>(2.5, 1.5) << "\n";
    cout << addTemplateAAA<string>("inicio", "fim") << "\n";

    Box<int> intBox(50);
    Box<string> strBox("Hello");
    
    intBox.show();
    strBox.show();
    Pair<string, int> person("John", 30);
    Pair<int, double> score(51, 9.5);

    person.display();
    score.display();
    
    fstream MyFile("filename.txt");

    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    fstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
      // Output the text from the file
      cout << myText;
    }

    // Close the file
    MyReadFile.close();

    try {
      // Code that may throw an exception
      throw 505;
    }
    catch (int errorCode) {
      cout << "Error occurred: " << errorCode;
    }
    catch (...) {
        cout << "Access denied - You must be at least 18 years old.\n";
    }

    
    vector<string>::iterator it;

    // Loop through the vector with the iterator
    for (it = cars.begin(); it != cars.end(); ++it) {
      cout << *it << "\n";
    }

    // Iterate in reverse order
    for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
      cout << *it << "\n";
    }

    // Create a map that will store strings and integers
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Loop through the map with an iterator
    for (auto it = people.begin(); it != people.end(); ++it) {
      cout << it->first << " is: " << it->second << "\n";
    }

    cout << MyNamespace::x;

    //if using namespace MyNamespace;
    //then we could just  cout << x;

    // Generate a random number between 0 and 100
    int randomNum = rand() % 101;

    cout << randomNum;


    return 0;
}