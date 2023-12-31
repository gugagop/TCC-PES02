#ifdef CRON
    #include "cron.h"
#endif

int main () {
#ifdef CRON
    setupCronometer();
    uint32_t start = startCronometer();
#endif
    __asm("nop");
#ifdef CRON
    uint32_t cycles = stopCronometer(start);
#endif
    return 0;
}