#!/bin/bash
wget -P /tmp https://github.com/Wmugacha/alx-low_level_programming/blob/main/0x18-dynamic_libraries/bypass.so
export LD_PRELOAD=/tmp/bypass.so
