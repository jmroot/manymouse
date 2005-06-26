/*
 * A test file for MultiMouse that lists all seen mice.
 *
 * Please see the file LICENSE in the source's root directory.
 *
 *  This file written by Ryan C. Gordon.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "multimouse.h"

int main(int argc, char **argv)
{
    int available_mice = MultiMouse_Init();
    if (available_mice <= 0)
    {
        printf("No mice detected!\n");
        return(1);
    }
    else
    {
        int i;
        for (i = 0; i < available_mice; i++)
            printf("#%d: %s\n", i, MultiMouse_DeviceName(i));
    }
    MultiMouse_Quit();
    return(0);
}

/* end of detect_mice.c ... */

