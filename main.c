int main(void)
{
    uart_init();

    const char msg[] = "UART DRIVER READY\n";
    uart_send((uint8_t*)msg, sizeof(msg)-1);

    while (1) {
        uint8_t c;
        if (uart_read_byte(&c) == 0) {
            uart_send(&c, 1); // echo
        }
    }
}
