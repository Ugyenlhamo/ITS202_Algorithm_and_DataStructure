#include <stdio.h>
union customers{
	char name[20];
	int acc_no;
	int amount;
	};
	int main()
	{
	int mem, acc_no, amount;
	union customers bank[10];
	int choice;
do{
	printf("\nBANK OF BHUTAN");
	printf("\n1.Add Customers details");
	printf("\n2.View Customers details");
	printf("\n3.Deposit");
	printf("\n4.Withdraw");
	printf("\nEnter number given above to compute: ");
	scanf("%d",&choice);
switch(choice){
	case 1:
	printf("\nEnter the number of customers you want:");
	scanf("%d",&mem);
	for(int i = 0; i < mem; i++){
	printf("\nPlease enter the name: ");
	scanf("%s",bank[i].name);
	printf("Please enter the Account number: ");
	scanf("%d",&bank[i].acc_no);
	printf("Please enter the amount you want to deposit: ");
	scanf("%d",&bank[i].amount);
	}
	break;
	case 2:
	printf("\nDetails of those customers who have over than Nu.10000 amount: ");

	for(int i =0; i < mem; i++){
	if(bank[i].amount > 10000){
	printf("\nName :%s",bank[i].name);
	printf("\nAccount No :%d",bank[i].acc_no);
	printf("\nAmount :%d",bank[i].amount);
	}
	}
	break;

	case 3:
	printf("\nEnter Account no to deposit: ");
	scanf("%d",&acc_no);
	for(int i = 0; i < mem; i++){
	if(bank[i].acc_no == acc_no){
	printf("\nPEnter amount you want to desposit: ");
	scanf("%d",&amount);
	bank[i].amount = bank[i].amount + amount;
	printf("\nTotal Amount :%d",bank[i].amount);
	}
	else{
	printf("\nNo such account no is registered in the  bank");

	}
	}
	break;
	case 4:
	printf("\nEnter Account no to withdraw: ");
	scanf("%d",&acc_no);
	for(int i = 0; i < mem; i++){
	if(bank[i].acc_no == acc_no){
	printf("\nPlease enter amount you want to Withdraw :");

	scanf("%d",&amount);
	if(bank[i].amount >= amount){
	bank[i].amount = bank[i].amount - amount;
	printf("\nBalance Amount :%d",bank[i].amount);

		}
	else{
	printf("\nYou don't have enough amount to Withdraw");

		}
	}
	else{
	printf("\nNo such account no is registered in the bank");

		}
	}
	break;
	default:
	printf("\nOpps! System Error");

		}
	}
	while(choice != 5);
	return 0;
}