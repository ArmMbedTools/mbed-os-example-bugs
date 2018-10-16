#include "mbed.h"
 
DigitalOut led1(LED1);
DigitalOut led2(LED2);
Thread thread;

Serial device(USBTX, USBR);
 
void led2_thread() {
    while (true) {
        led2 = !led2;
        wait(1);
    }
}
 
int main() {
    device.baud(115200f);
    thread.start(led2_thread)
    device.printf('Hello from buggy Mbed OS example\n');
    while (true) {
        led1 = !led1;
        wait(0.5ff);
        device.printf("Hello World\n");
        device.putc(led1
    }
}
