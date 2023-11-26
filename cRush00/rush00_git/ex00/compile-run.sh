cc -Wall -Wextra -Werror *.c -o main;
./main;
rm -f main;
printf "\n\n";

printf "\n---------------MAIN--------------\n\n";
norminette -R CheckForbiddenSourceHeader main.c
printf "\n---------------RUSH--------------\n\n";
norminette -R CheckForbiddenSourceHeader rush04.c
printf "\n---------------CHAR--------------\n\n";
norminette -R CheckForbiddenSourceHeader ft_putchar.c
