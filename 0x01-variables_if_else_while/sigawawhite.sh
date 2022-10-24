#!/bin/bash
for file in *.c
do
	vi +':w ++ff=unix' +':q' "$file"
done

grep -rlZ --binary-files=without-match --include='*.c' '\s$' . | xargs -r0 sed -i 's/\s+$//'
