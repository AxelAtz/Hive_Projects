#!/bin/sh
export FT_LINE1=8
export FT_LINE2=16
cat /etc/passwd | tail -n +11 | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | sed -n "$FT_LINE1,${FT_LINE2}p" | sed 's/$/, /' | tr -d '\n'| sed 's/, $/./'
