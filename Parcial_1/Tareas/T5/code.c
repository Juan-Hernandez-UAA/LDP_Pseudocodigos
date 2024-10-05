#include <stdio.h>
#include <string.h>

int hours, salary, num_days = sizeof(days) / sizeof(days[0]);
char *turn, *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main() {
    char weekday[20];
    printf("Enter a day: ");
    scanf("%s", weekday);

	printf("Enter a turn");
	scanf("%s", turn)

    // Check if the input is part of any string in the array
    for (int i = 0; i < num_days; i++) {
        if (strstr(days[i], weekday) != NULL) {
        	if(turn == "day" or turn "night"){
				
			}else{
				printf("that turn doesn't exist'")
			}

			// it is part of the weekdays
            return 0;
        }else{
        	printf("%s", )
		}
        
    }

    printf("%s is not in any day.\n", input);
    
    return 0;
}
