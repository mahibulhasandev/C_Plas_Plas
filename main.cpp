#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;


/// typedef 
//typedef vector<pair<string, int>> pairlist_t;
// typedef string text_t;
// typedef int number_t;
// using text_t = string;
// using number_t = int;

/// namespace Dicleyar

// namespace first {
//     int x = 3;
// }
// namespace second {
//     int x = 5;
// }

/// Function  Declyer 

void happyBirthday(string name , int age);

/// Return keyword

double square(double length);
double cube(double length);
string concatStrings(string string1, string string2);

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

/// Variable Scope Example

int myNum = 3;

void prinNum();

/// Pass Array to a function 

double getTotal(double prices[], int size);

/// Search an array for an element 

int searchArray(int array[], int size, int element);
int searchArray(string array[], int size, string element);

//// Short an array

void sort(int array[], int size);

/// Pass by Value Vs Pass by Reference

void swap(string &x, string &y);

/// const parameters 

void printInfo(const string name, const int age);

//// Recursion 

void walk(int steps);

int factorial(int num);

//// Function Templates 

// int max(int x, int y){
//     return (x > y) ? x : y;
// }
// double max(double x, double y){
//     return (x > y) ? x : y;
// }
// char max(char x, char y){
//     return (x > y) ? x : y;
// } 

// any datatype return 

template <typename T, typename U>
auto max(T x, U y){
    return (x > y) ? x : y;
}

//// Structs 
struct student{
    string name;
    double gpa;
    bool enrolled;
};

//// Pass structs as arguments 

struct Car{
    string model;
    int year;
    string color;
};

void printCar(Car &car);

void paintCar(Car car, string color);

//// Enums 
enum Day {sunday = 0, monday = 1, tuesday =2, wednesday =3, thursday = 4, friday = 5, saturday = 6, };

//// Object 

class Human{
    public:
        string name = "Mahibul";
        string occupation = "Programmer";
        int age = 19;

        void eat(){
            cout << "This person is earing \n";
        }
        void drink(){
            cout << "This person is Drinking\n";
        }
        void sleep(){
            cout << "This person is sleeping\n";
        }
};

class Cars{
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate(){
            cout << "You step on the gas!\n";
        }
        void brake(){
            cout << "You step on the brakes!\n";
        }
};


//// Construnctors 

class Students{
    public:
        string name;
        int age;
        double gpa;
    Students(string name, int age, double gpa){
        this ->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    // Students(string x, int y, double z){
    //     name = x;
    //     age = y;
    //     gpa = z;
    // }

};

class cars{
    public:
        string make;
        string model;
        int year;
        string color;
    cars(string make, string model , int year, string color){
        this -> make = make;
        this -> model = model;
        this -> year = year;
        this -> color = color;
    }
};

//// Constructor overloading 

class Pizza {
    public:
        string topping1;
        string topping2;

    Pizza(string topping1){
        this -> topping1 = topping1;
    }
    Pizza(string topping1, string topping2){
        this -> topping1 = topping1;
        this -> topping2 =  topping2;
    }
};

//// GETTERS & SETTERS

class Stove{
    private:
        int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        } else if (temperature >= 10){
            this->temperature = 0;
        } else {
            this->temperature = temperature;
        }
        
    }
};

//// Inharitance 

class Animal{
    public:
        bool alive = true ;
    void eat(){
        cout << "This animal is earing \n";
    }
};
class Dog : public Animal{
    public:

    void bark(){
        cout << "the dog goes woof!\n";
    }
};
class Cat : public Animal{
    public:

    void meow(){
        cout << "The goes meow!\n";
    }
};

class Shape{
    public:
        double area; 
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this-> side = side;
        this-> area = side * side * 6;
        this-> volume = side * side * side;
    }
};
class Sphere : public Shape{
    public:
        double redius;
    Sphere(double redius){
        this-> redius = redius;
        this-> area = 4 * 3.14159 * (redius * redius);
        this-> volume = (4/3.0) * 3.14159 * (redius * redius * redius * redius);
    }
};



