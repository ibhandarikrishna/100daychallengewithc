#!/bin/sh

tz="`date +%z`"

for y in 2009 2010; do
  for m in 01 02 03 04 05 06 07 08 09 10 11 12; do
    touch -d "$y-$m-01 00:00:00 $tz -1 sec" min_date.txt
    touch -d "$y-$m-01 00:00:00 $tz +1 month" max_date.txt
    dir="$y-$m"
    find -iname '*.jpg' \
      -newer min_date.txt \
      -not -newer max_date.txt \
      -exec mkdir -p "$dir" \; \
      -exec mv -v '{}' "$dir" \;
  done
done

rm -v min_date.txt max_date.txt
