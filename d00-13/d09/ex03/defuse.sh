#!/sh/bash

echo $(( $(stat -f %a ./bomb.txt)-1 ))