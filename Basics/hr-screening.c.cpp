/*Program 8:Write a C program for HR to screen job applicants.Input the candidate's........................
..............ed, or why they are not.*/
#include<stdio.h>
int main()
{
	int age,exp,quali;
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter years of experience:");
    scanf("%d",&exp);
    printf("Enter highest qualification(1forBachelor's,2forMaster's,3 for PhD):");
    scanf("%d",&quali);
    if (age>=21&&age<=45)
    {
         if (exp>=2) 
        {	
		    if (quali==1) 
            {	
			    if (exp>=5)
                {
                printf("Candidate shortlisted.\n");
                }
                else
                {
                    printf("Not shortlisted:Bachelor's degree requires at least 5 years of experience.\n");
                }
            }
            else
            if (quali==2||quali==3)
            {
                printf("Candidate shortlisted.\n");
            }
        }
        else
	   {
	    printf("Not shortlisted: Experience less than 2 years.\n");
	   }
    }
    else
    {
        printf("Not shortlisted:Age not between 21 and 45\n");
    }
	return 0;
}

