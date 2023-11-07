#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<math.h>
struct date
{
    int day;
    int month;
    int year;

};
struct acc
{
int acc_no;
char name[40];
char name1[40];
char address[60];
char citizen[15];
double phone;
int age;
double aadhar;
double pan;
struct date dob;
char type[10];
char pass[6];
float money;
};
struct acc add;
struct acc check;
struct acc pswd;
struct acc loan;
struct acc tns;


//tushar 143
#define MAX_CUSTOMERS 100
float amount=1000, deposit;
int choice, pin,n, k,withdraw;
char transaction ='y';

typedef struct {
    char name[50];
    char address[100];
    char phone[20];
    char email[50];
    char pan[50];
    char aadhar[50];
} Customer;

Customer customers[MAX_CUSTOMERS];
int customerCount = 0;

void addCustomer() {
    if (customerCount == MAX_CUSTOMERS) {
        printf("Error: Cannot add more customers, database is full.\n");
        return;
    }

    Customer newCustomer;

    printf("Enter customer name: ");
    scanf("%s", newCustomer.name);

    printf("Enter customer address: ");
    scanf("%s", newCustomer.address);

    printf("Enter customer phone: ");
    scanf("%s", newCustomer.phone);

    printf("Enter customer email: ");
    scanf("%s", newCustomer.email);

    printf("Enter customer pan number: ");
    scanf("%s", newCustomer.pan);

    printf("Enter customer aadhar number: ");
    scanf("%s", newCustomer.aadhar);

    customers[customerCount++] = newCustomer;
    printf("Customer added successfully.\n");
}

void searchCustomer() {
    char name[50];

    printf("Enter customer name: ");
    scanf("%s", name);

    for (int i = 0; i < customerCount; i++) {
        if (strcmp(customers[i].name, name) == 0) {
            printf("Customer found:\n");
            printf("Name: %s\n", customers[i].name);
            printf("Address: %s\n", customers[i].address);
            printf("Phone: %s\n", customers[i].phone);
            printf("Email: %s\n", customers[i].email);
            printf("Pan number:%s\n", customers[i].pan);
            printf("Aadhar number:%s\n", customers[i].aadhar );
            return;
        }
    }

    printf("Error: Customer not found.\n");
}

void printCustomers() {
    for (int i = 0; i < customerCount; i++) {
        printf("Customer %d:\n", i + 1);
        printf("Name: %s\n", customers[i].name);
        printf("Address: %s\n", customers[i].address);
        printf("Phone: %s\n", customers[i].phone);
        printf("Email: %s\n", customers[i].email);
        printf("Pan number:%s\n", customers[i].pan);
        printf("Aadhar number:%s\n", customers[i].aadhar);
    }
}
void kyc()
{
    
     int choice;
    int xyz=1;
    while (xyz) {
        printf("1. Add customer\n");
        printf("2. Search customer\n");
        printf("3. Print customers\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                addCustomer();
                break;
            case 2:
                system("cls");
                searchCustomer();
                break;
            case 3:
                system("cls");
                printCustomers();
                break;
            case 4:
                system("cls");
                menu();
                break;
            default:
                system("cls");
                printf("Error: Invalid choice.");

        }
        
    }
    system("cls");

}

void fixeddeposit() {
    float principal, rate, time, interest;

    // Input the values from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    // Calculate the interest using the formula:
    // interest = principal * (pow((1 + rate / 100), time)) - principal
    interest = principal * (pow((1 + rate / 100), time)) - principal;

    // Print the calculated interest
    printf("Interest on fixed deposit: %.2f\n", interest);
    printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
    menu();

}

void recurdeposit() {
    float principal, rate, time, interest;

    // Input the values from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in months: ");
    scanf("%f", &time);

    // Calculate the interest using the formula:
    interest = principal *( time*(time+1)/2400)*rate;

    // Print the calculated interest
    printf("Interest on recurring deposit: %.2f\n", interest);
    printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
    menu();
}

