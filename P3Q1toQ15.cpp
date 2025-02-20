#include<iostream>
#include<math.h>
#include <cstdarg>
using namespace std;

//Function of Max number of two number

/*int maxNumber(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}

int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"Larger Number is: "<<maxNumber(a,b)<<endl; 
}*/



//Function of factorial

/*int factorial(int n){
    if(n!=1)
        return factorial(n-1)*n;
    else
        return 1;
}

int main(){
    int f;
    cout<<"Enter a number: ";
    cin>>f;
    cout<<"Factorial is: "<<factorial(f);

}*/



//Function of Reverse Number

/*int reverseNumber(int n){
    int r=0;
    while(n>0){
        int remainder=n%10;
        r=r*10+remainder;
        n/=10;
    }
    return r;
}

int main(){
    int a;
    cout<<"Enter A number: ";
    cin>>a;
    cout<<"Reversed number: "<<reverseNumber(a);
}*/



//Sum of digits Of a given number

/*int sumOfdigits(int n){
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
    
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits: " << sumOfdigits(num) << endl;
    return 0;
}*/



//Number is palindrome

/*bool isPalindrome(int n){
    int original=n;
    int r=0;
    while(n>0){
        int remainder=n%10;
        r=r*10+remainder;
        n/=10;
    }
    return original==r;
}

int main(){
    int a;
    cout<<"Enter A number: ";
    cin>>a;
    if (isPalindrome(a)) {
        cout << a << " is a palindrome number." << endl;
    } else {
        cout << a << " is not a palindrome number." << endl;
    }
}*/



//Nth Fibonacci Number

/*int Fib(int n){
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cout << "Enter the position of Fibonacci number: ";
    cin >> num;
    cout << num << "th Fibonacci number: " << fib(num) << endl;
    return 0;
}*/



//GCD of two number

/*int gcd(int a,int b){
    while(b!=0){
        int temp;
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"GCD is: "<<gcd(a,b)<<endl;
    cout<<"LCM is: "<<lcm(a,b)<<endl;
}*/



//print() function:
//One takes a string as an argument
//Another takes an integer
//The third takes both a string and an integer

/*void print(string s) {
    cout << "String: " << s << endl;
}

void print(int n) {
    cout << "Integer: " << n << endl;
}

void print(string s, int n) {
    cout << "String: " << s << ", Integer: " << n << endl;
}

int main() {
    print("Hello");
    print(42);
    print("Number", 10);
    return 0;
}*/



//sum() function to add:
//Two integers
//Three doubles
//One integer and one float

/*int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b, double c) {
    return a + b + c;
}

float sum(int a, float b) {
    return a + b;
}

int main() {
    cout << "Sum of two integers: " << sum(5, 10) << endl;
    cout << "Sum of three doubles: " << sum(1.2, 2.3, 3.4) << endl;
    cout << "Sum of integer and float: " << sum(7, 2.5f) << endl;
    return 0;
}*/



//function multiply()
//One version takes two int values and returns their product
//Another takes one int and one double
//Another takes three float values

/*int multiply(int a, int b) {
    return a * b;
}

double multiply(int a, double b) {
    return a * b;
}

float multiply(float a, float b, float c) {
    return a * b * c;
}

int main() {
    cout << "Product of two integers: " << multiply(5, 10) << endl;
    cout << "Product of one integer and one double: " << multiply(7, 2.5) << endl;
    cout << "Product of three floats: " << multiply(1.2f, 2.3f, 3.4f) << endl;
    return 0;
}*/



//function greet()
//One version takes no parameters and prints "Hello!"
//Another takes a string name and prints "Hello, [name]!"
//Another takes a string name and an int age, printing "Hello, [name]! You are [age] years old."

/*void greet() {
    cout << "Hello!" << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

void greet(string name, int age) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

int main() {
    greet();
    greet("Alice");
    greet("Bob", 25);
    return 0;
}*/



//Function area()
//One version calculates the area of a square (takes one int.
//Another calculates the area of a rectangle (takes two ints)
//Another calculates the area of a circle (takes a double radius)

/*double area(int s){
    return(s*s);
}
double area(int l,int b){
    return(l*b);
}
double area(float r){
    return((22.0/7)*r*r);
}
int main(){
    int s,l,b;
    float r;
    cout<<"Enter side of a square: ";
    cin>>s;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>l>>b;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<endl<<"Sqaure= "<<area(s)<<endl<<"Rectangle= "<<area(l,b)<<endl<<"Circle= "<<area(r)<<endl;
}*/



//function concat()
//One version takes two strings and returns their concatenation
//Another takes an int and a string, converting the int to a string before concatenation

/*string concat(string a, string b) {
    return a + b;
}

string concat(int num, string str) {
    return to_string(num) + str;
}

int main() {
    cout << "Concatenation of two strings: " << concat("Hello, ", "World!") << endl;
    cout << "Concatenation of int and string: " << concat(42, " is the answer.") << endl;
    return 0;
}*/



//function power()
//One version takes two int (base and exponent)
//Another takes one double and one int

/*int power(int base, int exponent) {
    return pow(base, exponent);
}

double power(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    cout << "Power of int base and int exponent: " << power(2, 3) << endl;
    cout << "Power of double base and int exponent: " << power(2.5, 3) << endl;
    return 0;
}*/



//int sum(int count, ...) that takes a variable number of integer arguments and returns their sum

int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}

int main() {
    cout << "Sum of 3 numbers: " << sum(3, 1, 2, 3) << endl;
    cout << "Sum of 5 numbers: " << sum(5, 10, 20, 30, 40, 50) << endl;
    return 0;
}
