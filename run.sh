# !/bin/bash
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'
FAILURE=KO
make
make bonus
for i in {1..100}
do
	ARG=$(shuf -i 0-500 -n 20) && ./push_swap $ARG | ./checker $ARG > output_checker
	string_output=output_checker
	if [ "$string_output" = "$FAILURE" ]; then
		echo $ARG
		printf "${RED}An error has been encoutered. Plese check args.${NC}"
		break ;
	else
		printf "${GREEN}OK${NC}\n"
	fi
done
