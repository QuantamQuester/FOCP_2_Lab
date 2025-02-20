#include<iostream>   
using namespace std;
  
//WAP to compute two int are opp. using XOR

/*  bool opp(int a, int b) {
    return (a ^ b) < 0;
} 

int main() {
    int a, b;
    cout<<"Enter two integer:  ";
    cin >> a >> b;
    
    if (opp(a, b))
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}*/
    


//Perform division without using '/' operator

/*int main(){
  int dividend, divisor;
  cout << "Enter dividend and divisor: ";
  cin >> dividend >> divisor;
    
  int quotient = 0, remainder = abs(dividend);
  int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
  int abs_divisor = abs(divisor);
    
  while (remainder >= abs_divisor) {
  remainder -= abs_divisor;
  quotient++;
}
  cout << "Quotient: " << sign * quotient << " Remainder: " << remainder << endl;
}*/



//Perform circular left and right shift

/*int main(){

  int num, shift;
  cout << "Enter number and shift count: ";
  cin >> num >> shift;
    
  int bits = sizeof(int) * 8;
  cout << "Circular Left Shift: " << ((num << shift) | (num >> (bits - shift))) << endl;
  cout << "Circular Right Shift: " << ((num >> shift) | (num << (bits - shift))) << endl;
}*/



//Calculate grade based on marks

/*int main(){
  int marks;
  cout << "Enter student marks: ";
  cin >> marks;
    
  if (marks >= 90) cout << "Grade: A" << endl;
  else if (marks >= 80) cout << "Grade: B" << endl;
  else if (marks >= 70) cout << "Grade: C" << endl;
  else if (marks >= 60) cout << "Grade: D" << endl;
  else cout << "Grade: F" << endl;   
}*/

//Menu Driven calculator

/*int main() {
  int choice;
  double num1, num2;
  
  do {
      cout << "\nMenu: " << endl;
      cout << "1. Addition" << endl;
      cout << "2. Subtraction" << endl;
      cout << "3. Multiplication" << endl;
      cout << "4. Division" << endl;
      cout << "5. Exit" << endl;
      cout << "Enter your choice: ";
      cin >> choice;
      
      if (choice >= 1 && choice <= 4) {
          cout << "Enter two numbers: ";
          cin >> num1 >> num2;
      }
      
      switch (choice) {
          case 1:
              cout << "Result: " << num1 + num2 << endl;
              break;
          case 2:
              cout << "Result: " << num1 - num2 << endl;
              break;
          case 3:
              cout << "Result: " << num1 * num2 << endl;
              break;
          case 4:
              if (num2 != 0)
                  cout << "Result: " << num1 / num2 << endl;
              else
                  cout << "Error! Division by zero." << endl;
              break;
          case 5:
              cout << "Exiting..." << endl;
              break;
          default:
              cout << "Invalid choice, please try again." << endl;
      }
  } while (choice != 5);
  
  return 0;
}*/



//WAP to compute if a leap year or not

/*int main(){
  int a;
  cout<<"Enter a Year:  ";
  cin>>a;
  if (a/4==0)
  cout<<"It's a leap year";
  else
  cout<<"It's not a leap year";
  return 0;
}*/



//Fibonacci number

/*int main() {
  int n;
  cout << "Enter the number of Fibonacci terms: ";
  cin >> n;
  
  int first = 0, second = 1, next;
  
  cout << "Fibonacci Series: ";
  for (int i = 0; i < n; i++) {
    cout << first << " ";
    next = first + second;
    first = second;
    second = next;
  }
  cout << endl;
  
  return 0;
}*/



//WAP to compute prime number

/*int main() {

  int n,i,f=0;
  cout<<"Enter a positive integer: ";
  cin>>n;

  if (n == 0 || n == 1)
    f=1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      f=1;
      continue;
    }
  }

  
  if (f==0)
    cout<<n<<" is a prime number.";
  else
    cout<<n<< " is not a prime number";

  return 0;
}*/



//Number is prime using a while loop

/*int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  
  if (num <= 1) {
      cout << num << " is not a prime number." << endl;
      return 0;
  }
  
  int i = 2;
  bool Prime = true;
  while (i * i <= num) {  
      if (num % i == 0) {
          Prime = false;
          break;
      }
      i++;
  }
  
  if (Prime)
      cout << num << " is a prime number." << endl;
  else
      cout << num << " is not a prime number." << endl;
  
  return 0;
}*/



//Factorial of a number using a do-while loop

/*int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  
  int factorial = 1;
  int i = 1;
  
  do {
    factorial *= i;
    i++;
  } while (i <= num);
  
  cout << "Factorial of " << num << " is " << factorial << endl;
  
  return 0;
}*/



//A program that continuously accepts user input of integers
//The sum of all entered numbers
//The count of valid integers entered
//The maximum and minimum numbers

int main() {
  string input;
  int sum = 0, count = 0, num;
  int maxNum = -2147483648; 
  int minNum = 2147483647;  
  
  cout << "Enter integers (type 'exit' to stop):\n";
  
  while (true) {
      cin >> input;
      if (input == "exit") {
          break;
      }
      
      bool isNumber = true;
      for (size_t i = 0; i < input.size(); i++) {
          if (!isdigit(input[i]) && !(i == 0 && input[i] == '-')) {
              isNumber = false;
              break;
          }
      }
      
      if (isNumber) {
          num = stoi(input);
          sum += num;
          count++;
          if (num > maxNum) maxNum = num;
          if (num < minNum) minNum = num;
      } else {
          cout << "Invalid input. Please enter an integer or 'exit' to stop." << endl;
      }
  }
  
  if (count > 0) {
      cout << "Sum of all entered numbers: " << sum << endl;
      cout << "Count of valid integers entered: " << count << endl;
      cout << "Maximum number entered: " << maxNum << endl;
      cout << "Minimum number entered: " << minNum << endl;
  } else {
      cout << "No valid integers entered." << endl;
  }
  
  return 0;
}








