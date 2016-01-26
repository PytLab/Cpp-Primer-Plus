#include <iostream>
#include <string>
#include <cctype>

int main(void)
{
    using namespace std;

    cout << "Enter words (q to quit): ";

    string word;
    char first_ch;
    int other = 0, vowel = 0, consonant = 0;

    cin >> word;
    while(word != "q")
    {
        // 判断是否是字母开头
        first_ch = word[0];
        if(isalpha(first_ch))
        {
            // 判断元音或辅音
            switch(first_ch)
            {
                case 'a':
                    vowel++;
                    break;
                case 'A':
                    vowel++;
                    break;
                case 'e':
                    vowel++;
                    break;
                case 'E':
                    vowel++;
                    break;
                case 'i':
                    vowel++;
                    break;
                case 'I':
                    vowel++;
                    break;
                case 'o':
                    vowel++;
                    break;
                case 'O':
                    vowel++;
                    break;
                case 'u':
                    vowel++;
                    break;
                case 'U':
                    vowel++;
                    break;
                default:
                    consonant++;
            }
        }
        else
            other++;
        cin >> word;
    }

    // output
    cout << vowel << " words beginning with vowels" << endl;
    cout << consonant << " words beginning with consonants" << endl;
    cout << other << " others" << endl;

    return 0;
}
