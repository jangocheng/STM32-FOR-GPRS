#ifndef SIM900GPRS_H
#define SIM900GPRS_H
#include "sys.h"
u8 SIM900_GPRS_Init(void);
void GPRS_SendHex1601a(void);
u8 establishTCPLink(void);
u8 GPRS_SendRead(void);
u8 GPRS_READ(u8*,u8);
#endif

