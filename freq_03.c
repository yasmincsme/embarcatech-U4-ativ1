#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/timer.h" 

#define LEDS 3

uint8_t led_pins[LEDS] = {13, 12, 11};

static int current_led = 0;

void setup_all(void) {
    for (uint8_t i = 0; i < LEDS; ++i) {
        gpio_init(led_pins[i]);
        gpio_set_dir(led_pins[i], GPIO_OUT);
        gpio_put(led_pins[i], 0);
    }
}

bool timer_callback(struct repeating_timer *rt) {
    //static int current_led = 0;

    for (uint8_t i = 0; i < LEDS; ++i) {
        gpio_put(led_pins[i], 0);
    }

    if(current_led == 1) {
         gpio_put(led_pins[0], 1);
         gpio_put(led_pins[2], 1);
    }
    else {
        gpio_put(led_pins[current_led], 1);
    }

    current_led = (current_led + 1) % LEDS;

    return true;
}

int main() {
    stdio_init_all();

    setup_all();

    struct repeating_timer timer;
    int32_t delay_ms = 3000;

    if (!add_repeating_timer_ms(delay_ms, timer_callback, NULL, &timer)) {
        printf("Erro ao iniciar o timer!\n");
    }

    printf("Inicialização do programa em andamento...\n");

    while (1) {
        printf("Programa em execução\n");

        sleep_ms(1000); 
    }

    return 0;
}

//threads ou temporização?