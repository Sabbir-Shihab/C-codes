#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch == 'a' || ch== 'e' || ch== 'i' || ch == 'o' || ch== 'u'
        ||ch == 'A' || ch== 'E' || ch== 'I' || ch == 'O' || ch== 'U') {
        printf("The number is vowel\n",ch);
    }
    else {

        if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z' )){
           printf("The number is consonant\n",ch);
        }
        else {
            printf("This is Not a letter");
        }


    }

    return 0;
}
