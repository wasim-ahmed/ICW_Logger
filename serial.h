#ifndef _SERIAL_H_
#define _SERIAL_H_

#include <inttypes.h>

#ifndef PORTNAME
//#define PORTNAME "/dev/ttyAMA0" //for usb
#define PORTNAME "/dev/ttyS0"	//for TxRx pins
#endif

void serial_init(void);
void serial_config(void);
void serial_println(const char *, int);
void serial_readln(char *, int);
void serial_close(void);

#endif
