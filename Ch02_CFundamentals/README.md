# Chapter 2. C Fundamentals

- 주요 세 가지 단계
    + Preprocessing: `#`(directives) 뒤에 오는 여러 명령어들을 처리한다. 프로그램에 다른 코드를 추가하거나, 현재 프로그램을 수정하는 역할을 한다.
    + Compiling: preprocessing 된 코드가 compiler로 들어가서 `Object code`, 즉 기계어로 변환되는 과정. 아직 실행 불가능하다.
    + Linking: `linker`가 object code와 다른 필요한 것들(printf 등의 library function)을 합쳐서 하나의 완전한 실행 가능한 프로그램으로 만드는 과정
- `directives` : `#` 으로 시작하는 명령어들. 한 줄 짜리고, semi-colon 필요없다.
- `float` 타입의 산술연산이 `int`보다 느리다. 0.1은 사실상 0.0999999999987 값이지 정확하게 0.1이 아니다.
- 변수 용어 정리
    + decalare and assign: `int a; a = 0;`
    + initialize: `int a = 0;`
- `int a = 10;` : 이 때 10은 constant라고 한다. float 형 타입도 마찬가지로 저런 숫자는 constant다.
- `float b = 10.44f;` : float 타입으로 선언할 때는 뒤에 `f`를 붙여줘야한다. 안 붙이면 warning이 뜬다.
- 한 줄에 여러 variables를 initialize 할 때
    + `int a = 0, b = 1, c = 3;` : 각각이 int 타입이고 각 constant가 대입
    + `int a, b, c = 10;` : a, b는 uninitialized이고 c만 10으로 initialized 
- `#define RECIPROCAL_PI (1.0f / 3.141592f)` : 이런 식으로 macro 가능
- variable naming convention: word 단위로 `_` 언더바 붙여서 구분하고 소문자로 시작. `symbol_table` 꼴로. 그리고 변수 이름 길어져도 상관없으니 제대로 적자.
