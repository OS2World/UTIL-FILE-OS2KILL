/* os2kill.c

   A program to remove OS2 system files from the root directory. Don't
     run this under OS/2 or a DOS Window!  Run from the root directory
     in DOS non-protected mode (normal DOS).  Will delete hidden and
     non-dos files like 'WP ROOT. SF'  This can free up a lot of
     space.

   compiled under Microsoft C 5.1   ( Bill Gates would be proud!)

   written to delete OS/2 version 2.00 GA.

   Copyright (C) 1992, Hobbitt Software

   This program is FREE.  It is distributed under the agreement as
     set forth by the GNU project.  The agreement is not included
     to save space but it may be obtained from any GNU product.  Or,
     you could just re-write this and call it your own but I'm on the
     GNU bandwagon, their concept of freedom of information , and taking t
     his oportunity to tell you to check 'em out.

   Stephen Balbach -> 'Lieben is Lieben'

*/


#include <io.h>
#include <stdio.h>
#include <dos.h>

main()
{
char ch;


  printf("\nYou are about to kill OS2, repairable only by re-installation.\n");
  printf("\nkillos2.exe must be run from the root directory of the drive OS/2 is installed\n\n");
  printf("Press 'y' to kill, any other to live: ");
  ch = getch();
  if(ch == 'y')
  {
    printf("\n\nChange 'wp root. sf' attribute = %d (0 if OK)\n", _dos_setfileattr("wp root. sf",_A_NORMAL));
    printf("Delete 'wp root. sf'           = %d (0 if OK)\n", remove("wp root. sf"));
    printf("Change 'ea data. sf' attribute = %d (0 if OK)\n", _dos_setfileattr("ea data. sf",_A_NORMAL));
    printf("Delete 'ea data. sf'           = %d (0 if OK)\n", remove("ea data. sf"));
    printf("Change 'os2boot.   ' attribute = %d (0 if OK)\n", _dos_setfileattr("os2boot",_A_NORMAL));
    printf("Delete 'os2boot.   '           = %d (0 if OK)\n", remove("os2boot"));
    printf("Change 'os2krnl.   ' attribute = %d (0 if OK)\n", _dos_setfileattr("os2krnl",_A_NORMAL));
    printf("Delete 'os2krnl.   '           = %d (0 if OK)\n", remove("os2krnl"));
    printf("Change 'os2ldr.    ' attribute = %d (0 if OK)\n", _dos_setfileattr("os2ldr",_A_NORMAL));
    printf("Delete 'os2ldr.    '           = %d (0 if OK)\n", remove("os2ldr"));
  }

}
