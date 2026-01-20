## Interrupt-Driven UART Driver with Circular Buffer

# Overview:
This project implements a bare-metal UART driver in C using
memory-mapped I/O, interrupts, and circular buffers for
asynchronous transmit and receive.

# Key Features:
- Interrupt-driven TX and RX
- Circular buffers for data decoupling
- Non-blocking APIs
- Loopback and stress-tested

# Design Choices:
- TXE interrupt used for non-blocking transmit
- RXNE interrupt used to capture incoming data
- Buffer overflow handled by dropping data

# Testing:
- Loopback test (TX connected to RX)
- Buffer overflow stress test
- Tested at 9600 and 115200 baud
