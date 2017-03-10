/*Program to count accurately the number of Characters, Words and Lines*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100], *p;
    int lines=0, words=0, chars=0, i;
    cout<<"Enter the Input\n";
    cin.getline(str, 100);
    while(strcmp(str, ""))
    {
        p=str;
        for(i=0;*(p+i);i++)
        {    
            if(*(p+i) == ' ')
            {
                words++;
                space:
                if(*(p+i+1) == ' ')    
                {
                    i++;
                    goto space;
                }
            }
            else if(*(p+i+1) == '\0')
            {
                lines++;
                words++;
                chars++;
            }
            else
                chars++;

        }
        cin.getline(str, 100);
    }
    cout<<"\n\n\tNumber of Characters = "<<chars;
    cout<<"\n\tNumber of Words = "<<words;
    cout<<"\n\tNumber of Lines = "<<lines;
    return 0;
}    

