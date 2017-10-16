## Setting up

```shell
aclocal && autoconf
```

### Linux, etc

```
apt-get install libicu-dev
dnf install libicu-devel
```

### Mac Homebrew

```
brew install icu4c
env PKG_CONFIG_PATH=/usr/local/opt/icu4c/lib/pkgconfig  ./configure
```

## Building

```
make
make check
```

## copyright

- © 2016 and later: Unicode, Inc. and others.
- License & terms of use: http://www.unicode.org/copyright.html
