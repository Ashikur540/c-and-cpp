#include <bits/stdc++.h>

using namespace std;

class Cricketer
{

public:
    int jersey;
    string country;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{

    Cricketer *dhoni = new Cricketer("India", 100);
    Cricketer *kohli = new Cricketer("India", 56);

    // kohli= dhoni; // don't directly copy the references

    kohli->country = dhoni->country;
    kohli->jersey = dhoni->jersey;

    // or instead of line by line copying the values we can do this:
    *kohli = *dhoni; // this basically deferences the whole object and coipy that into another fully

    delete dhoni;

    // cout << dhoni -> jersey << endl;
    cout << kohli->jersey << endl;
}