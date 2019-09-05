#!/bin/sh
find . -not -path '*/\.*' | wc -l | tr -d " "
