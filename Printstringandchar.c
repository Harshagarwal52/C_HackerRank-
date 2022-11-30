#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    scanf("\n");
    char s[100];
    scanf("%s", s);
    printf("%s\n",s);
    
    scanf("\n"); //To skip line as a line gap gets created bwteen next input and previous one
    char sen[100];
    scanf("%[^\n]%*c", sen);
    printf("%s", sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}