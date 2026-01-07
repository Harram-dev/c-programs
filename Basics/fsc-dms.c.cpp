/*Program 2:Write a C program that takes input from the user for an FSC Detailed Marks Sheet (DMS), 
including the student's roll number, class, names of six subjects, total marks, and obtained marks for each
subject. The program should calculate the total obtained marks, overall percentage, and assign a letter grade 
based on the percentage. Finally, it should display all the information in a neatly formatted FSC DMS style 
with borders, showing subject-wise marks, total marks, percentage, and grade.*/
#include<stdio.h>
int main()
{
	int cl,r_n,grp,t1,t2,t3,t4,t5,t6,o1,o2,o3,o4,o5,o6;
	int total_marks,obtained_marks;
	float percentage;
	char grade;
	printf("Enter Your Class\n");
	printf("1 for 1st year\n");
	printf("2 for 2nd year\n");
	scanf("%d",&cl);
	printf("Enter Your Roll No\n");
	scanf("%d",&r_n);
	printf("Enter Your Group\n");
	printf("1 for PRE-MED\n");
	printf("2 for PRE-ENGG\n");
	printf("3 for ICS\n");
	scanf("%d",&grp);
	printf("Enter Total Marks for English\n");
	scanf("%d",&t1);
	printf("Enter Obtained Marks in English\n");
	scanf("%d",&o1);
	printf("Enter Total Marks for Urdu\n");
	scanf("%d",&t2);
	printf("Enter Obtained Marks in Urdu\n");
	scanf("%d",&o2);
	printf("Enter Total Marks for Physics\n");
	scanf("%d",&t3);
	printf("Enter Obtained Marks in Physics\n");
	scanf("%d",&o3);
	printf("Enter Total Marks for Chemistry/ComputerScience\n");
	scanf("%d",&t4);
	printf("Enter Obtained Marks in  Chemistry/ComputerScience\n");
	scanf("%d",&o4);
	printf("Enter Total Marks for Biology/Maths\n");
	scanf("%d",&t5);
	printf("Enter Obtained Marks in Biology/Maths,\n");
	scanf("%d",&o5);
	printf("Enter Total Marks for Islamiat/P.St\n");
	scanf("%d",&t6);
	printf("Enter Obtained Marks in Islamiat/P.St\n");
	scanf("%d",&o6);
	total_marks=t1+t2+t3+t4+t5+t6;
	obtained_marks=o1+o2+o3+o4+o5+o6;
	percentage=(float(obtained_marks)/total_marks)*100.0;
	if(percentage>=80)
	{
		grade='A';
	}
	else
	if(percentage>=70)
	{
		grade='B';
	}
	else
	if(percentage>=60)
	{
		grade='C';
	}
	else
	if(percentage>=50)
	{
		grade='D';
	}
	else
	{
		grade='F';
	}
	printf("\n____________________________________________________________________________________________________________________________________\n");
	printf("|----------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("|                                                                                                                                  |\n");
	printf("|                                 BOARD OF INTERMEDIATE & SECONDARY EDUCATION                                                      |\n");
	printf("|                                                   ABBOTTABAD                                                                     |\n");
	printf("|                               Higher Secondary School Certificate Examination                                                    |\n");
	printf("|                                                   Part-%d                                                                         |\n",cl);
	printf("|                                         Session:2025 (Annual-1)                                                                  |\n");
	printf("|                                        DETAILED MARKS CERTIFICATE                                                                |\n");
	printf("|                                           Name:HARRAM REHMAT                                                                     |\n");
	printf("|                                           Roll No:%06d                                                                         |\n",r_n);
	printf("|                                           Group: ");
	if(grp==1)
	{
	printf("PRE-MED                                                                         |\n");
	}
	else
	if(grp==2)
	{
	printf("Pre-ENGG                                                                        |\n");
	}
	else
	if(grp==3)
	{
	printf("ICS                                                                             |\n");
	}
	else
	{
	printf("Invalid Group                                                                   |\n");
	}
	printf("|__________________________________________________________________________________________________________________________________|\n");
	printf("|               SUBJECTS                 |               TOTAL MARKS                |               OBTAINED MARKS                 |\n");
	printf("|________________________________________|__________________________________________|______________________________________________|\n");
	printf("|English                                 | %03d                                      |%03d                                           |\n",t1,o1);
	printf("|________________________________________|__________________________________________|______________________________________________|\n");
	printf("|Urdu                                    | %03d                                      |%03d                                           |\n",t2,o2);	
	printf("|________________________________________|__________________________________________|______________________________________________|\n");
	printf("|Physics                                 | %03d                                      |%03d                                           |\n",t3,o3);
	printf("|________________________________________|__________________________________________|______________________________________________|\n");
	printf("|Chemistry/ComputerScience               | %03d                                      |%03d                                           |\n",t4,o4);															                                                                
	printf("|________________________________________|__________________________________________|______________________________________________|\n");
	printf("|Biology/Maths                           | %03d                                      |%03d                                           |\n",t5,o5);
	printf("|________________________________________|__________________________________________|______________________________________________|\n");
	printf("|Islamiat/P.St                           | %03d                                      |%03d                                           |\n",t6,o6);	
	printf("|________________________________________|__________________________________________|______________________________________________|\n");
	printf("|                                | Total:%03d |                                      | Obtained:%03d  |                              |\n",total_marks,obtained_marks);
	printf("|                                |___________|______                                |_______________|                              |\n");
	printf("|                                |Percentage:%.2f%%|                                    |GRADE:%c |                                 |\n",percentage,grade);
	printf("|                                |_________________|                                    | _______|                                 |\n");
	printf("|----------------------------------------------------------------------------------------------------------------------------------|\n");
	printf("|__________________________________________________________________________________________________________________________________|\n");
	
	return 0;
	
}

