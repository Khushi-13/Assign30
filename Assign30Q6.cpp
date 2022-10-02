#include <bits/stdc++.h>
using namespace std;

bool isValidPinCode(string pinCode)
{


    const regex pattern("^[1-9]{1}[0-9]{2}\\s{0,1}[0-9]{3}$");


    try
    {

       if (regex_match(pinCode, pattern))
      {
        return true;
      }
       else
      {
        return false;
      }

    }

    catch(string pinCode)
    {
    if (pinCode.empty())
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

    string num1 = "132103";
    cout << num1 + ": ";
    print(isValidPinCode(num1));

    string num2 = "2013054";
    cout << num2 + ": ";
    print(isValidPinCode(num2));

    return 0;
}





