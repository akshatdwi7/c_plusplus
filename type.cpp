// dirary jisme ki hum gyan likhne structiure

#include <iostream>
using namespace std;

struct cutu
{
    int phone;
    char bloodgroup;
    string address;
};

int main()
{
    cutu Akshat;

    Akshat.phone = 1234567890;
    Akshat.bloodgroup = 'A';
    Akshat.address = "Delhi";
    cout << Akshat.phone << endl;
    return 0;
}