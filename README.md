# crux-ports-opt-riscv64

CRUX-RiscV ports overlay for CRUX opt collection 

To use these ports, download the `opt-riscv64.httpup` file to `/etc/ports`:
```
$ sudo wget -P /etc/ports https://raw.githubusercontent.com/crux-riscv64/crux-ports-opt-riscv64/3.8/opt-riscv64.httpup
$ sudo ports -u opt-riscv64
```

You may want to list it first in `/etc/prt-get.conf` to take advantage of ports overlay:
```
###
### prt-get conf
###

# note: the order matters: the package found first is used
prtdir /usr/ports/core-riscv64
prtdir /usr/ports/opt-riscv64
prtdir /usr/ports/xorg-riscv64
prtdir /usr/ports/core
prtdir /usr/ports/opt
prtdir /usr/ports/xorg
```

