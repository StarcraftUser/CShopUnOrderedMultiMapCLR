# C# Wrapper for C++ std::unordered_multimap

Since C# does not provide containers like C++'s `std::multimap` or `std::unordered_multimap`,  
I created this project for fun by wrapping `std::unordered_multimap` with C++/CLI so it can be used in C#.

---

## Background
- While it is possible to mimic similar functionality in C# using two containers,  
  I judged that achieving the same functionality and performance as C++ `std::unordered_multimap` would be difficult.
- Therefore, I decided to directly bring the C++ container into C#.

---

## Implementation Details
- Implemented as a **C++/CLI wrapper** around `std::unordered_multimap`.
- Due to incompatibility between **C++ templates** and **C# generics**, direct conversion was not possible.  
  As a workaround:
  - Pre-declared all possible key/value type combinations.
  - Selected the appropriate `std::unordered_multimap` based on the generic key and value types.
- This approach inevitably led to **repetitive boilerplate code**.
- **Memory optimization**: used a union to reduce memory waste.
- **Performance optimization**: replaced `if` statements with faster `switch` statements.
- **Class/struct handling**:
  - Directly storing `void*` pointers in the unordered_multimap was not successful.
  - Instead, objects are stored in a dictionary, and their indices are stored in the unordered_multimap as a workaround.
- I wrote the code with the mindset of *“making do with what I have.”*

---

## Limitations
- Not compatible with **Unity**.
- Can be used in simple scenarios such as a **lottery-style application** in a C# Windows Forms app.
- Since the key and value types had to be declared in advance, the code became lengthy and resulted in verbose, boilerplate code.

---

## Disclaimer
- This project is **experimental** and has plenty of room for improvement.
- I am not responsible for any issues that may arise from using this code.  
  *(Use at your own risk.)*

---

## Contribution
If you find mistakes or have better ideas, please feel free to share them.  
I hope this project can be refined into better code through community contributions.

---

==============================================

---

# C# Wrapper for C++ std::unordered_multimap

C#에는 C++의 `std::multimap` 또는 `std::unordered_multimap`과 같은 컨테이너가 존재하지 않습니다.  
이에 따라 C++/CLI를 이용해 `std::unordered_multimap`을 C#에서 사용할 수 있도록 래핑한 실험적인 프로젝트입니다.

---

## 배경
- C#의 기본 컨테이너로도 유사 기능 구현은 가능하지만,  
  C++ `std::unordered_multimap`과 동일한 기능/성능을 100% 재현하기는 어렵다고 판단했습니다.
- 따라서 C++의 컨테이너를 직접 가져와 C#에서 활용할 수 있도록 구현했습니다.

---

## 구현 방식
- **C++/CLI 래퍼**를 통해 `std::unordered_multimap`을 C#에서 사용 가능하게 함
- **템플릿 ↔ 제네릭이 서로 호환되지 않는 문제**로 인해 직접 변환은 불가능 → 다음과 같은 우회 방식을 사용:
  - 키/값 타입별로 가능한 조합을 미리 선언
  - 제네릭 타입에 따라 해당되는 `std::unordered_multimap`을 선택
- 이 과정에서 **반복적인 선언과 분기 처리**가 필요해 결과적으로 *노가다 코드*가 됨
- **메모리 최적화**: 유니온(union) 공용체를 사용하여 불필요한 메모리 낭비 방지
- **성능 최적화**: `if` 대신 `switch`문 사용
- **클래스/구조체 처리**:
  - 직접 `void*` 포인터를 저장하려는 시도는 실패
  - 대신 객체는 딕셔너리에 저장하고, 인덱스를 `unordered_multimap`에 저장하는 방식으로 우회

---

## 제약 사항
- **Unity와는 호환되지 않음**
- **Windows Forms 앱** 등에서 간단한 추첨기, 데이터 매핑 등에 활용 가능
- 키와 값의 타입을 미리 선언해야 했기 때문에 코드가 길어졌고, 노가다성 반복 코드가 됨

---

## 주의사항
- 본 코드는 **실험적 성격**을 가지며, 개선 여지가 많습니다.
- 사용 중 발생하는 문제에 대해서는 책임지지 않습니다.  
  (Use at your own risk)

---

## 기여
잘못된 부분이나 더 나은 아이디어가 있다면 자유롭게 알려주세요.  
더 많은 분들의 손을 거쳐 발전되기를 기대합니다.