int main() {

    /// Variable and bassic Datatypes



    //  cout << "I Like Pizza!" <<endl;
    //  cout << " It's really good" <<endl;

    //  integer (whole number)
    // int age = 19;
    // int year = 2024;
    // int days = 7.5;
    // cout << days << endl;

    // double (number including decimal)
    // double price = 10.99;
    // double gpa = 3.5;
    // double temp = 25.1;
    // cout << price <<endl;

    //  sigle character 
    // char grade = 'A';
    // char initial = 'B';
    // cout << grade <<endl;

    //  boolean (true or false)
    // bool student = false;
    // bool power = true;
    // bool forSale = true;
    
    // string (object that represents a sequence of text)
    // string name = "Mahibul";
    // string day = "Friday";
    // string food = "Pizza";
    // string address = "123 Fake st.";

    // cout << "Hello " << name << endl;
    // cout << "You are " << age <<" years old" << endl;

    /// Const 
    //the const keyword specifies that a variable's value is constant
    //tells the compiler to pervent anything from modifying it 
    // (Read-only)

    // const double pi = 3.14159;
    // double radius = 10;
    // double circumference = 2 * pi * radius;
    
    // cout << circumference << " cm" <<endl;

    // const double PI = 3.14159;
    // const int LIGHT_SPEED = 29979458;
    // const int WIDTH = 1920;
    // const int HEIGHT = 1080;


    /// namespace 

    //  int x = 0;
    // using namespace first;

    // cout << x << endl;

    /// typedef 

    // text_t firstName = "mahibul";
    // number_t age = 19;
    // cout << firstName << endl;
    // cout << age << endl;



    /// arithmetic operators

    // int student = 20;
    // student = student + 1;
    // student += 2;
    // student ++;

    
    // student = student -1;
    // student -= 2;
    // student --;

    // student = student *2;
    // student *= 2;

    //student = student /2;
    //student /= 3;

    // int remainder = student % 2;

    // cout << remainder << endl;

    ///
    // parenthesis
    //multiplication & division
    // addition & subtration

    // int student = 6 - 5 + 4 * 3 / 2;
    // cout << student <<endl;

    /// Type Conversion

    // type conversion = conversion a value of one data type to another 
    //                   Implicit = automatic
    //                   Explicit = precede value with new data type (int)

    // double x = (int) 3.14;
    // char x = 100;
    // cout << x << endl;

    // int correct = 8;
    // int questions = 10;
    // double score = correct/(double)questions * 100;
    // cout << score << "%" << endl;

    /// User input 
    
    // cout << (insertion operation)
    // cin >> (extraction operation)

    
    // string name;
    // int age;
    // cout << "What's your age: ";
    // cin >> age;

    // cout <<"What's your name : ";
    // getline(cin >> ws, name);
    
    // cout << "Hello " << name << endl; 
    // cout << "You are " << age << " years old" << endl;

    /// Useful math related functions


    // double x = 3.99;
    // double y = 4;
    // double z;

    // z = max(x, y);
    // z = min(x, y);
    // z = pow(2, 4);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x);
    // z = floor(x);
    // cout << z;


    /// if statement 

    // if statement = do something if a condition is true.
    //                if not, then don't do it.

    // int age;
    // cout << "Enter your age : ";
    // cin >> age;
    // if (age >= 100) {
    //     cout << "You are too old to enter this site!";
    // } else if (age >= 18) {
    //     cout << "Welcome to the site!";
    // } else if (age <= 0){
    //     cout << "You haven't been born yet!";
    // } else {
    //     cout << "Your are not old enough to enter!";
    // }

    //// Switch Statemant

    //switch = alternative to using many "else if " statement
    //         compare one value against matching cases

    // int month;
    // cout << "Enter the month (1-12) : ";
    // cin >> month;

    // Case 1

    // switch(month){
    //     case 1:
    //         cout << "January";
    //         break;
    //     case 2:
    //         cout << "February";
    //         break;
    //     case 3:
    //         cout << "March";
    //         break;
    //     case 4:
    //         cout << "April";
    //         break;
    //     case 5:
    //         cout << "May";
    //         break;
    //     case 6:
    //         cout << "June";
    //         break;
    //     case 7:
    //         cout << "July";
    //         break;
    //     case 8:
    //         cout << "August";
    //         break;
    //     case 9:
    //         cout << "September";
    //         break;
    //     case 10:
    //         cout << "October";
    //         break;
    //     case 11:
    //         cout << "November";
    //         break;
    //     case 12:
    //         cout << "Desember";
    //         break;
    //     default: 
    //         cout << "Please enter in only numbers (1-12)";
    // }

    // case 2

    // char grade;
    // cout << "What letter grade?: ";
    // cin >> grade;

    // switch(grade) {
    //     case 'A':
    //         cout << "You did great!";
    //         break;
    //     case 'B':
    //         cout << "You did good";
    //         break;
    //     case 'C':
    //         cout << "You did okay";
    //         break;
    //     case 'D':
    //         cout << "You did not do good";
    //         break;
    //     case 'F':
    //         cout << "YOU FAILED!";
    //         break;
    //     default:
    //         cout << "Please only enter in a Capital letter Greade (A-F)";
    // }



    /// Ternar Operator

    // ternary operator ?: = replacemnet to an if/else statement
    // condition ? expression1 : expression2;

    // int grade = 55;

    // ternary 

    // grade >= 60 ? cout << "You Pass!" : cout << "You Fail!";

    // if statement
    // if (grade >= 60) {
    //     cout << "You pass!";
    // } else {
    //     cout << "You Fail!";
    // }

    // int number = 8;
    // number % 2 == 1 ? cout << "Odd" : cout << "Even";

    // bool hungry = true;
    
    // hungry ? cout << "You are Hungry" : cout << "You are fail";
    // cout << (hungry ? "You are hungry" : "You are fail");
    
    /// Logical Operators

    // && = check if two condition are true
    // || = check if at last one of two conditions is true
    //  ! = reverses the logical state of its operand

    // int temp;
    // cout << "Enter the temperature : ";
    // cin >> temp;

    // and operator
    // if(temp > 0 && temp < 30){
    //     cout << "The temperature is good!";
    // } else {
    //     cout << "The temperature is bad!";
    // }

    // or operator
    // if(temp <= 0 || temp >= 30){
    //     cout << "The temperature is Bad!";
    // } else {
    //     cout << "The temperature is Good!";
    // }

    // bool sunny = false;

    // if(!sunny) {
    //     cout << "It is cloudy outside!";
    // } else {
    //     cout << "It is sunny outside!";
    // }


    /// String methods 
    
    // length methods
    // string name;
    // cout << "Enter you name: ";
    // getline(cin, name);

    // if(name.length() > 12) {
    //     cout << "Your name can't be over 12 character";
    // } else {
    //     cout << "Welcome " << name << endl;
    // }

    // empty methods
    // if(name.empty()) {
    //     cout << "You did not enter your name";
    // } else {
    //     cout << "Hello " << name <<endl;
    // }

    // clear methods 

    // string name;
    // cout << "Enter you name: ";
    // getline(cin, name);
    // name.clear();
    // cout << "Hello " << name;

    // string diclayer
    // string name;
    // cout << "Enter you name: ";
    // getline(cin, name);

    // append methods

    // name.append("@gmail.com");
    // cout << "Your username is now " << name;

    // only one character output
    // cout << name.at(0);

    // name.insert(0, "@");
    // cout << name;

    // cout << name.find(' ');

    // name.erase(0, 3);
    // cout << name;

    /// While loops

    // if 

    // string name;
    // if (name.empty()) {
    //     cout << "Enter your name: ";
    //     getline(cin, name);
    // }
    // cout << "Hello " << name;

    // While 

    // string name;
    // while (name.empty()) {
    //     cout << "Enter your name: ";
    //     getline(cin, name);
    // }
    // cout << "Hello " << name;

    /// Do While Loops

    //do while loop = do some block of code first,
    //                THEN repeat againt if condition is true

    // while example
    // int number;
    // cout << "Enter a Positive #: ";
    //     cin >> number;

    // while (number < 0) {
    //     cout << "Enter a Positive #: ";
    //     cin >> number;
    // }
    // cout << "The number is : " << number;

    // do while example
    // int number;
    // do {
    //     cout << "Enter a Positive number: ";
    //     cin >> number;
    // } while(number < 0);
    // cout << "The number is : " << number << endl;

    /// For Loops 


    // for(int i = 1; i <= 3; i++) {
    //     cout << "Happy New Year!" << endl;
    // }

    /// Break And Continue
    // break = break out of a loop
    // Continue = skip current iteration

    // for(int i = 1; i <= 20; i++) {
    //     if(i == 10) {
    //         continue; // Skip number 10
             // break; // break number 10


    //     }
    //     cout << i << endl;
    // }


    /// Nested Loops

    // for(int i = 1; i <= 3; i++) {
    //     for(int j = 1; j <= 10; j++){
    //         cout << j << ' ';
    //     }
    //     cout << endl;
    // }

    // int rows;
    // int columns;
    // char symbol;

    // cout << "How many rows?: ";
    // cin >> rows;

    // cout << "How many columns?: ";
    // cin >> columns;

    // cout << "Enter a symbol to use: ";
    // cin >> symbol;


    // for(int i = 1; i <= rows; i++) {
    //     for(int j = 1; j <= columns; j++){
    //         cout << symbol;
    //     }
    //     cout << endl;
    // }

    /// Random number genrerator

    // pseudo-random = not truly random (but close)

    // srand(time(NULL));

    // int num1 = (rand() % 10) + 1;
    // int num2 = (rand() % 10) + 1;
    // int num3 = (rand() % 10) + 1;

    // cout << num1 << endl;
    // cout << num2 << endl;
    // cout << num3 << endl;

    /// Random even generator

    // srand(time(0));
    // int randNum = rand() % 5 + 1;
    // switch(randNum){
    //     case 1: cout << "You win a bumper sticker!\n";
    //             break;
    //     case 2: cout << "You win a t-shirt!\n";
    //             break;
    //     case 3: cout << "You win a free lunch!\n";
    //             break;
    //     case 4: cout << "You win a gift card!\n";
    //             break;
    //     case 5: cout << "You win concert tickets!\n";
    //             break;
    // }


    /// User Defined Functions

    // Function = a block of rusable code

    // string name = "MAHIBUL";
    // int age = 19;

    // happyBirthday(name, age);


    /// Return keyword
    // return = retun a value back to the spot
    //          where you called the encompassing function

    // double length = 6.0;
    // double area = square(length);
    // double volume = cube(length);

    // cout << "Area : " << area << " cm^2" <<endl;
    // cout << "Volume : " << volume << " cm^3" <<endl;

    // string firstName = "Mahibul";
    // string lastName = "Hasan";
    // string fullName = concatStrings(firstName , lastName);

    // cout << "Hello " << fullName;

    /// Overloaded Functions

    // bakePizza("pepperoni", "mshrooms");

    /// Variable Scope

    //local variables = declared inside a function or block{}
    // Global variables = declared outside of all function

    // int myNum = 1; // local variable
    
    // int myNum = 1;
    // prinNum();
    // cout << myNum << endl; // use this '::' output value for local variable

    /// Arrays
    // array = a data structue that can hold multiple values
    //         values are accessed by an index number 
    //         "kind of like a variable that hold multiple values"

    // string example
    // string cars[] = {"carvette", "Mustang", "Camry"};

    // change the value

    // cars[2] = "Supra";
    // cars[1] = "Nisan GTR";
    // cars[0] = "Chiron";

    // cout << cars[0] << endl;
    // cout << cars[1] << endl;
    // cout << cars[2] << endl;

    // double example

    // double prices[] = {2.55, 5.35, 888, 15.55};

    // cout << prices[0] << endl;
    // cout << prices[1] << endl;
    // cout << prices[3] << endl;
    // cout << prices[2] << endl;

    /// Sizeof() Operator

    // sizeof() = determines the size in bytes of a:
    //            variable, data, class, object, etc.

    // string name = "Mahibul";
    // double gpa = 2.65;
    // char grade = 'F';
    // bool student = true;
    // char grades[] = {'A', 'B', 'C', 'D', 'E'};
    // string students[] = {"Spongebob", "Patrick", "Squidward"};

    // cout << sizeof(name) << " bytes" << endl;
    // cout << sizeof(gpa) << " bytes" << endl;
    // cout << sizeof(grade) << " bytes" << endl;
    // cout << sizeof(student) << " bytes" << endl;
    // cout << sizeof(grades) << " bytes" << endl;
    // cout << sizeof(grades)/sizeof(char) << " elements\n";
    // cout << sizeof(students)/sizeof(string) << " elements\n";

    /// Iterate over array

    // string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    // char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // for(int i = 0; i < sizeof(grades)/sizeof(char); i++) {
    //     cout << grades[i] << endl;
    // }

    /// Foreach loop 
    
    // foreach loop = loop that eases the traveral over an
    //                interable data set

    // string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    // int grades[] = {65, 66, 75, 56};

    // for (int  grade : grades) {
    //     cout << grade << endl;
    // }


    /// Pass Array to a function 

    // double prices[] = {34.3, 343.64, 3534.3, 889.6};
    // int size = sizeof(prices)/sizeof(prices[0]);

    // double total = getTotal(prices, size);

    // cout << "$ " << total;

    /// Search an array for an element 

    // integer example

    // int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = sizeof(numbers)/sizeof(numbers[0]);
    // int index;
    // int myNum;

    // cout << "Enter the element to search for: ";
    // cin >> myNum;

    // index = searchArray(numbers, size, myNum);

    // if(index != -1){
    //     cout << myNum << " is at index " << index;
    // } else {
    //     cout << "is not in the array";
    // }

    // string example

    // string foods[] = {"pizza", "hamburger", "hotdog"};
    // int size = sizeof(foods)/sizeof(foods[0]);
    // int index;
    // string myFood;

    // cout << "Enter the element to search for: ";
    // getline(cin, myFood);

    // index = searchArray(foods, size, myFood);

    // if(index != -1){
    //     cout << myFood << " is at index " << index;
    // } else {
    //     cout << myFood << " is not in the array";
    // }

    /// Short an array

    // int array[] ={10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    // int size = sizeof(array)/sizeof(array[0]);

    // sort(array, size);

    // for(int element : array) {
    //     cout << element << " ";
    // }

    /// Fill() Function
    // fill() = fills a range of elements with a specified value
    //          fill(begin, end, value)

    // string foods[10] = {"pizza",  "pizza",  "pizza",  "pizza",  "pizza",  "pizza",  "pizza",  "pizza",  "pizza", "pizza"};

    // const int SIZE = 99;
    // string foods[SIZE];
    // fill(foods, foods + (SIZE/3), "pizza");
    // fill(foods + (SIZE/3), foods + (SIZE/3)*2, "Hamburger");
    // fill(foods + (SIZE/3)*2, foods + SIZE, "HotDog");

    // for(string food : foods){
    //     cout << food <<endl;
    // }

    /// Fill an array with user input

    // string foods[5];
    // int size = sizeof(foods)/sizeof(foods[0]);
    // string temp;

    // for(int i = 0; i < size; i++) {
    //     cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
    //     getline(cin, temp);
    //     if(temp == "q"){
    //         break;
    //     } else {
    //         foods[i] = temp;
    //     }
    // }
    // cout << "YOu like the following food:\n";
    // for(int i = 0; !foods[i].empty(); i++){
    //     cout << foods[i] << endl;
    // }

    //// Multidimensional Arrays

    // string cars[][3] =  {{"Mustang", "Escape", "F-150"},
    //                     {"Corvatte", "Equinox", "Silverado"},
    //                     {"Challenger", "Durango", "Ram 1500"}};

    // cout << cars[0][0] << " " ;
    // cout << cars[0][1] << " " ;
    // cout << cars[0][2] << " " << endl;

    // cout << cars[1][0] << " " ;
    // cout << cars[1][1] << " " ;
    // cout << cars[1][2] << " " << endl;

    // cout << cars[2][0] << " " ;
    // cout << cars[2][1] << " " ;
    // cout << cars[2][2] << " " << endl;

    // calculate sizeof row and columns

    // string cars[][3] =  {{"Mustang", "Escape", "F-150"},
    //                     {"Corvatte", "Equinox", "Silverado"},
    //                     {"Challenger", "Durango", "Ram 1500"}};
    
    // int rows = sizeof(cars)/sizeof(cars[0]);
    // int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    // for(int i = 0; i < rows; i++) {
    //     for (int j = 0; j < columns; j++){
    //         cout << cars[i][j] << " ";
    //     }
    //     cout << endl;
    // } 

    /// Memory addresses
    // memory  address = a location in memory where data is stored 
    // a memory address can accessed with & (address-of operator)

    // string name = "mahiubl";
    // int age = 19;
    // bool student = true;

    // cout << &name << endl;
    // cout << &age << endl;
    // cout << &student << endl;

    /// Pass by Value Vs Pass by Reference

    // string x = "Kool-Aid";
    // string y = "Water";

    // swap(x,y);

    // cout << "X: " << x << endl;
    // cout << "Y: " << y << endl;

    /// const parameters 
    // cons parameter = parameter that is effectively read-only
    //                  code is more secure & conveys intent 
    //                  Useful for references and pointers

    // string name = "Mahibul";
    // int age = 19;

    // printInfo(name, age);

    /// Credit card validatoor program 
    // go to project file 

    ///Pointers
    // pointers = variable that stores a memory address of another variable
    //            some times it's easier to work an address

    // & address-of operator
    // * dereference operator

    // string name = "Mahibul";
    // int age = 19;
    // string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    // string *pName = &name;
    // int *pAge = &age;
    // string *pFreePizza = freePizzas;

    // cout << *pName << endl;
    // cout << *pAge << endl;
    // cout << *pFreePizza << endl;

    //// Null Pointers 
    // Null value = a special value that means some thing has no value.
    //              when a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)
    // nullptr = keyword represents a null pointer literal
    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    // int *pointer = nullptr;
    // int x = 123;

    // pointer = &x;

    // if(pointer == nullptr){
    //     cout << "address was not assigned!\n";
    // } else {
    //     cout << "address was assigned!\n";
    // }

    //// Dynamic memory 
    // Dynamic memory = memory that is allocated after the 
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap raher than the stack

    //                  Useful when we don;t know how much memory 
    //                  we will need. makes our programs more flexible,
    //                  especially when accepting user input.

    // int *pNum = NULL;

    // pNum = new int;
    // *pNum = 21;
    // cout << "address" << pNum << endl;
    // cout << "value: " << *pNum << endl;

    // char *pGrades = NULL;
    // int size;

    // cout << "How many grades to enter in?: ";
    // cin >> size;

    // pGrades = new char[size];

    // for(int i = 0; i < size; i++){
    //     cout << "Enter grade # " << i + 1 << ": ";
    //     cin >> pGrades[i];
    // }

    // for(int i = 0; i < size; i++){
    //     cout << pGrades[i] << " ";
    // }
    // delete[] pGrades;

    //// Recursion 

    // recursion = a programing technicque where a function
    //             invokes itselt from within
    //             break a compex concept int a reaptalbe single Step
    // (iterative vs recursive)
    // advantages = less code and is cleaner
    //              useful for sotring and searching algorithms
    // disadvantages = uses more memory 
    //                 slower

    // walk(100);

    // cout << factorial(10);


    //// Function tmaplates 
    // function template = describes what a function looks lie.
    //                     can be used to generat as many overloaded functions
    //                     as need each using differesnt datat types

    // cout << max(1, 2.21);

    //// Structs 
    // struct = A strucre that group related variables unddr one name
    //          Structs can contain many differant data types(string, int, doulbe, bool , etc)
    //          variables in a struct are known as "members"
    //          members can be access with . "class member access operators"

    // student student1;
    // student1.name = "Mahibul";
    // student1.gpa = 3.35;
    // student1.enrolled = true;

    // student student2;
    // student2.name = "Shifat";
    // student2.gpa = 3.25;
    // student2.enrolled = false;

    // student student3;
    // student3.name = "Hasan";
    // student3.gpa = 3.12;
    // student3.enrolled = true;

    // cout << student1.name << endl;
    // cout << student1.gpa << endl;
    // cout << student1.enrolled << endl;

    // cout << student2.name << endl;
    // cout << student2.gpa << endl;
    // cout << student2.enrolled << endl;

    // cout << student3.name << endl;
    // cout << student3.gpa << endl;
    // cout << student3.enrolled << endl;

    //// Pass structs as arguments

    // Car car1;
    // Car car2;
    
    // car1.model = "Supra";
    // car1.year = 2023;
    // car1.color = "White";

    // car2.model = "Mustang";
    // car2.year = 2023;
    // car2.color = "Red";

    // paintCar(car1, "red");
    // paintCar(car2, "white");

    //  cout << &car1 << endl;
    // printCar(car1);
    // printCar(car2);

    /// Enums 

    // enums = a user-defined date type that cosists
    //         of paired named-interger constants.
    //         GREAT if you have a set potiential options

    // Day today = friday;

    // switch(today){
    //     case 0: cout << "It is Sunday!" << endl;
    //                 break;
    //     case 1: cout << "It is Monday!" << endl;
    //                 break;
    //     case 2: cout << "It is Tuesday!" << endl;
    //                 break;
    //     case 3: cout << "It is Wednesday!" << endl;
    //                 break;
    //     case 4: cout << "It is Thursday!" << endl;
    //                 break;
    //     case 5: cout << "It is Friday!" << endl;
    //                 break;
    //     case 6: cout << "It is Satarday!" << endl;
    //                 break;
    // }


    //// Object Oriented Programming 

    // boject = A collection of attributes and methods 
    //          They can have characteristics and could peform actions 
    //          Can be used to mimic real world items (ex. phone, book, dog)
    //          Created from a class which acts as a "blue-print"

    // Human human1; // class diclayer
    // Human human2;


    // human1.name = "Mahibul";
    // human1.occupation = "Programmer";
    // human1.age = 19;

    // cout << human1.name << endl;
    // cout << human1.occupation << endl;
    // cout << human1.age << endl;

    // human1.eat();
    // human1.drink();
    // human1.sleep();


    // human2.name = "Shifat";
    // human2.occupation = "Student";
    // human2.age = 18;

    // cout << human2.name << endl;
    // cout << human2.occupation << endl;
    // cout << human2.age << endl;

    // human2.eat();
    // human2.drink();
    // human2.sleep();

    // Cars car1;

    // car1.make = "Toyeta";
    // car1.model = "Supra";
    // car1.year = 2024;
    // car1.color = "White";

    // cout << car1.make << endl;
    // cout << car1.model << endl;
    // cout << car1.year << endl;
    // cout << car1.color << endl;

    // car1.accelerate();
    // car1.brake();

    //// Constructiors 
    // constructor = special method that is automatically called when an object is instantiated
    //              useful for assigning assignig values to attributes as argumments

    // Students student1("mahibul", 19, 3.3);
    // Students student2("Shifat", 32, 3.85);
    // Students student3("Sandy", 45, 3.5);
    
    // cout << student1.name << endl;
    // cout << student1.age << endl;
    // cout << student1.gpa << endl;

    // cars car1("Nissan", "GTR", 2023, "blue");
    // cars car2("Ford", "Mustang", 2023, "red");

    
    // cout << car1.make << endl;
    // cout << car1.model << endl;
    // cout << car1.year << endl;
    // cout << car1.color << endl;
    
    // cout << car2.make << endl;
    // cout << car2.model << endl;
    // cout << car2.year << endl;
    // cout << car2.color << endl;

    //// Constructor overloading 

    // overloaded constructor = multiple constructor w/ same name but different parameters
    //                          allows for varying arguments when instandiating an object

    // Pizza pizza1("pepperoni");
    // Pizza pizza2("mushrooms", "peppers");

    // cout << pizza1.topping1 << endl;
    // cout << pizza2.topping2 << endl;

    //// Getters & seters

    // Abstraction = hiding unnecessary data from ouside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    // Stove stove;
    // stove.setTemperature();
    
    // cout << "The temperature setting is: " << stove.getTemperature;

    //// Inheritance 

    // inheritance = a class can recieve attributes and methods fromanother class
    //              children classes inherit from a Parent class 
    //              Helps to reuse similar code found within muliple classes

    // Dog dog;
    // Cat cat;

    // cout << dog.alive << endl;
    // dog.eat();
    // dog.bark();
    
    // cat.eat();
    // cat.meow();

    Cube cube(10);
    Sphere sphere(5);
    cout << "Area: " << cube.area << "cm\n";
    cout << "Area: " << cube.volume<< "cm\n";

    cout << "Area: " << sphere.area << "cm\n";
    cout << "Area: " << sphere.volume<< "cm\n";



     return 0;
 }


    /// Function
    void happyBirthday(string name, int age) {
        cout << "Happy Birthday to you! " << name << endl;
        cout << "Happy Birthday to you! " << name << endl;
        cout << "Happy Birthday my friend! " << name << endl;
        cout << "Happy Birthday Dear you! " << name << endl;
    
        cout << "You are " << age << " years old" << endl;

}
    /// Return keyword

    double square(double length) {
        // double result = length * length;
        return length * length;
    }
    double cube(double length) {
        return length * length * length;
    }

    string concatStrings(string string1, string string2){
        return string1 + " " + string2;
    }

    void bakePizza(){
        cout << "Here is your pizza\n";
    }

    void bakePizza(string topping1){
        cout << "Here is your " << topping1 << " pizza\n";
    }

    void bakePizza(string topping1, string topping2){
        cout << "Here is your " << topping1 << " and " << topping2 << " pizza\n";
    }

    /// Variable Scope Example

    void prinNum() {
        int myNum = 2;
        cout << myNum << endl;
    }

    /// pass arry to a function

    double getTotal(double prices[], int size){
        double total = 0;

        for (int i = 0; i < size; i++) {
            total += prices[i];
        }
        return total;
    }

    /// Search an array for an element 

    // integer example

    int searchArray(int array[], int size, int element){
        for(int i = 0; i < size; i++) {
            if(array[i] == element){
                return i;
            }
        }
        return -1;

    }

    // string example

    int searchArray(string array[], int size, string element){
        for(int i = 0; i < size; i++) {
            if(array[i] == element){
                return i;
            }
        }
        return -1;
    }

    //// Short an array

    void sort(int array[], int size){
        int temp;
        for(int i = 0; i < size - 1; i++){
            for(int j = 0; j< size - i - 1; j++){
                if(array[j] < array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }

    /// Pass by Value Vs Pass by Reference

    void swap(string &x, string &y) {
        string temp;
        temp = x;
        x = y;
        y = temp;
    }

    /// const parameters 

    void printInfo(const string name, const int age){
        cout << name << endl;
        cout << age << endl;
    }

    //// Recursion 

    void walk(int steps){
        // forloop example
        // for(int i = 0; i < steps; i++){
        //     cout << "You take a steps!" << endl;
        // }

        // if example
        // if(steps > 0){
        //     cout << "You take a steps!" << endl;
        //     walk(steps - 1);
        // }

    }
    // Recursion example

    int factorial(int num){
        int result = 1;
        if(num > 1){
            return num * factorial(num -1);
        } else{
            return 1;
        }
    }


    //// Pass structs as arguments

    void printCar(Car &car){
        cout << &car << endl;
        cout << car.model << endl;
        cout << car.year << endl;
        cout << car.color << endl;
    }

    void paintCar(Car car, string color){
        car.color = color;
    }