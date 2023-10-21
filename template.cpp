#include<iostream>
#include<string>
using namespace std ;

class Person 
{
public :
    string m_Name ;
    string m_Age ;
};

template<typename T>
bool Compare(T a , T b)
{
    if(a == b)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

template<> bool Compare(Person p1 , Person p2)
{
    if(p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
    {
        return true ;
    }
    else{
        return false ;
    }
}




void test01()
{
    int a = 10 ;
    int b = 9 ;
    if(Compare(a,b))
    {
        cout << "a == b" << endl ;
    }
    else
    {
        cout << "a != b" << endl ;
    }
}

void test02()
{
    
}


int main()
{
    test01();
}