#!/sh/bash

FILE=$1
IFS=$'\n'

for LINE in $(cat < "$1");
do
	echo "$LINE" | tr -d " " | grep -i "^nicolas" |grep -i "bauer" | tail -r | sed 1d | sed 1d 
done