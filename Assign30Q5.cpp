#include <bits/stdc++.h>
#include <iostream>
#include <regex>
using namespace std;


bool isValidmobileNo(string mobileNo)
{


    const regex pattern("(0|91)?[6-9][0-9]{9}");


    try
    {

       if (regex_match(mobileNo, pattern))
      {
        return true;
      }
       else
      {
        return false;
      }

    }

    catch(string mobileNo)
    {
    if (mobileNo.empty())
    {
        return false;
    }
    }

}

void print(bool n)
{
    if (n == 0)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True" << endl;
    }
}


int main()
{

    string num1 = "9685338171";
    cout << num1 + ": ";
    print(isValidmobileNo(num1));

    string num2 = "98545685214";
    cout << num2 + ": ";
    print(isValidmobileNo(num2));

    return 0;
}



