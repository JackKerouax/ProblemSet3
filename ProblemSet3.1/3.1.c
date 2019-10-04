/* Solution for switch statement exercise

To compile and run this program, type:
gcc 3.1.c -o 3.1 && ./3.1
*/

#include <stdio.h>

int main(){
	char notename;
printf("Enter a note name(Capital letters and no accidentals please^_^): ");
scanf("%s", &notename);
  // determine the range of the choice - this is pretty extreme

switch (notename) {
    case 65:
printf ("Note value is 9\n");
    break;

    case 66:
printf ("Note value is 11\n");
    break;

    case 67:
printf ("Note value is 0\n");
    break;

    case 68:
printf ("Note value is 2\n");
    break;

    case 69:
printf ("Note value is 4\n");
    break;

    case 70:
printf ("Note value is 5\n");
    break;

    case 71:
printf ("Note value is 7\n");
    break;
        
}
    return 0;
}