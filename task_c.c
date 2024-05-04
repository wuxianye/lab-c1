#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	// Your code below here
    
    // Your University email address
    char my_email[] = "xianye.wu@student.manchester.ac.uk";
    

    // Check if n is within the valid range
    if (n >= 0 && n < strlen(my_email)) {
        // Extract characters corresponding to index n
        char ch = my_email[n];

        // Determine whether a character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel");
        }
        else {
            printf("Not vowel");
        }
    }
    else {
        printf("Error");
        return 1;
    }

	// Do not edit below here
	return 0;
}