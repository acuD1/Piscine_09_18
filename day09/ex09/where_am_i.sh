var=$(ifconfig  | grep broad | cut -c -17 | cut -c 7- | tr -d ' ' | tr -d 'n')
if test -z "$var" 
then
	echo "I am lost!"
else 
	echo "$var"
fi
