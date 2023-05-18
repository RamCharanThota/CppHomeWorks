/**
 * explicit avoid the implicit conversions 
  */

#include <iostream>
#include <string>

class Animal
{
public:
     explicit Animal(int id)
    {
        id_=id;
    };
    void printname()
    {
        std::cout << "id is :" << id_ << std::endl;
    }

private:
    int id_;
};

void print( const Animal &an)
{
    // an.printname();
}

int main()
{
    Animal a1=10;
    a1.printname();
     print(100);
}