#include<stdio.h>
int main(){
	int day_num;
	printf("Enter the day num:");
	scanf("%d",&day_num);
	
	switch(day_num){
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuseday\n");
			break;
		case 3:
			printf("Wendsday\n");
			break;
		case 4:
			printf("Turesday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Seterday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Invalid input\n");
			break;
			
	}
	return 0;
}