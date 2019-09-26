#!/bin/bash

numtrials=$1
total=0

if [ $numtrials -lt 1 ]
then
  echo "please input an integer number greater than 0"
else
  for i in `seq 1 $numtrials`
  do
    total=$(echo $total+$({ time ./*.out; } 2>&1 | awk 'NR==3{split($0,a," "); print substr(a[2],3,5)}') | bc)
  done
  echo "scale=3; $total / $numtrials" | bc
fi
