# !/bin/bash
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'
FAILURE=KO
make
make bonus
output_checker=1
output_checker_linux=1
while [ "$output_checker_linux" != "$FAILURE" ]
#for i in {1..10}
do
	ARG=$(shuf -i 0-500 -n 500) && output_checker_linux=$(./push_swap $ARG | ./checker_linux $ARG)
	output_checker=$(./push_swap $ARG | ./checker $ARG)
	if [ "$output_checker_linux" != "$FAILURE" ]; then
		printf "${GREEN}OK${NC}\n"
	else
		echo $ARG
		printf "${RED}An error has been encoutered. Please check args.${NC}"
		break;
	fi
done
