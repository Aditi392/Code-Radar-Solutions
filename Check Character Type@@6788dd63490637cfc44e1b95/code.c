#include<stdio.h>
int main()
{
    int ch ;
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9'){
        printf("Digit");
        else if((ch>='z'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='O'||ch=='o'||ch=='u'||ch=='U')
            printd("Vowel");
            else
            printf("Consonant");
        }
        else 
        printf("Special character");
    }
}