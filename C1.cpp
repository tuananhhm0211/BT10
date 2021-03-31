#include<iostream>
#include<cstring>
using namespace std;
struct String{
    int n;
    char* str;
    String(const char* x)
    {
        n=strlen(x);
        str=new char[n];
        strcpy(str,x);
    }
    ~String()
    {
       delete [] str;
    }
    void print()
    {
        cout << str << endl;
    }
    void append(const char* x)
    {
        int size=n+strlen(x);
        char *tmp=new char[size];
        strcpy(tmp,str);
        delete [] str;
        strcat(tmp,x);
        str=tmp;
    }
};

int main(int argc, char** agrv)
{
    String greeting("Hi");
    greeting.print();
	greeting.append(" there");
	greeting.print();
	return 0;
}
