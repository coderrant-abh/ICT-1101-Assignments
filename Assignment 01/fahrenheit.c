/************************************************************************
*        Problem 09: Convert Temperature Celsius into Fahrenheit. 
*************************************************************************/

#include <stdio.h>

#define FREZZING_PT 32.0f
#define SCALE_FACTOR (9.0f / 5.0f)
/*******************************************************************
*    '#define' macros set the freezing point on (32 degree F) 
*        and the scaling factor (9/5) as float literals.
********************************************************************/

int main(void)
{
    float celsius, fahrenheit;

    printf("\nEnter the Celsius temperature: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * SCALE_FACTOR) + FREZZING_PT;
    printf("\nFahrenheit scale equivalent: %.3f\n\n", fahrenheit);

    return 0;
}
