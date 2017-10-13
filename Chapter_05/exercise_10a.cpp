// There is one problem with our vowel-counting program as we've
// implemented it: It doesn't count capital letters as vowels.
// Write a program that counts both lower and uppercase letters
// as the appropriate vowel--that is, ypur program should count
// both `'a'` and `'A'` as part of `aCnt`, and so forth.

// Option 1: use `tolower()` for comparison (minimal change to code)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int aCount = 0;
    int eCount = 0;
    int iCount = 0;
    int oCount = 0;
    int uCount = 0;
    int totalCount = 0;
    char charInput;
    while (cin >> charInput)
    {
        ++totalCount;
        if (tolower(charInput) == 'a')
        {
            ++aCount;
        }
        else if (tolower(charInput) == 'e')
        {
            ++eCount;
        }
        else if (tolower(charInput) == 'i')
        {
            ++iCount;
        }
        else if (tolower(charInput) == 'o')
        {
            ++oCount;
        }
        else if (tolower(charInput) == 'u')
        {
            ++uCount;
        }
    }
    cout << endl << "Processed " << totalCount << " characters." << endl;

    cout << "Number of vowel a: \t" << aCount << endl
         << "Number of vowel e: \t" << eCount << endl
         << "Number of vowel i: \t" << iCount << endl
         << "Number of vowel o: \t" << oCount << endl
         << "Number of vowel u: \t" << uCount << endl;

    return 0;
}
