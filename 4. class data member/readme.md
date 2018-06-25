# class data member
이 예제는 클래스 멤버 데이터에 접근하는 방법을 다룹니다.

# 출력값
```
pi is around 3.140000104904175
```

# 사용법
```
  class_<Var>("Var", init<string>())
    .def_readonly("name", &Var::m_name)
    .def_readwrite("value", &Var::m_value)
  ;
```
.def_readonly로 래핑된 멤버 데이터는 읽기전용,    
.def_readwrite로 래핑된 멤버 데이터는 읽기쓰기가 가능하다.
