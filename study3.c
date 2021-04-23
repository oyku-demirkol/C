#include <stdio.h>

//To Check For Alphabet, Number or Special Symbol
/*
Character A – Z : ASCII Value 65 – 90
Character a – z : ASCII Value 97 – 122
Character 0 – 9 : ASCII Value 48 – 57
Special Symbol : ASCII Value 0 – 47, 58 – 64, 91 – 96, 123 – 127
*/
int main()
{
    char ch;

    printf("Enter a Character\n");
    scanf("%c", &ch);
    if(ch >= 65 && ch <= 90){
        printf("%c is an uppercase Alphabet\n",ch);
    }
    else if(ch >= 97 && ch<= 122){
        printf("%c is an lowercase Alphabet\n",ch);
    }
    else if(ch >= 48 && ch<= 57){
        printf("%c is a number\n",ch);
    }
    else if((ch >=0 && ch <= 47)||
            (ch >= 58 && ch <= 64)||
            (ch >= 91 && ch <= 96)||
            (ch >= 123 && ch <= 127)){
                printf("%c is a Special Character\n", ch);
            }
    return 0;
}
