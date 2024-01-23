#!/bin/bash
wget -p .. https://raw.githubusercontent.com/koffsinmax/alx-low_level_programming/master/0x18-dynamic_libraries/libcrack.so
export LD_PRLOAD="$PWD/../libcrack.so"
