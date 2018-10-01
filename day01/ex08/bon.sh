ldapsearch -Q sn='*bon*' sn | grep "dn:" | wc -l | bc
