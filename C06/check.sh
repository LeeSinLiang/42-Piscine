# Check, compile, and run

echo "--------- CHECK, COMMPILE AND RUN" *.c

echo "---------- MOULINETTE"

norminette -RCheckForbiddenSourceHeader *.c | cat

echo "---------- GCC"

gcc -Wall -Wextra -Werror *.c | cat

echo "---------- CHMOD"

chmod +x a.out

echo "---------- EXECUTE"

./a.out