#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "H3LIS331DL.h"

int main()
{
    stdio_init_all();

    accelerometer_init();

    while (true) {
        printf("Acceleration along x-axis is %d gs\n", accelerometer_get_x());
    }
}