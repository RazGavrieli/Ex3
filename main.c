#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TXT 256
#define WORD 30
#define ascisize 128

char word[WORD];
char txt[TXT];

int countLetters[ascisize];


void inputxt() 
{
    char currChar;
    int i = 0;
    while (currChar!='~')
    {
       scanf("%c", &currChar); 
       txt[i] = currChar;
       i++;
    }
    txt[i] = '\0';
}

int gymcalc(char *currword)
{
    int size = strlen(currword);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        {if (currword[i]=='a'||currword[i]=='A') sum +=1;
        else if (currword[i]=='b'||currword[i]=='B') sum +=2;
        else if (currword[i]=='c'||currword[i]=='C') sum +=3;
        else if (currword[i]=='d'||currword[i]=='D') sum +=4;
        else if (currword[i]=='e'||currword[i]=='E') sum +=5;
        else if (currword[i]=='f'||currword[i]=='F') sum +=6;
        else if (currword[i]=='g'||currword[i]=='G') sum +=7;
        else if (currword[i]=='h'||currword[i]=='H') sum +=8;
        else if (currword[i]=='i'||currword[i]=='I') sum +=9;
        else if (currword[i]=='j'||currword[i]=='J') sum +=10;
        else if (currword[i]=='k'||currword[i]=='K') sum +=11;
        else if (currword[i]=='l'||currword[i]=='L') sum +=12;
        else if (currword[i]=='m'||currword[i]=='M') sum +=13;
        else if (currword[i]=='n'||currword[i]=='N') sum +=14;
        else if (currword[i]=='o'||currword[i]=='O') sum +=15;
        else if (currword[i]=='p'||currword[i]=='P') sum +=16;
        else if (currword[i]=='q'||currword[i]=='Q') sum +=17;
        else if (currword[i]=='r'||currword[i]=='R') sum +=18;
        else if (currword[i]=='s'||currword[i]=='S') sum +=19;
        else if (currword[i]=='t'||currword[i]=='T') sum +=20;
        else if (currword[i]=='u'||currword[i]=='U') sum +=21;
        else if (currword[i]=='v'||currword[i]=='v') sum +=22;
        else if (currword[i]=='w'||currword[i]=='W') sum +=23;
        else if (currword[i]=='x'||currword[i]=='X') sum +=24;
        else if (currword[i]=='y'||currword[i]=='Y') sum +=25;
        else if (currword[i]=='z'||currword[i]=='Z') sum +=26;}
    }
    
    return sum;
}

void atbashcalc(char *currword, char *atbashed)
{
    int i = 0 ;
    while (i!=strlen(currword))
    {
        {if (currword[i]=='a')     atbashed[i] = 'z';
        else if (currword[i]=='A') atbashed[i] = 'Z';
        else if (currword[i]=='b') atbashed[i] = 'y';
        else if (currword[i]=='B') atbashed[i] = 'Y';
        else if (currword[i]=='c') atbashed[i] = 'x';
        else if (currword[i]=='C') atbashed[i] = 'X';
        else if (currword[i]=='d') atbashed[i] = 'w';
        else if (currword[i]=='D') atbashed[i] = 'W';
        else if (currword[i]=='e') atbashed[i] = 'v';
        else if (currword[i]=='E') atbashed[i] = 'V';
        else if (currword[i]=='f') atbashed[i] = 'u';
        else if (currword[i]=='F') atbashed[i] = 'U';
        else if (currword[i]=='g') atbashed[i] = 't';
        else if (currword[i]=='G') atbashed[i] = 'T';
        else if (currword[i]=='h') atbashed[i] = 's';
        else if (currword[i]=='H') atbashed[i] = 'S';
        else if (currword[i]=='i') atbashed[i] = 'r';
        else if (currword[i]=='I') atbashed[i] = 'R';
        else if (currword[i]=='j') atbashed[i] = 'q';
        else if (currword[i]=='J') atbashed[i] = 'Q';
        else if (currword[i]=='k') atbashed[i] = 'p';
        else if (currword[i]=='K') atbashed[i] = 'P';
        else if (currword[i]=='l') atbashed[i] = 'o';
        else if (currword[i]=='L') atbashed[i] = 'O';
        else if (currword[i]=='m') atbashed[i] = 'n';
        else if (currword[i]=='M') atbashed[i] = 'N';
        else if (currword[i]=='n') atbashed[i] = 'm';
        else if (currword[i]=='N') atbashed[i] = 'M';
        else if (currword[i]=='o') atbashed[i] = 'l';
        else if (currword[i]=='O') atbashed[i] = 'L';
        else if (currword[i]=='p') atbashed[i] = 'k';
        else if (currword[i]=='P') atbashed[i] = 'K';
        else if (currword[i]=='q') atbashed[i] = 'j';
        else if (currword[i]=='Q') atbashed[i] = 'J';
        else if (currword[i]=='r') atbashed[i] = 'i';
        else if (currword[i]=='R') atbashed[i] = 'I';
        else if (currword[i]=='s') atbashed[i] = 'h';
        else if (currword[i]=='S') atbashed[i] = 'H';
        else if (currword[i]=='t') atbashed[i] = 'g';
        else if (currword[i]=='T') atbashed[i] = 'G';
        else if (currword[i]=='u') atbashed[i] = 'f';
        else if (currword[i]=='U') atbashed[i] = 'F';
        else if (currword[i]=='v') atbashed[i] = 'e';
        else if (currword[i]=='V') atbashed[i] = 'E';
        else if (currword[i]=='w') atbashed[i] = 'd';
        else if (currword[i]=='W') atbashed[i] = 'D';
        else if (currword[i]=='x') atbashed[i] = 'c';
        else if (currword[i]=='X') atbashed[i] = 'C';
        else if (currword[i]=='y') atbashed[i] = 'b';
        else if (currword[i]=='Y') atbashed[i] = 'B';
        else if (currword[i]=='z') atbashed[i] = 'a';
        else if (currword[i]=='Z') atbashed[i] = 'A';
        else if (currword[i]==' ') atbashed[i] = ' ';
        else if (currword[i]=='\t') atbashed[i] = '\t';
        else if (currword[i]=='\n') atbashed[i] = '\n';}

        i++;
    }
    atbashed[i] = '\0';
}

