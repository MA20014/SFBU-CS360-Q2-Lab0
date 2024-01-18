// Program Area calculates the area of a square.
// The user is prompted to enter the number of inches on each
// side. Note that "endl" in line 7 ends in the letter "l", not
// the number one.
#include <iostream>  //This line is a header file that allows the program to use cin and cout which helps in allowing the user to enter specific values and display results where ever necessary.
using namespace std;  //This line means that we can use names for objects and variables from the standard library.
int main ()  //This line is a function that executes the program.
{
int inches;  //This line means that an integer variable named inches is declared.
cout << "Enter the number of inches on a side "  //This line is used to display the message in the quotation marks. 
<< endl;  //This line means that the output cursor is moved to the next line.
cout << "Press the return key." //This line is used to display the message in the quotation marks. 
<< endl; //This line means that the output cursor is moved to the next line.
cin >> inches;  //This line is used to read the value for inches as entered by the programmer/user.
cout << endl  ////This line means that the output cursor is moved to the next line.
<< "The area is " << inches * inches <<"."  //This line is to display the message in the quotation marks and it also displays the calculated value of inches*inches.
<< endl;  ////This line means that the output cursor is moved to the next line.
return 0;  //This line is used to return the value 0 to the operating system. It also indicates that the program has ended and executed successfully.
}  