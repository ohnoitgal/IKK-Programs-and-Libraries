#include "shell.h"
#include "../../stdlib/src/ikatzkernel.h"
#include "../../stdlib/src/stdio.h"
#include "../../stdlib/src/string.h"
#include "../../stdlib/src/stdlib.h"
#include <stdbool.h>



void print_logo();

int main(int argc, char** argv)
{
    print_logo();
    print("Welcome to Introductory Kompanion Kernel (IKK) v1.0.0\n");
    while(1) 
    {
        print("> ");
        char buf[1024];
        ikatzkernel_terminal_readline(buf, sizeof(buf), true);
        print("\n");
        ikatzkernel_system_run(buf);

        print("\n");
    }
    return 0;
}



void print_logo()
{
    puts("                                                                            ");
    puts("                              .**,,  ..  ../.,/#                            ");
    puts("                            .  .              ..,..*,                       ");
    puts("                        . . . .  .                 (...*,                   ");
    puts("                                                   , ,(,..*.                ");
    puts("                                                       ...,(.               ");
    puts("               .                                          .,,*%             ");
    puts("              ..           .  ......... .                .  /((&            ");
    puts("             ..  . ...,,,,,,,,,,,,.........           .     ./&(@           ");
   // puts("            ..  *,.,,,,,****,,,,,,,,,,...... .   .           *(,@&          ");
   // puts("            . ,*,,,,,*********,*,*,*,,,......    .          @/%&@@          ");
   // puts("            ..(*,,****//*/*********,,,,,..........      . . /./@%@.         ");
   // puts("           .,(/*****///*///********,,,,,,......... .        .  &%@*         ");
   // puts("            ,((/****////*/*//******,,,,,,,...........      .   *(@(         ");
   // puts("            ,#(//*//////*///*/*//**,,,,,,,,,...... .... ...   %/@@%         ");
   // puts("            ,#((((//(/(////(////***,,,,.,,............... ..    .*#         ");
   // puts("             (#/**//////*///////**,,. .,................. . . .....%        ");
   // puts("             ,.... ..,,,//****,......,.    .............., ... ...(.        ");
   // puts("              *,.     .,,(**... ...,*,     ,...... ..........  . .#         ");
   // puts("               (/%,***,.,((*..   .,*,,**,..  .................  ./%         ");
   // puts("               (*,,,,.*//((,... ..,*/*//**/*.....................&(         ");
   // puts("               (#////(((&(/,......*//(((/**,,,...................#          ");
   // puts("               (/*//*,.###(*.. .,.. ,,/((//*,,...............@@.            ");
   // puts("               ,**,..,*@#(/,.. .., ..,,**//**,,,,.,.........#@&             ");
   // puts("                /,. ,,//(**,.........,..,,,***,,...........,#&@             ");
   // puts("                 *,,..*,*(((//*,*,....  .,,*/**,,,,.....,,..*@@,.           ");
   // puts("                  **,,,///****,,,,.,,.,,,.,,/****,.,,..,....#%&@ ,*         ");
   // puts("                    ,,,/(#(////*/*,,.,,,,,,,**,,,,,,,.,....*%(&/.  /        ");
   // puts("                      ,/(/(/(((//*/,*/*,,.,.,*,,,.........,*(.      //.     ");
   // puts("                   .....**(//((///*,*,*,...,,,,,,.......               ,,.  ");
   // puts("                          ********,,,.....,,..........                   ...");
   // puts("                            *.....,.,...............                        ");
   // puts("                           .//  ,,...........                               ");
}