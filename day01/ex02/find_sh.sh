find . -name "*.sh" | sed "s/.*\///g" | rev | cut -c4- | rev
