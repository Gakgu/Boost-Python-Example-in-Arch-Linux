# expose class explicit constructors
이 예제는 명시적 생성자에 대해 설명합니다.

# 출력값
처음 뜨는 에러는 c++ 코드에서 똑같은 클래스로 여러 번 래핑시켰기 때문에 생기는 오류이다.    
오류를 없애려면 각 클래스마다 한 개의 래핑만 하면 된다.
```
pi is around 3.140000104904175
```

# 사용법
1. 생성자를 0개 노출시킬 경우
생성자 옆에 `no_init` 매개변수를 추가한다.
```
class_<World>("expose_0_constructor", no_init)
  .def ...
```
2. 생성자를 1개 노출시킬 경우
생성자 옆에 `init<매개변수 타입>`을 추가한다.
```
class_<World>("expose_1_constructor", init<string>())
  .def ...
```
3. 생성자를 2개 이상 노출시킬 경우
생성자 옆에 init<매개변수 타입>을 추가하고 아래 `.def(init<매개변수 타입>())`을 추가한다.
```
class_<World>("expose_2_constructor", init<string>())
  .def(init<double, double>())
  .def ...
```
