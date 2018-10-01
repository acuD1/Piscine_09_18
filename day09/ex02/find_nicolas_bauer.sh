cat contacts_hard.txt | grep -i "^nicolas\tbauer" | rev | cut -d$'\t' -f2 | rev
