ARG=$(shuf -i 0-500 -n 20)
./push_swap $ARG > output_me
./momo/push_swap $ARG > output_me2
diff output_me output_me2
