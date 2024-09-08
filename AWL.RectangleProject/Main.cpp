#include <iostream>
#include <conio.h>
using namespace std;
// I don't remember if you want comments so I'll add them
int GetLengthFromUser()
{
    int length;
    cout << "Enter rectangle length: ";
    cin >> length;
    return length;
    // Creates variable length, prompts user to input a value and then assigns said value to int variable 'length'
    // the value is returned to be used in the function that called it
}
int GetWidthFromUser()
{
    int width;
    cout << "Enter rectangle width: ";
    cin >> width;
    return width;
    // Creates variable width, prompts user to input a value and then assigns said value to int variable 'width'
    // the value is returned to be used in the function that called it
}
int CalculateArea(int length, int width)
{
    // Simply does the math with the returned values
    return length * width;
}
void DisplayArea(int area)
{
    // Simply displays the final value
    cout << "The area is: " << area;
}
int main()
{
    int length = GetLengthFromUser();
    int width = GetWidthFromUser();
    int area = CalculateArea(length, width);
    DisplayArea(area);
    // Keeps the program open until a key is pressed so program doesn't close before user can see the final value
    _getch();
    return 0;
}