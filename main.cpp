/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
     int age;
     cin>>age;
     if ( age>18)
     { cout<<"you can't vote"<<endl;}
     else if (age<=18)
     { cout<<"you can vote"<<endl;}
      else 
      {
          cout<<"not eligible"<<endl;
      }
    return 0;
}

