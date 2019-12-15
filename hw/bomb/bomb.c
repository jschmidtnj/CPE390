#include <stdio.h>

extern void phase1();
extern void phase2();
extern void phase3();
extern void phase4();

int main(int argc, char **argv)
{
    phase1();
    phase2();
    phase3();
    phase4();
    return 0;
}
