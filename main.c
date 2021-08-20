/**************************************************************
 * main.c
 * rev 1.0 17-Aug-2021 khan
 * Lab3
 * ***********************************************************/

#include "pico/stdlib.h"
#include <stdbool.h>

#define RED_LED 11
#define GREEN_LED 12
#define BLUE_LED 13

/* function to turn any led on or off and deiplay the led status */
void LED_ON_OFF(led_name) {
    
    if gpio_get(led_name) == true:
        /* turns led off */
        gpio_put(led_name, 0)
            /* print what led is now off */ 
            if led_name = 11
                printf("The red led is now off\r\n")
            elif led_name = 12
                printf("The green led is now off\r\n")
            else
                printf("The blue led is now off\r\n")
      else
        /* turns led on */
        gpio_put(led_name, 1);
            /* print what led is now on */
            if led_name = 11
                printf("The red led is now on\r\n")
            elif led_name = 12
                printf("The green led is now on\r\n")
            else
                printf("The blue led is now on\r\n")
}

int main ( void ) {

stdio_init_all();
/* instialize all the GPIO */
gpio_init(RED_LED);
gpio_init(GREEN_LED);
gpio_init(BLUE_LED);

gpio_set_dir(RED_LED,1)
gpio_set_dir(GREEN_LED,1)
gpio_set_dir(BLUE_LED,1)

/* print the starting message */



while ( true ) {

int ch = getchar_timeout_us(0);
if (ch != PICO_ERROR_TIMEOUT) {
    
    switch(ch) {
   case 'r'  : /* r is pressed */
        LED_ON_OFF(RED_LED)
        break; 
    case 'g'  : /*  g is pressed */
        LED_ON_OFF(GREEN_LED)
        break; 
    case 'b'  : /* b is pressed */
        LED_ON_OFF(BLUE_LED)
        break; 
    default : /* any of key press */
        printf("please press R, G, or B. ONLY\r\n")
   
} 

}
sleep_ms(20);
}

}
}
