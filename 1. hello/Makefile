COMMON_OPTION = `pkg-config --cflags --libs python-3.6m`\
				 -W\
				 -Wall\
				 -fPIC\
				 -shared\
				 -Wl,-soname,hello.so\
				 -lboost_python3

hello:
	g++ $(COMMON_OPTION) -o hello.so hello.cpp
