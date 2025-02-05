#include <stdint.h>



uint32_t SystemCoreClock = 16000000;

const uint8_t AHBPrescTable[16] = {0,0,0,0,0,0,0,0,1,2,3,4,6,7,8,9};
const uint8_t APBPrescTable[8] = {0,0,0,0,1,2,3,4};

//const uint8_t AHBPrescTable[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7}; // AHB prescaler values (0-7)
//const uint8_t APBPrescTable[8] = {0, 0, 0, 0, 0, 1, 2, 3}; // APB prescaler values (0-3)
