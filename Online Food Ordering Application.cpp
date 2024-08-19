#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void registration(void);
void customer(void);
void staff(void);
void voucher(void);
void mainmenu(void);
void MC(void);
void MCR(void);
void WN(void);
float z,tax=0.04,fee=3;
int a,SQ1,SQ2,SQ3,SQ4;
char name_staff[100], IC_staff[30], email_staff[100], phone_staff[20], address_staff[100];
char staff_feedback[100];
char cust_feedback[100];

int main()
{
	mainmenu();
	return 0;
}
void mainmenu(void)
{
	system("cls");
	int option;
	printf(" ======================================================BabyPanda=======================================================\n");
	printf("\n\tWELCOME TO BABY PANDA\n");
	printf("\t---------------------\n");
	printf(" Easy,Fast & Reliable. That is our motto which is the objective to always provide the best service for all people.\n");
	printf(" We're always working hard to optimize our app and always give express delivery, first rate service and satisfaction.\n");
	printf("\n\t\t\t\t\t\t\t|-------------------|NOTICE|-------------------|\n");
	printf("\t\t\t\t\t\t1)New user has to register first in the registration section");
	printf("\t\t\t\t\t\t\t\t\t2)You can get voucher if your total purchase is greater than rm50\n");
	printf("\t\t\t\t\t\t3)you can check the voucher in the voucher section\n");
	printf("\t\t\t\t\t\t4)Voucher only applicable for next purchase only");
	printf("\n\t\t______________________\n");
	printf("\t\t       MAIN MENU      \n");
	printf("\t\t======================");
	printf("\n\t1-REGISTRATION\n");
	printf("\t2-CUSTOMER\n");
	printf("\t3-STAFF\n");
	printf("\t4-VOUCHER\n");
	printf("\t5-EXIT\n");
	printf("\n\nEnter your option ==> ");
	scanf("%d", &option);

	if(option==1)
    {
        registration();
    }

	else if(option==2)
	{
		customer();
	}

	else if(option==3)
	{
		staff();
	}

	else if(option==4)
	{
		voucher();
	}

	else if(option==5)
	{
	    system("cls");
        system ("COLOR 3");
        printf ("\tThank you for choosing Baby Panda\n");
        printf ("\tHope to see you again\3\n");
        exit(0);
	}

}
void registration(void)
{
        int x,i,n;
/*
        printf("Enter your phone number:[+60]");
        scanf("%d", &phone);
        phone_staff=phone;
*/
            char name[100], IC[30], email[100], phone[20], address[100];
            system("cls");
            //User enter Personal Info
            /*printf("How many user want to register:");
            scanf("%d",&n);
            */
            //for(i=0;i<n;i++)
	    	printf("\nFull Name (no space):");
            scanf("%s",name);
            printf("IC number or Passport Number (no dashes):");
	    	scanf("%s",IC);
	    	printf("Email Address:");
	    	scanf("%s",email);
	    	printf("Phone Number (no dashes):");
	    	scanf("%s",phone);
	    	printf("Address(no dashes,space):");
	    	scanf("%s",address);

	    	strcpy(name_staff,name);
	    	strcpy(IC_staff,IC);
	    	strcpy(email_staff,email);
	    	strcpy(phone_staff,phone);
	    	strcpy(address_staff,address);

        printf("\nPress 1 to go back to main menu:");
        scanf("%d",&x);
	    if (x==1)
    {
        system("cls");
	    mainmenu();
    }
}

/*{

	int x;
    z=50;
	printf("Welcome to customer section\n");
	printf("The price in customer is %d\n\n", z);
	printf("Press 1 to go back to main menu:");
	scanf("%d",&x);
	if (x==1)
{
    system("cls");
	mainmenu();
}
}*/

