# Exercise

Draw mosaics using the graphlib library given.

## Dependencies

You need X11 installed to run this if you do not have it.

```
$ sudo apt-get install libx11-dev xorg-dev
```

If you are using an old computer, change the **LFLAG** value in the **Makefile**
```Makefile
LFLAG = your/path/to/X11/lib
```

For Esisar's images (P2021), it should be
```Makefile
LFLAG = -lX11 -L/usr/X11R6/lib
```

## Execution

```console
$ mkdir bin release
$ make
$ ./release/main
```

## Clean

```console
$ make clean
```



