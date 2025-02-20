#include<iostream>
#include<math.h>
#include <ctime>
#include <iomanip>
using namespace std;

//Wap to generate n number of prime number using do-while

/*bool prime(int n) {
    if (n < 2) 
    return false;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) 
        return false;
    }
    return true;
}
int main(){
    int num,n=2,count=0;
    cout<<"Enter First n which prime numbers you want to print";
    cin>>num;
    do{
        if(prime(n)){
            cout<<n<<" ";
            count++;
        }
        n++;
    }while(count<num);

    return 0;


}*/



//Find and Display all armstrong numbers using nested loop

/*bool Armstrong(int num){
    int original = num , sum = 0 , temp = num , digits = 0;
    while(temp > 0){
        digits++;
        temp/=10;
    }temp=num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == original;
}
int main(){
int a,b;
cout<<"Enter range lower and upper: ";
cin>>a>>b;
cout << "Armstrong numbers between "<<a<<" and "<<b<<" are: ";

    for (int i = a; i <= b; i++) {
        if (Armstrong(i)) {
            cout<<i<<" ";
        }
    }

return 0;
}*/



//Random number generator

/*int main() {
    srand(time(0));
    int target = (time(0) % 100) + 1; 
    int guess, attempts = 5;
    
    cout<<"Guess the number (between 1 and 100). You have "<<attempts<<" attempts.\n";
    
    while (attempts > 0) {
        cout<<"Enter your guess: ";
        cin>>guess;
        
        if (guess == target) {
            cout<<"Congratulations! You guessed the number."<<endl;
            return 0;
        } else if (guess < target) {
            cout << "Too low! Try again.<<endl;
        } else {
            cout<< "Too high! Try again."<<endl;
        }
        
        attempts--;
        cout<<"Attempts left: "<<attempts<<endl;
    }
    
    cout <<"Sorry, you've run out of attempts. The number was "<<target <<"."<< endl;
    return 0;
}*/



// Finding the first number greater than 50 that is divisible by 7

/*int main(){
    int num = 51;
    while (num % 7 != 0) {
    num++;
}
    cout<<"The first number greater than 50 that is divisible by 7 is: "<<num<<endl;

    return 0;
}*/



// Printing numbers from 1 to 500, skipping those divisible by both 3 and 7, stopping if sum exceeds 1000

/*int main(){
    int sum = 0;
    cout << "Numbers between 1 and 500 (excluding multiples of both 3 and 7) until sum exceeds 1000:"<<endl;
    for (int i = 1; i <= 500; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            continue;
    }
    
        if (sum + i > 1000) {
            break;
    }
    
    cout<<i <<"  ";
    sum += i;
}
cout <<endl<<"Sum of printed numbers: "<<sum<< endl;

return 0;
}*/



//Palindrome Number

/*bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

void reversePalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
        if (isPalindrome(reversed)) {
            cout<<"Reversed number "<<reversed<<" is a palindrome."<<endl;
            return;
        }
    }
    cout <<"Reversed number:  "<<reversed<<endl;
}

int main() {
    int num;
    cout<<"Enter a number to reverse: ";
    cin>>num;
    reversePalindrome(num);
    return 0;
}*/



//Finds the second largest element in array

/*int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter "<<size<<" elements: ";
    cin>>arr[0]>>arr[1];
    
    int largest = max(arr[0], arr[1]);
    int secondLargest = min(arr[0], arr[1]);
    
    for (int i = 2; i < size; i++) {
        cin >> arr[i];
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    
    cout<<"The second largest element is: "<<secondLargest<<endl;
    
    return 0;
}*/



//Floating-point number can be represented exactly in binary format

/*bool repse(int num) {
    while (num != (int)num) {
        num *= 2;
        if ((int)num == num) return true;
    }
    return false;
}

int main() {
    int num;
    cout<<"Enter a floating-point number: ";
    cin>>num;
    
    if (repse(num)) {
        cout<<fixed << setprecision(10)<<num<<" can be represented exactly in binary."<<endl;
    } else {
        cout<<fixed<<setprecision(10)<<num<<" cannot be represented exactly in binary due to repeating binary fractions."<< endl;
    }
    
    return 0;
}*/



//2D array in a formatted table

int main() {
    int rows, cols;
    cout<<"Enter number of rows and columns: ";
    cin>>rows>>cols;
    
    int arr[rows][cols];
    cout<<"Enter elements of the array: "<<endl;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout<<"Formatted 2D Array:"<<endl;
    for (int i = 0; i<rows; i++) {
        for (int j = 0; j<cols; j++) {
            cout<<setw(5)<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    
    return 0;
}