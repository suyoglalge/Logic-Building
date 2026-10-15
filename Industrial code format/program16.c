#include"Header.h"
#include<assert.h> //use for testing furpose

int main()
{
    assert(Addition(10,11 ==21));

    assert(Addition(-10,20 ==10));

    assert(Addition(-10,-20 ==-30));

    return EXIT_SUCCESS;
}
/*
C:\Users\Suyog\AppData\Local\Temp\ccIPiFVt.o:program16.c:(.text+0x1e): undefined reference to `Addition(int, int)'
C:\Users\Suyog\AppData\Local\Temp\ccIPiFVt.o:program16.c:(.text+0x52): undefined reference to `Addition(int, int)'
C:\Users\Suyog\AppData\Local\Temp\ccIPiFVt.o:program16.c:(.text+0x86): undefined reference to `Addition(int, int)'
collect2.exe: error: ld returned 1 exit status

to solve this file..this prg dont khow addition...so to solve this we write command means

gcc Program16.c Program15.c -o myexe

hyane tyala prg 15 mul addition pn bhetl ani error jayil
*/