void shopping()
{
 static int totalCost;
 int i,j,choice,c=1,a[9],cost[9];
 for(i=0;i<9;i++)
 a[i]=0;
 
 char str[100];
 char items[9][100]={"Mousepad",
 "Logitech Mouse",
 "Pendrive 16 GB",
 "Adidas  ",
 "Nike    ",
 "Bata    ",
 "Realme 8 ",
 "Nokia 3  ",
 "Samsung  "  
 };
 printf("Please Enter Your Name\n");
 gets(str);
 printf("Hello %s, Welcome to our Online Shopping.\n",str);
 do{
  //C is 1 by default
  if(c==1){
  printf("Enter\n1 - Computer Accessories\n2 - Shoes\n3 - Mobiles\nAny other number to exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
      system("cls");
    int accessoriesChoice;
    printf("Enter\n1 - Mousepad - Rs.105\n2 - Logitech Mouse- Rs.500\n3 - Pendrive 16 GB - Rs.550\nAny other number to exit\n");
    scanf("%d",&accessoriesChoice);
    cost[0]=105;
    cost[1]=500;
    cost[2]=550;
    switch(accessoriesChoice)
    {
     case 1:
     {
      system("cls");
      int num;
      printf("You chose Mousepad with Rs.105.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=105;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      system("cls");
      int num;
      printf("You chose Logitech Mouse with Rs.500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalCost+=500;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      system("cls");
      int num;
      printf("You chose Pendrive 16GB with Rs.550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalCost+=550;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      system("cls");
      menu();
      printf("Exit from Computer Accesories\n");
      
      break;
     }
    }
    break;
   }
   case 2:
   {
      system("cls");
    int shoesChoice;
    printf("Enter\n1 - Adidas - Rs.3550\n2 - Nike - Rs.5000\n3 - Bata - Rs.2800\nAny other number to exit\n");
    scanf("%d",&shoesChoice);
    cost[3]=3550;
    cost[4]=5000;
    cost[5]=2800;
    switch(shoesChoice)
    {
     case 1:
     {
      system("cls");
      int num;
      printf("You chose Adidas Shoes for Rs.3550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=3550;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      system("cls");
      int num;
      printf("You chose Nike Shoes for Rs.5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=5000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      system("cls");
      int num;
      printf("You chose Bata Shoes for Rs.2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=2800;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      system("cls");
      menu();
      printf("Exit from Shoes Category\n");
      break;
     }
    }
    break;
   }
   case 3:
   {
      system("cls");
    int mobileChoice;
    printf("Enter\n1 - Realme 8 - Rs.11000\n2 - Nokia 3 - Rs.9866\n3 - Samsung - Rs.12800\nAny other number to exit\n");
    scanf("%d",&mobileChoice);
    cost[6]=11000;
    cost[7]=9866;
    cost[8]=12800;
    switch(mobileChoice)
    {
     case 1:
     {
      system("cls");
      int num;
      printf("You chose to buy Realme 8 for Rs.11000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalCost+=11000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      system("cls");
      int num;
      printf("You chose to buy Nokia 3 for Rs.9866.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalCost+=9866;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      system("cls");
      int num;
      printf("You chose to buy Samsung for Rs.12800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       totalCost+=12800;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      system("cls");
      menu();
      printf("Exit from Mobile Category\n");
      break;
     }
    }
    break;
   }
   default:
   {
      system("cls");
    printf("Enter Valid Categories Choice\n");
    break;
   }
  }
  printf("%s's cart\n",str);
  printf("Id\tItems\t\tQuantity\t\t\tCost\n");
  for(i=0;i<9;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
   }
  }
  printf("Total Cost\t\t\t\t\t\t%d\n",totalCost);
  printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
  scanf("%d",&c);
  system("cls");
 }
  if(c==2)
  {
   int id;
   printf("Enter id to delete item\n");
   scanf("%d",&id);
   if(id<9&&id>0){
   totalCost=totalCost-(cost[id]*a[id]);
   a[id]=0;
   }
   else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\tItems\t\tQuantity\t\t\tCost\n");
            for(i=0;i<9;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }
        printf("Total Cost\t\t\t\t\t\t%d\n",totalCost);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
     scanf("%d",&c);
  }
  if(c==3)
  {
   int id,quantity;
   printf("Enter id to Change quantity of an item\n");
   scanf("%d",&id);
   printf("Enter quantity to be changed of an item\n");
   scanf("%d",&quantity);
   if(id<9&&id>0){
    if(quantity>0 && a[id]>0){  
        if(quantity<a[id]) 
     {
      int dec=a[id]-quantity;
      a[id]=quantity;
       totalCost=totalCost-(cost[id]*dec); 
     }
     if(quantity>a[id]) 
     {
      int inc=quantity-a[id];
      a[id]=quantity;
       totalCost=totalCost+(cost[id]*inc); 
     }
     if(quantity==a[id]) 
     {
      a[id]=quantity;
       totalCost=totalCost+0; 
     }   
           
    }
    else{
       printf("Item has no Quantity.Please Try again\n");
    }
     }
     else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\tItems\t\tQuantity\t\t\tCost\n");
            for(i=0;i<9;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }
        printf("Total Cost\t\t\t\t\t\t%d\n",totalCost);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
     scanf("%d",&c);
  }
 }while(c==1 || c==2 ||c==3);
 printf("Your Final Cost is %d\n",totalCost);
 printf("Thanks %s for Choosing Us and Visit us again.\n",str);
 menu();
}
void atm()
{
    printf("Make your secret pin number:\n");
    scanf("%d",&pin);
    system("cls");
    

    while (n != pin)
    {
        printf("ENTER YOUR SECRET PIN NUMBER:");
        scanf("%d", &n);
        if (n != pin)
        printf("PLEASE ENTER VALID PASSWORD\n");
    }
    do
    {
        printf("********Welcome to ATM Service**************\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("******************?**************************?*\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        float t=100;
        switch (choice)
        {
            
        case 1:
            system("cls");
            printf("\n YOUR BALANCE IN Rs : %f ",add.money);
            break;
        case 2:
            system("cls"); 
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%d", &withdraw);
            if (withdraw % 100 != 0)
            {
                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
            }
            else if (withdraw >(add.money - 100))
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                float t=withdraw;
                add.money-= t;
                printf("\n\n PLEASE COLLECT CASH");
                printf("\n YOUR CURRENT BALANCE IS %f", add.money);
            }
            break;
        case 3:
            system("cls"); 
            printf("\n ENTER THE AMOUNT TO DEPOSIT ");
            scanf("%f", &deposit);
                        add.money+= deposit;
            printf("YOUR BALANCE IS %f", add.money);
            break;
        case 4:
            system("cls");
            printf("\n THANK U USING ATM");
            menu();
            break;
        default:
            system("cls");
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n'|| transaction == 'N')
                    k = 1;
    } while (!k);
    system("cls");
    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
    menu();
}
//avinash 144
#define MAX_APPLICATIONS 100
#define NAME_LENGTH 50
#define AGE_LENGTH 3
#define INCOME_LENGTH 7
#define MAX_SEATS 50
#define MAX_CARD_NUM_LEN 16
#define MAX_NUM_LENGHT 10
#define MAX_ADD 20

int choice;
    int age,coverageAmount,balance=50000;
    char gender,vehicleType;
    float premium;
    char card_num[MAX_CARD_NUM_LEN+1];
    const int size = 16;
    char card1[17];
 
struct customer
{
    char name[50];
    int account_number;
    float balance;
};
 struct customer c = {"Avinash", 123456, 50000.00};  

struct Policy {
  char policy_holder_name[100];
  int policy_number;
  float coverage_amount;
};



int seats[MAX_SEATS] = {0}; // Initialize all seats to be unoccupied

void display_menu_()
{   
    printf("\n"); 
    printf("Welcome to ABC Bank Train Booking System\n");
    printf("\n");
    printf("1. View available seats\n");
    printf("2. Book a seat\n");
    printf("3. Cancel a booking\n");
    printf("4. Main Menu \n");
}

void view_seats()
{
    printf("Available seats: ");
    for (int i = 0; i < MAX_SEATS; i++) {
        if (seats[i] == 0) {
            printf("%d ", i+1);
        }
    }
    printf("\n");
}

void book_seat()
{
    int seat_number;
    printf("Enter seat number to book: ");
    scanf("%d", &seat_number);

    if (seat_number < 1 || seat_number > MAX_SEATS) {
        printf("Invalid seat number.\n");
    }
    else if (seats[seat_number-1] == 1) {
        printf("That seat is already booked.\n");
    }
    else {
        seats[seat_number-1] = 1;
        printf("Seat %d booked successfully.\n", seat_number);
    }
}

void cancel_booking()
{
    int seat_number;
    printf("Enter seat number to cancel booking: ");
    scanf("%d", &seat_number);

    if (seat_number < 1 || seat_number > MAX_SEATS) {
        printf("Invalid seat number.\n");
    }
    else if (seats[seat_number-1] == 0) {
        printf("That seat is not currently booked.\n");
    }
    else {
        seats[seat_number-1] = 0;
        printf("Booking for seat %d cancelled.\n", seat_number);
    }
}

void block_card(char *card_num)
{
    printf("Blocking card number: %s\n", card_num);
    // Code to block the card in the system would go here.
}


typedef struct {
    char name[NAME_LENGTH + 1];
    int age;
    int income;
    int number[MAX_NUM_LENGHT];
    char address[MAX_ADD];
} CreditCardApplication;

CreditCardApplication applications[MAX_APPLICATIONS];
int applicationCount = 0;

void applyForCreditCard() {
    if (applicationCount == MAX_APPLICATIONS) {
        printf("Error: Cannot process more applications, database is full.\n");
        return;
    }

    CreditCardApplication newApplication;
    
    printf("\n");
    printf("Welcome to ABC Bank \n");
    printf("\n");
    printf("Enter details here \n");

    printf("Enter your name: ");
    scanf("%s", newApplication.name);

    printf("Enter your age: ");
    scanf("%d", &newApplication.age);

    printf("Enter your address: ");
    scanf("%s",newApplication.address);

    printf("Enter your mobile number: ");
    scanf("%d",newApplication.number);

    printf("Enter your annual income: ");
    scanf("%d", &newApplication.income);

    applications[applicationCount++] = newApplication;
    printf("Congratulations Application submitted successfully.\n");
    printf("Your card number is : %ld",7901858343743475);
}


 void init_policy(struct Policy *policy) 
 {
  printf("Enter policy holder name: ");
  scanf("%s", policy->policy_holder_name);

  printf("Enter policy number: ");
  scanf("%d", &policy->policy_number);

  printf("Enter coverage amount: ");
  scanf("%f", &policy->coverage_amount);
}

void print_policy(struct Policy policy) {
  printf("Policy holder name: %s\n", policy.policy_holder_name);
  printf("Policy number: %d\n", policy.policy_number);
  printf("Coverage amount: %.2f\n", policy.coverage_amount);
}



void display_menu()
{
    printf("\n");
    printf("Welcome to ATV Bank Customer Care System");
    printf("\n");
    printf("1. Check Account Balance\n");
    printf("2. Update Account Information\n");
    printf("3. Main menu \n");
    printf("\n");
    printf("Enter your choice: ");
}

void check_balance(struct customer c)
{
    printf("\nAccount Holder Name: %s\n", c.name);
    printf("Account Number: %d\n", c.account_number);
    printf("Current Balance: $%.2f\n", c.balance);
}

void update_information(struct customer *c)
{
    char name[50];
    printf("\nEnter the updated account holder name: ");
    scanf("%s", name);
    strcpy(c->name, name);
    printf("\n Account information updated successfully\n");
}
int getRandomDigit() {
    return rand() % 10;
}

void generateCardNumber(char cardNumber[], int size) {
    for (int i = 0; i < size; i++) {
        cardNumber[i] = '0' + getRandomDigit();
    }
    cardNumber[size] = '\0';
}



    
   void insurance()
 {
    printf("\n");
    printf("Types of insurance available:\n");
    printf("\n");
    printf("1. Health insurance\n");
    printf("2. Life insurance\n");
    printf("3. Auto insurance\n");
    printf("4. Umbrella insurance\n");
    printf("5. Main menu \n");
    scanf("%d",&choice);
    switch(choice)
    {
         case 1 :
    printf("Welcome to Health Insurance of ATV Bank\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    if (age < 18) {
        premium = 100;
    } else if (age >= 18 && age <= 30) {
        if (gender == 'M') {
            premium = 150;
        } else {
            premium = 200;
        }
    } else if (age > 30 && age <= 60) {
        if (gender == 'M') {
            premium = 200;
        } else {
            premium = 250;
        }
    } else {
        if (gender == 'M') {
            premium = 300;
        } else {
            premium = 350;
        }
    }

    printf("Your premium is Rs%.2f\n", premium);
    
    break;
    

    case 2 :
    
    printf("Welcome to Life Isurance of ATV Bank\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the coverage amount: ");
    scanf("%d", &coverageAmount);

    if (age < 30) {
        premium = coverageAmount * 0.03;
    } else if (age >= 30 && age <= 40) {
        premium = coverageAmount * 0.05;
    } else if (age > 40 && age <= 50) {
        premium = coverageAmount * 0.07;
    } else {
        premium = coverageAmount * 0.1;
    }

    printf("Your premium is $%.2f\n", premium);
    break;

    case 3:
    printf("Welcome to Auto Isurance of ATV Bank\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the type of vehicle (C/S/T): ");
    scanf(" %c", &vehicleType);

    if (age < 25) {
        if (vehicleType == 'C') {
            premium = 200;
        } else if (vehicleType == 'S') {
            premium = 150;
        } else {
            premium = 100;
        }
    } else if (age >= 25 && age <= 30) {
        if (vehicleType == 'C') {
            premium = 150;
        } else if (vehicleType == 'S') {
            premium = 100;
        } else {
            premium = 75;
        }
    } else {
        if (vehicleType == 'C') {
            premium = 1000;
        } else if (vehicleType == 'S') {
            premium = 750;
        } else {
            premium = 500;
        }
    }

    printf("Your premium is Rs %.2f\n", premium);
    break;

    case 4 :

    printf("Welcome to Umbrella Insurance Program of ATV Bank!\n");
  struct Policy policy;
  init_policy(&policy);
  print_policy(policy);
    break;

    case 5 :
    menu();
    break;
    }
    
    }

    void NetBanking() 
   {
    
    printf("Welcome to ABC Bank Net Banking System\n");
    printf("Your current balance is $%d\n", balance);
    printf("\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nYour current balance is $%d\n", balance);
            break;
        case 2:
        {
            int deposit;
            printf("\nEnter the amount you want to deposit: $");
            scanf("%d", &deposit);
            balance = balance + deposit;
            printf("\nYour updated balance is $%d\n", balance);
            break;
        }
        case 3:
        {
            int withdraw;
            printf("\nEnter the amount you want to withdraw: $");
            scanf("%d", &withdraw);
            if (withdraw > balance)
                printf("\nInsufficient balance\n");
            else
            {
                balance = balance - withdraw;
                printf("\nYour updated balance is $%d\n", balance);
            }
            break;
        }
        case 4:
            printf("\nThank you for using ABC Bank Net Banking System\n");
            menu();
        default:
            printf("\nInvalid choice\n");
    }
    

   }

    void customercare()
    {

    while (1)
    {
        display_menu();
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                check_balance(c);
                break;
            case 2:
                update_information(&c);
                break;
            case 3:
                printf("\nThank you for using ABC Bank Customer Care System\n");
                menu();
            default:
                printf("\nInvalid choice\n");
        }
    }
    
    }



    void cardblock()
   {
     printf("\n");
     printf("Welcome to the debit card blocking system.\n");
     printf("\n");
     printf("Enter your card number to block: ");
     scanf("%s", card_num);

    if (strlen(card_num) != MAX_CARD_NUM_LEN) {
        printf("Invalid card number.\n");
        
    }

    block_card(card_num);

    printf("Card successfully blocked.\n");
    
    menu();
   }


    void trainbooking()
{
     
    do {
        display_menu_();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                view_seats();
                break;
            case 2:
                book_seat();
                break;
            case 3:
                cancel_booking();
                break;
            case 4:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
            }
        }
        while(choice!=4);
      menu();  
}
//venkatesh 141

    void menu()
{
    int choice;
    system("cls");
    printf("\n\n\n\t\tWELCOME TO ATV BANK\n\n\n\n");
    printf("\t[1]KYC\n");
    printf("\t[2]Fixed deposit\n");
    printf("\t[3]Recurring deposit\n");
    printf("\t[4]Shopping offers\n");
    printf("\t[5]ATM\n");
    printf("\t[6]Loan\n");
    printf("\t[7]Insurance\n");
    printf("\t[8]Customer Care\n");
    printf("\t[9]Apply Credit/Debit Card\n");
    printf("\t[10]Block Credit/Debit Card\n");
    printf("\t[11]Train Booking \n");
    printf("\t[12]Money withdarw/deposite\n");
    printf("\t[13]Check balance\n");
    printf("\t[14]Netbanking\n");
    printf("\tEnter choice  :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                system("cls");
               kyc();
                break;
        case 2:
                 system("cls");
                fixeddeposit();
                break;
        case 3:
                 system("cls");
                recurdeposit();
                break;
        case 4:
                 system("cls");
                shopping();
                break; 
        case 5:
                 system("cls");
                atm();
                break;
        case 6:
                system("cls");
                loann();
                break;
        case 7:
                system("cls");
                insurance();
                break;
        case 8:
                system("cls");
                customercare();
                break;
        case 9:
                system("cls");
                applyForCreditCard();
                break;
        case 10:
                system("cls");
                cardblock();
                break;
        case 11:
                system("cls");
                trainbooking();
                break;
        case 12:
                system("cls");
                transact();
                break;
        case 13:
                system("cls");
                bal();
                break;
        case 14:
                system("cls");
                NetBanking();
                break;                                                                                                                                
        default:
                  system("cls");
                printf("Error invalid choice\n");
                menu();
                break;  

    
    }

}
int pass()
{
    system("cls");
    int choice;
    

}
void transact()
{


    system("cls");
    int choice,dep,with;
    printf("\t\t\tTRANSACTION WINDOW\n\n\n");
    printf("\tEnter [1] to deposite money \n");
    printf("\tEnter [2] to withdraw\n");
    printf("\tEnter choice   :");
    scanf("%d",&choice);
    if(choice==1)
    {
       deposite:
       printf("\tEnter account number[6]               :");
       scanf("%d",&tns.acc_no);
    if(tns.acc_no!=add.acc_no)
    {
        choice:  
        printf("\tERROR::ACCOUNT DOES NOT EXITS\n");
        printf("\tEnter [1] to retry \n");
        printf("\tEnter [2] to exit\n");
        printf("\tEnter choice   :");
        scanf("%d",&choice);
        if(choice==1)
        {
            system("cls");
            goto deposite;
        }
        else if(choice==2)  
        {
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            printf("Enter a valid input!!\n");
            goto choice;
        }
    }
    else
    {
        printf("\tEnter amount you want to deposite  :");
        scanf("%d",&dep);
        add.money+=dep;
        printf("\tAmount deposited successfully!!!\n");
       // printf("\tPress any key to continue.....");
        //getch();
        printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
    menu();

    }
    }
    else if(choice==2)
    {
       withdraw:
       printf("\tEnter account number[6]               :");
       scanf("%d",&tns.acc_no);
    if(tns.acc_no!=add.acc_no)
    {
        choicew:  
        printf("\tERROR::ACCOUNT DOES NOT EXITS\n");
        printf("\tEnter [1] to retry \n");
        printf("\tEnter [2] to exit\n");
        printf("\tEnter choice   :");
        scanf("%d",&choice);
        if(choice==1)
        {
            system("cls");
            goto withdraw;
        }
        else if(choice==2)  
        {
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            printf("Enter a valid input!!\n");
            goto choicew;
        }
    } 
    else
    {
        printf("\tEnter amount you want to withdraw  :");
        scanf("%d",&with);
        add.money-=with;
        printf("\tAmount withdrawed successfully!!!\n");
       // printf("\tPress any key to continue.....");
        //getch();
        printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
    menu();

    }
    }
}
void bal()
{
    int choice;
   printf("\t");
           home:
        system("cls");
        printf("\tEnter account number:");
        scanf("%d",&loan.acc_no);
        if(loan.acc_no!=add.acc_no)
    {
          
        printf("\tERROR::ACCOUNT DOES NOT EXITS\n");
        choice:
        printf("\tEnter [1] to retry \n");
        printf("\tEnter [2] to exit\n");
        printf("\tEnter choice   :");
        scanf("%d",&choice);
        if(choice==1)
        {
            system("cls");
            goto home;
        }
        else if(choice==2)  
        {
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            printf("Enter a valid input!!\n");
            goto choice;
        }
    }
    else
    {
        loanpass:
        printf("\tEnter password   :");
        scanf("%s",loan.pass);
        if(strcmp(loan.pass,add.pass))//strcmp
        {
            printf("\tAvailable balance is    :%f",add.money);
           // printf("\tpress any key to go to menu........");
           // getch();
           printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
            menu();
        }
        else 
        {
            choice2:
            printf("\tERROR::PASSWORD DOES NOT MATCH!!\n");
            printf("\tEnter [1] to retry \n");
            printf("\tEnter [2] to exit\n");
            printf("\tEnter choice   :");
            scanf("%d",&choice);
        if(choice==1)
        {
            system("cls");
            goto loanpass;
        }
        else if(choice==2)  
        {
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            printf("\t Enter Valid input  :");
            goto choice2;
        } 
        }
    }
}

void accopen()
{ 
    system("cls");
    check.acc_no = 111111;
    int choice;
    printf("\t\t\tADD RECORD\n\n\n");
    account_no:
    printf("\tEnter account number[6]               :");
    scanf("%d",&add.acc_no);
    if(add.acc_no==check.acc_no)
    {
        printf("\tError :: Account already exits\n");
        choice4:
        printf("\tEnter [1] to retry \n");
        printf("\tEnter [2] to exit\n");
        printf("\tEnter choice   :");
        scanf("%d",&choice);
        if(choice==1)
        {
            system("cls");
            goto account_no;
        }
        else if(choice==2)
        {
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            printf("Enter a valid input!!\n");
            goto choice4;
        }
    
    }
    printf("\tEnter Today's date[dd/mm/yy]          :");
    scanf("%d",&add.dob.day);
    scanf("%d",&add.dob.month);
    scanf("%d",&add.dob.year);
    printf("\tEnter account type[Current,Savings,Mutual]:");
    scanf("%s",add.type);
    printf("\tEnter Name of account holder          :");
    scanf("%s",add.name);
    if(add.type[0]=='M'||add.type[0]=='m')
    {
    printf("\tEnter Name of second account holder   :");
    scanf("%s",add.name1);

    }
    printf("\tEnter Address of account holder       :");
    scanf("%s",add.address);    
    printf("\tEnter Citizenship of account holder   :");
    scanf("%s",add.citizen);
    printf("\tEnter Phone of account holder         :");
    scanf("%lf",&add.phone);
    printf("\tEnter DOB of account holder [dd/mm/yy]:");
    scanf("%d",&add.dob.day);
    scanf("%d",&add.dob.month);
    scanf("%d",&add.dob.year);
    printf("\tEnter Age of account holder           :");
    scanf("%d",&add.age);
    printf("\tEnter Aadhar number of account holder :");
    scanf("%lf",&add.aadhar);
    //printf("\tEnter PAN card no. of account holder  :");
    //scanf("%lf\n\n\n\n\n",&add.pan);
    //printf("\tEnter any key to set password......");
    //getch();*/
    set:
    printf("\t\t\tSET PASSWORD\n\n\n");
    printf("\tEnter account number[6]               :");
    scanf("%d",&pswd.acc_no);
    if(pswd.acc_no!=add.acc_no)
    {
        choice:  
        printf("\tERROR::ACCOUNT DOES NOT EXITS\n");
        printf("\tEnter [1] to retry \n");
        printf("\tEnter [2] to exit\n");
        printf("\tEnter choice   :");
        scanf("%d",&choice);
        if(choice==1)
        {
            system("cls");
            goto set;
        }
        else if(choice==2)  
        {
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            printf("Enter a valid input!!\n");
            goto choice;
        }
    }
    else 
    {   setpass:
        printf("\tSet password        :");
        scanf("%d",&check.pass);
        printf("\tConfirm password    :");
        scanf("%d",&pswd.pass);
        if(strcmp(check.pass,pswd.pass))//string comparre
        {
            choice1:
            printf("\tERROR::PASSWORD DOES NOT MATCH!!\n");
            printf("\tEnter [1] to retry \n");
            printf("\tEnter [2] to exit\n");
            printf("\tEnter choice   :");
            scanf("%d",&choice);
        if(choice==1)
        {
            system("cls");
            goto setpass;
        }
        else if(choice==2)  
        {
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            printf("\t Enter Valid input  :");
            goto choice1;
        }
            
        }
        else 
        {
            strcpy(add.pass,check.pass);
            printf("\tPassword set successfully!!\n");
           // printf("\tEnter any key to go to menu......");
            //getch();
            printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
           menu();
        }      
    } 
    
}
int home()
{
    float amount,intrest,total,rate,year,installment,choice,choice1,choice3;
    rate=8.65;
    system("cls");
    printf("\t\t\t HOME LOAN SECTION\n\n\n");
    printf("\tEnter loan amount[min 5 lakh]:");
    scanf("%f",&amount);
    printf("\tEnter duration of return     :");
    scanf("%f",&year);
    intrest=amount*rate*year/100;
    total=amount+intrest;
    installment=total/(12*year);
    printf("\tInstallments for each month will be:");
    printf("%f\n",installment);
     printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
    menu();
   
}
void edu()
{
        float amount,intrest,total,rate=0.5,year,installment,choice;
    system("cls");
    printf("\t\t\t EDUCATION LOAN SECTION\n\n\n");
    printf("\tEnter loan amount:");
    scanf("%f",&amount);
    printf("\tEnter duration of return     :");
    scanf("%f",&year);
    intrest=amount*rate*year/100;
    total=amount+intrest;
    installment=total/(12*year);
    printf("\tInstallments for each month will be:");
    printf("%f\n",installment);
     printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
    menu();
    
}
void personal()
{
        float amount,intrest,total,rate=15,year,installment,choice;
    system("cls");
    printf("\t\t\t PERSONAL LOAN SECTION\n\n\n");
    printf("\tEnter loan amount[min 1 lakh]:");
    scanf("%f",&amount);
    printf("\tEnter duration of return     :");
    scanf("%f",&year);
    intrest=amount*rate*year/100;
    total=amount+intrest;
    installment=total/(12*year);
    printf("\tInstallments for each month will be:");
    printf("%f\n",installment);
     printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
    menu();
   
}
void gold()
{
        float amount,intrest,total,rate=2,year,installment,choice,gram;
    system("cls");
    printf("\t\t\t GOLD LOAN SECTION\n\n\n");
    printf("\tEnter amount of Gold you want to deposite[in grams]:");
    scanf("%f",&gram);
    amount=gram*5300;
    printf("\tEnter duration of return     :");
    scanf("%f",&year);
    intrest=amount*rate*year/100;
    total=amount+intrest;
    installment=total/(12*year);
    printf("\tInstallments for each month will be:");
    printf("%f\n",installment);
     printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
    menu();
    
}
void car()
{
        float amount,intrest,total,rate,year,installment,choice;
    system("cls");
    printf("\t\t\t CAR LOAN SECTION\n\n\n");
    printf("\tEnter loan amount[min 5 lakh]:");
    scanf("%f",&amount);
    printf("\tEnter duration of return     :");
    scanf("%f",&year);
    intrest=amount*rate*year/100;
    total=amount+intrest;
    installment=total/(12*year);
    printf("\tInstallments for each month will be:");
    printf("%f\n",installment);
     printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
    menu();
    
}
void loann()
{
    system("cls");
    loan:
    printf("\t\t\tLOAN SECTION\n\n\n");
    int choice;
    printf("\tSelect type of loan\n\n");
    printf("\t[1]Home Loan\n");
    printf("\t[2]Educational Loan\n");
    printf("\t[3]Personal Loan\n");
    printf("\t[4]Gold Loan\n");
    printf("\t[5]Car Loan\n");
    printf("\tEnter a choice  :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
        home();
        break;
        case 2:
        printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
        edu();
        break;
        case 3:
        printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
        personal();
        break;
        case 4:
        printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
        gold();
        break;
        case 5:
        printf("\n\n\n\tLOADING");
        for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
        car();
        break;
        default:
        printf("\tPlease enter a valid input\n");
        goto loan;
    }
}
int main()
{
    system("cls");
    printf("\n\n\n\t\tWELCOME TO ATV BANK\n\n\n\n");
        printf("\n\n\n\tLOADING");
    for(int i=0;i<1000000000;i++)
    {
        int k;
        k=i;
        if(k%100000000==0)
        {
            printf("\xb2");
        }
    }
   accopen();

    return 0;
}