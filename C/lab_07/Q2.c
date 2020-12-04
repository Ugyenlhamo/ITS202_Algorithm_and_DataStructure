#include<stdio.h>
int main(){
	int ID;
	int password;

	printf("Please enter your ID here: \n");
	scanf("%d",&ID);

	switch(ID){
		case 12190102:
		printf("Now enter your password: \n");
		scanf("%d", &password);

		switch(password){
			case 123:
			printf("ugyen you are welcomed in GCIT.\n");
			break;

			default:
			printf("Try again!! your password is wrong.\n");
			break;
		}
		break;
		case 12190106:
			printf("Enter your password: \n");
			scanf("%d",&password);
			switch (password){
				case 000:
					printf("WELCOME yeshi dema\n");
					break;

				default:
					printf("Incorrect Password. Try again!!\n");
					break;
		}
		break;

		default:
		printf("Try again!! Your ID is wrong.\n");
		break;

	}

}