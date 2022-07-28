/*

    This program will convert a decimal number to a hexadecimal one.

1. Prompt the user to enter a decimal integer.
2. Check if the entered decimal is 0.
        If true: Assign 0 as the output.

3. Check if the entered decimal is not 0 (while loop).
        If true:
            Get the remainder after dividing the decimal by 16.
            Check if the remaining hexadecimal value is between 0-9.
                If true: Store the hexadecimal value.

            Check if the remaining hex value is between 10-15.
                If true: Make the hex value be between 0-5 then add that to the ascii value of 'A' and make it character.

            Update the hexadecimal output accumulator in each iteration (the new hex output printed after).
            Divide the decimal by 16 in each iteration.

4. Display the equivalent hexadecimal to the user.

*/


// This program will convert a decimal number to a hexadecimal one.

#include <iostream>
#include <string>

using namespace std ;

int main()
{
        // Declare variables.
    int decimal ;  // The decimal number to convert.
    int hexValue ;  // The remainder after dividing the decimal by 16.
    char hexDigit ;  // The hexadecimal value of the remainder.
    string hex = "" ;  // The hexadecimal output accumulator.

        // Prompt the user to enter a decimal integer.
    cout << "Enter a decimal number: " ;
    cin >> decimal ;

        // Check if the entered decimal is 0.
    if ( decimal == 0 )
    {
            // Assign 0 to hex.
        hex = static_cast <char> ( decimal + '0' ) ;
    }

        // Check if the entered decimal is not 0.
    while ( decimal != 0 )
    {
            // Get the remainder after dividing the decimal by 16.
        hexValue = decimal % 16 ;

            // Check if the remaining hex value is between 0-9.
        if ( hexValue <= 9 && hexValue >= 0 )
        {
                // Store the hexadecimal value.
            hexDigit = static_cast <char> ( hexValue + '0' ) ;
        }

            // Check if the remaining hex value is between 10-15.
        else
        {
            // Make the hex value be between 0-5 then add that to the ascii value of 'A' then make it a character.
            hexDigit = static_cast <char> ( hexValue - 10 + 'A' );
        }

            // Update the hexadecimal output accumulator in each iteration.
        hex = hexDigit + hex ;

            // Divide the decimal by 16 in each iteration.
        decimal /= 16 ;
    }

        // Display the equivalent hexadecimal to the user.
    cout << "The hexadecimal number is " << hex << endl ;

    return 0 ;
}

/*

    RUN 1: Decimal = 0.

Enter a decimal number: 0
The hexadecimal number is 0

    -----------------------------------

    RUN 2: Decimal = 5.

Enter a decimal number: 5
The hexadecimal number is 5

    -----------------------------------

    RUN 3: Decimal = 13.

Enter a decimal number: 13
The hexadecimal number is D

    -----------------------------------

    RUN 4: Decimal = 126.

Enter a decimal number: 126
The hexadecimal number is 7E

    -----------------------------------

    RUN 5: Decimal = 343546.

Enter a decimal number: 343546
The hexadecimal number is 53DFA

*/
