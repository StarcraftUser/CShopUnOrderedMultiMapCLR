Since C# doesn't have a container like C++'s std::multimap or std::unordered_multimap, I decided to create one for fun.

Although it's possible to implement this using two containers in C#, I judged that it would be difficult to make something with the same functionality and performance as C++'s std::unordered_multimap.

Therefore, I proceeded to bring the std::unordered_multimap container from C++ to C#.

This code was implemented by wrapping std::unordered_multimap using C++/CLI so that it can be used in C#.

The reason this code became repetitive was due to the incompatibility between C++ templates and C# generics.

Because direct conversion was not possible, I had to use a workaround.

I wrote the code with the mindset of "making do with what I have."

When instantiating variables, templates and generics determine the types of the key-value pairs.

The workaround involved pre-declaring all types that could be used as template parameters in C++, and implementing the use of the appropriate std::unordered_multimap based on the generic key and value types.

This workaround resulted in significantly long code.

If all possible types for key-value pairs were declared, it could lead to increased memory usage.

To prevent this memory waste, I used a union to compress memory space and solve the problem.

Additionally, I used a switch statement for faster access speed instead of if statements.

In cases where the generic type in C# is a structure, class, or interface, I attempted to store the address value of a void pointer (void*) in the C++ unordered_multimap but failed.

I tried to store the pointer address in C#, but address detection failed.

Despite various attempts, it seemed beyond my ability, so I found another workaround.

I stored classes and structures in a dictionary and used the index in the unordered_multimap to implement the solution.

Unfortunately, it seems to be incompatible with Unity.

It can be used when creating a simple lottery-style application as a C# Windows Forms app

If there are any mistakes or good ideas, please let me know.

This code is embarrassing to publish.

However, I am posting it with the hope that it will be refined into better code by others.

I am not responsible for any issues that arise from using this code.

==============================================

C#에는 C++의 std::multimap 또는 std::unordered_multimap과 같은 컨테이너가 없어서 재미삼아 만들어보았습니다.

C#에서 두 가지의 컨테이너로 충분히 구현이 가능하다고는 하지만 C++의 std::unordered_multimap과 같은 기능과 성능을 100% 똑같이 만들기에는 무리가 있다고 판단하였습니다.

그래서 C++의 std::unordered_multimap 컨테이너를 C#에서 사용할 수 있도록 가져오는 작업을 진행하였습니다.

C++/CLI를 이용하여 std::unordered_multimap을 C#에서 사용할 수 있게 래핑하는 방식으로 구현한 코드입니다.

이 코드가 반복되는 노가다 코드가 된 이유는 C++의 템플릿과 C#의 제네릭이 서로 호환이 안되는 문제였습니다.

직접 변환이 안되기 때문에 우회하는 방법을 사용하였습니다.

이가 없으면 잇몸으로 씹는다는 생각으로 코드를 작성하게 되었습니다.

변수를 인스턴스화하게 되면 템플릿과 제네릭이 키-값의 타입을 정하게 됩니다.

어떤 식으로 우회를 했냐 하면 C++의 키-값 템플릿에 들어갈 수 있는 타입의 종류를 미리 모두 선언하였고, 제네릭의 키, 값 타입에 따라 호환되는 종류의 std::unordered_multimap을 사용하도록 구현하였습니다.

이렇게 우회하게 되다 보니 코드가 상당히 길어졌습니다.

키-값에 들어갈 수 있는 타입의 모든 종류를 선언하였다면 용량이 커지는 상황이 발생할 수도 있습니다.

이러한 메모리 낭비를 막기 위해서 유니온 공용체를 사용하여 메모리 공간을 압축하여 문제를 해결하였습니다.

또한 if문 대신 접근 속도가 빠른 switch문을 사용하였습니다.

C#에서 제네릭 타입이 구조체, 클래스, 인터페이스일 경우 C++ unordered_multimap에 void 포인터(void*)의 주소값을 저장하려고 하였으나 실패하였습니다.

C#에서 포인터 주소값을 저장하려고 하였으나, 주소 검출에 실패하였습니다.

여러 가지 시도를 하였으나 저의 능력으로는 안되는 것 같아서 다른 방식으로 우회하였습니다.

클래스와 구조체를 딕셔너리에 저장하고 인덱스를 unordered_multimap에 저장하는 방식으로 우회하여 구현하였습니다.

안타깝게도 유니티와는 호환이 안되는 것 같습니다.

C# Windows Forms 앱으로 간단한 추첨기 같은 파일을 만들 때, 사용 가능할 것으로 판단됩니다.

잘못된 부분이 있거나 좋은 아이디어가 있으시다면 알려주시면 감사하겠습니다.

코드를 공개하기에는 부끄러운 코드입니다.

하지만 다른 분들에 의해서 더 훌륭한 코드로 다듬어지길 기대하며 올려봅니다.

이 코드를 사용하다가 문제 발생 시 어떠한 것도 책임지지 않습니다.
