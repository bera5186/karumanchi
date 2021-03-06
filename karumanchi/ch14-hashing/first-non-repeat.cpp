#include "../headers.hpp"

char symmetric(char *arr, int len)
{
    int hash_table[256] = {0}, i;

    for (i = 0; i < len; ++i)
        hash_table[arr[i]]++;

    for (i = 0; i < len; ++i)
        if (hash_table[arr[i]] == 1)
            return arr[i];

    return '\0';
}

int main(int argc, char **argv)
{
    char *arr = argv[1];
    int len = strlen(arr);

    cout << endl
         << "String - " << arr << endl;

    cout << endl
         << "First non-repeat element is - " << symmetric(arr, len);

    return 0;
}
