//to write x and 0
#include<stdio.h>
#include<stdlib.h>
char arr[3][3],a=0;
void user1();
void user2();
int ischeck();
void display();
int main()
{
	int i=1,j=1;
 	printf("1)USER-1(x)\t2)USER-2(Y)");
 
	
	do{
		do{
		
		user1();
			display();
		i++;
		a++;
		}
		while(i==1);
	 
		do{
			if(ischeck()==1)
			{
			printf("user1 is winner");
			exit(0);
		}
			else
			{
			 user2();
			 display();
				j++;
				a++;
			}
		}
			while(j==1);
		 
			if(ischeck()==1)
			{
			printf("user2 is the winner\n");
			exit(0);
		}
	}
			while(a!=9);
			ischeck();
	}
	
void user1()
{
	display();
	int e;
	printf("USER 1 CHANCE\n");
 	printf("enter the pos u want to enter\n");
	scanf("%d",&e);
	switch(e)
	{
		case 1:
			arr[0][0]='X';
			break;
			   case 2:
			   	arr[0][1]='X';
			   	   break;
			   	      case 3:
			   	      	arr[0][2]='X';
			   	      	   break;
			   	      	       case 4:
			   	      	       	arr[1][0]='X';
			   	      	       	    break;
			   	      	       	       case 5:
			   	      	       	       	arr[1][1]='X';
			   	      	       	       	  break;
			   	      	       	       	     case 6:
			   	      	       	       	     	arr[1][2]='X';
			   	      	       	       	     	    break;
			   	      	       	       	     	    case 7:
			   	      	       	       	     	    	arr[2][0]='X';
			   	      	       	       	     	    	   break;
			   	      	       	       	     	    	   case 8:
			   	      	       	       	     	    	   	  arr[2][1]='X';
			   	      	       	       	     	    	   	      break;
			   	      	       	       	     	    	   	      case 9:
			   	      	       	       	     	    	   	        arr[2][2]='X';
			   	      	       	       	     	    	   	           break;
	}
	return;
}
void user2()
{
 
 int h;
 printf("USER 2 CHANCE\n");
	printf("enter the pos u want to enter\n");
	scanf("%d",&h);
	switch(h)
	{
		case 1:
			arr[0][0]='Y';
			break;
			   case 2:
			   	arr[0][1]='Y';
			   	   break;
			   	      case 3:
			   	      	arr[0][2]='Y';
			   	      	   break;
			   	      	       case 4:
			   	      	       	arr[1][0]='Y';
			   	      	       	    break;
			   	      	       	       case 5:
			   	      	       	       	arr[1][1]='Y';
			   	      	       	       	  break;
			   	      	       	       	     case 6:
			   	      	       	       	     	arr[1][2]='Y';
			   	      	       	       	     	    break;
			   	      	       	       	     	    case 7:
			   	      	       	       	     	    	arr[2][0]='Y';
			   	      	       	       	     	    	   break;
			   	      	       	       	     	    	   case 8:
			   	      	       	       	     	    	   	  arr[2][1]='Y';
			   	      	       	       	     	    	   	      break;
			   	      	       	       	     	    	   	      case 9:
			   	      	       	       	     	    	   	        arr[2][2]='Y';
			   	      	       	       	     	    	   	           break;
	}
	return;
}
int ischeck()
{
	if((arr[0][0]=='X')&&(arr[1][1]=='X')&&(arr[2][2]=='X'))
	return 1;
	    else if((arr[0][0]=='Y')&&(arr[1][1]=='Y')&&(arr[2][2]=='Y'))
	        return 1;
	           else if((arr[0][2]=='X')&&(arr[1][1]=='X')&&(arr[2][0]=='X'))
	                  return 1;
	                     else if((arr[0][2]=='Y')&&(arr[1][1]=='Y')&&(arr[2][0]=='Y'))
	                  return 1;
	                       else if((arr[0][1]=='X')&&(arr[1][1]=='X')&&(arr[2][1]=='X'))
	                       return 1;
	                               else if((arr[0][1]=='Y')&&(arr[1][1]=='Y')&&(arr[2][1]=='Y'))
	                               return 1;
	                                 else if((arr[0][0]=='X')&&(arr[1][0]=='X')&&(arr[2][0]=='X'))
	                                return 1;
	                                     else if((arr[0][0]=='Y')&&(arr[1][0]=='Y')&&(arr[2][0]=='Y'))
	                                return 1;
	                                     else if((arr[0][1]=='X')&&(arr[1][1]=='X')&&(arr[2][1]=='X'))
	                                    return 1;
	                                        else if((arr[0][1]=='Y')&&(arr[1][1]=='Y')&&(arr[2][1]=='Y'))
	                                    return 1;
	                                    else if((arr[0][2]=='X')&&(arr[1][2]=='X')&&(arr[2][2]=='X'))
	                                    return 1;
	                                        else if((arr[0][2]=='Y')&&(arr[1][2]=='Y')&&(arr[2][2]=='Y'))
	                                    return 1;
	                                        else if((arr[0][2]=='X')&&(arr[0][1]=='X')&&(arr[0][2]=='X'))
	                                    return 1;
	                                        else if((arr[0][2]=='Y')&&(arr[0][1]=='Y')&&(arr[0][2]=='Y'))
	                                    return 1;
	                                       else if((arr[1][0]=='X')&&(arr[1][1]=='X')&&(arr[1][2]=='X'))
	                                    return 1;
	                                         else if((arr[1][0]=='Y')&&(arr[1][1]=='Y')&&(arr[2][2]=='Y'))
	                                    return 1;
	                                        else if((arr[2][0]=='X')&&(arr[2][1]=='X')&&(arr[2][2]=='X'))
	                                        return 1;
	                                           else if((arr[2][0]=='Y')&&(arr[2][1]=='Y')&&(arr[2][2]=='Y'))
	                                        return 1;
	                                        else if(a==9)
	                                        printf("\n match drawn\n");
										 else
										return 2;
									 
									}
	void display()
	{
		 									   
	       printf("\n");
    printf("  %c  |  %c  |  %c \n", arr[0][0], arr[0][1], arr[0][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", arr[1][0], arr[1][1], arr[1][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", arr[2][0], arr[2][1], arr[2][2]);

    printf("     |     |     \n\n");
    return;
}               
