# 🔢 C++ 정렬형 구구단 출력 프로그램 (Gugudan Formatter)

이 프로젝트는 C++의 `iostream`과 `iomanip` 라이브러리를 활용하여, 터미널 환경에서 가독성이 높은 다단(Multi-column) 구구단 레이아웃을 구현한 기초 프로젝트입니다.

## 🌟 Key Features (주요 기능)
- **가로형 다단 출력**: 2단부터 9단까지 가로 방향으로 배치하여 한눈에 모든 단을 확인 가능
- **데이터 정렬 (Alignment)**: `setw(2)`와 `right` 정렬을 사용하여 일의 자리와 십의 자리 숫자가 어긋나지 않도록 정교하게 배치
- **구조화된 코드**: 출력 로직을 `printGugudan()` 함수로 모듈화하여 코드 유지보수성 향상

## 🛠 사용된 기술 및 개념
- **Language**: C++
- **Library**: `<iomanip>` (Input/Output Manipulation)
- **Concept**:
  - 중첩 반복문 (Nested Loops)을 활용한 매트릭스 형태 데이터 출력
  - 이스케이프 시퀀스(`\t`)를 이용한 열 간격 조정
  - 출력 조정자(Stream Manipulators)를 통한 UI/UX 개선

## 🖥 실행 결과
코드 실행 시, `setw`를 통해 아래와 같이 숫자의 자릿수가 정렬된 깔끔한 결과가 출력됩니다.

<img width="452" height="191" alt="image" src="https://github.com/user-attachments/assets/f1e36546-93cb-4c73-9a53-b58d56a51c94" />
