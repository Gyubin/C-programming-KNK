# Part 1 Basic Feature of C

## Chapter 1. Introducing C

- 특징
    + Low-level language: 기계와 친숙한, 기계 레벨의 언어. High-level 언어들은 굳이 드러내려고 하지 않는 부분을 C에서는 모두 할 수 있음
    + Small language: 기본 기능 자체가 적다. library function에 의존.
    + Permissive language: 사용자 재량으로 뭐든 할 수 있음.
- 강점
    + Efficiency: 빠르고 메모리 적게 먹는다.
    + Portability: 언어 자체가 파편화되지 않았고, C compiler 자체가 작고 만들기 쉬우며, 언어 자체가 nonportable한 코드가 없다.
    + Power: 다양한 타입, 연산자가 있는 등 좋다.
    + Flexibility: 다양한 분야 적용 가능
    + Integration with UNIX: UNIX, LINUX 툴들은 C를 알고 있다고 가정하고 만들어진 경우가 많다.
    + Standard library: 기본 제공되는 라이브러리가 강력
- 약점
    + Error-prone: 일단 돌려봐야 에러가 나는지 안나는지 알 수 있고, C compiler로 탐지할 수 없는 에러들이 있다.
    + Difficult to understand: low level 언어라서 공부하기가 어렵다.
    + Difficult to modify: 대형 프로젝트에서 코드 이해하고 고치기가 어렵다.

## Chapter 2. C Fundamentals

- 주요 세 가지 단계
    + Preprocessing: `#`(directives) 뒤에 오는 여러 명령어들을 처리한다. 프로그램에 다른 코드를 추가하거나, 현재 프로그램을 수정하는 역할을 한다.
    + Compiling: preprocessing 된 코드가 compiler로 들어가서 `Object code`, 즉 기계어로 변환되는 과정. 아직 실행 불가능하다.
    + Linking: `linker`가 object code와 다른 필요한 것들(printf 등의 library function)을 합쳐서 하나의 완전한 실행 가능한 프로그램으로 만드는 과정
