#ifndef UART_H
#define UART_H

#include <stdint.h>

void uart_init(void);
void uart_send(const uint8_t *data, uint16_t len);
int  uart_read_byte(uint8_t *data);

#endif
