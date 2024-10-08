PAST_KEY=""
while [[ true ]]
do
	CURRENT_KEY=$(find -L . -type f -name "*c" -exec md5 {} \;)
	if [[ $PAST_KEY != $CURRENT_KEY ]]; then
		PAST_KEY=$CURRENT_KEY

		clear

		echo "\nTest watcher done at $(date)"

		norminette

		echo "\n\n\n"

		rm -f a.out

		gcc -fsanitize=address -Wall -Werror -Wextra ./.tests/main.c

		./a.out
	fi
	sleep 0.1
done