#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();
    putchar(toupper(name[0]));

    // start from char 2 since char 1 will either be a space or non-initial
    int i = 2;
    while(name[i])
    {
        if(name[i] == ' ')
        {
            putchar(toupper(name[i+1]));
            // advance 2 steps since we've capped the next letter already
            i+=2;
            continue;
        }
        i++;
    }
    putchar('\n');
}