# Part 1 Basic Feature of C

## Chapter 1. Introducing C

## Chapter 2. C Fundamentals

- 주요 세 가지 단계
    + Preprocessing: `#`(directives) 뒤에 오는 여러 명령어들을 처리한다. 프로그램에 다른 코드를 추가하거나, 현재 프로그램을 수정하는 역할을 한다.
    + Compiling: preprocessing 된 코드가 compiler로 들어가서 `Object code`, 즉 기계어로 변환되는 과정. 아직 실행 불가능하다.
    + Linking: `linker`가 object code와 다른 필요한 것들(printf 등의 library function)을 합쳐서 하나의 완전한 실행 가능한 프로그램으로 만드는 과정
