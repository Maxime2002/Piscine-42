#!/bin/sh
groups $FT_USER | cut -d ':' -f 2 | tr ' ' ',' | sed 's/^,//g' | tr -d '\n'
