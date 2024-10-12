#!/bin/bash

PAST_KEY=""
while [[ true ]]
do
CURRENT_KEY=$(find -L . -type f -name "*.[c]" -exec md5 {} \;)
	if [[ $PAST_KEY != $CURRENT_KEY ]]; then
		PAST_KEY=$CURRENT_KEY

		clear

		echo "\nTest watcher done at $(date)"

		norminette
		
		echo "\n\n\n"

		#make test
	fi
	sleep 0.1
done