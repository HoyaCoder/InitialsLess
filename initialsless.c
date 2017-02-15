#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

//*  CS50 Initials (less comfortable) solution
//     Author James Meehan
//*     

int main (void) 
{
    // Prompt user for name
    string s = get_string();
    if (s != NULL)
    {
        //Print first initial
       printf("%c", toupper(s[0]));
        
            
    //Iterate through the rest of the string and output each letter after a space
    for (int i = 1, n = strlen(s); i < n; i++)
        {     
            if (s[i] == ' ') 
            {
                printf("%c", toupper(s[i+1]));
            }
        }
    printf("\n");
    }
    
}
