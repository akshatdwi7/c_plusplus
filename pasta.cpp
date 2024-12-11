#include <iostream>
using namespace std;

void pasta();
void pasta(string sauce1, string sauce2);

int main()
{
    pasta("white sauce", "red sauce");
}

void pasta()
{
    cout << "Here is your boiled pasta 🍝\n"
         << endl;
}
void pasta(string sauce1, string sauce2)
{
    cout << "here is your " << sauce1 << " and " << sauce2 << " pasta sauce\n"
         << endl;
}
