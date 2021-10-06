# include <stdio.h>

void main() {
    printf("Conditional Statements");

    // if, else, else if, switch and case (branching)

    // if block requires satisfied condition always
    // else block always executes false statements
    // else if --> add another condtion

    int num = 5;
    
    if (num == 5) {
        printf("Yes, the value of num equals to 5.")
    } else {
        printf("No, the value of num not equals to 5.")
    }

    // if .. else if .. else
    if (num == 5) {
        // true
        printf('equals to 5')
    } else if (num != 5) {
        // true
        printf("not equals to 5")
    }

    // nested if
    if (num == 5) {
        if (num % 2 == 0) {
            printf("num is equals to %d and even.", num);
        } else {
            // false statement
            printf("num is equals to %d and odd.", num);
        }
    } else {
        // false statement
        printf("num is not equals to %d.", num);
    }
}