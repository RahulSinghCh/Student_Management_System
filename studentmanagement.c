#include<stdio.h>
#include<string.h>
int main()
{
	char stud[10][10],branch[10][10],br,stu;
	int n,a,roll[10],mob[10],fees[10],i,rno,ch,rn,loc,mo,fee;
	printf("\nEnter number of records :");
	scanf("%d",&n);
	top1:
		 
		 printf("\nSelect Option :");
		 printf("\n1. Add Student ");
		 printf("\n2. Update student :");
		 printf("\n3. Delete student :");
		 printf("\n4. Show Details :");
		 printf("\n5. Show Each students Details ");
		 printf("\n6. Exit ");
		 scanf("%d",&a);
	switch(a)
	{
		case 1:
			for(i=0;i<n;++i)
			{
			
			printf("\n Roll Number : ");
			scanf("%d",&roll[i]);
			fflush(stdin);
			printf("\n Student Name :");
			gets(stud[i]);
			printf("\n Branch :");
			gets(branch[i]);
			printf("\n Mobile :");
			scanf("%d",&mob[i]);
			printf("\n Fees :");
			scanf("%d",&fees[i]);
		    }
			goto top1;
			break;
		case 2:
			printf("\n Enter roll number : ");
			scanf("%d",&rno);
			for(i=0;i<n;++i)
			{
				if(rno==roll[i])
				{
					printf("\n student records are :");
		        	printf("\n-------------------------------------------------------------------------");
					printf("\n1. Roll No : %d \n2. student Name : %s \n3. Branch : %s \n4. Mobile : %d \n5. fees : %d",roll[i],stud[i],branch[i],mob[i],fees[i]);
					printf("\n Enter Choice : ");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1:
							printf("\n Enter Roll Number :");
							scanf("%d",&rn);
							roll[i]=rn;
							break;
						case 2:
							printf("\n Student Name : ");
							scanf("%s",&stu);
							stud[i][i]=stu;
							break;
						case 3:
							printf("\n Branch :");
							scanf("%s",&br);
							branch[i][i]=br;
							break;
						case 4:
							printf("\n Mobile : ");
							scanf("%d",&mo);
							mob[i]=mo;
							break;
						case 5:
							printf("\n Fees : ");
							scanf("%d",&fee);
							fees[i]=fee;
							break;
						printf("\n Student records are : ");
						printf("\n------------------------------------------------------------------------");
						printf("\n1.Roll no : %d \n2.Student Name : %s \n3. Branch : %s \n4. Mobile : %d \n5. Fees : %d",rn,stu,br,mo,fee);
					}
			}	}
		
			goto top1;
			break;
		case 3:
			printf("\n Enter roll no:");
			scanf("%d",&rno);
			
			for(i = n-1;i>=0; --i)
			{
				if (rno==roll[i])
				{
					loc=i;
				}
			}
			for (i= loc; i<n ; ++i)
			{
				roll[i]=roll[i+1];
				*stud[i]=*stud[i+1];
				*branch[i]=*branch[i+1];
				mob[i]=mob[i+1];
				fees[i]=fees[i+1];
			}
			printf("\n RECORD DELETED .");
			goto top1;
			break;
		case 4:
			printf("\n student records are :");
			printf("\n-------------------------------------------------------------------------");
			printf("\nRoll No. \tstudent Name \tBranch \tMobile \tfees");
			printf("\n-------------------------------------------------------------------------");
			for(i=0;i<n;++i)
			{
				printf("\n%d \t\t%s \t%s \t%d \t%d",roll[i],stud[i],branch[i],mob[i],fees[i]);
			}
			printf("\n-------------------------------------------------------------------------");
			goto top1;
			break;
		case 5:
		     printf("\nEnter Roll Number :");
		     scanf("%d",&rno);
		     for(i=0;i<n;++i)
		     {
		     	if(rno==roll[i])
		     	{
		     		printf("\n student records are :");
		        	printf("\n-------------------------------------------------------------------------");
					printf("\nRoll No. \tstudent Name \tBranch \tMobile \tfees");
					printf("\n-------------------------------------------------------------------------");
					printf("\n%d \t\t%s \t\t%s \t%d \t%d",roll[i],stud[i],branch[i],mob[i],fees[i]);
					printf("\n-------------------------------------------------------------------------");
				 }
				 else
				 {
				 	printf("\n Roll number is not found");
				 }
			 }
			 goto top1;
			 break;
		case 6:
			exit(0);
			break;
		default:
			printf("Invalid input");
			
	}
		
}
