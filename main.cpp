#include <iostream>
using namespace std;
class cal
{
public:
    int a, b;
    static int add(int a,int b)
    {
      return a+b;
    }
    static int subtract(int a,int b)
    {
        return a-b;
    }
    static int divide(int a, int b)
    {
        return a/b;
    }
    static int multiply(int a, int b)
    {
        return a*b;
    }
};
void ask(){
    int a, b, c, d;
    cout<<"Welcome to cgpa calcultor    :)"<<endl;
    cout<<endl;
    cout<<"English: ";cin>>a;
    cout<<"Maths: ";cin>>b;
    cout<<"Hindi: ";cin>>c;
    cout<<"Science: ";cin>>d;
}
class cgpa
{
public:
};
int main()
{
    //Calcultaor
    // cal cal1;
    // std::cout<<cal::multiply(3, 4);
    //student cgpa
    ask();
    cgpa C;
    C.ask();
    return 0;
}
