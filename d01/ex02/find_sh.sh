#!/bin/sh
find . -name "*.sh" -exec basename {} \; | tr -d ".sh"
