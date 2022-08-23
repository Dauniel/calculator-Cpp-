# include <iostream>
using namespace std;

void Answer(int);
void Answer(int result) {
cout << result << "\n";
}

int main ()
{
 int number1, number2;
 int operation;
 int result;

 cout << "Please enter your first number: ";
 cin >> number1;

 cout << "Please enter your second number: ";
 cin >> number2;
 
 cout << "Select the operation you would like\n";
 cout << "1. Addition\n";
 cout << "2. Subtraction\n";
 cout << "3. Multiplication\n";
 cout << "4. Division\n";
 cin >> operation;

 switch(operation) {
  case 1:
  result = number1 + number2;
  Answer(result);
  break;
  case 2:
  result = number1 - number2;
  Answer(result);
  break; 
  case 3:
  result = number1 * number2;
  Answer(result);
  break; 
  case 4:
  result = number1 / number2;
  Answer(result);
  break; 
 }
 
}
