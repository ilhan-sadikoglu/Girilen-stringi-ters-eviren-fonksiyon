#include<iostream>

using namespace std;

void TerstrenYaz(const char* str,int i) {
    if (str[i] == '\0')
        return;
    else {
        TerstrenYaz(str,i+1);
        cout << str[i];
    }
}
void TerstrenYaz(const char* str) {
    if (str[0] == '\0')
        return;
    else {
        TerstrenYaz(str+ 1);
        cout << str[0];
    }
}
int main()
{
   const  char* s = "ilfursa";
   int i;
    TerstrenYaz(s,0);
    cout << endl;
    TerstrenYaz(s);
}