# !/bin/bash
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'
FAILURE=KO
make
make bonus
#for i in {1..10}
while [ "$output_push_swap" != "$FAILURE" ]
do
	ARG=$(shuf -i 0-500 -n 20) && output_push_swap=$(./push_swap $ARG | ./checker $ARG)
#./push_swap $ARG | ./checker $ARG > output_checker
#diff=$(diff output_checker output_checker_linux)
	if [ "$output_push_swap" != "$FAILURE" ]; then
		printf "${GREEN}OK${NC}\n"
	else
		echo $ARG
		printf "${RED}An error has been encoutered. Plese check args.${NC}"
		break;
	fi
done
