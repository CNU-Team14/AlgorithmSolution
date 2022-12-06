## 문제 풀이 Contribute Guide Line

*아래 있는 규칙은 tony9402, BaaaaaaaaaaarkingDog 님이 작성하신걸 참고하여 적었습니다.*

## :file_folder: Repo 폴더 구조

각 알고리즘에 대한 문제 리스트는 ```해당 알고리즘 폴더```에서 볼 수 있습니다.  

풀이 코드가 있는 곳은 solution 폴더 안에 있습니다.   
[```/_solution```](https://github.com/CNU-Team14/AlgorithmSolution/tree/main/_Solution) 에 있습니다. 해당 경로에 언어 별로 솔루션 파일이 있습니다.

## :bust_in_silhouette: Contribute 에 대한 설명

[아래 기준](#rule)을 맞추어 여러분들의 Solution Code를 main branch로 Pull Request (PR) 해주시면 됩니다 !  
Pull Request에 대한 설명은 [여기](https://wayhome25.github.io/git/2017/07/08/git-first-pull-request-story/)에서 보시면 됩니다.

현재 이 Repo는 코딩테스트를 준비하시는 분들을 위해 만든거라 언어는 ```C, C++, Java, Python 3, Javascript(Node.js), Kotlin, Rust, Swift, Go``` 총 9가지 언어만 허용합니다. 각 언어에 대한 솔루션 파일명과 제출 언어(ex. C++17)는 아래만 허용합니다.

| Language | 파일명 및 확장자     | 백준 제출 언어          |
| :------- | :--------------- | :------------------- |
| C        | main.c           | [C2x](https://help.acmicpc.net/language/info#language-102), [C11](https://help.acmicpc.net/language/info#language-75)  |
| C++      | main.cpp         | [C++14](https://help.acmicpc.net/language/info#language-88), [C++17](https://help.acmicpc.net/language/info#language-84), [C++20](https://help.acmicpc.net/language/info#language-95)  |
| Python 3 | main.py          | [Python 3](https://help.acmicpc.net/language/info#language-28), [PyPy3](https://help.acmicpc.net/language/info#language-73)      |
| Java     | Main.java        | [Java 8](https://help.acmicpc.net/language/info#language-3), [Java 11](https://help.acmicpc.net/language/info#language-93), [Java 15](https://help.acmicpc.net/language/info#language-107)      |
| Kotlin   | main.kt          | [Kotlin (JVM)](https://help.acmicpc.net/language/info#language-69)         |
| Node.js  | main.js          | [node.js](https://help.acmicpc.net/language/info#language-17)              |
| Rust     | main.rs          | [Rust 2015](https://help.acmicpc.net/language/info#language-44), [Rust 2018](https://help.acmicpc.net/language/info#language-94), [Rust 2021](https://help.acmicpc.net/language/info#language-113) |
| Swift    | main.swift       | [Swift](https://help.acmicpc.net/language/info#language-74)                |
| Go       | main.go          | [Go](https://help.acmicpc.net/language/info#language-12)                   |

## PR 규칙 및 Commit Message 규칙

#### Pull Request

- [Baekjoon-폴더명] 이름

## Rule

### 필수 - 반드시 아래 규칙들을 지켜주세요. 위배되는 솔루션 코드가 있으시 Reject 됩니다.

**해당 규칙은 추가, 수정, 삭제가 될 수 있습니다.**

- Rule 0 : **(모든 언어 공통)표준입출력으로 풀어야 합니다.**
- Rule 1 : 다른 사람의 솔루션을 자신이 푼 것처럼 Pull Request (PR) 하시면 안됩니다.
- Rule 2 : 아래와 같이 솔루션 맨 위에 정보를 **반드시** 넣어주세요. (Authored By에는 백준 닉네임으로 넣어야 합니다.)

```cpp
// Authored by : 백준아이디
// Link : http://boj.kr/3ee3d9284f2e4fd7b92b2a22e17d02d6
```

- Rule 3 : Pull Request (PR) 하나 당 솔루션 하나만 있어야 합니다. 같은 문제여도 언어마다 다르게 PR을 보내야 합니다. 이는 관리의 편의성을 위해 적용합니다.
- Rule 4 : `Allow edits by maintainers` 옵션을 허용으로 둬야합니다.
- Rule 5 : 분류에 맞는 솔루션을 올려야 합니다.
- Rule 6 : 1 Tab == 4 space, 즉 들여쓰기는 반드시 공백문자 4개로 해야합니다.  

#### C++
- Rule 7 : 입출력은 C++ stream을 이용해야 합니다. `ios::sync_with_stdio(0); cin.tie(0);`이 main 함수 안에 맨 첫줄에 있어야 합니다. `endl` 대신 `'\n'`을 써야합니다.  
- Rule 8 : `using namespace std`를 꼭 써야합니다.
- Rule 9 : 논리 연산자인 `and, or`인 경우는 반드시 `&&, ||` 로 사용해야 합니다.  
- Rule 10 : 반드시 실수 연산을 해야하는 경우는 `float`보단 `double`로 사용해주세요. 이 외에는 반드시 정수에서 연산을 해주세요.
- Rule 11 : `queue, priority_queue, stack, list` 등과 같은 자료구조는 STL을 이용해주세요.
- Rule 12 : 문자열은 반드시 `char*`대신 `string`을 이용해주세요. <!--*-->
- Rule 13 : `class`보단 `struct`를 이용해주세요.

### 공통 
- Rule 14 : 변수와 함수의 이름은 어느 정도 의미하는 바를 드러내면서도 코드가 간결하도록 최대 10 글자 이내로 해주세요.  
- Rule 15 : 한 줄짜리 `if, for, while` 문에는 중괄호를 쓰지 않는 것을 권장합니다.
- Rule 16 : 반복문 안에서 `if` 문에 조건이 많은 경우 `continue, break`를 활용해주세요.  
- Rule 17 : 자주 사용하는 코드는 함수로 작성하여 사용해주세요.
- Rule 18 : 변수와 함수의 이름은 소문자로 작성하는 것을 권장합니다. 
- Rule 19 : 불필요한 연산이 없도록 최대한 정리를 해주세요.
- Rule 20 : 배열은 반드시 전역에 선언해주세요. 배열 사이즈는 엄청 타이트하게 잡지 말고 `+1 ~ +10` 정도로 넉넉하게 잡아주세요.
- Rule 21 : 소스코드 일부에 어떤 코드인지 간단한 주석처리를 해주시면 감사하겠습니다. 다른 분들이 보실 때 코드만 볼 경우 이해가 안되는 경우가 있습니다.
- Rule 22 : 어떤 방식으로 풀었는지 PR을 남기실 때 간단하게 자신의 풀이를 남겨주세요.

```cpp
// 이 코드보다 아래있는 코드처럼 작성하시는 걸 권장합니다.
for(int k=0;k<4;k++){
    int qy = y + dy[k];
    int qx = x + dx[k];
    if(0 <= qy && qy < n && 0 <= qx && qx < n) {
        if(Map[qy][qx] != '0') {
            Map[qy][qx] = '0';
            q.push(make_pair(qy, qx));
        }
    }
}

for(int k=0;k<4;k++){
    int qy = y + dy[k];
    int qx = x + dx[k];
    if(0 > qy || qy >= n || 0 > qx || qx >= n) continue;
    if(Map[qy][qx] == '0')continue;
    Map[qy][qx] = '0';
    q.push(make_pair(qy, qx));
}
```

### 테스트 케이스
- Rule 23 : 테스트 케이스는 문제 폴더에 tc.txt에 넣어주세요.
- Rule 24 : 테스트 케이스는 아래 양식을 따라주세요.

```
# [테스트 케이스 설명]
tc [테스트 케이스 번호])

입력 :
[테스트 케이스 입력]

출력 :
[테스트 케이스 출력]

예시)
# 이 테스트 케이스는 범위에 대해 묻습니다.
tc 1)

입력 :
10000000000

출력 :
10000000000
```
