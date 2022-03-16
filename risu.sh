#!/bin/sh

array=()
while read line
do
  array+=($line)
done < ./risu.txt

for ((c = 100; c < 200; c++)) {
  line=""
  for ((i = 0; i < ${#array[@]}; i++)) {
    for ((j = 0; j < ${#array[@]}; j++)) {
      if [ "${array[i]:j:1}" = "1" ]
      then
        x=$((((i+j)/20)+c))
        line+="\e[48;5;${x}m  "
      else
        line+="\e[0m  "
      fi
    }
    line+="\e[0m\n\e"
  }
  printf "${line}"
  sleep 0.05
  printf "\e[32A"
}
