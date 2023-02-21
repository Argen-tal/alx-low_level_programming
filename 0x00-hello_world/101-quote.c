#include <stdio>

cut -d: -f1,6 /etc/passwd | sort -t: -k1

