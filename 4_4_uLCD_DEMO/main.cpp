// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on screen

    uLCD.printf("\nHello uLCD World\n"); //Default Green on black text

    uLCD.printf("\n  Starting Demo...");

    uLCD.text_width(4); //4X size text

    uLCD.text_height(4);

    uLCD.color(RED);

    for (int i=10; i>=0; --i) {

        uLCD.locate(1,2);

        uLCD.printf("%2D",i);

        wait(.5);

    }

}




// #include "mbed.h"

// #include "uLCD_4DGL.h"


// uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


// int main()

// {

//     // basic printf demo = 16 by 18 characters on screen
//     uLCD.background_color(WHITE);
//     uLCD.textbackground_color(WHITE);
//     uLCD.color(BLUE);
//     uLCD.printf("\n106000122\n"); //Default Green on black text

//     //uLCD.printf("\n  Starting Demo...");

//     uLCD.text_width(5); //4X size text
//     uLCD.text_height(5);
//     while(1){
//         for (int i=30; i>=0; --i) {

//             uLCD.locate(1,2);
//             uLCD.color(GREEN);
//             uLCD.printf("%2D",i);

//             wait(.5);

//         }
//     }

// }