# 编译主程序，并链接共享库
program: libnode.so main.cpp
	g++ main.cpp -L./ -lnode -o program
# 编译生成共享库
libnode.so: node.cpp
	g++ -fPIC -shared node.cpp -o libnode.so

clean:
	rm -rf *.so program
	