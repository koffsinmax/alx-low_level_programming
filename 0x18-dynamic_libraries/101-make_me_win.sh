#!/bin/bash
wget -p .. https://raw.githubusercontent.com/koffsinmax/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRLOAD="$PWD/../libgiga.so"
