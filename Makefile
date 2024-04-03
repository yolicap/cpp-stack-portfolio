# CXX = clang++
# CXX = gcc
CXXFLAGS = -O2 -std=c++11 -I libs/ -Wall -Wextra -pthread -v
DEPENDENCIES-HEADER-FILES = libs/httplib.h libs/inja.h
CORE-CPP-FILES = src/builder/builder.cpp src/handler/handler.cpp
CORE-HEADER-FILES = src/builder/builder.h src/handler/handler.h

# PREFIX = /usr/local
# PREFIX = $(shell brew --prefix)

# ifneq ($(OS), Windows_NT)
# 	UNAME_S := $(shell uname -s)
# 	ifeq ($(UNAME_S), Darwin)
# 		OPENSSL_SUPPORT += -framework CoreFoundation -framework Security
# 	endif
# endif

# all: server client hello simplecli simplesvr upload redirect ssesvr ssecli benchmark issue

website : src/website.cpp $(CORE-HEADER-FILES) $(DEPENDENCIES-HEADER-FILES) Makefile
	$(CXX) -o website $(CXXFLAGS) $(CORE-CPP-FILES)

# TODO : download httplib library from github 

# pem:
# 	openssl genrsa 2048 > key.pem
# 	openssl req -new -key key.pem | openssl x509 -days 3650 -req -signkey key.pem > cert.pem

clean:
	rm website