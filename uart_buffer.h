#ifndef UART_BUFFER_H
#define UART_BUFFER_H

#include <stdint.h>

#define UART_BUF_SIZE 128

typedef struct {
    uint8_t buffer[UART_BUF_SIZE];
    volatile uint16_t head;
    volatile uint16_t tail;
} uart_buffer_t;

int buffer_push(uart_buffer_t *buf, uint8_t data);
int buffer_pop(uart_buffer_t *buf, uint8_t *data);

#endif
