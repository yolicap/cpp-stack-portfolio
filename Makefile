# CXX = clang++
# CXX = gcc
CXXFLAGS = -O2 -std=c++11 -I libs/ -Wall -Wextra -pthread -v

# PREFIX = /usr/local
# PREFIX = $(shell brew --prefix)

# ifneq ($(OS), Windows_NT)
# 	UNAME_S := $(shell uname -s)
# 	ifeq ($(UNAME_S), Darwin)
# 		OPENSSL_SUPPORT += -framework CoreFoundation -framework Security
# 	endif
# endif

# all: server client hello simplecli simplesvr upload redirect ssesvr ssecli benchmark issue

website : src/website.cpp src/handler.h src/handler.cpp libs/httplib.h Makefile
	$(CXX) -o website $(CXXFLAGS) src/website.cpp src/handler.cpp

# TODO : download httplib library from github 

# pem:
# 	openssl genrsa 2048 > key.pem
# 	openssl req -new -key key.pem | openssl x509 -days 3650 -req -signkey key.pem > cert.pem

clean:
	rm website