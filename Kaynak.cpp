#include<iostream>

using namespace std;

void TerstrenYaz(const char* str) {
    if (str[0] == '\0') //base case null olma durumudur.
        return; // son karaktere yani null a gelince kesilir
    else {
        TerstrenYaz(str+ 1); //bu şekilde son karaktere kadar gitti. Null görünce kesildi
        //kesildikten sonra geri geri gelmeye başladı. Önce son karakteri yazdı, sonra bir öncekini

        cout << str[0];
    }
}

int main()
{
    char s[] = "ornek";
   
    //Bu bir char dizisi 
   //dizinin adı aslında ilk adresi gösteren bir pointerdı
   //buradaki s de aslında dininin hem ilk adresi hem de adı
    TerstrenYaz(s); //diziyi yolladık
}
