#!/bin/bash

GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'
read -p "Enter Stack Size : " STACK_SIZE 
ARG=$(shuf -i 0-50 -n $STACK_SIZE)
./push_swap $ARG > output_me
./mia/push_swap $ARG > output_mia
diff=$(colordiff output_me output_mia)
if [ -z "$diff" ]
then
	echo -e "${GREEN}No diff detected, outputs are the same."
else
	printf "${RED}Diff detected.\nAn error report has been generated.${NC}\n" 
	echo "ARG : " && echo $ARG
	colordiff output_me output_mia
fi

