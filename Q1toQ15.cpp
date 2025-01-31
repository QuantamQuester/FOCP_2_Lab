#include<iostream>
#include<iomanip>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    //Create a program that reads a user's name and age,then outputs:"Hello[name],you are [age] year old!"

    /*string name;
    int age;
    cout<<"Your Name:  ";
    cin>>name;
    cout<<"Your Age:  ";
    cin>>age;
    cout<<"Hello "<<name<<" your are "<<age<<" years old!"<<endl;*/



    //Write a program to take two intergers as input and dispaly their sum

    /*int a,b;
    cout<<"Enter two integers:  ";
    cin>>a>>b;
    cout<<"Sum:  "<<a+b;*/



    //Switch case for basic mathematical operator

    /*char opr;
    int a,b;
    cout<<"Enter two number:  ";
    cin>>a>>b;
    cout<<"Which Operator + or - or * or /:    ";
    cin>>opr;
    switch(opr)
    {
        case '+':cout<<"Sum:  "<<a+b;break;
        case '-':cout<<"Sutraction:  "<<a-b;break;
        case '*':cout<<"Multiplication:  "<<a*b;break;
        case '/':cout<<"Division:  "<<a/b;break;
    }*/



    //Two float number divsion set precision 2

    /*float a,b;
    cout<<"Enter two number:  ";
    cin>>a>>b;
    float c=a/b;
    cout<<fixed<<setprecision(2)<<c;*/



    //Calculate Compoubd Interest

    /*float p,r,t,n;
    cout<<"Enter Principal, Rate of interest, Time and Number of times interest is compounded per year:  ";
    cin>>p>>r>>t>>n;
    double a=p*pow((1+r/100),t);
    double ci=a-p;
    cout<<fixed<<setprecision(2)<<ci;*/



    //Perimeter and area of rectangle

    /*int l,b,area,perimeter;
    cout<<"Enter length and width of rectangle:  ";
    cin>>l>>b;
    area=2*(l+b);
    perimeter=l*b;
    cout<<"PERIMETER = "<<perimeter<<" and AREA = "<<area;*/


    //Swaping number using third variable and without using third variable

    /*int a=3,b=5,c;
    c=a;
    a=b;
    b=c;
    cout<<"a= "<<a<<" and b=  "<<b;*/

    /*int a=3,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a= "<<a<<" and b=  "<<b;*/
    


    //Using name ans age as input, show no. of days you lived

    /*int age,days;
    string name;
    cout<<"Enter your Name: ";
    cin>>name;
    cout<<"Enter your Age: ";
    cin>>age;
    days=(age/4)+(age*365);
    cout<<endl<<"Hello "<<name<<" your age is "<<age<<" and approx. number of days you have lived is "<<days<<endl;*/

 

    //Formatted table of char, integer and floating point

    /*char a;
    int b;
    float c;

    cout << "Enter a character: ";
    cin >> a;
    cout << "Enter an integer: ";
    cin >> b;
    cout << "Enter a floating-point number: ";
    cin >> c;
\
    cout << "\n----------------------------------\n";
    cout << "| Character | Integer | Floating |\n";
    cout << "----------------------------------\n";
    cout << "| " << setw(9) << a << " | "
         << setw(7) << b << " | "
         << setw(8) << fixed << setprecision(2) << c << " |\n";
    cout << "----------------------------------\n";*/

  
 
    //First is a multiple of the second using relational and logical operators

    /*int a, b;
   
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
 
    if (b != 0 && a % b == 0) {
        cout << a << " is a multiple of " << b << "\n";
    } else {
        cout << a << " is not a multiple of " << b << "\n";
    }*/



    //WAP to count the number of 1 bits in an integer input by the user

    /*int a, count = 0;
    
    cout << "Enter an integer: ";
    cin >> a;
    
    while (a > 0) {
        count += a & 1; 
        a >>= 1; 
    }
    
    cout << "Number of 1 bits: " << count << "\n";*/



    //Program to show that roots of quadilateral are real and unqual or real and equal or imaginary

    /*int a,b,c;
    float d;
    cout<<"Enter a,b,c\n";
    cin>>a>>b>>c;
    d=(float)(pow(b,2)-4*a*c);
    if(d>0){
    cout<<d<<endl;
    cout<<"Roots are real and unequal"<<endl;
    }
    else if(d==0){
    cout<<d<<endl;
    cout<<"Roots are real and equal"<<endl;
    }
    else{
    cout<<d<<endl;
    cout<<"Roots are imaginery"<<endl;
    }*/



    //WAP to simulate an ATM machine

    /*int choice;
    float balance = 1000.0, amount;
    
    do {
        cout << "\nATM Machine";
        cout << "\n1. Withdraw";
        cout << "\n2. Deposit";
        cout << "\n3. Balance Inquiry";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful. Remaining balance: " << balance << "\n";
                } else {
                    cout << "Insufficient balance.\n";
                }
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << "\n";
                } else {
                    cout << "Invalid deposit amount.\n";
                }
                break;
            case 3:
                cout << "Current balance: " << balance << "\n";
                break;
            case 4:
                cout << "Thank you for using the ATM.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);*/


    
    //Develop a program that checks if a triangle is valid

    /*int a,b,c;
    cout<<"Enter 3 sides of triangle: ";
    cin>>a>>b>>c;
    if(a==b && a==c){
    cout<<"Triangle is equilateral\n";
    }
    else if(a==b || b==c || c==a){
    cout<<"Triangle is isoceles\n";
    }
    else{
    cout<<"Triangle is scalene\n";
    }*/


    
    //WAP to evaluate (a^b + c&d)
    /*int a, b, c, d;
    
    cout << "Enter values for a, b, c, and d: ";
    cin >> a >> b >> c >> d;
    
    int result = (pow(a, b) + (c & d));
    
    cout << "Result: " << result << endl;*/
 

 
    
    return 0;
}


