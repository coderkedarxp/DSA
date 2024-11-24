#include <iostream>
#include <cstring>
using namespace std;

void lowertoupper(char ch[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - ('a' - 'A');
        }
    }
    cout << ch<<endl;
}
int main()
{

    char ch[] = "cOsMolOGy";
    lowertoupper(ch, strlen(ch));

    return 0;
}
