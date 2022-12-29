#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LEN 100
#define FLIGHTS_H_INCLUDED
#define FEDI_H_INCLUDED
#define TEMPFILE_H_INCLUDED
#define FLIGHTDESCRIPTION_H_INCLUDED
#define TEMPFILE2_H_INCLUDED
#define HOTELS_H_INCLUDED

void ClearConsoleToColors(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     //This is used to get the handle to current output buffer.

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     //This is used to reset the carat/cursor to the top left.

     COORD coord = {0, 0};
                      //This is a return value indicating how many characterss were written
                        //   It is not used but we need to capture this since it will be
                          //   written anyway (passing NULL causes an access violation).

     DWORD count;

                                   //This is a structure containing all the console info
                          // It is used here to find the size of the console.

     CONSOLE_SCREEN_BUFFER_INFO csbi;
                     //Now the current color will be set by this handle

     SetConsoleTextAttribute(hStdOut, wColor);

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                              //This fills the buffer with a given character (in this case 32=space).
          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
                              //This will set our cursor position for the next print statement
          SetConsoleCursorPosition(hStdOut, coord);
     }
}