void customer(void)
{
    system("cls");
    int restaurant,x;
    printf("\n|     RESTAURANT/FAST FOOD      |");
	printf("\n|    NO.      |      Name       |");
	printf("\n|     1       |    McRonalds    |");
	printf("\n|     2       | Warong Nusantara|");
	printf("\n|     3       |    Mom's Cafe   |");
	printf("\n|     4       |      EXIT       |\n");

	printf("\nChoose your restaurant(NO.): ");
	scanf("%d", &restaurant);

	switch(restaurant){
	case 1:
	{
	    printf("Press enter to proceed to McRonalds\n");
	    system("pause");
        MCR();
	}
	case 2:
    {
        printf("Press enter to proceed to Warong Nusantara\n");
	    system("pause");
        WN();
    }
    case 3:
        {
        printf("Press enter to proceed to Mom's Cafe\n");
	    system("pause");
        MC();
        }
    case 4:
        {
            printf("Press 1 to go back to main menu :");
            scanf("%d", &x);
            if(x==1)
            {
                mainmenu();
            }
        }
    default:
        {
            printf("Invalid selection.\n");
            system("pause");
            mainmenu();
        }
	}
}
void WN(void)
	{
    int n,i,x, proceed,quantity[20], code[20], code_voucher,Q1,Q2,Q3,Q4;
	float sum=0,total,total_tax,sum_discount;
	char name[20];
	char vcode;
	char cust_feedback[100];
	

	                                           
	printf("Hi, welcome to Warong Nusantara. What do you like to order?\n");
    printf("\n\t\t~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t..................FOOD..................\n");
    printf("\t\tItem Code#  |    Description      |Price(RM)\n");
    printf("\t\t  [11]      |  Nasi Lemak         |  3.00\n");
    printf("\t\t  [12]      |  Nasi Ayam          |  3.50\n");
    printf("\t\t  [13]      |  Nasi Goreng        |  3.50\n");
    printf("\t\t  [14]      |  Chicken Chop       |  6.00\n");
    printf("\t\t  [15]      |  Grilled Chicken    |  8.00\n");
    printf("\t\t  [16]      |  Fish & Chip        |  6.00\n");
    printf("\t\t  [17]      |  Burger             |  5.50\n");
    printf("\t\t  [18]      |  Sandwich           |  2.50\n");
    printf("\t\t  [19]      |  Laksa Sarawak      |  4.00\n");
    printf("\n\t\t ..................DRINKS.................\n");
    printf("\t\t  [20]      |  Tea                |  2.00\n");
	printf("\t\t  [21]      |  Coffee             |  2.00\n");
	printf("\t\t  [22]      |  Fruit Juice        |  4.00\n");


	printf("\nPlease enter your name\n");
	scanf("%s",name);

	printf("How many food you want to order?\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nPlease enter item code you want to order.\n");
		scanf("%d",&code[i]);
		getchar();
		{
		switch(code[i]){
    case 11 :
	{
        printf ("Please enter the quantity of Nasi Lemak:\n");
        //strcpy()
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=3*quantity[i];
        break;
    }
    case 12 :
	{
        printf ("Please enter the quantity of Nasi Ayam:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=3.5*quantity[i];
        break;
    }
    case 13 :
	{
        printf ("Please enter the quantity of Nasi Goreng:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=3.5*quantity[i];
        break;
    }
    case 14 :
	{
        printf ("Please enter the quantity of Chicken Chop:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=6*quantity[i];
        break;
    }
    case 15 :
	{
        printf ("Please enter the quantity of Grilled Chicken:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=8*quantity[i];
        break;
    }
    case 16 :
	{
        printf ("Please enter the quantity of Fish & Chip:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=6*quantity[i];
        break;
    }
    case 17 :
	{
        printf ("Please enter the quantity of Burger:\n");
        scanf ("%d", &quantity[i]);
    	getchar();
        sum+=5.5*quantity[i];
        break;
    }
    case 18 :
	{
        printf ("Please enter the quantity of Sandwich:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=2.5*quantity[i];
        break;
    }
    case 19 :
	{
        printf ("Please enter the quantity of Laksa Sarawak:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=4*quantity[i];
        break;
    }
    case 20 :
	{
        printf ("How many cup of Tea you want to order:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=2*quantity[i];
        break;
    }
    case 21 :
	{
        printf ("How many cup of Coffee you want to order:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=2*quantity[i];
        break;
    }
     case 22 :
	 {
        printf ("How many glass of Fruit Juice you want to order\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=4*quantity[i];
        break;
    }
    default :
	{
        printf ("Invalid selection try again\n");
        break;
    }
	}
	}
	}
	printf("\nYour order:\n");
	printf("\nItem code  |  Quantity\n");
	for(i=0;i<n;i++)
	{
		printf("    %d     |     %d   \n",code[i],quantity[i]);
	}
	printf("Do you have the voucher code?(Y\\N):\n");
	scanf("%c", &vcode);
	if(vcode=='Y'||vcode=='y')
    {
        printf("Enter your code:");
        scanf("%d", &code_voucher);
        if(code_voucher==1234)
        {
        sum_discount=sum-sum*0.15;
        total_tax=sum*tax;
        total= sum_discount+total_tax+fee;
        printf("|Subtotal     : RM%.2f\n", sum);
        printf("|Delivery fee : RM%.2f\n", fee);
        printf("|Service Tax  : RM%.2f\n", total_tax);
        printf("|Total        : RM%.2f\n", total);
       // printf("Total price is RM%.2f\n",sum);
        printf("Your account has been automatically deducted\n");
        z=total;
       printf("Thank you Mr/Mrs.%s \n",name);
       printf("\n\t\t\t      <<<Estimated Delivery Time>>>\n");
       printf("\t\t\t\t      10-15 MINUTES     \n");
       printf("\t\t _______________________________________________________\n");
       printf("\t\t|Your order is notified and your food is being prepared.|\n");
       printf("\t\t|      Your rider will pick it up once it is ready.     |\n");
       printf("\t\t|             Thankyou for your patience.               |\n");
       printf("\t\t|_______________________________________________________|\n");
        printf("\nDo you want to give feedback?(if yes enter 1/if not enter 2):");
        scanf("%d", &proceed);
            if(proceed!=1)
            {
            system("cls");
            system("pause");
            mainmenu();
            }
          else
           {
    system("cls");
    printf("\n\t*****************************************CUSTOMER FEEDBACK*****************************************\n");
    printf("\n\tHERE YOU CAN GIVE US YOUR FEEDBACK AND COMPLAINT ABOUT OUR APP\n");
    printf("\tTHE SCALE IS FROM:-\n");

	printf("\nVERY UNSATISFIED                                                            SATISFIED  ");
	printf("\n     1                    2                 3                 4                5       \n");
    printf("\nHOW WAS THE CUSTOMER SERVICE: \n");
    scanf("%d", &Q1);
    printf("HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE?:\n");
    scanf("%d", &Q2);
    printf("HOW WAS THE MENU AND DRINKS CHOICES:\n");
    scanf("%d", &Q3);
    printf("ARE YOU SATISFIED WITH OUR APP:\n");
    scanf("%d", &Q4);
    getchar();
    printf("TELL US WHAT YOU LOVE ABOUT THIS APP OR WHAT WE COULD DO TO IMPROVE OUR APP:");
    fgets(cust_feedback, sizeof(cust_feedback), stdin);
    SQ1=Q1;
    SQ2=Q2;
    SQ3=Q3;
    SQ4=Q4;
    strcpy(staff_feedback,cust_feedback);
    printf("Enter 1 to go back to main menu:");
            scanf("%d",&x);
            if(x==1)
            {
                mainmenu();
            }
        }
        }
        else if(code_voucher!=1234);
        {
        printf("invalid voucher code\n");
        total_tax=sum*tax;
        total= sum+total_tax+fee;
        printf("|Subtotal     : RM%.2f\n", sum);
        printf("|Delivery fee : RM%.2f\n", fee);
        printf("|Service Tax  : RM%.2f\n", total_tax);
        printf("|Total        : RM%.2f\n", total);
       // printf("Total price is RM%.2f\n",sum);
        printf("Your account has been automatically deducted\n");
        z=total;
       printf("Thank you Mr/Mrs.%s \n",name);
       printf("\n\t\t\t      <<<Estimated Delivery Time>>>\n");
       printf("\t\t\t\t      10-15 MINUTES     \n");
       printf("\t\t _______________________________________________________\n");
       printf("\t\t|Your order is notified and your food is being prepared.|\n");
       printf("\t\t|      Your rider will pick it up once it is ready.     |\n");
       printf("\t\t|             Thankyou for your patience.               |\n");
       printf("\t\t|_______________________________________________________|\n");
        printf("\nDo you want to give feedback?(if yes enter 1/if not enter 2):");
        scanf("%d", &proceed);
        if(proceed!=1)
        {
            system("cls");
            system("pause");
            mainmenu();
        }
        else
        {
    system("cls");
    printf("\n\t*****************************************CUSTOMER FEEDBACK*****************************************\n");
    printf("\n\tHERE YOU CAN GIVE US YOUR FEEDBACK AND COMPLAINT ABOUT OUR APP\n");
    printf("\tTHE SCALE IS FROM:-\n");

	printf("\nVERY UNSATISFIED                                                            SATISFIED  ");
	printf("\n     1                    2                 3                 4                5       \n");
    printf("\nHOW WAS THE CUSTOMER SERVICE: \n");
    scanf("%d", &Q1);
    printf("HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE?:\n");
    scanf("%d", &Q2);
    printf("HOW WAS THE MENU AND DRINKS CHOICES:\n");
    scanf("%d", &Q3);
    printf("ARE YOU SATISFIED WITH OUR APP:\n");
    scanf("%d", &Q4);
    getchar();
    printf("TELL US WHAT YOU LOVE ABOUT THIS APP OR WHAT WE COULD DO TO IMPROVE OUR APP:");
    fgets(cust_feedback, sizeof(cust_feedback), stdin);
    SQ1=Q1;
    SQ2=Q2;
    SQ3=Q3;
    SQ4=Q4;
    strcpy(staff_feedback,cust_feedback);
       printf("Enter 1 to go back to main menu:");
            scanf("%d",&x);
            if(x==1)
            {
                mainmenu();
            }
        }
        }
        }
    else if(vcode=='N'||vcode=='n')
	{
        total_tax=sum*tax;
        total= sum+total_tax+fee;
        printf("|Subtotal     : RM%.2f\n", sum);
        printf("|Delivery fee : RM%.2f\n", fee);
        printf("|Service Tax  : RM%.2f\n", total_tax);
        printf("|Total        : RM%.2f\n", total);
       // printf("Total price is RM%.2f\n",sum);
        printf("Your account has been automatically deducted\n");
        z=total;
       printf("Thank you Mr/Mrs.%s \n",name);
       printf("\n\t\t\t      <<<Estimated Delivery Time>>>\n");
       printf("\t\t\t\t      10-15 MINUTES     \n");
       printf("\t\t _______________________________________________________\n");
       printf("\t\t|Your order is notified and your food is being prepared.|\n");
       printf("\t\t|      Your rider will pick it up once it is ready.     |\n");
       printf("\t\t|             Thankyou for your patience.               |\n");
       printf("\t\t|_______________________________________________________|\n");
	printf("\nDo you want to give feedback?(if yes enter 1/if not enter 2):");
        scanf("%d", &proceed);
        if(proceed!=1)
        {
            system("cls");
            printf("Press 1 to go back to main menu:\n");
            scanf("%d",&x);
            if(x==1)
            {
                mainmenu();
            }
        }
        else
        {
    system("cls");
    printf("\n\t*****************************************CUSTOMER FEEDBACK*****************************************\n");
    printf("\n\tHERE YOU CAN GIVE US YOUR FEEDBACK AND COMPLAINT ABOUT OUR APP\n");
    printf("\tTHE SCALE IS FROM:-\n");
	printf("\nVERY UNSATISFIED                                                            SATISFIED  ");
	printf("\n     1                    2                 3                 4                5       \n");
    printf("\nHOW WAS THE CUSTOMER SERVICE: \n");
    scanf("%d", &Q1);
    printf("HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE?:\n");
    scanf("%d", &Q2);
    printf("HOW WAS THE MENU AND DRINKS CHOICES:\n");
    scanf("%d", &Q3);
    printf("ARE YOU SATISFIED WITH OUR APP:\n");
    scanf("%d", &Q4);
    getchar();
    printf("TELL US WHAT YOU LOVE ABOUT THIS APP OR WHAT WE COULD DO TO IMPROVE OUR APP:");
    fgets(cust_feedback, sizeof(cust_feedback), stdin);
    SQ1=Q1;
    SQ2=Q2;
    SQ3=Q3;
    SQ4=Q4;
    strcpy(staff_feedback,cust_feedback);
	}
	printf("\nPress 1 to go back to main menu:");
	scanf("%d",&x);
	if (x==1)
{
	system("cls");
	mainmenu();
}
}
	}

void MCR(void)
{
    int n,i,x, proceed,quantity[20], code[20], code_voucher,Q1,Q2,Q3,Q4;
	float sum=0,total,total_tax,sum_discount;
	char name[20];
	char vcode;
	char cust_feedback[100];

    system("cls");
    printf("Hi, welcome to McRonalds. What do you like to order?\n");
    printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t...........................FOOD...........................\n");
    printf("\t\tItem Code#  |            Description                |Price(RM)\n");
    printf("\t\t  [11]      |  Nasi Lemak MCR+2 ketul Ayam Goreng   |  16.00\n");
    printf("\t\t  [12]      |  Spicy Chicken burger                 |  18.00\n");
    printf("\t\t  [13]      |  Ronalds Chicken burger               |  16.50\n");
    printf("\t\t  [14]      |  Beef Medium McRonalds Meal           |  16.50\n");
    printf("\t\t  [15]      |  Spicy Triple Beef with Cheese        |  20.30\n");
    printf("\t\t  [16]      |  Filet-O-Fish                         |   6.10\n");
    printf("\t\t  [17]      |  French fries                         |   6.10\n");
    printf("\t\t  [18]      |  Oreo McRonalds                       |   6.60\n");
    printf("\t\t  [19]      |  Chocolate Sundae                     |   4.50\n");
    printf("\n\t\t  ...........................DRINKS..........................\n");
    printf("\t\t  [20]      |  Coca-Cola                            |   2.00\n");
	printf("\t\t  [21]      |  Sprite                               |   2.00\n");
	printf("\t\t  [22]      |  Iced Milo                            |   3.00\n");
	printf("\nPlease enter your name\n");
	scanf("%s",name);
	printf("How many food you want to order?\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nPlease enter item code you want to order.\n");
		scanf("%d",&code[i]);
		getchar();
		{
		switch(code[i]){
    case 11 :
	{
        printf ("Please enter the quantity of Nasi Lemak MCR+2 Ketul Ayam Goreng:\n");
        //strcpy()
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=16*quantity[i];
        break;
    }
    case 12 :
	{
        printf ("Please enter the quantity of Spicy Chicken Burger:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=18*quantity[i];
        break;
    }
    case 13 :
	{
        printf ("Please enter the quantity of Ronalds Chicken Burger:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=16.5*quantity[i];
        break;
    }
    case 14 :
	{
        printf ("Please enter the quantity of Beef Medium McRonalds Meal:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=16.5*quantity[i];
        break;
    }
    case 15 :
	{
        printf ("Please enter the quantity of Spicy Triple Beef With Cheese:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=20.3*quantity[i];
        break;
    }
    case 16 :
	{
        printf ("Please enter the quantity of Filet-O-Fish:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=15*quantity[i];
        break;
    }
    case 17 :
	{
        printf ("Please enter the quantity of French Fries:\n");
        scanf ("%d", &quantity[i]);
    	getchar();
        sum+=6.1*quantity[i];
        break;
    }
    case 18 :
	{
        printf ("Please enter the quantity of Oreo McRonalds:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=6.6*quantity[i];
        break;
    }
    case 19 :
	{
        printf ("Please enter the quantity of Chocolate Sundae:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=4.5*quantity[i];
        break;
    }
    case 20 :
	{
        printf ("How many glass of Cola-Cola you want to order:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=2*quantity[i];
        break;
    }
    case 21 :
	{
        printf ("How many glass of sprite you want to order:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=2*quantity[i];
        break;
    }
     case 22 :
	 {
        printf ("How many glass of iced milo you want to order\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=3*quantity[i];
        break;
    }
    default :
	{
        printf ("Invalid selection try again\n");
        break;
    }
	}
	}
	}
	printf("\nYour order:\n");
	printf("\nItem code  |  Quantity\n");
	for(i=0;i<n;i++)
	{
		printf("    %d     |     %d   \n",code[i],quantity[i]);
	}
	printf("Do you have the voucher code?(Y\\N):\n");
	scanf("%c", &vcode);
	if(vcode=='Y'||vcode=='y')
    {
        printf("Enter your code:");
        scanf("%d", &code_voucher);
        if(code_voucher==1234)
        {
        sum_discount=sum-sum*0.15;
        total_tax=sum*tax;
        total= sum_discount+total_tax+fee;
        printf("|Subtotal     : RM%.2f\n", sum);
        printf("|Delivery fee : RM%.2f\n", fee);
        printf("|Service Tax  : RM%.2f\n", total_tax);
        printf("|Total        : RM%.2f\n", total);
        printf("Your account has been automatically deducted\n");
        z=total;
       printf("Thank you Mr/Mrs.%s \n",name);
       printf("\n\t\t\t      <<<Estimated Delivery Time>>>\n");
       printf("\t\t\t\t      10-15 MINUTES     \n");
       printf("\t\t _______________________________________________________\n");
       printf("\t\t|Your order is notified and your food is being prepared.|\n");
       printf("\t\t|      Your rider will pick it up once it is ready.     |\n");
       printf("\t\t|             Thankyou for your patience.               |\n");
       printf("\t\t|_______________________________________________________|\n");
        printf("\nDo you want to give feedback?(if yes enter 1/if not enter 2):");
        scanf("%d", &proceed);
            if(proceed!=1)
            {
            system("cls");
            system("pause");
            mainmenu();
            }
          else
           {
    system("cls");
    printf("\n\t*****************************************CUSTOMER FEEDBACK*****************************************\n");
    printf("\n\tHERE YOU CAN GIVE US YOUR FEEDBACK AND COMPLAINT ABOUT OUR APP\n");
    printf("\tTHE SCALE IS FROM:-\n");
	printf("\nVERY UNSATISFIED                                                            SATISFIED  ");
	printf("\n     1                    2                 3                 4                5       \n");
    printf("\nHOW WAS THE CUSTOMER SERVICE: \n");
    scanf("%d", &Q1);
    printf("HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE?:\n");
    scanf("%d", &Q2);
    printf("HOW WAS THE MENU AND DRINKS CHOICES:\n");
    scanf("%d", &Q3);
    printf("ARE YOU SATISFIED WITH OUR APP:\n");
    scanf("%d", &Q4);
    getchar();
    printf("TELL US WHAT YOU LOVE ABOUT THIS APP OR WHAT WE COULD DO TO IMPROVE OUR APP:");
    fgets(cust_feedback, sizeof(cust_feedback), stdin);
    SQ1=Q1;
    SQ2=Q2;
    SQ3=Q3;
    SQ4=Q4;
    strcpy(staff_feedback,cust_feedback);
    printf("Enter 1 to go back to main menu:");
            scanf("%d",&x);
            if(x==1)
            {
                mainmenu();
            }
        }
        }
        else if(code_voucher!=1234);
        {
        printf("invalid voucher code\n");
        total_tax=sum*tax;
        total= sum+total_tax+fee;
        printf("|Subtotal     : RM%.2f\n", sum);
        printf("|Delivery fee : RM%.2f\n", fee);
        printf("|Service Tax  : RM%.2f\n", total_tax);
        printf("|Total        : RM%.2f\n", total);
        printf("Your account has been automatically deducted\n");
        z=total;
       printf("Thank you Mr/Mrs.%s \n",name);
       printf("\n\t\t\t      <<<Estimated Delivery Time>>>\n");
       printf("\t\t\t\t      10-15 MINUTES     \n");
       printf("\t\t _______________________________________________________\n");
       printf("\t\t|Your order is notified and your food is being prepared.|\n");
       printf("\t\t|      Your rider will pick it up once it is ready.     |\n");
       printf("\t\t|             Thankyou for your patience.               |\n");
       printf("\t\t|_______________________________________________________|\n");
        printf("\nDo you want to give feedback?(if yes enter 1/if not enter 2):");
        scanf("%d", &proceed);
        if(proceed!=1)
        {
            system("cls");
            system("pause");
            mainmenu();
        }
        else
        {
    system("cls");
    printf("\n\t*****************************************CUSTOMER FEEDBACK*****************************************\n");
    printf("\n\tHERE YOU CAN GIVE US YOUR FEEDBACK AND COMPLAINT ABOUT OUR APP\n");
    printf("\tTHE SCALE IS FROM:-\n");
	printf("\nVERY UNSATISFIED                                                            SATISFIED  ");
	printf("\n     1                    2                 3                 4                5       \n");
    printf("\nHOW WAS THE CUSTOMER SERVICE: \n");
    scanf("%d", &Q1);
    printf("HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE?:\n");
    scanf("%d", &Q2);
    printf("HOW WAS THE MENU AND DRINKS CHOICES:\n");
    scanf("%d", &Q3);
    printf("ARE YOU SATISFIED WITH OUR APP:\n");
    scanf("%d", &Q4);
    getchar();
    printf("TELL US WHAT YOU LOVE ABOUT THIS APP OR WHAT WE COULD DO TO IMPROVE OUR APP:");
    fgets(cust_feedback, sizeof(cust_feedback), stdin);
    SQ1=Q1;
    SQ2=Q2;
    SQ3=Q3;
    SQ4=Q4;
    strcpy(staff_feedback,cust_feedback);
       printf("Enter 1 to go back to main menu:");
            scanf("%d",&x);
            if(x==1)
            {
                mainmenu();
            }
        }
        }
        }
    else if(vcode=='N'||vcode=='n')
	{
        total_tax=sum*tax;
        total= sum+total_tax+fee;
        printf("|Subtotal     : RM%.2f\n", sum);
        printf("|Delivery fee : RM%.2f\n", fee);
        printf("|Service Tax  : RM%.2f\n", total_tax);
        printf("|Total        : RM%.2f\n", total);
        printf("Your account has been automatically deducted\n");
        z=total;
       printf("Thank you Mr/Mrs.%s \n",name);
       printf("\n\t\t\t      <<<Estimated Delivery Time>>>\n");
       printf("\t\t\t\t      10-15 MINUTES     \n");
       printf("\t\t _______________________________________________________\n");
       printf("\t\t|Your order is notified and your food is being prepared.|\n");
       printf("\t\t|      Your rider will pick it up once it is ready.     |\n");
       printf("\t\t|             Thankyou for your patience.               |\n");
       printf("\t\t|_______________________________________________________|\n");
	printf("\nDo you want to give feedback?(if yes enter 1/if not enter 2):");
        scanf("%d", &proceed);
        if(proceed!=1)
        {
            system("cls");
            printf("Press 1 to go back to main menu:\n");
            scanf("%d",&x);
            if(x==1)
            {
                mainmenu();
            }

        }
        else
        {
    system("cls");

    printf("\n\t*****************************************CUSTOMER FEEDBACK*****************************************\n");
    printf("\n\tHERE YOU CAN GIVE US YOUR FEEDBACK AND COMPLAINT ABOUT OUR APP\n");
    printf("\tTHE SCALE IS FROM:-\n");

	printf("\nVERY UNSATISFIED                                                            SATISFIED  ");
	printf("\n     1                    2                 3                 4                5       \n");
    printf("\nHOW WAS THE CUSTOMER SERVICE: \n");
    scanf("%d", &Q1);
    printf("HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE?:\n");
    scanf("%d", &Q2);
    printf("HOW WAS THE MENU AND DRINKS CHOICES:\n");
    scanf("%d", &Q3);
    printf("ARE YOU SATISFIED WITH OUR APP:\n");
    scanf("%d", &Q4);
    getchar();
    printf("TELL US WHAT YOU LOVE ABOUT THIS APP OR WHAT WE COULD DO TO IMPROVE OUR APP:");
    fgets(cust_feedback, sizeof(cust_feedback), stdin);
    SQ1=Q1;
    SQ2=Q2;
    SQ3=Q3;
    SQ4=Q4;
    strcpy(staff_feedback,cust_feedback);
	}
	printf("\nPress 1 to go back to main menu:");
	scanf("%d",&x);
	if (x==1)
{
	system("cls");
	mainmenu();
}
}
}
void MC(void)
{
    int n,i,x, proceed,quantity[20], code[20], code_voucher,Q1,Q2,Q3,Q4;
	float sum=0,total,total_tax,sum_discount;
	char name[20];
	char vcode;
	char cust_feedback[100];

    system("cls");
    printf("Hi, welcome to Mom's Cafe. What do you like to order?\n");
    printf("\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t...........................FOOD...........................\n");
    printf("\t\tItem Code#  |            Description                |Price(RM)\n");
    printf("\t\t  [11]      |  Veggie & Mushroom Sandwich           |  13.00\n");
    printf("\t\t  [12]      |  Grilled Mac & Cheese Sandwich        |  15.00\n");
    printf("\t\t  [13]      |  Grilled Tuna Melt Sandwich           |  14.00\n");
    printf("\t\t  [14]      |  Signature Chicken Burger             |  16.00\n");
    printf("\t\t  [15]      |  Classic double cheeseburger          |  18.50\n");
    printf("\t\t  [16]      |  Fries rich with Chili Beef           |  12.00\n");
    printf("\t\t  [17]      |  Mozzarella Cheese fries with chicken |  16.00\n");
    printf("\t\t  [18]      |  Sticky wings                         |  10.00\n");
    printf("\t\t  [19]      |  Salad                                |   7.00\n");
    printf("\n\t\t  ..........................DRINKS...........................\n");
    printf("\t\t  [20]      |  Iced Lemon Tea                       |   1.50\n");
	printf("\t\t  [21]      |  Soft Drinks                          |   2.00\n");
	printf("\t\t  [22]      |  Tropicana Twister Orange             |   5.00\n");
	printf("\nPlease enter your name\n");
	scanf("%s",name);
	printf("How many food you want to order?\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\nPlease enter item code you want to order.\n");
		scanf("%d",&code[i]);
		getchar();
		{
		switch(code[i]){
    case 11 :
	{
        printf ("Please enter the quantity of Veggie & Mushroom Sandwich:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=13*quantity[i];
        break;
    }
    case 12 :
	{
        printf ("Please enter the quantity of Grilled Mac & Cheese Sandwich:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=15*quantity[i];
        break;
    }
    case 13 :
	{
        printf ("Please enter the quantity of Grilled Tuna Melt Sandwich:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=14*quantity[i];
        break;
    }
    case 14 :
	{
        printf ("Please enter the quantity of Signature Chicken Burger:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=16*quantity[i];
        break;
    }
    case 15 :
	{
        printf ("Please enter the quantity of Classic Double Cheeseburger:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=18.5*quantity[i];
        break;
    }
    case 16 :
	{
        printf ("Please enter the quantity of Fries rich with Chili Beef:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=12*quantity[i];
        break;
    }
    case 17 :
	{
        printf ("Please enter the quantity of Mozzarella Cheese fries with chicken:\n");
        scanf ("%d", &quantity[i]);
    	getchar();
        sum+=16*quantity[i];
        break;
    }
    case 18 :
	{
        printf ("Please enter the quantity of Sticky Wings:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=10*quantity[i];
        break;
    }
    case 19 :
	{
        printf ("Please enter the quantity of Salad:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=7*quantity[i];
        break;
    }
    case 20 :
	{
        printf ("How many glass of Iced Lemon Tea you want to order:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=1.5*quantity[i];
        break;
    }
    case 21 :
	{
        printf ("How many glass of Soft Drinks you want to order:\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=2*quantity[i];
        break;
    }
     case 22 :
	 {
        printf ("How many glass of Tropicana Twister Orange you want to order\n");
        scanf ("%d", &quantity[i]);
        getchar();
        sum+=5*quantity[i];
        break;
    }
    default :
	{
        printf ("Invalid selection try again\n");
        break;
    }
	}
	}
	}
	printf("\nYour order:\n");
	printf("\nItem code  |  Quantity\n");
	for(i=0;i<n;i++)
	{
		printf("    %d     |     %d   \n",code[i],quantity[i]);
	}
	printf("Do you have the voucher code?(Y\\N):\n");
	scanf("%c", &vcode);
	if(vcode=='Y'||vcode=='y')
    {
        printf("Enter your code:");
        scanf("%d", &code_voucher);
        if(code_voucher==1234)
        {
        sum_discount=sum-sum*0.15;
        total_tax=sum*tax;
        total= sum_discount+total_tax+fee;
        printf("|Subtotal     : RM%.2f\n", sum);
        printf("|Delivery fee : RM%.2f\n", fee);
        printf("|Service Tax  : RM%.2f\n", total_tax);
        printf("|Total        : RM%.2f\n", total);
        printf("Your account has been automatically deducted\n");
        z=total;
       printf("Thank you Mr/Mrs.%s \n",name);
       printf("\n\t\t\t      <<<Estimated Delivery Time>>>\n");
       printf("\t\t\t\t      10-15 MINUTES     \n");
       printf("\t\t _______________________________________________________\n");
       printf("\t\t|Your order is notified and your food is being prepared.|\n");
       printf("\t\t|      Your rider will pick it up once it is ready.     |\n");
       printf("\t\t|             Thankyou for your patience.               |\n");
       printf("\t\t|_______________________________________________________|\n");
        printf("\nDo you want to give feedback?(if yes enter 1/if not enter 2):");
        scanf("%d", &proceed);
            if(proceed!=1)
            {
            system("cls");
            system("pause");
            mainmenu();
            }
          else
           {
    system("cls");
    printf("\n\t*****************************************CUSTOMER FEEDBACK*****************************************\n");
    printf("\n\tHERE YOU CAN GIVE US YOUR FEEDBACK AND COMPLAINT ABOUT OUR APP\n");
    printf("\tTHE SCALE IS FROM:-\n");
	printf("\nVERY UNSATISFIED                                                            SATISFIED  ");
	printf("\n     1                    2                 3                 4                5       \n");
    printf("\nHOW WAS THE CUSTOMER SERVICE: \n");
    scanf("%d", &Q1);
    printf("HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE?:\n");
    scanf("%d", &Q2);
    printf("HOW WAS THE MENU AND DRINKS CHOICES:\n");
    scanf("%d", &Q3);
    printf("ARE YOU SATISFIED WITH OUR APP:\n");
    scanf("%d", &Q4);
    getchar();
    printf("TELL US WHAT YOU LOVE ABOUT THIS APP OR WHAT WE COULD DO TO IMPROVE OUR APP:");
    fgets(cust_feedback, sizeof(cust_feedback), stdin);
    SQ1=Q1;
    SQ2=Q2;
    SQ3=Q3;
    SQ4=Q4;
    strcpy(staff_feedback,cust_feedback);
    printf("Enter 1 to go back to main menu:");
            scanf("%d",&x);
            if(x==1)
            {
                mainmenu();
            }
        }
        }
        else if(code_voucher!=1234);
        {
        printf("invalid voucher code\n");
        total_tax=sum*tax;
        total= sum+total_tax+fee;
        printf("|Subtotal     : RM%.2f\n", sum);
        printf("|Delivery fee : RM%.2f\n", fee);
        printf("|Service Tax  : RM%.2f\n", total_tax);
        printf("|Total        : RM%.2f\n", total);
        printf("Your account has been automatically deducted\n");
        z=total;
       printf("Thank you Mr/Mrs.%s \n",name);
       printf("\n\t\t\t      <<<Estimated Delivery Time>>>\n");
       printf("\t\t\t\t      10-15 MINUTES     \n");
       printf("\t\t _______________________________________________________\n");
       printf("\t\t|Your order is notified and your food is being prepared.|\n");
       printf("\t\t|      Your rider will pick it up once it is ready.     |\n");
       printf("\t\t|             Thankyou for your patience.               |\n");
       printf("\t\t|_______________________________________________________|\n");
        printf("\nDo you want to give feedback?(if yes enter 1/if not enter 2):");
        scanf("%d", &proceed);
        if(proceed!=1)
        {
            system("cls");
            system("pause");
            mainmenu();
        }
        else
        {
    system("cls");
    printf("\n\t*****************************************CUSTOMER FEEDBACK*****************************************\n");
    printf("\n\tHERE YOU CAN GIVE US YOUR FEEDBACK AND COMPLAINT ABOUT OUR APP\n");
    printf("\tTHE SCALE IS FROM:-\n");
	printf("\nVERY UNSATISFIED                                                            SATISFIED  ");
	printf("\n     1                    2                 3                 4                5       \n");
    printf("\nHOW WAS THE CUSTOMER SERVICE: \n");
    scanf("%d", &Q1);
    printf("HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE?:\n");
    scanf("%d", &Q2);
    printf("HOW WAS THE MENU AND DRINKS CHOICES:\n");
    scanf("%d", &Q3);
    printf("ARE YOU SATISFIED WITH OUR APP:\n");
    scanf("%d", &Q4);
    getchar();
    printf("TELL US WHAT YOU LOVE ABOUT THIS APP OR WHAT WE COULD DO TO IMPROVE OUR APP:");
    fgets(cust_feedback, sizeof(cust_feedback), stdin);
    SQ1=Q1;
    SQ2=Q2;
    SQ3=Q3;
    SQ4=Q4;
    strcpy(staff_feedback,cust_feedback);
       printf("Enter 1 to go back to main menu:");
            scanf("%d",&x);
            if(x==1)
            {
                mainmenu();
            }
        }
        }
        }
    else if(vcode=='N'||vcode=='n')
	{
        total_tax=sum*tax;
        total= sum+total_tax+fee;
        printf("|Subtotal     : RM%.2f\n", sum);
        printf("|Delivery fee : RM%.2f\n", fee);
        printf("|Service Tax  : RM%.2f\n", total_tax);
        printf("|Total        : RM%.2f\n", total);
        printf("Your account has been automatically deducted\n");
        z=total;
       printf("Thank you Mr/Mrs.%s \n",name);
       printf("\n\t\t\t      <<<Estimated Delivery Time>>>\n");
       printf("\t\t\t\t      10-15 MINUTES     \n");
       printf("\t\t _______________________________________________________\n");
       printf("\t\t|Your order is notified and your food is being prepared.|\n");
       printf("\t\t|      Your rider will pick it up once it is ready.     |\n");
       printf("\t\t|             Thankyou for your patience.               |\n");
       printf("\t\t|_______________________________________________________|\n");
	printf("\nDo you want to give feedback?(if yes enter 1/if not enter 2):");
        scanf("%d", &proceed);
        if(proceed!=1)
        {
            system("cls");
            printf("Press 1 to go back to main menu:\n");
            scanf("%d",&x);
            if(x==1)
            {
                mainmenu();
            }

        }
        else
        {
    system("cls");

    printf("\n\t*****************************************CUSTOMER FEEDBACK*****************************************\n");
    printf("\n\tHERE YOU CAN GIVE US YOUR FEEDBACK AND COMPLAINT ABOUT OUR APP\n");
    printf("\tTHE SCALE IS FROM:-\n");

	printf("\nVERY UNSATISFIED                                                            SATISFIED  ");
	printf("\n     1                    2                 3                 4                5       \n");
    printf("\nHOW WAS THE CUSTOMER SERVICE: \n");
    scanf("%d", &Q1);
    printf("HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE?:\n");
    scanf("%d", &Q2);
    printf("HOW WAS THE MENU AND DRINKS CHOICES:\n");
    scanf("%d", &Q3);
    printf("ARE YOU SATISFIED WITH OUR APP:\n");
    scanf("%d", &Q4);
    getchar();
    printf("TELL US WHAT YOU LOVE ABOUT THIS APP OR WHAT WE COULD DO TO IMPROVE OUR APP:");
    fgets(cust_feedback, sizeof(cust_feedback), stdin);
    SQ1=Q1;
    SQ2=Q2;
    SQ3=Q3;
    SQ4=Q4;
    strcpy(staff_feedback,cust_feedback);
	}
	printf("\nPress 1 to go back to main menu:");
	scanf("%d",&x);
	if (x==1)
{
	system("cls");
	mainmenu();
}
}
}
void staff(void)
{
    int x,i,next;
    system("cls");
    char passcode[10]="staff";
    char passcode_input[10];
    int compare;

    printf("Welcome to staff section\n");

    printf("Please enter the passcode\n");
    scanf("%s", passcode_input);

    compare = strcmp(passcode, passcode_input);

    if(compare==0)
    {

        printf("Access approved\n\n");
        system("pause");
        system("cls");
        printf("\n\t\t********************STAFF MENU********************\n");
        printf("\t\t==================================================\n");
        printf("\t\t [1] Customer Information\n");
        printf("\t\t [2] Feedback Survey Report\n");
        printf("\t\t [3] Purchase history\n");
        printf("\t\t [4] Exit\n");
        printf("\t\t==================================================\n");
        printf("\n\t\tEnter your choice ==> ");
        scanf("%d",&next);

        switch(next){

            case(1):
        {
        system("cls");
        printf("\t\t~~~~~~~~~~~~~~~~~~CUSTOMER DETAILS~~~~~~~~~~~~~~~~\n");

        printf("\n|-------------------|\n");
		printf("|-------------------|\n");
		printf("| NAME              :  %s  \n",name_staff);
		printf("| EMAIL             :  %s  \n",email_staff);
		printf("| IC/PASSPORT NUMBER:  %s  \n",IC_staff);
		printf("| PHONE NUMBER      :  %s  \n",phone_staff);
		printf("| Address           :  %s  \n",address_staff);
		break;
        }
            case(2):
        {
        system("cls");
        printf("\n\t\t------------------------------------SCALE---------------------------------------------");
        printf("\n\t\tVERY UNSATISFIED                                                           SATISFIED  ");
	    printf("\n\t\t     1                    2                 3                 4                5       \n");
        printf("\n\n|-----|------------------------------------------------------|-----|\n");
		printf("| NO. |                 FEEDBACK                             |SCALE|\n");
		printf("|-----|------------------------------------------------------|-----|\n");
		printf("| 1.  |HOW WAS THE CUSTOMER SERVICE                          |  %d  |\n",SQ1);
		printf("| 2.  |HOW SATISFIED WAS YOU WITH THE FOOD ORDER EXPERIENCE? |  %d  |\n",SQ2);
		printf("| 3.  |HOW WAS THE MENU AND DRINKS CHOICES                   |  %d  |\n",SQ3);
		printf("| 4.  |ARE YOU SATISFIED WITH OUR APP                        |  %d  |\n",SQ4);
        printf("\nCustomer Overall Feedback/Complaint: %s", staff_feedback);
        break;
        }
            case(3):
        {
        system("cls");
        printf("\n\n\t\tThe Total Purchase for today is %.2f", z);
        break;
        }
            case(4):
         {
        mainmenu();
        break;
        }
        default :
	    {
        printf ("Invalid selection try again\n");
        break;
        }
        }
            /*printf("\t~~~~~~~~~~~~~~~~~~~~~CUSTOMER DETAILS~~~~~~~~~~~~~~~~~~~~~");
            //for(i=0;i<2;i++)

            printf("\nMr/Mrs,%s",name_staff);
            printf("\nEmail:%s",email_staff);
            printf("\n(IC/Passport number):%s",IC_staff);
            printf("\nPhone number:%s",phone_staff);
            printf("\nAddress:%s\n",address_staff);
           // printf("\nThe total purchase is:rm%.2f\n",z);*/

            printf("\nPress 1 to go back to staff menu:");
            scanf("%d",&x);
            if (x==1)
        {
            system("cls");
            staff();
        }
    }

    else
    {
        printf("Access denied. Please try again.\n");
        system("pause");
        mainmenu();
    }
}
void voucher()
{
    int x;
    system("cls");
 	if(z<=50)
	{
		printf("We are sorry, you are not eligible for this voucher as your total purchase did not meet the limit needed\n");
	}
	else
    {
        printf("Your voucher is 1234\n");
    }
	printf("Enter 1 to go back to main menu:");
	scanf("%d",&x);
	if (x==1)
{
	system("cls");
	mainmenu();
}
}

//printf("If your purchase is greater than rm50 you can get a 15percent off on your next purchase\n\n");
/*printf("Do you have the voucher code?(Y\N):\n");
	scanf("%c", &vcode);
	if(vcode=='Y'||vcode=='y')
    {
        printf("Enter your code:");
        scanf()
    }
    else if(vcode=='N'||vcode=='n')
*/

