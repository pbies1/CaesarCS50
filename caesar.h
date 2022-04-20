#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

string text_to_caesar(int key, string pt)
{
    for (int i = 0; i < strlen(pt); i++)
    {
        // stores the base of the current letter:
        int base = (int) (isupper(pt[i]) ? 'A' : 'a');

        // changes the letter position by argv[1] and wraps using mod 26 if letter is in the alphabet:
        pt[i] = isupper(pt[i]) || islower(pt[i]) ? (char) (((int) pt[i] - base + key) % 26 + base) : pt[i];
    }

    return pt;
}