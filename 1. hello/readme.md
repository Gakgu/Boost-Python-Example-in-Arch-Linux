# hello
이 예제는 c++의 간단한 함수를 파이썬에서 호출합니다.

# 예상 출력
```
hello!
```

# 사용된 함수
```
template <class F>
void def(char const* name, F f);
```
- name : 파이썬에서 호출 할 때의 함수 이름
- f : 호출될 c++의 함수 이름
