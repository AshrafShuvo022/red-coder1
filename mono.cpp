#include <stdio.h>
#include <string.h>
#include <ctype.h>

char normal[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                     'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                     's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char coded[] = {'M', 'B', 'F', 'R', 'J', 'Y', 'U', 'L', 'O',
                    'P', 'A', 'S', 'D', 'E', 'G', 'H', 'T', 'K',
                    'I', 'Z', 'X', 'C', 'V', 'W', 'N', 'Q'};


void stringEncryption(char *s)      //encryption function
{
    
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < 26; j++)
        {  
            if (s[i] == normal[j])  //compare character and replace with coded char
            {
                s[i] = coded[j];
                break;
            } 
        }
    }
}

// decryption
void stringDecryption(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == coded[j])
            {
                s[i] = normal[j];
            }
        }
    }
}

int main()
{
    //char str[] = "Bangladesh Cricket Team";
     char str[100];
     
     printf("Enter a String \n");
     gets(str);

    printf("Plain text: %s\n", str);

    // lower case convertion
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }

    stringEncryption(str);
    printf("Encrypted message: %s\n", str);

    stringDecryption(str);
    printf("Decrypted message: %s\n", str);

    return 0;
}

