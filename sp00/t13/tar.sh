if [[ $1 == "-c" ]];
then
tar -cf $2 ${@:3}
fi
if [[ $1 == "-e"]]
then
tar -xjvf $2
fi
