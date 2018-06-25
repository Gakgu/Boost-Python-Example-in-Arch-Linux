import hello

expose_1_constructor_class = hello.expose_1_constructor("hello")
expose_2_constructor_class = hello.expose_2_constructor(1234, 4321)

print(expose_1_constructor_class.greet())
print(expose_2_constructor_class.sum())