char* strrev(char *str)
{
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

void analyzeTxtGym(int gym)
{
printf("Gematria Sequences: ");
char curr;
int flag = 0; 
int sum = 0;
int i = 0;
int j = 0;
while (txt[i]!='~')
{
    curr = txt[i];
    j = i;
    if ((curr>=65&&curr<=90)||(curr>=97&&curr<=122)) {
    while(sum<gym&&j!=strlen(txt))
    {
        sum += gymcalc(&curr);
        j++;
        curr = txt[j];
    }

    if (sum==gym) {
        if (flag==1) printf("~");
        else flag = 1;
        int k = i;
        while (k!=j) 
    {
            curr = txt[k];
            printf("%c", curr);
            k++;
    }  
    } 
}
    i++;
    sum = 0;
}

}
    
void analyzeAtbashe(char *wordAtbashed) 
{

    printf("Atbash Sequences: ");

    int i = 0;
    int j = 0;
    int k = 0;
    int p = 0;
    int flag = 0;
    int firstflag = 0;
    while (txt[i]!='~')
    {
        j=i;
        k=0;
        p=0;
        flag=0;
        int curr = txt[j];
        if ((curr>=65&&curr<=90)||(curr>=97&&curr<=122))  
        {
            while ((j-i)!=(strlen(wordAtbashed)+p)&&flag==0&&curr!='~')
            {
                if ((curr>=65&&curr<=90)||(curr>=97&&curr<=122))
                {
                    if (curr!=wordAtbashed[j-i]&&curr!=strrev(wordAtbashed)[j-i]) flag = 1;
                    else j++;
                } else { 
                    j++; 
                    p++;
                 }
            curr = txt[j];
            }

        if ((j-i)==strlen(word)+p) {
        if (flag==0) 
        {
            k=i;
            if (firstflag==0) firstflag=1;
            else printf("~");
            while (k!=j)
            {
                printf("%c", txt[k]);
                k++;
            }
        }
        }
        }
        i++;
    }

}

void analyzeAnagram()
{
    printf("Anagram Sequences: ");

    
    int i = 0;
    int j = 0;
    int k = 0;
    int p = 0;
    int flag = 0;
    int firstflag = 0; 
    while (txt[i]!='~')
    {
        p=0;
        int currCountLetters[ascisize];
        while (p!=ascisize) 
        {
            currCountLetters[p] = countLetters[p]; 
            p++;
        }
                 
        
         j=i;
         k=0;
         p=0;
         flag=0; 
         int curr = txt[j];
        if ((curr>=65&&curr<=90)||(curr>=97&&curr<=122))  
         {
            while (flag==0&&(j-i)!=(strlen(word)+p)&&curr!='~')
            {
                if ((curr>=65&&curr<=90)||(curr>=97&&curr<=122))
                {
                    if (currCountLetters[curr]==0) flag = 1;                 
                    else currCountLetters[curr]--;
                    j++;
                } else {
                    j++;
                    p++;
                }
            //printf("%c ",curr);
            curr = txt[j];
            }                    
        if ((j-i)==strlen(word)+p) {
         if (flag==0) 
         {
              k=i;
              if (firstflag==0) firstflag=1;
              else printf("~");
              while (k!=j)
              {
                printf("%c", txt[k]);
                k++;
              }
          }
         }
         }
         i++;

     }
    
}

void updateCount() 
{
for (int i = 0; i < strlen(word); i++) 
    {
        int p = word[i];
        if (p>=0&&p<ascisize) countLetters[p]++;        
    }
}

int main()
{
    char wordAtbashed[WORD];
    int gym;

    
    scanf("%s", word);
    inputxt();
    updateCount();

    gym = gymcalc(word);
    analyzeTxtGym(gym);
    printf("\n");

    atbashcalc(word, wordAtbashed);
    analyzeAtbashe(wordAtbashed);
    printf("\n");
    
    analyzeAnagram();
    
    return 0;
}
