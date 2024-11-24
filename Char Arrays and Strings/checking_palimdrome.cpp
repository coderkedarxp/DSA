#include <iostream>
#include <cstring>
using namespace std;
bool palindrome(char text[], int length)
{
    char check[length];
    for (int i = 0; i < length; i++)
    {
        check[i] = text[i];
    }

    int start = 0, end = length - 1;

    while (start < end)
    {
        swap(text[start], text[end]);
        start++;
        end--;
    }
    if (check == text)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char text[] = "racercar";
    cout << palindrome(text, strlen(text));
    return 0;
}