#include<stdio.h>

#define CANDIDATE1 "Narendra Modi"
#define CANDIDATE2 "Rahul Gandhi"
#define CANDIDATE3 "Arvind Kejriwal"
#define CANDIDATE4 "Akhilesh Yadav"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, notavotes=0;

void castVote(){
int choice;    
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "None of These");

printf("\n\n Enter your choice : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: notavotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
}

printf("\n Thank You for voting !!");
}

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "None of the above", notavotes); 
}

void LeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("%s",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("%s",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("%s",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("%s",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");    
}

int main()
{
int i;
int choice;

do{
printf("\n\n ###### Welcome to Election 2022 #####");
printf("\n\n 1. Cast Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice){
case 1: castVote();break;
case 2: votesCount();break;
case 3: LeadingCandidate();break;
case 0: printf("\n Thank You for using our Electronic Election System");
}
}while(choice!=0);

return 0;
}