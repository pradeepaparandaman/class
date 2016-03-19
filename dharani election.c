#include<stdio.h>
#include<stdlib.h>

struct member
{
    int index;
    int vote;
    char *cand;
    char *party;
}mem[5];

void assign()
{
    mem[0].index = 1;
    mem[0].vote=0;
    mem[0].cand = "Indhu";
    mem[0].party = "Team Nanba";
    mem[1].index = 2;
    mem[1].vote=0;
    mem[1].cand = "Elakia";
    mem[1].party = "Team Partner";
    mem[2].index = 3;
    mem[2].vote=0;
    mem[2].cand = "Gayu";
    mem[2].party = "Team Fb";
    mem[3].index = 4;
    mem[3].vote=0;
    mem[3].cand = "Puppy Love";
    mem[3].party = "Team School";
    mem[4].index = 5;
    mem[4].vote=0;
    mem[4].cand = "Abhinaya";
    mem[4].party = "Team Aaya";
}

void win(int w)
{
    int i;
    printf("\n\n:::Result is:::\n\n");
    //printf("\nId:Team\tName \tTotal Vote:");
    for(i=0;i<5;i++)
    {
        printf("\n%d: %s\t%s\t%d",mem[i].index,mem[i].party,mem[i].cand,mem[i].vote);
    }
    
    printf("\n\nAkhil Lover is %s with vote %d\n",mem[w].cand,mem[w].vote);
    
}

void check()
{
    int i,j,winner,k;
    k=mem[0].vote;
    for(i=1;i<5;i++)
    {
        if(k<mem[i].vote)
        {
            k=mem[i].vote;
            winner=i;
        }
        
    }
    win(winner);
}

int main()
{
    int i,ch;
    char choice;
    assign();
    while(1)
    {
        for(i=0;i<5;i++)
        {
            printf("\n%d:%s",mem[i].index,mem[i].party);
        }
        printf("\nWhom do you wanna Vote::");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                mem[0].vote++;
                break;
            case 2:
                mem[1].vote++;
                break;
            case 3:
                mem[2].vote++;
                break;
            case 4:
                mem[3].vote++;
                break;
            case 5:
                mem[1].vote++;
                break;
            default:
                printf("\nEnter Correct Choice!!!");    
        }
        printf("\nDo you wanna Vote: y/n:::");
        getchar();
        scanf("%c",&choice);
        if(choice == 'n' || choice == 'N')
        {
            break;
        }
    }
    
    check();
    
    return 0;
}
