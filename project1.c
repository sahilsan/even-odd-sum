#include <stdio.h>
int main(){
    int num;
    int evenNum = 0;                                             // Assigns a value to evenNum 
    int oddNum = 0;                                              // Assigns a value to oddNum
    char repeat, discard;

    do {
    
    printf("Enter a number in the range 10 to 99999999: ");      // Asks the user to input a number in the correct range
    scanf("%d",&num);                                            // Scans the user input from terminal and assigns it to num 
    discard = getchar();                                         // ????????????

    while (num < 10 || num > 99999999)                           // Run the while loop as long as the number entered by user is not in the right range
        {
            printf("\nIncorrect input(s). Reenter the numbers"); // Prompts the user to reenter a number in the right range 
            scanf("%d", &num);                                   // Scans the user input from terminal and assigns it to num
            discard = getchar();                                 // ??????????????????????
        }
    
    while(num > 0)                                                // Run the while loop as long as the user-entered number (num) is greater than 0
    {
        int mod = num % 10;                                       // Divide num by 10 and get the remainder of the quotient
        if(mod%2 == 0)                                            // If the remainder is divisible by 2 with 0 remainder, assign it to evenNum
            evenNum = mod + evenNum;                                // Add the current mod value to evenNum and assign it to evenNum
        else                                                      // If the remainder is not divisible by 2, assign it to oddNum
            oddNum = mod + oddNum;                                  // Add the current mod value to oddNum and assign it to oddNum
        num = num / 10;                                           // Divide num by 10. num /= 10 also a valid one 
    }
    printf("Sum of even numbers is: %d", evenNum);                // Print the result of the sum of all the even digits in the user-entered number
    printf("\nSum of odd numbers is: %d", oddNum);                // Print the result of the sum of all the odd digits in the user-entered number

    printf("\nPress y/Y to repeat, any other quits: ");           // Asks user if they want to repeat the program by pressing y or Y or quit
    scanf("%c", &repeat, 1);                                      // Scans user input for y or Y or a different key
    discard = getchar();                                          // ?????????????????????????

    } while (repeat=='y' || repeat=='Y');                         // If the user presses y or Y repeat the do function
}

