#!/bin/bash

sp="/-\|"
i=1
while :; do
    sleep 0.2
    char="${sp:i++%${#sp}:1}" # パラメータ展開を使って一文字づつ取得する
    printf "%s\r" ${char}
done