#include <iostream>

using namespace std;

class father
{
public:
    void car()
    {
        cout << "Father Car\n";
    }
};

class son : public father
{
public:
    void car()
    {
        cout << "SOn's Car\n";
    }
};

int main()
{
    son s;
    s.car();

    return 0;
}