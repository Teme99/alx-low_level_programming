#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Teme99/alx-low_level_programming/main/0x18-dynamic_libraries/libinjection.so LD_PRELOAD="$PWD/../libinjection.so"
