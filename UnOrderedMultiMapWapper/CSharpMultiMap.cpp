#include "pch.h"
#include <type_traits>
#include <set>

template <typename T>
void CheckIfPointer(T& var) {
	if (std::is_pointer<T>::value) {
		delete var;
	}
	else {
	}
}

void MarshalString(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void MarshalString(String^ s, std::wstring& os)
{
	using namespace Runtime::InteropServices;
	const wchar_t* chars =
		(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

#define UnOrderedMultiMap_Clear_CASE(NUM) \
	case NUM: \
		multimapUnion->CPPmultimap##NUM->clear(); \
		break;

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::clear()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		UnOrderedMultiMap_Clear_CASE(1)
		UnOrderedMultiMap_Clear_CASE(2)
		UnOrderedMultiMap_Clear_CASE(3)
		UnOrderedMultiMap_Clear_CASE(4)
		UnOrderedMultiMap_Clear_CASE(5)
		UnOrderedMultiMap_Clear_CASE(6)
		UnOrderedMultiMap_Clear_CASE(7)
		UnOrderedMultiMap_Clear_CASE(8)
		UnOrderedMultiMap_Clear_CASE(9)
		UnOrderedMultiMap_Clear_CASE(10)
		UnOrderedMultiMap_Clear_CASE(11)
		UnOrderedMultiMap_Clear_CASE(12)
		UnOrderedMultiMap_Clear_CASE(13)
		UnOrderedMultiMap_Clear_CASE(14)
		UnOrderedMultiMap_Clear_CASE(15)
		UnOrderedMultiMap_Clear_CASE(16)
		UnOrderedMultiMap_Clear_CASE(17)
		UnOrderedMultiMap_Clear_CASE(18)
		UnOrderedMultiMap_Clear_CASE(19)
		UnOrderedMultiMap_Clear_CASE(20)
		UnOrderedMultiMap_Clear_CASE(21)
		UnOrderedMultiMap_Clear_CASE(22)
		UnOrderedMultiMap_Clear_CASE(23)
		UnOrderedMultiMap_Clear_CASE(24)
		UnOrderedMultiMap_Clear_CASE(25)
		UnOrderedMultiMap_Clear_CASE(26)
		UnOrderedMultiMap_Clear_CASE(27)
		UnOrderedMultiMap_Clear_CASE(28)
		UnOrderedMultiMap_Clear_CASE(29)
		UnOrderedMultiMap_Clear_CASE(30)
		UnOrderedMultiMap_Clear_CASE(31)
		UnOrderedMultiMap_Clear_CASE(32)
		UnOrderedMultiMap_Clear_CASE(33)
		UnOrderedMultiMap_Clear_CASE(34)
		UnOrderedMultiMap_Clear_CASE(35)
		UnOrderedMultiMap_Clear_CASE(36)
		UnOrderedMultiMap_Clear_CASE(37)
		UnOrderedMultiMap_Clear_CASE(38)
		UnOrderedMultiMap_Clear_CASE(39)
		UnOrderedMultiMap_Clear_CASE(40)
		UnOrderedMultiMap_Clear_CASE(41)
		UnOrderedMultiMap_Clear_CASE(42)
		UnOrderedMultiMap_Clear_CASE(43)
		UnOrderedMultiMap_Clear_CASE(44)
		UnOrderedMultiMap_Clear_CASE(45)
		UnOrderedMultiMap_Clear_CASE(46)
		UnOrderedMultiMap_Clear_CASE(47)
		UnOrderedMultiMap_Clear_CASE(48)
		UnOrderedMultiMap_Clear_CASE(49)
		UnOrderedMultiMap_Clear_CASE(50)
		UnOrderedMultiMap_Clear_CASE(51)
		UnOrderedMultiMap_Clear_CASE(52)
		UnOrderedMultiMap_Clear_CASE(53)
		UnOrderedMultiMap_Clear_CASE(54)
		UnOrderedMultiMap_Clear_CASE(55)
		UnOrderedMultiMap_Clear_CASE(56)
		UnOrderedMultiMap_Clear_CASE(57)
		UnOrderedMultiMap_Clear_CASE(58)
		UnOrderedMultiMap_Clear_CASE(59)
		UnOrderedMultiMap_Clear_CASE(60)
		UnOrderedMultiMap_Clear_CASE(61)
		UnOrderedMultiMap_Clear_CASE(62)
		UnOrderedMultiMap_Clear_CASE(63)
		UnOrderedMultiMap_Clear_CASE(64)
		UnOrderedMultiMap_Clear_CASE(65)
		UnOrderedMultiMap_Clear_CASE(66)
		UnOrderedMultiMap_Clear_CASE(67)
		UnOrderedMultiMap_Clear_CASE(68)
		UnOrderedMultiMap_Clear_CASE(69)
		UnOrderedMultiMap_Clear_CASE(70)
		UnOrderedMultiMap_Clear_CASE(71)
		UnOrderedMultiMap_Clear_CASE(72)
		UnOrderedMultiMap_Clear_CASE(73)
		UnOrderedMultiMap_Clear_CASE(74)
		UnOrderedMultiMap_Clear_CASE(75)
		UnOrderedMultiMap_Clear_CASE(76)
		UnOrderedMultiMap_Clear_CASE(77)
		UnOrderedMultiMap_Clear_CASE(78)
		UnOrderedMultiMap_Clear_CASE(79)
		UnOrderedMultiMap_Clear_CASE(80)
		UnOrderedMultiMap_Clear_CASE(81)
		UnOrderedMultiMap_Clear_CASE(82)
		UnOrderedMultiMap_Clear_CASE(83)
		UnOrderedMultiMap_Clear_CASE(84)
		UnOrderedMultiMap_Clear_CASE(85)
		UnOrderedMultiMap_Clear_CASE(86)
		UnOrderedMultiMap_Clear_CASE(87)
		UnOrderedMultiMap_Clear_CASE(88)
		UnOrderedMultiMap_Clear_CASE(89)
		UnOrderedMultiMap_Clear_CASE(90)
		UnOrderedMultiMap_Clear_CASE(91)
		UnOrderedMultiMap_Clear_CASE(92)
		UnOrderedMultiMap_Clear_CASE(93)
		UnOrderedMultiMap_Clear_CASE(94)
		UnOrderedMultiMap_Clear_CASE(95)
		UnOrderedMultiMap_Clear_CASE(96)
		UnOrderedMultiMap_Clear_CASE(97)
		UnOrderedMultiMap_Clear_CASE(98)
		UnOrderedMultiMap_Clear_CASE(99)
		UnOrderedMultiMap_Clear_CASE(100)
		UnOrderedMultiMap_Clear_CASE(101)
		UnOrderedMultiMap_Clear_CASE(102)
		UnOrderedMultiMap_Clear_CASE(103)
		UnOrderedMultiMap_Clear_CASE(104)
		UnOrderedMultiMap_Clear_CASE(105)
		UnOrderedMultiMap_Clear_CASE(106)
		UnOrderedMultiMap_Clear_CASE(107)
		UnOrderedMultiMap_Clear_CASE(108)
		UnOrderedMultiMap_Clear_CASE(109)
		UnOrderedMultiMap_Clear_CASE(110)
		UnOrderedMultiMap_Clear_CASE(111)
		UnOrderedMultiMap_Clear_CASE(112)
		UnOrderedMultiMap_Clear_CASE(113)
		UnOrderedMultiMap_Clear_CASE(114)
		UnOrderedMultiMap_Clear_CASE(115)
		UnOrderedMultiMap_Clear_CASE(116)
		UnOrderedMultiMap_Clear_CASE(117)
		UnOrderedMultiMap_Clear_CASE(118)
		UnOrderedMultiMap_Clear_CASE(119)
		UnOrderedMultiMap_Clear_CASE(120)
		UnOrderedMultiMap_Clear_CASE(121)
		UnOrderedMultiMap_Clear_CASE(122)
		UnOrderedMultiMap_Clear_CASE(123)
		UnOrderedMultiMap_Clear_CASE(124)
		UnOrderedMultiMap_Clear_CASE(125)
		UnOrderedMultiMap_Clear_CASE(126)
		UnOrderedMultiMap_Clear_CASE(127)
		UnOrderedMultiMap_Clear_CASE(128)
		UnOrderedMultiMap_Clear_CASE(129)
		UnOrderedMultiMap_Clear_CASE(130)
		UnOrderedMultiMap_Clear_CASE(131)
		UnOrderedMultiMap_Clear_CASE(132)
		UnOrderedMultiMap_Clear_CASE(133)
		UnOrderedMultiMap_Clear_CASE(134)
		UnOrderedMultiMap_Clear_CASE(135)
		UnOrderedMultiMap_Clear_CASE(136)
		UnOrderedMultiMap_Clear_CASE(137)
		UnOrderedMultiMap_Clear_CASE(138)
		UnOrderedMultiMap_Clear_CASE(139)
		UnOrderedMultiMap_Clear_CASE(140)
		UnOrderedMultiMap_Clear_CASE(141)
		UnOrderedMultiMap_Clear_CASE(142)
		UnOrderedMultiMap_Clear_CASE(143)
		UnOrderedMultiMap_Clear_CASE(144)
		UnOrderedMultiMap_Clear_CASE(145)
		UnOrderedMultiMap_Clear_CASE(146)
		UnOrderedMultiMap_Clear_CASE(147)
		UnOrderedMultiMap_Clear_CASE(148)
		UnOrderedMultiMap_Clear_CASE(149)
		UnOrderedMultiMap_Clear_CASE(150)
		UnOrderedMultiMap_Clear_CASE(151)
		UnOrderedMultiMap_Clear_CASE(152)
		UnOrderedMultiMap_Clear_CASE(153)
		UnOrderedMultiMap_Clear_CASE(154)
		UnOrderedMultiMap_Clear_CASE(155)
		UnOrderedMultiMap_Clear_CASE(156)
		UnOrderedMultiMap_Clear_CASE(157)
		UnOrderedMultiMap_Clear_CASE(158)
		UnOrderedMultiMap_Clear_CASE(159)
		UnOrderedMultiMap_Clear_CASE(160)
		UnOrderedMultiMap_Clear_CASE(161)
		UnOrderedMultiMap_Clear_CASE(162)
		UnOrderedMultiMap_Clear_CASE(163)
		UnOrderedMultiMap_Clear_CASE(164)
		UnOrderedMultiMap_Clear_CASE(165)
		UnOrderedMultiMap_Clear_CASE(166)
		UnOrderedMultiMap_Clear_CASE(167)
		UnOrderedMultiMap_Clear_CASE(168)
		UnOrderedMultiMap_Clear_CASE(169)
		UnOrderedMultiMap_Clear_CASE(170)
		UnOrderedMultiMap_Clear_CASE(171)
		UnOrderedMultiMap_Clear_CASE(172)
		UnOrderedMultiMap_Clear_CASE(173)
		UnOrderedMultiMap_Clear_CASE(174)
		UnOrderedMultiMap_Clear_CASE(175)
		UnOrderedMultiMap_Clear_CASE(176)
		UnOrderedMultiMap_Clear_CASE(177)
		UnOrderedMultiMap_Clear_CASE(178)
		UnOrderedMultiMap_Clear_CASE(179)
		UnOrderedMultiMap_Clear_CASE(180)
		UnOrderedMultiMap_Clear_CASE(181)
		UnOrderedMultiMap_Clear_CASE(182)
		UnOrderedMultiMap_Clear_CASE(183)
		UnOrderedMultiMap_Clear_CASE(184)
		UnOrderedMultiMap_Clear_CASE(185)
		UnOrderedMultiMap_Clear_CASE(186)
		UnOrderedMultiMap_Clear_CASE(187)
		UnOrderedMultiMap_Clear_CASE(188)
		UnOrderedMultiMap_Clear_CASE(189)
		UnOrderedMultiMap_Clear_CASE(190)
		UnOrderedMultiMap_Clear_CASE(191)
		UnOrderedMultiMap_Clear_CASE(192)
		UnOrderedMultiMap_Clear_CASE(193)
		UnOrderedMultiMap_Clear_CASE(194)
		UnOrderedMultiMap_Clear_CASE(195)
		UnOrderedMultiMap_Clear_CASE(196)
	}
	if (gKeyClassDictionary)
	{
		gKeyClassDictionary->Clear();
	}
	if (gIntKeyClassDictionary)
	{
		gIntKeyClassDictionary->Clear();
	}
	if (gValueClassDictionary)
	{
		gValueClassDictionary->Clear();
	}
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::emplace(Key key, Value value)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			System::Object^ managedObject = safe_cast<System::Object^>(key);
			Key__Int = static_cast<__int64>(Convert::ToInt64(managedObject));
			gKeyClassDictionary->Add(key, Key__Int);
			gIntKeyClassDictionary->Add(Key__Int, key);
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->emplace(KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->emplace(KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->emplace(KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->emplace(KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->emplace(KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->emplace(KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->emplace(KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->emplace(KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->emplace(KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->emplace(KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->emplace(KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->emplace(KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->emplace(KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->emplace(KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->emplace(KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->emplace(KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->emplace(KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->emplace(KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->emplace(KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->emplace(KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->emplace(KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->emplace(KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->emplace(KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->emplace(KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->emplace(KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->emplace(KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->emplace(KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->emplace(KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->emplace(KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->emplace(KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->emplace(KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->emplace(KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->emplace(KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->emplace(KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->emplace(KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->emplace(KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->emplace(KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->emplace(KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->emplace(KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->emplace(KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->emplace(KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->emplace(KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->emplace(KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->emplace(KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->emplace(KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->emplace(KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->emplace(KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->emplace(KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->emplace(KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->emplace(KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->emplace(KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->emplace(KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->emplace(KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->emplace(KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->emplace(KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->emplace(KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->emplace(KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->emplace(KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->emplace(KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->emplace(KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->emplace(KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->emplace(KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->emplace(KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->emplace(KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->emplace(KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->emplace(KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->emplace(KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->emplace(KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->emplace(KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->emplace(KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->emplace(KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->emplace(KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->emplace(KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->emplace(KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->emplace(KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->emplace(KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->emplace(KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->emplace(KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->emplace(KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->emplace(KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->emplace(KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->emplace(KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->emplace(KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->emplace(KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->emplace(KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->emplace(KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->emplace(KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->emplace(KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->emplace(KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->emplace(KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->emplace(KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->emplace(KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->emplace(KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->emplace(KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->emplace(KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->emplace(KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->emplace(KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->emplace(KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->emplace(KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->emplace(KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->emplace(KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->emplace(KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->emplace(KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->emplace(KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->emplace(KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->emplace(KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->emplace(KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->emplace(KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->emplace(KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->emplace(KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->emplace(KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->emplace(KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->emplace(KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->emplace(KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->emplace(KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->emplace(KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->emplace(KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->emplace(KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->emplace(KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->emplace(KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->emplace(KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->emplace(KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->emplace(KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->emplace(KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->emplace(KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->emplace(KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->emplace(KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->emplace(KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->emplace(KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->emplace(KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->emplace(KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->emplace(KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->emplace(KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->emplace(KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->emplace(KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->emplace(KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->emplace(KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->emplace(KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->emplace(KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->emplace(KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->emplace(KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->emplace(KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->emplace(KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->emplace(KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->emplace(KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->emplace(KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->emplace(KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->emplace(KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->emplace(KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->emplace(KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->emplace(KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->emplace(KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->emplace(KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->emplace(KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->emplace(KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->emplace(KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->emplace(KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->emplace(KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->emplace(KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->emplace(KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->emplace(KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->emplace(KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->emplace(KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->emplace(KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->emplace(KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->emplace(KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->emplace(KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->emplace(KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->emplace(KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->emplace(KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->emplace(KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->emplace(KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->emplace(KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->emplace(KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->emplace(KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->emplace(KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->emplace(KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->emplace(KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->emplace(KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->emplace(KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->emplace(KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->emplace(KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->emplace(Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->emplace(Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->emplace(Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->emplace(Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->emplace(Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->emplace(Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->emplace(Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->emplace(Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->emplace(Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->emplace(Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->emplace(Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->emplace(Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->emplace(Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->emplace(Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

#define UnOrderedMultiMap_Size_CASE(NUM) \
	case NUM: \
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap##NUM->size());

generic<typename Key, typename Value>
System::UInt64 UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::size()
{
	switch (nKeyValueType)
	{
	case 0:	default:
		return 0;
		UnOrderedMultiMap_Size_CASE(1)
		UnOrderedMultiMap_Size_CASE(2)
		UnOrderedMultiMap_Size_CASE(3)
		UnOrderedMultiMap_Size_CASE(4)
		UnOrderedMultiMap_Size_CASE(5)
		UnOrderedMultiMap_Size_CASE(6)
		UnOrderedMultiMap_Size_CASE(7)
		UnOrderedMultiMap_Size_CASE(8)
		UnOrderedMultiMap_Size_CASE(9)
		UnOrderedMultiMap_Size_CASE(10)
		UnOrderedMultiMap_Size_CASE(11)
		UnOrderedMultiMap_Size_CASE(12)
		UnOrderedMultiMap_Size_CASE(13)
		UnOrderedMultiMap_Size_CASE(14)
		UnOrderedMultiMap_Size_CASE(15)
		UnOrderedMultiMap_Size_CASE(16)
		UnOrderedMultiMap_Size_CASE(17)
		UnOrderedMultiMap_Size_CASE(18)
		UnOrderedMultiMap_Size_CASE(19)
		UnOrderedMultiMap_Size_CASE(20)
		UnOrderedMultiMap_Size_CASE(21)
		UnOrderedMultiMap_Size_CASE(22)
		UnOrderedMultiMap_Size_CASE(23)
		UnOrderedMultiMap_Size_CASE(24)
		UnOrderedMultiMap_Size_CASE(25)
		UnOrderedMultiMap_Size_CASE(26)
		UnOrderedMultiMap_Size_CASE(27)
		UnOrderedMultiMap_Size_CASE(28)
		UnOrderedMultiMap_Size_CASE(29)
		UnOrderedMultiMap_Size_CASE(30)
		UnOrderedMultiMap_Size_CASE(31)
		UnOrderedMultiMap_Size_CASE(32)
		UnOrderedMultiMap_Size_CASE(33)
		UnOrderedMultiMap_Size_CASE(34)
		UnOrderedMultiMap_Size_CASE(35)
		UnOrderedMultiMap_Size_CASE(36)
		UnOrderedMultiMap_Size_CASE(37)
		UnOrderedMultiMap_Size_CASE(38)
		UnOrderedMultiMap_Size_CASE(39)
		UnOrderedMultiMap_Size_CASE(40)
		UnOrderedMultiMap_Size_CASE(41)
		UnOrderedMultiMap_Size_CASE(42)
		UnOrderedMultiMap_Size_CASE(43)
		UnOrderedMultiMap_Size_CASE(44)
		UnOrderedMultiMap_Size_CASE(45)
		UnOrderedMultiMap_Size_CASE(46)
		UnOrderedMultiMap_Size_CASE(47)
		UnOrderedMultiMap_Size_CASE(48)
		UnOrderedMultiMap_Size_CASE(49)
		UnOrderedMultiMap_Size_CASE(50)
		UnOrderedMultiMap_Size_CASE(51)
		UnOrderedMultiMap_Size_CASE(52)
		UnOrderedMultiMap_Size_CASE(53)
		UnOrderedMultiMap_Size_CASE(54)
		UnOrderedMultiMap_Size_CASE(55)
		UnOrderedMultiMap_Size_CASE(56)
		UnOrderedMultiMap_Size_CASE(57)
		UnOrderedMultiMap_Size_CASE(58)
		UnOrderedMultiMap_Size_CASE(59)
		UnOrderedMultiMap_Size_CASE(60)
		UnOrderedMultiMap_Size_CASE(61)
		UnOrderedMultiMap_Size_CASE(62)
		UnOrderedMultiMap_Size_CASE(63)
		UnOrderedMultiMap_Size_CASE(64)
		UnOrderedMultiMap_Size_CASE(65)
		UnOrderedMultiMap_Size_CASE(66)
		UnOrderedMultiMap_Size_CASE(67)
		UnOrderedMultiMap_Size_CASE(68)
		UnOrderedMultiMap_Size_CASE(69)
		UnOrderedMultiMap_Size_CASE(70)
		UnOrderedMultiMap_Size_CASE(71)
		UnOrderedMultiMap_Size_CASE(72)
		UnOrderedMultiMap_Size_CASE(73)
		UnOrderedMultiMap_Size_CASE(74)
		UnOrderedMultiMap_Size_CASE(75)
		UnOrderedMultiMap_Size_CASE(76)
		UnOrderedMultiMap_Size_CASE(77)
		UnOrderedMultiMap_Size_CASE(78)
		UnOrderedMultiMap_Size_CASE(79)
		UnOrderedMultiMap_Size_CASE(80)
		UnOrderedMultiMap_Size_CASE(81)
		UnOrderedMultiMap_Size_CASE(82)
		UnOrderedMultiMap_Size_CASE(83)
		UnOrderedMultiMap_Size_CASE(84)
		UnOrderedMultiMap_Size_CASE(85)
		UnOrderedMultiMap_Size_CASE(86)
		UnOrderedMultiMap_Size_CASE(87)
		UnOrderedMultiMap_Size_CASE(88)
		UnOrderedMultiMap_Size_CASE(89)
		UnOrderedMultiMap_Size_CASE(90)
		UnOrderedMultiMap_Size_CASE(91)
		UnOrderedMultiMap_Size_CASE(92)
		UnOrderedMultiMap_Size_CASE(93)
		UnOrderedMultiMap_Size_CASE(94)
		UnOrderedMultiMap_Size_CASE(95)
		UnOrderedMultiMap_Size_CASE(96)
		UnOrderedMultiMap_Size_CASE(97)
		UnOrderedMultiMap_Size_CASE(98)
		UnOrderedMultiMap_Size_CASE(99)
		UnOrderedMultiMap_Size_CASE(100)
		UnOrderedMultiMap_Size_CASE(101)
		UnOrderedMultiMap_Size_CASE(102)
		UnOrderedMultiMap_Size_CASE(103)
		UnOrderedMultiMap_Size_CASE(104)
		UnOrderedMultiMap_Size_CASE(105)
		UnOrderedMultiMap_Size_CASE(106)
		UnOrderedMultiMap_Size_CASE(107)
		UnOrderedMultiMap_Size_CASE(108)
		UnOrderedMultiMap_Size_CASE(109)
		UnOrderedMultiMap_Size_CASE(110)
		UnOrderedMultiMap_Size_CASE(111)
		UnOrderedMultiMap_Size_CASE(112)
		UnOrderedMultiMap_Size_CASE(113)
		UnOrderedMultiMap_Size_CASE(114)
		UnOrderedMultiMap_Size_CASE(115)
		UnOrderedMultiMap_Size_CASE(116)
		UnOrderedMultiMap_Size_CASE(117)
		UnOrderedMultiMap_Size_CASE(118)
		UnOrderedMultiMap_Size_CASE(119)
		UnOrderedMultiMap_Size_CASE(120)
		UnOrderedMultiMap_Size_CASE(121)
		UnOrderedMultiMap_Size_CASE(122)
		UnOrderedMultiMap_Size_CASE(123)
		UnOrderedMultiMap_Size_CASE(124)
		UnOrderedMultiMap_Size_CASE(125)
		UnOrderedMultiMap_Size_CASE(126)
		UnOrderedMultiMap_Size_CASE(127)
		UnOrderedMultiMap_Size_CASE(128)
		UnOrderedMultiMap_Size_CASE(129)
		UnOrderedMultiMap_Size_CASE(130)
		UnOrderedMultiMap_Size_CASE(131)
		UnOrderedMultiMap_Size_CASE(132)
		UnOrderedMultiMap_Size_CASE(133)
		UnOrderedMultiMap_Size_CASE(134)
		UnOrderedMultiMap_Size_CASE(135)
		UnOrderedMultiMap_Size_CASE(136)
		UnOrderedMultiMap_Size_CASE(137)
		UnOrderedMultiMap_Size_CASE(138)
		UnOrderedMultiMap_Size_CASE(139)
		UnOrderedMultiMap_Size_CASE(140)
		UnOrderedMultiMap_Size_CASE(141)
		UnOrderedMultiMap_Size_CASE(142)
		UnOrderedMultiMap_Size_CASE(143)
		UnOrderedMultiMap_Size_CASE(144)
		UnOrderedMultiMap_Size_CASE(145)
		UnOrderedMultiMap_Size_CASE(146)
		UnOrderedMultiMap_Size_CASE(147)
		UnOrderedMultiMap_Size_CASE(148)
		UnOrderedMultiMap_Size_CASE(149)
		UnOrderedMultiMap_Size_CASE(150)
		UnOrderedMultiMap_Size_CASE(151)
		UnOrderedMultiMap_Size_CASE(152)
		UnOrderedMultiMap_Size_CASE(153)
		UnOrderedMultiMap_Size_CASE(154)
		UnOrderedMultiMap_Size_CASE(155)
		UnOrderedMultiMap_Size_CASE(156)
		UnOrderedMultiMap_Size_CASE(157)
		UnOrderedMultiMap_Size_CASE(158)
		UnOrderedMultiMap_Size_CASE(159)
		UnOrderedMultiMap_Size_CASE(160)
		UnOrderedMultiMap_Size_CASE(161)
		UnOrderedMultiMap_Size_CASE(162)
		UnOrderedMultiMap_Size_CASE(163)
		UnOrderedMultiMap_Size_CASE(164)
		UnOrderedMultiMap_Size_CASE(165)
		UnOrderedMultiMap_Size_CASE(166)
		UnOrderedMultiMap_Size_CASE(167)
		UnOrderedMultiMap_Size_CASE(168)
		UnOrderedMultiMap_Size_CASE(169)
		UnOrderedMultiMap_Size_CASE(170)
		UnOrderedMultiMap_Size_CASE(171)
		UnOrderedMultiMap_Size_CASE(172)
		UnOrderedMultiMap_Size_CASE(173)
		UnOrderedMultiMap_Size_CASE(174)
		UnOrderedMultiMap_Size_CASE(175)
		UnOrderedMultiMap_Size_CASE(176)
		UnOrderedMultiMap_Size_CASE(177)
		UnOrderedMultiMap_Size_CASE(178)
		UnOrderedMultiMap_Size_CASE(179)
		UnOrderedMultiMap_Size_CASE(180)
		UnOrderedMultiMap_Size_CASE(181)
		UnOrderedMultiMap_Size_CASE(182)
		UnOrderedMultiMap_Size_CASE(183)
		UnOrderedMultiMap_Size_CASE(184)
		UnOrderedMultiMap_Size_CASE(185)
		UnOrderedMultiMap_Size_CASE(186)
		UnOrderedMultiMap_Size_CASE(187)
		UnOrderedMultiMap_Size_CASE(188)
		UnOrderedMultiMap_Size_CASE(189)
		UnOrderedMultiMap_Size_CASE(190)
		UnOrderedMultiMap_Size_CASE(191)
		UnOrderedMultiMap_Size_CASE(192)
		UnOrderedMultiMap_Size_CASE(193)
		UnOrderedMultiMap_Size_CASE(194)
		UnOrderedMultiMap_Size_CASE(195)
		UnOrderedMultiMap_Size_CASE(196)
	}
	return 0;
}

#define UnOrderedMultiMap_Count_CASE(NUM, KeyType) \
	case NUM: \
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap##NUM->count(KeyType));

generic<typename Key, typename Value>
System::UInt64 UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::count(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return 0;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}

	switch (nKeyValueType)
	{
	case 0:	default:
		return 0;
		UnOrderedMultiMap_Count_CASE(1, KeyUchar)
		UnOrderedMultiMap_Count_CASE(2, KeyUchar)
		UnOrderedMultiMap_Count_CASE(3, KeyUchar)
		UnOrderedMultiMap_Count_CASE(4, KeyUchar)
		UnOrderedMultiMap_Count_CASE(5, KeyUchar)
		UnOrderedMultiMap_Count_CASE(6, KeyUchar)
		UnOrderedMultiMap_Count_CASE(7, KeyUchar)
		UnOrderedMultiMap_Count_CASE(8, KeyUchar)
		UnOrderedMultiMap_Count_CASE(9, KeyUchar)
		UnOrderedMultiMap_Count_CASE(10, KeyUchar)
		UnOrderedMultiMap_Count_CASE(11, KeyUchar)
		UnOrderedMultiMap_Count_CASE(12, KeyUchar)
		UnOrderedMultiMap_Count_CASE(13, KeyUchar)
		UnOrderedMultiMap_Count_CASE(14, KeyUchar)
		UnOrderedMultiMap_Count_CASE(15, KeyChar)
		UnOrderedMultiMap_Count_CASE(16, KeyChar)
		UnOrderedMultiMap_Count_CASE(17, KeyChar)
		UnOrderedMultiMap_Count_CASE(18, KeyChar)
		UnOrderedMultiMap_Count_CASE(19, KeyChar)
		UnOrderedMultiMap_Count_CASE(20, KeyChar)
		UnOrderedMultiMap_Count_CASE(21, KeyChar)
		UnOrderedMultiMap_Count_CASE(22, KeyChar)
		UnOrderedMultiMap_Count_CASE(23, KeyChar)
		UnOrderedMultiMap_Count_CASE(24, KeyChar)
		UnOrderedMultiMap_Count_CASE(25, KeyChar)
		UnOrderedMultiMap_Count_CASE(26, KeyChar)
		UnOrderedMultiMap_Count_CASE(27, KeyChar)
		UnOrderedMultiMap_Count_CASE(28, KeyChar)
		UnOrderedMultiMap_Count_CASE(29, KeyShort)
		UnOrderedMultiMap_Count_CASE(30, KeyShort)
		UnOrderedMultiMap_Count_CASE(31, KeyShort)
		UnOrderedMultiMap_Count_CASE(32, KeyShort)
		UnOrderedMultiMap_Count_CASE(33, KeyShort)
		UnOrderedMultiMap_Count_CASE(34, KeyShort)
		UnOrderedMultiMap_Count_CASE(35, KeyShort)
		UnOrderedMultiMap_Count_CASE(36, KeyShort)
		UnOrderedMultiMap_Count_CASE(37, KeyShort)
		UnOrderedMultiMap_Count_CASE(38, KeyShort)
		UnOrderedMultiMap_Count_CASE(39, KeyShort)
		UnOrderedMultiMap_Count_CASE(40, KeyShort)
		UnOrderedMultiMap_Count_CASE(41, KeyShort)
		UnOrderedMultiMap_Count_CASE(42, KeyShort)
		UnOrderedMultiMap_Count_CASE(43, KeyUshort)
		UnOrderedMultiMap_Count_CASE(44, KeyUshort)
		UnOrderedMultiMap_Count_CASE(45, KeyUshort)
		UnOrderedMultiMap_Count_CASE(46, KeyUshort)
		UnOrderedMultiMap_Count_CASE(47, KeyUshort)
		UnOrderedMultiMap_Count_CASE(48, KeyUshort)
		UnOrderedMultiMap_Count_CASE(49, KeyUshort)
		UnOrderedMultiMap_Count_CASE(50, KeyUshort)
		UnOrderedMultiMap_Count_CASE(51, KeyUshort)
		UnOrderedMultiMap_Count_CASE(52, KeyUshort)
		UnOrderedMultiMap_Count_CASE(53, KeyUshort)
		UnOrderedMultiMap_Count_CASE(54, KeyUshort)
		UnOrderedMultiMap_Count_CASE(55, KeyUshort)
		UnOrderedMultiMap_Count_CASE(56, KeyUshort)
		UnOrderedMultiMap_Count_CASE(57, KeyInt)
		UnOrderedMultiMap_Count_CASE(58, KeyInt)
		UnOrderedMultiMap_Count_CASE(59, KeyInt)
		UnOrderedMultiMap_Count_CASE(60, KeyInt)
		UnOrderedMultiMap_Count_CASE(61, KeyInt)
		UnOrderedMultiMap_Count_CASE(62, KeyInt)
		UnOrderedMultiMap_Count_CASE(63, KeyInt)
		UnOrderedMultiMap_Count_CASE(64, KeyInt)
		UnOrderedMultiMap_Count_CASE(65, KeyInt)
		UnOrderedMultiMap_Count_CASE(66, KeyInt)
		UnOrderedMultiMap_Count_CASE(67, KeyInt)
		UnOrderedMultiMap_Count_CASE(68, KeyInt)
		UnOrderedMultiMap_Count_CASE(69, KeyInt)
		UnOrderedMultiMap_Count_CASE(70, KeyInt)
		UnOrderedMultiMap_Count_CASE(71, KeyUint)
		UnOrderedMultiMap_Count_CASE(72, KeyUint)
		UnOrderedMultiMap_Count_CASE(73, KeyUint)
		UnOrderedMultiMap_Count_CASE(74, KeyUint)
		UnOrderedMultiMap_Count_CASE(75, KeyUint)
		UnOrderedMultiMap_Count_CASE(76, KeyUint)
		UnOrderedMultiMap_Count_CASE(77, KeyUint)
		UnOrderedMultiMap_Count_CASE(78, KeyUint)
		UnOrderedMultiMap_Count_CASE(79, KeyUint)
		UnOrderedMultiMap_Count_CASE(80, KeyUint)
		UnOrderedMultiMap_Count_CASE(81, KeyUint)
		UnOrderedMultiMap_Count_CASE(82, KeyUint)
		UnOrderedMultiMap_Count_CASE(83, KeyUint)
		UnOrderedMultiMap_Count_CASE(84, KeyUint)
		UnOrderedMultiMap_Count_CASE(85, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(86, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(87, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(88, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(89, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(90, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(91, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(92, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(93, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(94, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(95, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(96, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(97, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(98, KeyLonglong)
		UnOrderedMultiMap_Count_CASE(99, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(100, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(101, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(102, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(103, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(104, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(105, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(106, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(107, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(108, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(109, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(110, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(111, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(112, KeyUlonglong)
		UnOrderedMultiMap_Count_CASE(113, KeyFloat)
		UnOrderedMultiMap_Count_CASE(114, KeyFloat)
		UnOrderedMultiMap_Count_CASE(115, KeyFloat)
		UnOrderedMultiMap_Count_CASE(116, KeyFloat)
		UnOrderedMultiMap_Count_CASE(117, KeyFloat)
		UnOrderedMultiMap_Count_CASE(118, KeyFloat)
		UnOrderedMultiMap_Count_CASE(119, KeyFloat)
		UnOrderedMultiMap_Count_CASE(120, KeyFloat)
		UnOrderedMultiMap_Count_CASE(121, KeyFloat)
		UnOrderedMultiMap_Count_CASE(122, KeyFloat)
		UnOrderedMultiMap_Count_CASE(123, KeyFloat)
		UnOrderedMultiMap_Count_CASE(124, KeyFloat)
		UnOrderedMultiMap_Count_CASE(125, KeyFloat)
		UnOrderedMultiMap_Count_CASE(126, KeyFloat)
		UnOrderedMultiMap_Count_CASE(127, KeyDouble)
		UnOrderedMultiMap_Count_CASE(128, KeyDouble)
		UnOrderedMultiMap_Count_CASE(129, KeyDouble)
		UnOrderedMultiMap_Count_CASE(130, KeyDouble)
		UnOrderedMultiMap_Count_CASE(131, KeyDouble)
		UnOrderedMultiMap_Count_CASE(132, KeyDouble)
		UnOrderedMultiMap_Count_CASE(133, KeyDouble)
		UnOrderedMultiMap_Count_CASE(134, KeyDouble)
		UnOrderedMultiMap_Count_CASE(135, KeyDouble)
		UnOrderedMultiMap_Count_CASE(136, KeyDouble)
		UnOrderedMultiMap_Count_CASE(137, KeyDouble)
		UnOrderedMultiMap_Count_CASE(138, KeyDouble)
		UnOrderedMultiMap_Count_CASE(139, KeyDouble)
		UnOrderedMultiMap_Count_CASE(140, KeyDouble)
		UnOrderedMultiMap_Count_CASE(141, KeyWchar)
		UnOrderedMultiMap_Count_CASE(142, KeyWchar)
		UnOrderedMultiMap_Count_CASE(143, KeyWchar)
		UnOrderedMultiMap_Count_CASE(144, KeyWchar)
		UnOrderedMultiMap_Count_CASE(145, KeyWchar)
		UnOrderedMultiMap_Count_CASE(146, KeyWchar)
		UnOrderedMultiMap_Count_CASE(147, KeyWchar)
		UnOrderedMultiMap_Count_CASE(148, KeyWchar)
		UnOrderedMultiMap_Count_CASE(149, KeyWchar)
		UnOrderedMultiMap_Count_CASE(150, KeyWchar)
		UnOrderedMultiMap_Count_CASE(151, KeyWchar)
		UnOrderedMultiMap_Count_CASE(152, KeyWchar)
		UnOrderedMultiMap_Count_CASE(153, KeyWchar)
		UnOrderedMultiMap_Count_CASE(154, KeyWchar)
		UnOrderedMultiMap_Count_CASE(155, KeyBool)
		UnOrderedMultiMap_Count_CASE(156, KeyBool)
		UnOrderedMultiMap_Count_CASE(157, KeyBool)
		UnOrderedMultiMap_Count_CASE(158, KeyBool)
		UnOrderedMultiMap_Count_CASE(159, KeyBool)
		UnOrderedMultiMap_Count_CASE(160, KeyBool)
		UnOrderedMultiMap_Count_CASE(161, KeyBool)
		UnOrderedMultiMap_Count_CASE(162, KeyBool)
		UnOrderedMultiMap_Count_CASE(163, KeyBool)
		UnOrderedMultiMap_Count_CASE(164, KeyBool)
		UnOrderedMultiMap_Count_CASE(165, KeyBool)
		UnOrderedMultiMap_Count_CASE(166, KeyBool)
		UnOrderedMultiMap_Count_CASE(167, KeyBool)
		UnOrderedMultiMap_Count_CASE(168, KeyBool)
		UnOrderedMultiMap_Count_CASE(169, KeyWstring)
		UnOrderedMultiMap_Count_CASE(170, KeyWstring)
		UnOrderedMultiMap_Count_CASE(171, KeyWstring)
		UnOrderedMultiMap_Count_CASE(172, KeyWstring)
		UnOrderedMultiMap_Count_CASE(173, KeyWstring)
		UnOrderedMultiMap_Count_CASE(174, KeyWstring)
		UnOrderedMultiMap_Count_CASE(175, KeyWstring)
		UnOrderedMultiMap_Count_CASE(176, KeyWstring)
		UnOrderedMultiMap_Count_CASE(177, KeyWstring)
		UnOrderedMultiMap_Count_CASE(178, KeyWstring)
		UnOrderedMultiMap_Count_CASE(179, KeyWstring)
		UnOrderedMultiMap_Count_CASE(180, KeyWstring)
		UnOrderedMultiMap_Count_CASE(181, KeyWstring)
		UnOrderedMultiMap_Count_CASE(182, KeyWstring)
		UnOrderedMultiMap_Count_CASE(183, Key__Int)
		UnOrderedMultiMap_Count_CASE(184, Key__Int)
		UnOrderedMultiMap_Count_CASE(185, Key__Int)
		UnOrderedMultiMap_Count_CASE(186, Key__Int)
		UnOrderedMultiMap_Count_CASE(187, Key__Int)
		UnOrderedMultiMap_Count_CASE(188, Key__Int)
		UnOrderedMultiMap_Count_CASE(189, Key__Int)
		UnOrderedMultiMap_Count_CASE(190, Key__Int)
		UnOrderedMultiMap_Count_CASE(191, Key__Int)
		UnOrderedMultiMap_Count_CASE(192, Key__Int)
		UnOrderedMultiMap_Count_CASE(193, Key__Int)
		UnOrderedMultiMap_Count_CASE(194, Key__Int)
		UnOrderedMultiMap_Count_CASE(195, Key__Int)
		UnOrderedMultiMap_Count_CASE(196, Key__Int)
	}

	return 0;
}

generic<typename Key, typename Value>
System::UInt64 UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return 0;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}

	if (183 <= nKeyValueType && nKeyValueType <= 196)
	{
		if (gKeyClassDictionary && gIntKeyClassDictionary)
		{
			Key temp;
			gIntKeyClassDictionary->TryGetValue(Key__Int, temp);
			gIntKeyClassDictionary->Remove(Key__Int);
			gKeyClassDictionary->Remove(temp);
		}
	}

	switch (nKeyValueType)
	{
	case 0:	default:
		return 0;
	case 1:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap1->erase(KeyUchar));
	case 2:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap2->erase(KeyUchar));
	case 3:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap3->erase(KeyUchar));
	case 4:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap4->erase(KeyUchar));
	case 5:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap5->erase(KeyUchar));
	case 6:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap6->erase(KeyUchar));
	case 7:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap7->erase(KeyUchar));
	case 8:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap8->erase(KeyUchar));
	case 9:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap9->erase(KeyUchar));
	case 10:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap10->erase(KeyUchar));
	case 11:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap11->erase(KeyUchar));
	case 12:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap12->erase(KeyUchar));
	case 13:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap13->erase(KeyUchar));
	case 14:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap14->equal_range(KeyUchar); iter != multimapUnion->CPPmultimap14->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap14->erase(KeyUchar));
	case 15:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap15->erase(KeyChar));
	case 16:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap16->erase(KeyChar));
	case 17:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap17->erase(KeyChar));
	case 18:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap18->erase(KeyChar));
	case 19:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap19->erase(KeyChar));
	case 20:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap20->erase(KeyChar));
	case 21:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap21->erase(KeyChar));
	case 22:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap22->erase(KeyChar));
	case 23:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap23->erase(KeyChar));
	case 24:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap24->erase(KeyChar));
	case 25:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap25->erase(KeyChar));
	case 26:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap26->erase(KeyChar));
	case 27:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap27->erase(KeyChar));
	case 28:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap28->equal_range(KeyChar); iter != multimapUnion->CPPmultimap28->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap28->erase(KeyChar));
	case 29:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap29->erase(KeyShort));
	case 30:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap30->erase(KeyShort));
	case 31:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap31->erase(KeyShort));
	case 32:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap32->erase(KeyShort));
	case 33:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap33->erase(KeyShort));
	case 34:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap34->erase(KeyShort));
	case 35:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap35->erase(KeyShort));
	case 36:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap36->erase(KeyShort));
	case 37:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap37->erase(KeyShort));
	case 38:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap38->erase(KeyShort));
	case 39:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap39->erase(KeyShort));
	case 40:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap40->erase(KeyShort));
	case 41:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap41->erase(KeyShort));
	case 42:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap42->equal_range(KeyShort); iter != multimapUnion->CPPmultimap42->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap42->erase(KeyShort));
	case 43:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap43->erase(KeyUshort));
	case 44:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap44->erase(KeyUshort));
	case 45:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap45->erase(KeyUshort));
	case 46:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap46->erase(KeyUshort));
	case 47:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap47->erase(KeyUshort));
	case 48:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap48->erase(KeyUshort));
	case 49:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap49->erase(KeyUshort));
	case 50:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap50->erase(KeyUshort));
	case 51:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap51->erase(KeyUshort));
	case 52:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap52->erase(KeyUshort));
	case 53:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap53->erase(KeyUshort));
	case 54:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap54->erase(KeyUshort));
	case 55:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap55->erase(KeyUshort));
	case 56:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap56->equal_range(KeyUshort); iter != multimapUnion->CPPmultimap56->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap56->erase(KeyUshort));
	case 57:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap57->erase(KeyInt));
	case 58:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap58->erase(KeyInt));
	case 59:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap59->erase(KeyInt));
	case 60:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap60->erase(KeyInt));
	case 61:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap61->erase(KeyInt));
	case 62:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap62->erase(KeyInt));
	case 63:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap63->erase(KeyInt));
	case 64:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap64->erase(KeyInt));
	case 65:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap65->erase(KeyInt));
	case 66:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap66->erase(KeyInt));
	case 67:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap67->erase(KeyInt));
	case 68:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap68->erase(KeyInt));
	case 69:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap69->erase(KeyInt));
	case 70:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap70->equal_range(KeyInt); iter != multimapUnion->CPPmultimap70->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap70->erase(KeyInt));
	case 71:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap71->erase(KeyUint));
	case 72:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap72->erase(KeyUint));
	case 73:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap73->erase(KeyUint));
	case 74:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap74->erase(KeyUint));
	case 75:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap75->erase(KeyUint));
	case 76:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap76->erase(KeyUint));
	case 77:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap77->erase(KeyUint));
	case 78:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap78->erase(KeyUint));
	case 79:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap79->erase(KeyUint));
	case 80:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap80->erase(KeyUint));
	case 81:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap81->erase(KeyUint));
	case 82:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap82->erase(KeyUint));
	case 83:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap83->erase(KeyUint));
	case 84:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap84->equal_range(KeyUint); iter != multimapUnion->CPPmultimap84->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap84->erase(KeyUint));
	case 85:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap85->erase(KeyLonglong));
	case 86:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap86->erase(KeyLonglong));
	case 87:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap87->erase(KeyLonglong));
	case 88:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap88->erase(KeyLonglong));
	case 89:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap89->erase(KeyLonglong));
	case 90:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap90->erase(KeyLonglong));
	case 91:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap91->erase(KeyLonglong));
	case 92:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap92->erase(KeyLonglong));
	case 93:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap93->erase(KeyLonglong));
	case 94:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap94->erase(KeyLonglong));
	case 95:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap95->erase(KeyLonglong));
	case 96:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap96->erase(KeyLonglong));
	case 97:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap97->erase(KeyLonglong));
	case 98:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap98->equal_range(KeyLonglong); iter != multimapUnion->CPPmultimap98->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap98->erase(KeyLonglong));
	case 99:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap99->erase(KeyUlonglong));
	case 100:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap100->erase(KeyUlonglong));
	case 101:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap101->erase(KeyUlonglong));
	case 102:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap102->erase(KeyUlonglong));
	case 103:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap103->erase(KeyUlonglong));
	case 104:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap104->erase(KeyUlonglong));
	case 105:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap105->erase(KeyUlonglong));
	case 106:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap106->erase(KeyUlonglong));
	case 107:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap107->erase(KeyUlonglong));
	case 108:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap108->erase(KeyUlonglong));
	case 109:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap109->erase(KeyUlonglong));
	case 110:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap110->erase(KeyUlonglong));
	case 111:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap111->erase(KeyUlonglong));
	case 112:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap112->equal_range(KeyUlonglong); iter != multimapUnion->CPPmultimap112->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap112->erase(KeyUlonglong));
	case 113:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap113->erase(KeyFloat));
	case 114:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap114->erase(KeyFloat));
	case 115:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap115->erase(KeyFloat));
	case 116:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap116->erase(KeyFloat));
	case 117:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap117->erase(KeyFloat));
	case 118:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap118->erase(KeyFloat));
	case 119:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap119->erase(KeyFloat));
	case 120:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap120->erase(KeyFloat));
	case 121:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap121->erase(KeyFloat));
	case 122:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap122->erase(KeyFloat));
	case 123:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap123->erase(KeyFloat));
	case 124:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap124->erase(KeyFloat));
	case 125:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap125->erase(KeyFloat));
	case 126:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap126->equal_range(KeyFloat); iter != multimapUnion->CPPmultimap126->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap126->erase(KeyFloat));
	case 127:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap127->erase(KeyDouble));
	case 128:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap128->erase(KeyDouble));
	case 129:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap129->erase(KeyDouble));
	case 130:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap130->erase(KeyDouble));
	case 131:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap131->erase(KeyDouble));
	case 132:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap132->erase(KeyDouble));
	case 133:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap133->erase(KeyDouble));
	case 134:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap134->erase(KeyDouble));
	case 135:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap135->erase(KeyDouble));
	case 136:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap136->erase(KeyDouble));
	case 137:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap137->erase(KeyDouble));
	case 138:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap138->erase(KeyDouble));
	case 139:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap139->erase(KeyDouble));
	case 140:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap140->equal_range(KeyDouble); iter != multimapUnion->CPPmultimap140->KeyEnd(); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap140->erase(KeyDouble));
	case 141:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap141->erase(KeyWchar));
	case 142:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap142->erase(KeyWchar));
	case 143:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap143->erase(KeyWchar));
	case 144:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap144->erase(KeyWchar));
	case 145:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap145->erase(KeyWchar));
	case 146:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap146->erase(KeyWchar));
	case 147:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap147->erase(KeyWchar));
	case 148:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap148->erase(KeyWchar));
	case 149:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap149->erase(KeyWchar));
	case 150:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap150->erase(KeyWchar));
	case 151:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap151->erase(KeyWchar));
	case 152:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap152->erase(KeyWchar));
	case 153:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap153->erase(KeyWchar));
	case 154:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap154->equal_range(KeyWchar); iter != multimapUnion->CPPmultimap154->KeyEnd(); iter++)
			gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap154->erase(KeyWchar));
	case 155:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap155->erase(KeyBool));
	case 156:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap156->erase(KeyBool));
	case 157:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap157->erase(KeyBool));
	case 158:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap158->erase(KeyBool));
	case 159:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap159->erase(KeyBool));
	case 160:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap160->erase(KeyBool));
	case 161:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap161->erase(KeyBool));
	case 162:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap162->erase(KeyBool));
	case 163:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap163->erase(KeyBool));
	case 164:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap164->erase(KeyBool));
	case 165:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap165->erase(KeyBool));
	case 166:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap166->erase(KeyBool));
	case 167:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap167->erase(KeyBool));
	case 168:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap168->equal_range(KeyBool); iter != multimapUnion->CPPmultimap168->KeyEnd(); iter++)
			gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap168->erase(KeyBool));
	case 169:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap169->erase(KeyWstring));
	case 170:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap170->erase(KeyWstring));
	case 171:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap171->erase(KeyWstring));
	case 172:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap172->erase(KeyWstring));
	case 173:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap173->erase(KeyWstring));
	case 174:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap174->erase(KeyWstring));
	case 175:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap175->erase(KeyWstring));
	case 176:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap176->erase(KeyWstring));
	case 177:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap177->erase(KeyWstring));
	case 178:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap178->erase(KeyWstring));
	case 179:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap179->erase(KeyWstring));
	case 180:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap180->erase(KeyWstring));
	case 181:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap181->erase(KeyWstring));
	case 182:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap182->equal_range(KeyWstring); iter != multimapUnion->CPPmultimap182->KeyEnd(); iter++)
			gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap182->erase(KeyWstring));
	case 183:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap183->erase(Key__Int));
	case 184:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap184->erase(Key__Int));
	case 185:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap185->erase(Key__Int));
	case 186:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap186->erase(Key__Int));
	case 187:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap187->erase(Key__Int));
	case 188:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap188->erase(Key__Int));
	case 189:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap189->erase(Key__Int));
	case 190:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap190->erase(Key__Int));
	case 191:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap191->erase(Key__Int));
	case 192:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap192->erase(Key__Int));
	case 193:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap193->erase(Key__Int));
	case 194:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap194->erase(Key__Int));
	case 195:
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap195->erase(Key__Int));
	case 196:
		if (gValueClassDictionary)
			for (auto iter = multimapUnion->CPPmultimap196->equal_range(Key__Int); iter != multimapUnion->CPPmultimap196->KeyEnd(); iter++)
			gValueClassDictionary->Remove(iter.GetValue());
		return static_cast<System::UInt64>(multimapUnion->CPPmultimap196->erase(Key__Int));
	}

	return 0;
}

#define UnOrderedMultiMap_Empty_CASE(NUM) \
	case NUM: \
		return static_cast<System::Boolean>(multimapUnion->CPPmultimap##NUM->empty());

generic<typename Key, typename Value>
System::Boolean UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::empty()
{
	switch (nKeyValueType)
	{
	case 0:	default:
		return false;
		UnOrderedMultiMap_Empty_CASE(1)
		UnOrderedMultiMap_Empty_CASE(2)
		UnOrderedMultiMap_Empty_CASE(3)
		UnOrderedMultiMap_Empty_CASE(4)
		UnOrderedMultiMap_Empty_CASE(5)
		UnOrderedMultiMap_Empty_CASE(6)
		UnOrderedMultiMap_Empty_CASE(7)
		UnOrderedMultiMap_Empty_CASE(8)
		UnOrderedMultiMap_Empty_CASE(9)
		UnOrderedMultiMap_Empty_CASE(10)
		UnOrderedMultiMap_Empty_CASE(11)
		UnOrderedMultiMap_Empty_CASE(12)
		UnOrderedMultiMap_Empty_CASE(13)
		UnOrderedMultiMap_Empty_CASE(14)
		UnOrderedMultiMap_Empty_CASE(15)
		UnOrderedMultiMap_Empty_CASE(16)
		UnOrderedMultiMap_Empty_CASE(17)
		UnOrderedMultiMap_Empty_CASE(18)
		UnOrderedMultiMap_Empty_CASE(19)
		UnOrderedMultiMap_Empty_CASE(20)
		UnOrderedMultiMap_Empty_CASE(21)
		UnOrderedMultiMap_Empty_CASE(22)
		UnOrderedMultiMap_Empty_CASE(23)
		UnOrderedMultiMap_Empty_CASE(24)
		UnOrderedMultiMap_Empty_CASE(25)
		UnOrderedMultiMap_Empty_CASE(26)
		UnOrderedMultiMap_Empty_CASE(27)
		UnOrderedMultiMap_Empty_CASE(28)
		UnOrderedMultiMap_Empty_CASE(29)
		UnOrderedMultiMap_Empty_CASE(30)
		UnOrderedMultiMap_Empty_CASE(31)
		UnOrderedMultiMap_Empty_CASE(32)
		UnOrderedMultiMap_Empty_CASE(33)
		UnOrderedMultiMap_Empty_CASE(34)
		UnOrderedMultiMap_Empty_CASE(35)
		UnOrderedMultiMap_Empty_CASE(36)
		UnOrderedMultiMap_Empty_CASE(37)
		UnOrderedMultiMap_Empty_CASE(38)
		UnOrderedMultiMap_Empty_CASE(39)
		UnOrderedMultiMap_Empty_CASE(40)
		UnOrderedMultiMap_Empty_CASE(41)
		UnOrderedMultiMap_Empty_CASE(42)
		UnOrderedMultiMap_Empty_CASE(43)
		UnOrderedMultiMap_Empty_CASE(44)
		UnOrderedMultiMap_Empty_CASE(45)
		UnOrderedMultiMap_Empty_CASE(46)
		UnOrderedMultiMap_Empty_CASE(47)
		UnOrderedMultiMap_Empty_CASE(48)
		UnOrderedMultiMap_Empty_CASE(49)
		UnOrderedMultiMap_Empty_CASE(50)
		UnOrderedMultiMap_Empty_CASE(51)
		UnOrderedMultiMap_Empty_CASE(52)
		UnOrderedMultiMap_Empty_CASE(53)
		UnOrderedMultiMap_Empty_CASE(54)
		UnOrderedMultiMap_Empty_CASE(55)
		UnOrderedMultiMap_Empty_CASE(56)
		UnOrderedMultiMap_Empty_CASE(57)
		UnOrderedMultiMap_Empty_CASE(58)
		UnOrderedMultiMap_Empty_CASE(59)
		UnOrderedMultiMap_Empty_CASE(60)
		UnOrderedMultiMap_Empty_CASE(61)
		UnOrderedMultiMap_Empty_CASE(62)
		UnOrderedMultiMap_Empty_CASE(63)
		UnOrderedMultiMap_Empty_CASE(64)
		UnOrderedMultiMap_Empty_CASE(65)
		UnOrderedMultiMap_Empty_CASE(66)
		UnOrderedMultiMap_Empty_CASE(67)
		UnOrderedMultiMap_Empty_CASE(68)
		UnOrderedMultiMap_Empty_CASE(69)
		UnOrderedMultiMap_Empty_CASE(70)
		UnOrderedMultiMap_Empty_CASE(71)
		UnOrderedMultiMap_Empty_CASE(72)
		UnOrderedMultiMap_Empty_CASE(73)
		UnOrderedMultiMap_Empty_CASE(74)
		UnOrderedMultiMap_Empty_CASE(75)
		UnOrderedMultiMap_Empty_CASE(76)
		UnOrderedMultiMap_Empty_CASE(77)
		UnOrderedMultiMap_Empty_CASE(78)
		UnOrderedMultiMap_Empty_CASE(79)
		UnOrderedMultiMap_Empty_CASE(80)
		UnOrderedMultiMap_Empty_CASE(81)
		UnOrderedMultiMap_Empty_CASE(82)
		UnOrderedMultiMap_Empty_CASE(83)
		UnOrderedMultiMap_Empty_CASE(84)
		UnOrderedMultiMap_Empty_CASE(85)
		UnOrderedMultiMap_Empty_CASE(86)
		UnOrderedMultiMap_Empty_CASE(87)
		UnOrderedMultiMap_Empty_CASE(88)
		UnOrderedMultiMap_Empty_CASE(89)
		UnOrderedMultiMap_Empty_CASE(90)
		UnOrderedMultiMap_Empty_CASE(91)
		UnOrderedMultiMap_Empty_CASE(92)
		UnOrderedMultiMap_Empty_CASE(93)
		UnOrderedMultiMap_Empty_CASE(94)
		UnOrderedMultiMap_Empty_CASE(95)
		UnOrderedMultiMap_Empty_CASE(96)
		UnOrderedMultiMap_Empty_CASE(97)
		UnOrderedMultiMap_Empty_CASE(98)
		UnOrderedMultiMap_Empty_CASE(99)
		UnOrderedMultiMap_Empty_CASE(100)
		UnOrderedMultiMap_Empty_CASE(101)
		UnOrderedMultiMap_Empty_CASE(102)
		UnOrderedMultiMap_Empty_CASE(103)
		UnOrderedMultiMap_Empty_CASE(104)
		UnOrderedMultiMap_Empty_CASE(105)
		UnOrderedMultiMap_Empty_CASE(106)
		UnOrderedMultiMap_Empty_CASE(107)
		UnOrderedMultiMap_Empty_CASE(108)
		UnOrderedMultiMap_Empty_CASE(109)
		UnOrderedMultiMap_Empty_CASE(110)
		UnOrderedMultiMap_Empty_CASE(111)
		UnOrderedMultiMap_Empty_CASE(112)
		UnOrderedMultiMap_Empty_CASE(113)
		UnOrderedMultiMap_Empty_CASE(114)
		UnOrderedMultiMap_Empty_CASE(115)
		UnOrderedMultiMap_Empty_CASE(116)
		UnOrderedMultiMap_Empty_CASE(117)
		UnOrderedMultiMap_Empty_CASE(118)
		UnOrderedMultiMap_Empty_CASE(119)
		UnOrderedMultiMap_Empty_CASE(120)
		UnOrderedMultiMap_Empty_CASE(121)
		UnOrderedMultiMap_Empty_CASE(122)
		UnOrderedMultiMap_Empty_CASE(123)
		UnOrderedMultiMap_Empty_CASE(124)
		UnOrderedMultiMap_Empty_CASE(125)
		UnOrderedMultiMap_Empty_CASE(126)
		UnOrderedMultiMap_Empty_CASE(127)
		UnOrderedMultiMap_Empty_CASE(128)
		UnOrderedMultiMap_Empty_CASE(129)
		UnOrderedMultiMap_Empty_CASE(130)
		UnOrderedMultiMap_Empty_CASE(131)
		UnOrderedMultiMap_Empty_CASE(132)
		UnOrderedMultiMap_Empty_CASE(133)
		UnOrderedMultiMap_Empty_CASE(134)
		UnOrderedMultiMap_Empty_CASE(135)
		UnOrderedMultiMap_Empty_CASE(136)
		UnOrderedMultiMap_Empty_CASE(137)
		UnOrderedMultiMap_Empty_CASE(138)
		UnOrderedMultiMap_Empty_CASE(139)
		UnOrderedMultiMap_Empty_CASE(140)
		UnOrderedMultiMap_Empty_CASE(141)
		UnOrderedMultiMap_Empty_CASE(142)
		UnOrderedMultiMap_Empty_CASE(143)
		UnOrderedMultiMap_Empty_CASE(144)
		UnOrderedMultiMap_Empty_CASE(145)
		UnOrderedMultiMap_Empty_CASE(146)
		UnOrderedMultiMap_Empty_CASE(147)
		UnOrderedMultiMap_Empty_CASE(148)
		UnOrderedMultiMap_Empty_CASE(149)
		UnOrderedMultiMap_Empty_CASE(150)
		UnOrderedMultiMap_Empty_CASE(151)
		UnOrderedMultiMap_Empty_CASE(152)
		UnOrderedMultiMap_Empty_CASE(153)
		UnOrderedMultiMap_Empty_CASE(154)
		UnOrderedMultiMap_Empty_CASE(155)
		UnOrderedMultiMap_Empty_CASE(156)
		UnOrderedMultiMap_Empty_CASE(157)
		UnOrderedMultiMap_Empty_CASE(158)
		UnOrderedMultiMap_Empty_CASE(159)
		UnOrderedMultiMap_Empty_CASE(160)
		UnOrderedMultiMap_Empty_CASE(161)
		UnOrderedMultiMap_Empty_CASE(162)
		UnOrderedMultiMap_Empty_CASE(163)
		UnOrderedMultiMap_Empty_CASE(164)
		UnOrderedMultiMap_Empty_CASE(165)
		UnOrderedMultiMap_Empty_CASE(166)
		UnOrderedMultiMap_Empty_CASE(167)
		UnOrderedMultiMap_Empty_CASE(168)
		UnOrderedMultiMap_Empty_CASE(169)
		UnOrderedMultiMap_Empty_CASE(170)
		UnOrderedMultiMap_Empty_CASE(171)
		UnOrderedMultiMap_Empty_CASE(172)
		UnOrderedMultiMap_Empty_CASE(173)
		UnOrderedMultiMap_Empty_CASE(174)
		UnOrderedMultiMap_Empty_CASE(175)
		UnOrderedMultiMap_Empty_CASE(176)
		UnOrderedMultiMap_Empty_CASE(177)
		UnOrderedMultiMap_Empty_CASE(178)
		UnOrderedMultiMap_Empty_CASE(179)
		UnOrderedMultiMap_Empty_CASE(180)
		UnOrderedMultiMap_Empty_CASE(181)
		UnOrderedMultiMap_Empty_CASE(182)
		UnOrderedMultiMap_Empty_CASE(183)
		UnOrderedMultiMap_Empty_CASE(184)
		UnOrderedMultiMap_Empty_CASE(185)
		UnOrderedMultiMap_Empty_CASE(186)
		UnOrderedMultiMap_Empty_CASE(187)
		UnOrderedMultiMap_Empty_CASE(188)
		UnOrderedMultiMap_Empty_CASE(189)
		UnOrderedMultiMap_Empty_CASE(190)
		UnOrderedMultiMap_Empty_CASE(191)
		UnOrderedMultiMap_Empty_CASE(192)
		UnOrderedMultiMap_Empty_CASE(193)
		UnOrderedMultiMap_Empty_CASE(194)
		UnOrderedMultiMap_Empty_CASE(195)
		UnOrderedMultiMap_Empty_CASE(196)
	}
	return false;
}

#define UnOrderedMultiMap_find_CASE(NUM, KeyType) \
	case NUM: \
		*(multiNode->GetNode()->CPPmultinode##NUM) = multimapUnion->CPPmultimap##NUM->find(KeyType); \
		break;

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::find(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0:	default:
		return nullptr;
		UnOrderedMultiMap_find_CASE(1, KeyUchar)
		UnOrderedMultiMap_find_CASE(2, KeyUchar)
		UnOrderedMultiMap_find_CASE(3, KeyUchar)
		UnOrderedMultiMap_find_CASE(4, KeyUchar)
		UnOrderedMultiMap_find_CASE(5, KeyUchar)
		UnOrderedMultiMap_find_CASE(6, KeyUchar)
		UnOrderedMultiMap_find_CASE(7, KeyUchar)
		UnOrderedMultiMap_find_CASE(8, KeyUchar)
		UnOrderedMultiMap_find_CASE(9, KeyUchar)
		UnOrderedMultiMap_find_CASE(10, KeyUchar)
		UnOrderedMultiMap_find_CASE(11, KeyUchar)
		UnOrderedMultiMap_find_CASE(12, KeyUchar)
		UnOrderedMultiMap_find_CASE(13, KeyUchar)
		UnOrderedMultiMap_find_CASE(14, KeyUchar)
		UnOrderedMultiMap_find_CASE(15, KeyChar)
		UnOrderedMultiMap_find_CASE(16, KeyChar)
		UnOrderedMultiMap_find_CASE(17, KeyChar)
		UnOrderedMultiMap_find_CASE(18, KeyChar)
		UnOrderedMultiMap_find_CASE(19, KeyChar)
		UnOrderedMultiMap_find_CASE(20, KeyChar)
		UnOrderedMultiMap_find_CASE(21, KeyChar)
		UnOrderedMultiMap_find_CASE(22, KeyChar)
		UnOrderedMultiMap_find_CASE(23, KeyChar)
		UnOrderedMultiMap_find_CASE(24, KeyChar)
		UnOrderedMultiMap_find_CASE(25, KeyChar)
		UnOrderedMultiMap_find_CASE(26, KeyChar)
		UnOrderedMultiMap_find_CASE(27, KeyChar)
		UnOrderedMultiMap_find_CASE(28, KeyChar)
		UnOrderedMultiMap_find_CASE(29, KeyShort)
		UnOrderedMultiMap_find_CASE(30, KeyShort)
		UnOrderedMultiMap_find_CASE(31, KeyShort)
		UnOrderedMultiMap_find_CASE(32, KeyShort)
		UnOrderedMultiMap_find_CASE(33, KeyShort)
		UnOrderedMultiMap_find_CASE(34, KeyShort)
		UnOrderedMultiMap_find_CASE(35, KeyShort)
		UnOrderedMultiMap_find_CASE(36, KeyShort)
		UnOrderedMultiMap_find_CASE(37, KeyShort)
		UnOrderedMultiMap_find_CASE(38, KeyShort)
		UnOrderedMultiMap_find_CASE(39, KeyShort)
		UnOrderedMultiMap_find_CASE(40, KeyShort)
		UnOrderedMultiMap_find_CASE(41, KeyShort)
		UnOrderedMultiMap_find_CASE(42, KeyShort)
		UnOrderedMultiMap_find_CASE(43, KeyUshort)
		UnOrderedMultiMap_find_CASE(44, KeyUshort)
		UnOrderedMultiMap_find_CASE(45, KeyUshort)
		UnOrderedMultiMap_find_CASE(46, KeyUshort)
		UnOrderedMultiMap_find_CASE(47, KeyUshort)
		UnOrderedMultiMap_find_CASE(48, KeyUshort)
		UnOrderedMultiMap_find_CASE(49, KeyUshort)
		UnOrderedMultiMap_find_CASE(50, KeyUshort)
		UnOrderedMultiMap_find_CASE(51, KeyUshort)
		UnOrderedMultiMap_find_CASE(52, KeyUshort)
		UnOrderedMultiMap_find_CASE(53, KeyUshort)
		UnOrderedMultiMap_find_CASE(54, KeyUshort)
		UnOrderedMultiMap_find_CASE(55, KeyUshort)
		UnOrderedMultiMap_find_CASE(56, KeyUshort)
		UnOrderedMultiMap_find_CASE(57, KeyInt)
		UnOrderedMultiMap_find_CASE(58, KeyInt)
		UnOrderedMultiMap_find_CASE(59, KeyInt)
		UnOrderedMultiMap_find_CASE(60, KeyInt)
		UnOrderedMultiMap_find_CASE(61, KeyInt)
		UnOrderedMultiMap_find_CASE(62, KeyInt)
		UnOrderedMultiMap_find_CASE(63, KeyInt)
		UnOrderedMultiMap_find_CASE(64, KeyInt)
		UnOrderedMultiMap_find_CASE(65, KeyInt)
		UnOrderedMultiMap_find_CASE(66, KeyInt)
		UnOrderedMultiMap_find_CASE(67, KeyInt)
		UnOrderedMultiMap_find_CASE(68, KeyInt)
		UnOrderedMultiMap_find_CASE(69, KeyInt)
		UnOrderedMultiMap_find_CASE(70, KeyInt)
		UnOrderedMultiMap_find_CASE(71, KeyUint)
		UnOrderedMultiMap_find_CASE(72, KeyUint)
		UnOrderedMultiMap_find_CASE(73, KeyUint)
		UnOrderedMultiMap_find_CASE(74, KeyUint)
		UnOrderedMultiMap_find_CASE(75, KeyUint)
		UnOrderedMultiMap_find_CASE(76, KeyUint)
		UnOrderedMultiMap_find_CASE(77, KeyUint)
		UnOrderedMultiMap_find_CASE(78, KeyUint)
		UnOrderedMultiMap_find_CASE(79, KeyUint)
		UnOrderedMultiMap_find_CASE(80, KeyUint)
		UnOrderedMultiMap_find_CASE(81, KeyUint)
		UnOrderedMultiMap_find_CASE(82, KeyUint)
		UnOrderedMultiMap_find_CASE(83, KeyUint)
		UnOrderedMultiMap_find_CASE(84, KeyUint)
		UnOrderedMultiMap_find_CASE(85, KeyLonglong)
		UnOrderedMultiMap_find_CASE(86, KeyLonglong)
		UnOrderedMultiMap_find_CASE(87, KeyLonglong)
		UnOrderedMultiMap_find_CASE(88, KeyLonglong)
		UnOrderedMultiMap_find_CASE(89, KeyLonglong)
		UnOrderedMultiMap_find_CASE(90, KeyLonglong)
		UnOrderedMultiMap_find_CASE(91, KeyLonglong)
		UnOrderedMultiMap_find_CASE(92, KeyLonglong)
		UnOrderedMultiMap_find_CASE(93, KeyLonglong)
		UnOrderedMultiMap_find_CASE(94, KeyLonglong)
		UnOrderedMultiMap_find_CASE(95, KeyLonglong)
		UnOrderedMultiMap_find_CASE(96, KeyLonglong)
		UnOrderedMultiMap_find_CASE(97, KeyLonglong)
		UnOrderedMultiMap_find_CASE(98, KeyLonglong)
		UnOrderedMultiMap_find_CASE(99, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(100, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(101, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(102, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(103, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(104, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(105, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(106, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(107, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(108, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(109, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(110, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(111, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(112, KeyUlonglong)
		UnOrderedMultiMap_find_CASE(113, KeyFloat)
		UnOrderedMultiMap_find_CASE(114, KeyFloat)
		UnOrderedMultiMap_find_CASE(115, KeyFloat)
		UnOrderedMultiMap_find_CASE(116, KeyFloat)
		UnOrderedMultiMap_find_CASE(117, KeyFloat)
		UnOrderedMultiMap_find_CASE(118, KeyFloat)
		UnOrderedMultiMap_find_CASE(119, KeyFloat)
		UnOrderedMultiMap_find_CASE(120, KeyFloat)
		UnOrderedMultiMap_find_CASE(121, KeyFloat)
		UnOrderedMultiMap_find_CASE(122, KeyFloat)
		UnOrderedMultiMap_find_CASE(123, KeyFloat)
		UnOrderedMultiMap_find_CASE(124, KeyFloat)
		UnOrderedMultiMap_find_CASE(125, KeyFloat)
		UnOrderedMultiMap_find_CASE(126, KeyFloat)
		UnOrderedMultiMap_find_CASE(127, KeyDouble)
		UnOrderedMultiMap_find_CASE(128, KeyDouble)
		UnOrderedMultiMap_find_CASE(129, KeyDouble)
		UnOrderedMultiMap_find_CASE(130, KeyDouble)
		UnOrderedMultiMap_find_CASE(131, KeyDouble)
		UnOrderedMultiMap_find_CASE(132, KeyDouble)
		UnOrderedMultiMap_find_CASE(133, KeyDouble)
		UnOrderedMultiMap_find_CASE(134, KeyDouble)
		UnOrderedMultiMap_find_CASE(135, KeyDouble)
		UnOrderedMultiMap_find_CASE(136, KeyDouble)
		UnOrderedMultiMap_find_CASE(137, KeyDouble)
		UnOrderedMultiMap_find_CASE(138, KeyDouble)
		UnOrderedMultiMap_find_CASE(139, KeyDouble)
		UnOrderedMultiMap_find_CASE(140, KeyDouble)
		UnOrderedMultiMap_find_CASE(141, KeyWchar)
		UnOrderedMultiMap_find_CASE(142, KeyWchar)
		UnOrderedMultiMap_find_CASE(143, KeyWchar)
		UnOrderedMultiMap_find_CASE(144, KeyWchar)
		UnOrderedMultiMap_find_CASE(145, KeyWchar)
		UnOrderedMultiMap_find_CASE(146, KeyWchar)
		UnOrderedMultiMap_find_CASE(147, KeyWchar)
		UnOrderedMultiMap_find_CASE(148, KeyWchar)
		UnOrderedMultiMap_find_CASE(149, KeyWchar)
		UnOrderedMultiMap_find_CASE(150, KeyWchar)
		UnOrderedMultiMap_find_CASE(151, KeyWchar)
		UnOrderedMultiMap_find_CASE(152, KeyWchar)
		UnOrderedMultiMap_find_CASE(153, KeyWchar)
		UnOrderedMultiMap_find_CASE(154, KeyWchar)
		UnOrderedMultiMap_find_CASE(155, KeyBool)
		UnOrderedMultiMap_find_CASE(156, KeyBool)
		UnOrderedMultiMap_find_CASE(157, KeyBool)
		UnOrderedMultiMap_find_CASE(158, KeyBool)
		UnOrderedMultiMap_find_CASE(159, KeyBool)
		UnOrderedMultiMap_find_CASE(160, KeyBool)
		UnOrderedMultiMap_find_CASE(161, KeyBool)
		UnOrderedMultiMap_find_CASE(162, KeyBool)
		UnOrderedMultiMap_find_CASE(163, KeyBool)
		UnOrderedMultiMap_find_CASE(164, KeyBool)
		UnOrderedMultiMap_find_CASE(165, KeyBool)
		UnOrderedMultiMap_find_CASE(166, KeyBool)
		UnOrderedMultiMap_find_CASE(167, KeyBool)
		UnOrderedMultiMap_find_CASE(168, KeyBool)
		UnOrderedMultiMap_find_CASE(169, KeyWstring)
		UnOrderedMultiMap_find_CASE(170, KeyWstring)
		UnOrderedMultiMap_find_CASE(171, KeyWstring)
		UnOrderedMultiMap_find_CASE(172, KeyWstring)
		UnOrderedMultiMap_find_CASE(173, KeyWstring)
		UnOrderedMultiMap_find_CASE(174, KeyWstring)
		UnOrderedMultiMap_find_CASE(175, KeyWstring)
		UnOrderedMultiMap_find_CASE(176, KeyWstring)
		UnOrderedMultiMap_find_CASE(177, KeyWstring)
		UnOrderedMultiMap_find_CASE(178, KeyWstring)
		UnOrderedMultiMap_find_CASE(179, KeyWstring)
		UnOrderedMultiMap_find_CASE(180, KeyWstring)
		UnOrderedMultiMap_find_CASE(181, KeyWstring)
		UnOrderedMultiMap_find_CASE(182, KeyWstring)
		UnOrderedMultiMap_find_CASE(183, Key__Int)
		UnOrderedMultiMap_find_CASE(184, Key__Int)
		UnOrderedMultiMap_find_CASE(185, Key__Int)
		UnOrderedMultiMap_find_CASE(186, Key__Int)
		UnOrderedMultiMap_find_CASE(187, Key__Int)
		UnOrderedMultiMap_find_CASE(188, Key__Int)
		UnOrderedMultiMap_find_CASE(189, Key__Int)
		UnOrderedMultiMap_find_CASE(190, Key__Int)
		UnOrderedMultiMap_find_CASE(191, Key__Int)
		UnOrderedMultiMap_find_CASE(192, Key__Int)
		UnOrderedMultiMap_find_CASE(193, Key__Int)
		UnOrderedMultiMap_find_CASE(194, Key__Int)
		UnOrderedMultiMap_find_CASE(195, Key__Int)
		UnOrderedMultiMap_find_CASE(196, Key__Int)
	}

	return multiNode->DeepCopy();
}

#define UnOrderedMultiMap_BeginEnd_CASE(NUM, BeginEnd) \
	case NUM: \
		*(multiNode->GetNode()->CPPmultinode##NUM) = multimapUnion->CPPmultimap##NUM->BeginEnd(); \
		break;

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::begin()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
		UnOrderedMultiMap_BeginEnd_CASE(1, begin)
		UnOrderedMultiMap_BeginEnd_CASE(2, begin)
		UnOrderedMultiMap_BeginEnd_CASE(3, begin)
		UnOrderedMultiMap_BeginEnd_CASE(4, begin)
		UnOrderedMultiMap_BeginEnd_CASE(5, begin)
		UnOrderedMultiMap_BeginEnd_CASE(6, begin)
		UnOrderedMultiMap_BeginEnd_CASE(7, begin)
		UnOrderedMultiMap_BeginEnd_CASE(8, begin)
		UnOrderedMultiMap_BeginEnd_CASE(9, begin)
		UnOrderedMultiMap_BeginEnd_CASE(10, begin)
		UnOrderedMultiMap_BeginEnd_CASE(11, begin)
		UnOrderedMultiMap_BeginEnd_CASE(12, begin)
		UnOrderedMultiMap_BeginEnd_CASE(13, begin)
		UnOrderedMultiMap_BeginEnd_CASE(14, begin)
		UnOrderedMultiMap_BeginEnd_CASE(15, begin)
		UnOrderedMultiMap_BeginEnd_CASE(16, begin)
		UnOrderedMultiMap_BeginEnd_CASE(17, begin)
		UnOrderedMultiMap_BeginEnd_CASE(18, begin)
		UnOrderedMultiMap_BeginEnd_CASE(19, begin)
		UnOrderedMultiMap_BeginEnd_CASE(20, begin)
		UnOrderedMultiMap_BeginEnd_CASE(21, begin)
		UnOrderedMultiMap_BeginEnd_CASE(22, begin)
		UnOrderedMultiMap_BeginEnd_CASE(23, begin)
		UnOrderedMultiMap_BeginEnd_CASE(24, begin)
		UnOrderedMultiMap_BeginEnd_CASE(25, begin)
		UnOrderedMultiMap_BeginEnd_CASE(26, begin)
		UnOrderedMultiMap_BeginEnd_CASE(27, begin)
		UnOrderedMultiMap_BeginEnd_CASE(28, begin)
		UnOrderedMultiMap_BeginEnd_CASE(29, begin)
		UnOrderedMultiMap_BeginEnd_CASE(30, begin)
		UnOrderedMultiMap_BeginEnd_CASE(31, begin)
		UnOrderedMultiMap_BeginEnd_CASE(32, begin)
		UnOrderedMultiMap_BeginEnd_CASE(33, begin)
		UnOrderedMultiMap_BeginEnd_CASE(34, begin)
		UnOrderedMultiMap_BeginEnd_CASE(35, begin)
		UnOrderedMultiMap_BeginEnd_CASE(36, begin)
		UnOrderedMultiMap_BeginEnd_CASE(37, begin)
		UnOrderedMultiMap_BeginEnd_CASE(38, begin)
		UnOrderedMultiMap_BeginEnd_CASE(39, begin)
		UnOrderedMultiMap_BeginEnd_CASE(40, begin)
		UnOrderedMultiMap_BeginEnd_CASE(41, begin)
		UnOrderedMultiMap_BeginEnd_CASE(42, begin)
		UnOrderedMultiMap_BeginEnd_CASE(43, begin)
		UnOrderedMultiMap_BeginEnd_CASE(44, begin)
		UnOrderedMultiMap_BeginEnd_CASE(45, begin)
		UnOrderedMultiMap_BeginEnd_CASE(46, begin)
		UnOrderedMultiMap_BeginEnd_CASE(47, begin)
		UnOrderedMultiMap_BeginEnd_CASE(48, begin)
		UnOrderedMultiMap_BeginEnd_CASE(49, begin)
		UnOrderedMultiMap_BeginEnd_CASE(50, begin)
		UnOrderedMultiMap_BeginEnd_CASE(51, begin)
		UnOrderedMultiMap_BeginEnd_CASE(52, begin)
		UnOrderedMultiMap_BeginEnd_CASE(53, begin)
		UnOrderedMultiMap_BeginEnd_CASE(54, begin)
		UnOrderedMultiMap_BeginEnd_CASE(55, begin)
		UnOrderedMultiMap_BeginEnd_CASE(56, begin)
		UnOrderedMultiMap_BeginEnd_CASE(57, begin)
		UnOrderedMultiMap_BeginEnd_CASE(58, begin)
		UnOrderedMultiMap_BeginEnd_CASE(59, begin)
		UnOrderedMultiMap_BeginEnd_CASE(60, begin)
		UnOrderedMultiMap_BeginEnd_CASE(61, begin)
		UnOrderedMultiMap_BeginEnd_CASE(62, begin)
		UnOrderedMultiMap_BeginEnd_CASE(63, begin)
		UnOrderedMultiMap_BeginEnd_CASE(64, begin)
		UnOrderedMultiMap_BeginEnd_CASE(65, begin)
		UnOrderedMultiMap_BeginEnd_CASE(66, begin)
		UnOrderedMultiMap_BeginEnd_CASE(67, begin)
		UnOrderedMultiMap_BeginEnd_CASE(68, begin)
		UnOrderedMultiMap_BeginEnd_CASE(69, begin)
		UnOrderedMultiMap_BeginEnd_CASE(70, begin)
		UnOrderedMultiMap_BeginEnd_CASE(71, begin)
		UnOrderedMultiMap_BeginEnd_CASE(72, begin)
		UnOrderedMultiMap_BeginEnd_CASE(73, begin)
		UnOrderedMultiMap_BeginEnd_CASE(74, begin)
		UnOrderedMultiMap_BeginEnd_CASE(75, begin)
		UnOrderedMultiMap_BeginEnd_CASE(76, begin)
		UnOrderedMultiMap_BeginEnd_CASE(77, begin)
		UnOrderedMultiMap_BeginEnd_CASE(78, begin)
		UnOrderedMultiMap_BeginEnd_CASE(79, begin)
		UnOrderedMultiMap_BeginEnd_CASE(80, begin)
		UnOrderedMultiMap_BeginEnd_CASE(81, begin)
		UnOrderedMultiMap_BeginEnd_CASE(82, begin)
		UnOrderedMultiMap_BeginEnd_CASE(83, begin)
		UnOrderedMultiMap_BeginEnd_CASE(84, begin)
		UnOrderedMultiMap_BeginEnd_CASE(85, begin)
		UnOrderedMultiMap_BeginEnd_CASE(86, begin)
		UnOrderedMultiMap_BeginEnd_CASE(87, begin)
		UnOrderedMultiMap_BeginEnd_CASE(88, begin)
		UnOrderedMultiMap_BeginEnd_CASE(89, begin)
		UnOrderedMultiMap_BeginEnd_CASE(90, begin)
		UnOrderedMultiMap_BeginEnd_CASE(91, begin)
		UnOrderedMultiMap_BeginEnd_CASE(92, begin)
		UnOrderedMultiMap_BeginEnd_CASE(93, begin)
		UnOrderedMultiMap_BeginEnd_CASE(94, begin)
		UnOrderedMultiMap_BeginEnd_CASE(95, begin)
		UnOrderedMultiMap_BeginEnd_CASE(96, begin)
		UnOrderedMultiMap_BeginEnd_CASE(97, begin)
		UnOrderedMultiMap_BeginEnd_CASE(98, begin)
		UnOrderedMultiMap_BeginEnd_CASE(99, begin)
		UnOrderedMultiMap_BeginEnd_CASE(100, begin)
		UnOrderedMultiMap_BeginEnd_CASE(101, begin)
		UnOrderedMultiMap_BeginEnd_CASE(102, begin)
		UnOrderedMultiMap_BeginEnd_CASE(103, begin)
		UnOrderedMultiMap_BeginEnd_CASE(104, begin)
		UnOrderedMultiMap_BeginEnd_CASE(105, begin)
		UnOrderedMultiMap_BeginEnd_CASE(106, begin)
		UnOrderedMultiMap_BeginEnd_CASE(107, begin)
		UnOrderedMultiMap_BeginEnd_CASE(108, begin)
		UnOrderedMultiMap_BeginEnd_CASE(109, begin)
		UnOrderedMultiMap_BeginEnd_CASE(110, begin)
		UnOrderedMultiMap_BeginEnd_CASE(111, begin)
		UnOrderedMultiMap_BeginEnd_CASE(112, begin)
		UnOrderedMultiMap_BeginEnd_CASE(113, begin)
		UnOrderedMultiMap_BeginEnd_CASE(114, begin)
		UnOrderedMultiMap_BeginEnd_CASE(115, begin)
		UnOrderedMultiMap_BeginEnd_CASE(116, begin)
		UnOrderedMultiMap_BeginEnd_CASE(117, begin)
		UnOrderedMultiMap_BeginEnd_CASE(118, begin)
		UnOrderedMultiMap_BeginEnd_CASE(119, begin)
		UnOrderedMultiMap_BeginEnd_CASE(120, begin)
		UnOrderedMultiMap_BeginEnd_CASE(121, begin)
		UnOrderedMultiMap_BeginEnd_CASE(122, begin)
		UnOrderedMultiMap_BeginEnd_CASE(123, begin)
		UnOrderedMultiMap_BeginEnd_CASE(124, begin)
		UnOrderedMultiMap_BeginEnd_CASE(125, begin)
		UnOrderedMultiMap_BeginEnd_CASE(126, begin)
		UnOrderedMultiMap_BeginEnd_CASE(127, begin)
		UnOrderedMultiMap_BeginEnd_CASE(128, begin)
		UnOrderedMultiMap_BeginEnd_CASE(129, begin)
		UnOrderedMultiMap_BeginEnd_CASE(130, begin)
		UnOrderedMultiMap_BeginEnd_CASE(131, begin)
		UnOrderedMultiMap_BeginEnd_CASE(132, begin)
		UnOrderedMultiMap_BeginEnd_CASE(133, begin)
		UnOrderedMultiMap_BeginEnd_CASE(134, begin)
		UnOrderedMultiMap_BeginEnd_CASE(135, begin)
		UnOrderedMultiMap_BeginEnd_CASE(136, begin)
		UnOrderedMultiMap_BeginEnd_CASE(137, begin)
		UnOrderedMultiMap_BeginEnd_CASE(138, begin)
		UnOrderedMultiMap_BeginEnd_CASE(139, begin)
		UnOrderedMultiMap_BeginEnd_CASE(140, begin)
		UnOrderedMultiMap_BeginEnd_CASE(141, begin)
		UnOrderedMultiMap_BeginEnd_CASE(142, begin)
		UnOrderedMultiMap_BeginEnd_CASE(143, begin)
		UnOrderedMultiMap_BeginEnd_CASE(144, begin)
		UnOrderedMultiMap_BeginEnd_CASE(145, begin)
		UnOrderedMultiMap_BeginEnd_CASE(146, begin)
		UnOrderedMultiMap_BeginEnd_CASE(147, begin)
		UnOrderedMultiMap_BeginEnd_CASE(148, begin)
		UnOrderedMultiMap_BeginEnd_CASE(149, begin)
		UnOrderedMultiMap_BeginEnd_CASE(150, begin)
		UnOrderedMultiMap_BeginEnd_CASE(151, begin)
		UnOrderedMultiMap_BeginEnd_CASE(152, begin)
		UnOrderedMultiMap_BeginEnd_CASE(153, begin)
		UnOrderedMultiMap_BeginEnd_CASE(154, begin)
		UnOrderedMultiMap_BeginEnd_CASE(155, begin)
		UnOrderedMultiMap_BeginEnd_CASE(156, begin)
		UnOrderedMultiMap_BeginEnd_CASE(157, begin)
		UnOrderedMultiMap_BeginEnd_CASE(158, begin)
		UnOrderedMultiMap_BeginEnd_CASE(159, begin)
		UnOrderedMultiMap_BeginEnd_CASE(160, begin)
		UnOrderedMultiMap_BeginEnd_CASE(161, begin)
		UnOrderedMultiMap_BeginEnd_CASE(162, begin)
		UnOrderedMultiMap_BeginEnd_CASE(163, begin)
		UnOrderedMultiMap_BeginEnd_CASE(164, begin)
		UnOrderedMultiMap_BeginEnd_CASE(165, begin)
		UnOrderedMultiMap_BeginEnd_CASE(166, begin)
		UnOrderedMultiMap_BeginEnd_CASE(167, begin)
		UnOrderedMultiMap_BeginEnd_CASE(168, begin)
		UnOrderedMultiMap_BeginEnd_CASE(169, begin)
		UnOrderedMultiMap_BeginEnd_CASE(170, begin)
		UnOrderedMultiMap_BeginEnd_CASE(171, begin)
		UnOrderedMultiMap_BeginEnd_CASE(172, begin)
		UnOrderedMultiMap_BeginEnd_CASE(173, begin)
		UnOrderedMultiMap_BeginEnd_CASE(174, begin)
		UnOrderedMultiMap_BeginEnd_CASE(175, begin)
		UnOrderedMultiMap_BeginEnd_CASE(176, begin)
		UnOrderedMultiMap_BeginEnd_CASE(177, begin)
		UnOrderedMultiMap_BeginEnd_CASE(178, begin)
		UnOrderedMultiMap_BeginEnd_CASE(179, begin)
		UnOrderedMultiMap_BeginEnd_CASE(180, begin)
		UnOrderedMultiMap_BeginEnd_CASE(181, begin)
		UnOrderedMultiMap_BeginEnd_CASE(182, begin)
		UnOrderedMultiMap_BeginEnd_CASE(183, begin)
		UnOrderedMultiMap_BeginEnd_CASE(184, begin)
		UnOrderedMultiMap_BeginEnd_CASE(185, begin)
		UnOrderedMultiMap_BeginEnd_CASE(186, begin)
		UnOrderedMultiMap_BeginEnd_CASE(187, begin)
		UnOrderedMultiMap_BeginEnd_CASE(188, begin)
		UnOrderedMultiMap_BeginEnd_CASE(189, begin)
		UnOrderedMultiMap_BeginEnd_CASE(190, begin)
		UnOrderedMultiMap_BeginEnd_CASE(191, begin)
		UnOrderedMultiMap_BeginEnd_CASE(192, begin)
		UnOrderedMultiMap_BeginEnd_CASE(193, begin)
		UnOrderedMultiMap_BeginEnd_CASE(194, begin)
		UnOrderedMultiMap_BeginEnd_CASE(195, begin)
		UnOrderedMultiMap_BeginEnd_CASE(196, begin)
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::end()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
		UnOrderedMultiMap_BeginEnd_CASE(1, end)
		UnOrderedMultiMap_BeginEnd_CASE(2, end)
		UnOrderedMultiMap_BeginEnd_CASE(3, end)
		UnOrderedMultiMap_BeginEnd_CASE(4, end)
		UnOrderedMultiMap_BeginEnd_CASE(5, end)
		UnOrderedMultiMap_BeginEnd_CASE(6, end)
		UnOrderedMultiMap_BeginEnd_CASE(7, end)
		UnOrderedMultiMap_BeginEnd_CASE(8, end)
		UnOrderedMultiMap_BeginEnd_CASE(9, end)
		UnOrderedMultiMap_BeginEnd_CASE(10, end)
		UnOrderedMultiMap_BeginEnd_CASE(11, end)
		UnOrderedMultiMap_BeginEnd_CASE(12, end)
		UnOrderedMultiMap_BeginEnd_CASE(13, end)
		UnOrderedMultiMap_BeginEnd_CASE(14, end)
		UnOrderedMultiMap_BeginEnd_CASE(15, end)
		UnOrderedMultiMap_BeginEnd_CASE(16, end)
		UnOrderedMultiMap_BeginEnd_CASE(17, end)
		UnOrderedMultiMap_BeginEnd_CASE(18, end)
		UnOrderedMultiMap_BeginEnd_CASE(19, end)
		UnOrderedMultiMap_BeginEnd_CASE(20, end)
		UnOrderedMultiMap_BeginEnd_CASE(21, end)
		UnOrderedMultiMap_BeginEnd_CASE(22, end)
		UnOrderedMultiMap_BeginEnd_CASE(23, end)
		UnOrderedMultiMap_BeginEnd_CASE(24, end)
		UnOrderedMultiMap_BeginEnd_CASE(25, end)
		UnOrderedMultiMap_BeginEnd_CASE(26, end)
		UnOrderedMultiMap_BeginEnd_CASE(27, end)
		UnOrderedMultiMap_BeginEnd_CASE(28, end)
		UnOrderedMultiMap_BeginEnd_CASE(29, end)
		UnOrderedMultiMap_BeginEnd_CASE(30, end)
		UnOrderedMultiMap_BeginEnd_CASE(31, end)
		UnOrderedMultiMap_BeginEnd_CASE(32, end)
		UnOrderedMultiMap_BeginEnd_CASE(33, end)
		UnOrderedMultiMap_BeginEnd_CASE(34, end)
		UnOrderedMultiMap_BeginEnd_CASE(35, end)
		UnOrderedMultiMap_BeginEnd_CASE(36, end)
		UnOrderedMultiMap_BeginEnd_CASE(37, end)
		UnOrderedMultiMap_BeginEnd_CASE(38, end)
		UnOrderedMultiMap_BeginEnd_CASE(39, end)
		UnOrderedMultiMap_BeginEnd_CASE(40, end)
		UnOrderedMultiMap_BeginEnd_CASE(41, end)
		UnOrderedMultiMap_BeginEnd_CASE(42, end)
		UnOrderedMultiMap_BeginEnd_CASE(43, end)
		UnOrderedMultiMap_BeginEnd_CASE(44, end)
		UnOrderedMultiMap_BeginEnd_CASE(45, end)
		UnOrderedMultiMap_BeginEnd_CASE(46, end)
		UnOrderedMultiMap_BeginEnd_CASE(47, end)
		UnOrderedMultiMap_BeginEnd_CASE(48, end)
		UnOrderedMultiMap_BeginEnd_CASE(49, end)
		UnOrderedMultiMap_BeginEnd_CASE(50, end)
		UnOrderedMultiMap_BeginEnd_CASE(51, end)
		UnOrderedMultiMap_BeginEnd_CASE(52, end)
		UnOrderedMultiMap_BeginEnd_CASE(53, end)
		UnOrderedMultiMap_BeginEnd_CASE(54, end)
		UnOrderedMultiMap_BeginEnd_CASE(55, end)
		UnOrderedMultiMap_BeginEnd_CASE(56, end)
		UnOrderedMultiMap_BeginEnd_CASE(57, end)
		UnOrderedMultiMap_BeginEnd_CASE(58, end)
		UnOrderedMultiMap_BeginEnd_CASE(59, end)
		UnOrderedMultiMap_BeginEnd_CASE(60, end)
		UnOrderedMultiMap_BeginEnd_CASE(61, end)
		UnOrderedMultiMap_BeginEnd_CASE(62, end)
		UnOrderedMultiMap_BeginEnd_CASE(63, end)
		UnOrderedMultiMap_BeginEnd_CASE(64, end)
		UnOrderedMultiMap_BeginEnd_CASE(65, end)
		UnOrderedMultiMap_BeginEnd_CASE(66, end)
		UnOrderedMultiMap_BeginEnd_CASE(67, end)
		UnOrderedMultiMap_BeginEnd_CASE(68, end)
		UnOrderedMultiMap_BeginEnd_CASE(69, end)
		UnOrderedMultiMap_BeginEnd_CASE(70, end)
		UnOrderedMultiMap_BeginEnd_CASE(71, end)
		UnOrderedMultiMap_BeginEnd_CASE(72, end)
		UnOrderedMultiMap_BeginEnd_CASE(73, end)
		UnOrderedMultiMap_BeginEnd_CASE(74, end)
		UnOrderedMultiMap_BeginEnd_CASE(75, end)
		UnOrderedMultiMap_BeginEnd_CASE(76, end)
		UnOrderedMultiMap_BeginEnd_CASE(77, end)
		UnOrderedMultiMap_BeginEnd_CASE(78, end)
		UnOrderedMultiMap_BeginEnd_CASE(79, end)
		UnOrderedMultiMap_BeginEnd_CASE(80, end)
		UnOrderedMultiMap_BeginEnd_CASE(81, end)
		UnOrderedMultiMap_BeginEnd_CASE(82, end)
		UnOrderedMultiMap_BeginEnd_CASE(83, end)
		UnOrderedMultiMap_BeginEnd_CASE(84, end)
		UnOrderedMultiMap_BeginEnd_CASE(85, end)
		UnOrderedMultiMap_BeginEnd_CASE(86, end)
		UnOrderedMultiMap_BeginEnd_CASE(87, end)
		UnOrderedMultiMap_BeginEnd_CASE(88, end)
		UnOrderedMultiMap_BeginEnd_CASE(89, end)
		UnOrderedMultiMap_BeginEnd_CASE(90, end)
		UnOrderedMultiMap_BeginEnd_CASE(91, end)
		UnOrderedMultiMap_BeginEnd_CASE(92, end)
		UnOrderedMultiMap_BeginEnd_CASE(93, end)
		UnOrderedMultiMap_BeginEnd_CASE(94, end)
		UnOrderedMultiMap_BeginEnd_CASE(95, end)
		UnOrderedMultiMap_BeginEnd_CASE(96, end)
		UnOrderedMultiMap_BeginEnd_CASE(97, end)
		UnOrderedMultiMap_BeginEnd_CASE(98, end)
		UnOrderedMultiMap_BeginEnd_CASE(99, end)
		UnOrderedMultiMap_BeginEnd_CASE(100, end)
		UnOrderedMultiMap_BeginEnd_CASE(101, end)
		UnOrderedMultiMap_BeginEnd_CASE(102, end)
		UnOrderedMultiMap_BeginEnd_CASE(103, end)
		UnOrderedMultiMap_BeginEnd_CASE(104, end)
		UnOrderedMultiMap_BeginEnd_CASE(105, end)
		UnOrderedMultiMap_BeginEnd_CASE(106, end)
		UnOrderedMultiMap_BeginEnd_CASE(107, end)
		UnOrderedMultiMap_BeginEnd_CASE(108, end)
		UnOrderedMultiMap_BeginEnd_CASE(109, end)
		UnOrderedMultiMap_BeginEnd_CASE(110, end)
		UnOrderedMultiMap_BeginEnd_CASE(111, end)
		UnOrderedMultiMap_BeginEnd_CASE(112, end)
		UnOrderedMultiMap_BeginEnd_CASE(113, end)
		UnOrderedMultiMap_BeginEnd_CASE(114, end)
		UnOrderedMultiMap_BeginEnd_CASE(115, end)
		UnOrderedMultiMap_BeginEnd_CASE(116, end)
		UnOrderedMultiMap_BeginEnd_CASE(117, end)
		UnOrderedMultiMap_BeginEnd_CASE(118, end)
		UnOrderedMultiMap_BeginEnd_CASE(119, end)
		UnOrderedMultiMap_BeginEnd_CASE(120, end)
		UnOrderedMultiMap_BeginEnd_CASE(121, end)
		UnOrderedMultiMap_BeginEnd_CASE(122, end)
		UnOrderedMultiMap_BeginEnd_CASE(123, end)
		UnOrderedMultiMap_BeginEnd_CASE(124, end)
		UnOrderedMultiMap_BeginEnd_CASE(125, end)
		UnOrderedMultiMap_BeginEnd_CASE(126, end)
		UnOrderedMultiMap_BeginEnd_CASE(127, end)
		UnOrderedMultiMap_BeginEnd_CASE(128, end)
		UnOrderedMultiMap_BeginEnd_CASE(129, end)
		UnOrderedMultiMap_BeginEnd_CASE(130, end)
		UnOrderedMultiMap_BeginEnd_CASE(131, end)
		UnOrderedMultiMap_BeginEnd_CASE(132, end)
		UnOrderedMultiMap_BeginEnd_CASE(133, end)
		UnOrderedMultiMap_BeginEnd_CASE(134, end)
		UnOrderedMultiMap_BeginEnd_CASE(135, end)
		UnOrderedMultiMap_BeginEnd_CASE(136, end)
		UnOrderedMultiMap_BeginEnd_CASE(137, end)
		UnOrderedMultiMap_BeginEnd_CASE(138, end)
		UnOrderedMultiMap_BeginEnd_CASE(139, end)
		UnOrderedMultiMap_BeginEnd_CASE(140, end)
		UnOrderedMultiMap_BeginEnd_CASE(141, end)
		UnOrderedMultiMap_BeginEnd_CASE(142, end)
		UnOrderedMultiMap_BeginEnd_CASE(143, end)
		UnOrderedMultiMap_BeginEnd_CASE(144, end)
		UnOrderedMultiMap_BeginEnd_CASE(145, end)
		UnOrderedMultiMap_BeginEnd_CASE(146, end)
		UnOrderedMultiMap_BeginEnd_CASE(147, end)
		UnOrderedMultiMap_BeginEnd_CASE(148, end)
		UnOrderedMultiMap_BeginEnd_CASE(149, end)
		UnOrderedMultiMap_BeginEnd_CASE(150, end)
		UnOrderedMultiMap_BeginEnd_CASE(151, end)
		UnOrderedMultiMap_BeginEnd_CASE(152, end)
		UnOrderedMultiMap_BeginEnd_CASE(153, end)
		UnOrderedMultiMap_BeginEnd_CASE(154, end)
		UnOrderedMultiMap_BeginEnd_CASE(155, end)
		UnOrderedMultiMap_BeginEnd_CASE(156, end)
		UnOrderedMultiMap_BeginEnd_CASE(157, end)
		UnOrderedMultiMap_BeginEnd_CASE(158, end)
		UnOrderedMultiMap_BeginEnd_CASE(159, end)
		UnOrderedMultiMap_BeginEnd_CASE(160, end)
		UnOrderedMultiMap_BeginEnd_CASE(161, end)
		UnOrderedMultiMap_BeginEnd_CASE(162, end)
		UnOrderedMultiMap_BeginEnd_CASE(163, end)
		UnOrderedMultiMap_BeginEnd_CASE(164, end)
		UnOrderedMultiMap_BeginEnd_CASE(165, end)
		UnOrderedMultiMap_BeginEnd_CASE(166, end)
		UnOrderedMultiMap_BeginEnd_CASE(167, end)
		UnOrderedMultiMap_BeginEnd_CASE(168, end)
		UnOrderedMultiMap_BeginEnd_CASE(169, end)
		UnOrderedMultiMap_BeginEnd_CASE(170, end)
		UnOrderedMultiMap_BeginEnd_CASE(171, end)
		UnOrderedMultiMap_BeginEnd_CASE(172, end)
		UnOrderedMultiMap_BeginEnd_CASE(173, end)
		UnOrderedMultiMap_BeginEnd_CASE(174, end)
		UnOrderedMultiMap_BeginEnd_CASE(175, end)
		UnOrderedMultiMap_BeginEnd_CASE(176, end)
		UnOrderedMultiMap_BeginEnd_CASE(177, end)
		UnOrderedMultiMap_BeginEnd_CASE(178, end)
		UnOrderedMultiMap_BeginEnd_CASE(179, end)
		UnOrderedMultiMap_BeginEnd_CASE(180, end)
		UnOrderedMultiMap_BeginEnd_CASE(181, end)
		UnOrderedMultiMap_BeginEnd_CASE(182, end)
		UnOrderedMultiMap_BeginEnd_CASE(183, end)
		UnOrderedMultiMap_BeginEnd_CASE(184, end)
		UnOrderedMultiMap_BeginEnd_CASE(185, end)
		UnOrderedMultiMap_BeginEnd_CASE(186, end)
		UnOrderedMultiMap_BeginEnd_CASE(187, end)
		UnOrderedMultiMap_BeginEnd_CASE(188, end)
		UnOrderedMultiMap_BeginEnd_CASE(189, end)
		UnOrderedMultiMap_BeginEnd_CASE(190, end)
		UnOrderedMultiMap_BeginEnd_CASE(191, end)
		UnOrderedMultiMap_BeginEnd_CASE(192, end)
		UnOrderedMultiMap_BeginEnd_CASE(193, end)
		UnOrderedMultiMap_BeginEnd_CASE(194, end)
		UnOrderedMultiMap_BeginEnd_CASE(195, end)
		UnOrderedMultiMap_BeginEnd_CASE(196, end)
	}
	return multiNode;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(CShorpUnOrderedMultiNode<Key, Value>^% _Where)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (nKeyValueType != _Where->GetKVType()) return nullptr;
	if (_Where->GetInit() == 0) return nullptr;

	auto TempIter = _Where->DeepCopy();
	TempIter->operator++(TempIter);

	__int64 Key__Int = 0;
	bool bTempKeyDeleted = false;

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->erase(*(_Where->GetNode()->CPPmultinode1));
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->erase(*(_Where->GetNode()->CPPmultinode2));
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->erase(*(_Where->GetNode()->CPPmultinode3));
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->erase(*(_Where->GetNode()->CPPmultinode4));
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->erase(*(_Where->GetNode()->CPPmultinode5));
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->erase(*(_Where->GetNode()->CPPmultinode6));
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->erase(*(_Where->GetNode()->CPPmultinode7));
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->erase(*(_Where->GetNode()->CPPmultinode8));
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->erase(*(_Where->GetNode()->CPPmultinode9));
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->erase(*(_Where->GetNode()->CPPmultinode10));
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->erase(*(_Where->GetNode()->CPPmultinode11));
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->erase(*(_Where->GetNode()->CPPmultinode12));
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->erase(*(_Where->GetNode()->CPPmultinode13));
		break;
	case 14:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode14->GetValue());
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->erase(*(_Where->GetNode()->CPPmultinode14));
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->erase(*(_Where->GetNode()->CPPmultinode15));
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->erase(*(_Where->GetNode()->CPPmultinode16));
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->erase(*(_Where->GetNode()->CPPmultinode17));
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->erase(*(_Where->GetNode()->CPPmultinode18));
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->erase(*(_Where->GetNode()->CPPmultinode19));
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->erase(*(_Where->GetNode()->CPPmultinode20));
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->erase(*(_Where->GetNode()->CPPmultinode21));
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->erase(*(_Where->GetNode()->CPPmultinode22));
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->erase(*(_Where->GetNode()->CPPmultinode23));
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->erase(*(_Where->GetNode()->CPPmultinode24));
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->erase(*(_Where->GetNode()->CPPmultinode25));
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->erase(*(_Where->GetNode()->CPPmultinode26));
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->erase(*(_Where->GetNode()->CPPmultinode27));
		break;
	case 28:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode28->GetValue());
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->erase(*(_Where->GetNode()->CPPmultinode28));
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->erase(*(_Where->GetNode()->CPPmultinode29));
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->erase(*(_Where->GetNode()->CPPmultinode30));
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->erase(*(_Where->GetNode()->CPPmultinode31));
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->erase(*(_Where->GetNode()->CPPmultinode32));
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->erase(*(_Where->GetNode()->CPPmultinode33));
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->erase(*(_Where->GetNode()->CPPmultinode34));
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->erase(*(_Where->GetNode()->CPPmultinode35));
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->erase(*(_Where->GetNode()->CPPmultinode36));
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->erase(*(_Where->GetNode()->CPPmultinode37));
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->erase(*(_Where->GetNode()->CPPmultinode38));
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->erase(*(_Where->GetNode()->CPPmultinode39));
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->erase(*(_Where->GetNode()->CPPmultinode40));
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->erase(*(_Where->GetNode()->CPPmultinode41));
		break;
	case 42:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode42->GetValue());
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->erase(*(_Where->GetNode()->CPPmultinode42));
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->erase(*(_Where->GetNode()->CPPmultinode43));
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->erase(*(_Where->GetNode()->CPPmultinode44));
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->erase(*(_Where->GetNode()->CPPmultinode45));
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->erase(*(_Where->GetNode()->CPPmultinode46));
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->erase(*(_Where->GetNode()->CPPmultinode47));
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->erase(*(_Where->GetNode()->CPPmultinode48));
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->erase(*(_Where->GetNode()->CPPmultinode49));
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->erase(*(_Where->GetNode()->CPPmultinode50));
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->erase(*(_Where->GetNode()->CPPmultinode51));
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->erase(*(_Where->GetNode()->CPPmultinode52));
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->erase(*(_Where->GetNode()->CPPmultinode53));
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->erase(*(_Where->GetNode()->CPPmultinode54));
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->erase(*(_Where->GetNode()->CPPmultinode55));
		break;
	case 56:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode56->GetValue());
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->erase(*(_Where->GetNode()->CPPmultinode56));
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->erase(*(_Where->GetNode()->CPPmultinode57));
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->erase(*(_Where->GetNode()->CPPmultinode58));
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->erase(*(_Where->GetNode()->CPPmultinode59));
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->erase(*(_Where->GetNode()->CPPmultinode60));
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->erase(*(_Where->GetNode()->CPPmultinode61));
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->erase(*(_Where->GetNode()->CPPmultinode62));
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->erase(*(_Where->GetNode()->CPPmultinode63));
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->erase(*(_Where->GetNode()->CPPmultinode64));
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->erase(*(_Where->GetNode()->CPPmultinode65));
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->erase(*(_Where->GetNode()->CPPmultinode66));
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->erase(*(_Where->GetNode()->CPPmultinode67));
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->erase(*(_Where->GetNode()->CPPmultinode68));
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->erase(*(_Where->GetNode()->CPPmultinode69));
		break;
	case 70:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode70->GetValue());
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->erase(*(_Where->GetNode()->CPPmultinode70));
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->erase(*(_Where->GetNode()->CPPmultinode71));
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->erase(*(_Where->GetNode()->CPPmultinode72));
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->erase(*(_Where->GetNode()->CPPmultinode73));
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->erase(*(_Where->GetNode()->CPPmultinode74));
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->erase(*(_Where->GetNode()->CPPmultinode75));
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->erase(*(_Where->GetNode()->CPPmultinode76));
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->erase(*(_Where->GetNode()->CPPmultinode77));
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->erase(*(_Where->GetNode()->CPPmultinode78));
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->erase(*(_Where->GetNode()->CPPmultinode79));
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->erase(*(_Where->GetNode()->CPPmultinode80));
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->erase(*(_Where->GetNode()->CPPmultinode81));
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->erase(*(_Where->GetNode()->CPPmultinode82));
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->erase(*(_Where->GetNode()->CPPmultinode83));
		break;
	case 84:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode84->GetValue());
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->erase(*(_Where->GetNode()->CPPmultinode84));
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->erase(*(_Where->GetNode()->CPPmultinode85));
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->erase(*(_Where->GetNode()->CPPmultinode86));
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->erase(*(_Where->GetNode()->CPPmultinode87));
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->erase(*(_Where->GetNode()->CPPmultinode88));
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->erase(*(_Where->GetNode()->CPPmultinode89));
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->erase(*(_Where->GetNode()->CPPmultinode90));
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->erase(*(_Where->GetNode()->CPPmultinode91));
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->erase(*(_Where->GetNode()->CPPmultinode92));
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->erase(*(_Where->GetNode()->CPPmultinode93));
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->erase(*(_Where->GetNode()->CPPmultinode94));
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->erase(*(_Where->GetNode()->CPPmultinode95));
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->erase(*(_Where->GetNode()->CPPmultinode96));
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->erase(*(_Where->GetNode()->CPPmultinode97));
		break;
	case 98:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode98->GetValue());
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->erase(*(_Where->GetNode()->CPPmultinode98));
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->erase(*(_Where->GetNode()->CPPmultinode99));
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->erase(*(_Where->GetNode()->CPPmultinode100));
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->erase(*(_Where->GetNode()->CPPmultinode101));
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->erase(*(_Where->GetNode()->CPPmultinode102));
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->erase(*(_Where->GetNode()->CPPmultinode103));
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->erase(*(_Where->GetNode()->CPPmultinode104));
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->erase(*(_Where->GetNode()->CPPmultinode105));
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->erase(*(_Where->GetNode()->CPPmultinode106));
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->erase(*(_Where->GetNode()->CPPmultinode107));
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->erase(*(_Where->GetNode()->CPPmultinode108));
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->erase(*(_Where->GetNode()->CPPmultinode109));
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->erase(*(_Where->GetNode()->CPPmultinode110));
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->erase(*(_Where->GetNode()->CPPmultinode111));
		break;
	case 112:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode112->GetValue());
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->erase(*(_Where->GetNode()->CPPmultinode112));
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->erase(*(_Where->GetNode()->CPPmultinode113));
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->erase(*(_Where->GetNode()->CPPmultinode114));
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->erase(*(_Where->GetNode()->CPPmultinode115));
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->erase(*(_Where->GetNode()->CPPmultinode116));
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->erase(*(_Where->GetNode()->CPPmultinode117));
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->erase(*(_Where->GetNode()->CPPmultinode118));
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->erase(*(_Where->GetNode()->CPPmultinode119));
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->erase(*(_Where->GetNode()->CPPmultinode120));
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->erase(*(_Where->GetNode()->CPPmultinode121));
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->erase(*(_Where->GetNode()->CPPmultinode122));
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->erase(*(_Where->GetNode()->CPPmultinode123));
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->erase(*(_Where->GetNode()->CPPmultinode124));
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->erase(*(_Where->GetNode()->CPPmultinode125));
		break;
	case 126:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode126->GetValue());
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->erase(*(_Where->GetNode()->CPPmultinode126));
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->erase(*(_Where->GetNode()->CPPmultinode127));
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->erase(*(_Where->GetNode()->CPPmultinode128));
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->erase(*(_Where->GetNode()->CPPmultinode129));
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->erase(*(_Where->GetNode()->CPPmultinode130));
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->erase(*(_Where->GetNode()->CPPmultinode131));
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->erase(*(_Where->GetNode()->CPPmultinode132));
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->erase(*(_Where->GetNode()->CPPmultinode133));
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->erase(*(_Where->GetNode()->CPPmultinode134));
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->erase(*(_Where->GetNode()->CPPmultinode135));
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->erase(*(_Where->GetNode()->CPPmultinode136));
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->erase(*(_Where->GetNode()->CPPmultinode137));
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->erase(*(_Where->GetNode()->CPPmultinode138));
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->erase(*(_Where->GetNode()->CPPmultinode139));
		break;
	case 140:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode140->GetValue());
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->erase(*(_Where->GetNode()->CPPmultinode140));
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->erase(*(_Where->GetNode()->CPPmultinode141));
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->erase(*(_Where->GetNode()->CPPmultinode142));
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->erase(*(_Where->GetNode()->CPPmultinode143));
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->erase(*(_Where->GetNode()->CPPmultinode144));
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->erase(*(_Where->GetNode()->CPPmultinode145));
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->erase(*(_Where->GetNode()->CPPmultinode146));
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->erase(*(_Where->GetNode()->CPPmultinode147));
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->erase(*(_Where->GetNode()->CPPmultinode148));
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->erase(*(_Where->GetNode()->CPPmultinode149));
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->erase(*(_Where->GetNode()->CPPmultinode150));
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->erase(*(_Where->GetNode()->CPPmultinode151));
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->erase(*(_Where->GetNode()->CPPmultinode152));
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->erase(*(_Where->GetNode()->CPPmultinode153));
		break;
	case 154:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode154->GetValue());
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->erase(*(_Where->GetNode()->CPPmultinode154));
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->erase(*(_Where->GetNode()->CPPmultinode155));
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->erase(*(_Where->GetNode()->CPPmultinode156));
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->erase(*(_Where->GetNode()->CPPmultinode157));
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->erase(*(_Where->GetNode()->CPPmultinode158));
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->erase(*(_Where->GetNode()->CPPmultinode159));
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->erase(*(_Where->GetNode()->CPPmultinode160));
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->erase(*(_Where->GetNode()->CPPmultinode161));
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->erase(*(_Where->GetNode()->CPPmultinode162));
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->erase(*(_Where->GetNode()->CPPmultinode163));
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->erase(*(_Where->GetNode()->CPPmultinode164));
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->erase(*(_Where->GetNode()->CPPmultinode165));
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->erase(*(_Where->GetNode()->CPPmultinode166));
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->erase(*(_Where->GetNode()->CPPmultinode167));
		break;
	case 168:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode168->GetValue());
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->erase(*(_Where->GetNode()->CPPmultinode168));
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->erase(*(_Where->GetNode()->CPPmultinode169));
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->erase(*(_Where->GetNode()->CPPmultinode170));
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->erase(*(_Where->GetNode()->CPPmultinode171));
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->erase(*(_Where->GetNode()->CPPmultinode172));
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->erase(*(_Where->GetNode()->CPPmultinode173));
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->erase(*(_Where->GetNode()->CPPmultinode174));
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->erase(*(_Where->GetNode()->CPPmultinode175));
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->erase(*(_Where->GetNode()->CPPmultinode176));
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->erase(*(_Where->GetNode()->CPPmultinode177));
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->erase(*(_Where->GetNode()->CPPmultinode178));
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->erase(*(_Where->GetNode()->CPPmultinode179));
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->erase(*(_Where->GetNode()->CPPmultinode180));
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->erase(*(_Where->GetNode()->CPPmultinode181));
		break;
	case 182:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode182->GetValue());
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->erase(*(_Where->GetNode()->CPPmultinode182));
		break;
	case 183:
		Key__Int = _Where->GetNode()->CPPmultinode183->GetKey();
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->erase(*(_Where->GetNode()->CPPmultinode183));
		if (multimapUnion->CPPmultimap183->find(Key__Int) == multimapUnion->CPPmultimap183->end())
			bTempKeyDeleted = true;
		break;
	case 184:
		Key__Int = _Where->GetNode()->CPPmultinode184->GetKey();
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->erase(*(_Where->GetNode()->CPPmultinode184));
		if (multimapUnion->CPPmultimap184->find(Key__Int) == multimapUnion->CPPmultimap184->end())
			bTempKeyDeleted = true;
		break;
	case 185:
		Key__Int = _Where->GetNode()->CPPmultinode185->GetKey();
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->erase(*(_Where->GetNode()->CPPmultinode185));
		if (multimapUnion->CPPmultimap185->find(Key__Int) == multimapUnion->CPPmultimap185->end())
			bTempKeyDeleted = true;
		break;
	case 186:
		Key__Int = _Where->GetNode()->CPPmultinode186->GetKey();
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->erase(*(_Where->GetNode()->CPPmultinode186));
		if (multimapUnion->CPPmultimap186->find(Key__Int) == multimapUnion->CPPmultimap186->end())
			bTempKeyDeleted = true;
		break;
	case 187:
		Key__Int = _Where->GetNode()->CPPmultinode187->GetKey();
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->erase(*(_Where->GetNode()->CPPmultinode187));
		if (multimapUnion->CPPmultimap187->find(Key__Int) == multimapUnion->CPPmultimap187->end())
			bTempKeyDeleted = true;
		break;
	case 188:
		Key__Int = _Where->GetNode()->CPPmultinode188->GetKey();
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->erase(*(_Where->GetNode()->CPPmultinode188));
		if (multimapUnion->CPPmultimap188->find(Key__Int) == multimapUnion->CPPmultimap188->end())
			bTempKeyDeleted = true;
		break;
	case 189:
		Key__Int = _Where->GetNode()->CPPmultinode189->GetKey();
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->erase(*(_Where->GetNode()->CPPmultinode189));
		if (multimapUnion->CPPmultimap189->find(Key__Int) == multimapUnion->CPPmultimap189->end())
			bTempKeyDeleted = true;
		break;
	case 190:
		Key__Int = _Where->GetNode()->CPPmultinode190->GetKey();
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->erase(*(_Where->GetNode()->CPPmultinode190));
		if (multimapUnion->CPPmultimap190->find(Key__Int) == multimapUnion->CPPmultimap190->end())
			bTempKeyDeleted = true;
		break;
	case 191:
		Key__Int = _Where->GetNode()->CPPmultinode191->GetKey();
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->erase(*(_Where->GetNode()->CPPmultinode191));
		if (multimapUnion->CPPmultimap191->find(Key__Int) == multimapUnion->CPPmultimap191->end())
			bTempKeyDeleted = true;
		break;
	case 192:
		Key__Int = _Where->GetNode()->CPPmultinode192->GetKey();
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->erase(*(_Where->GetNode()->CPPmultinode192));
		if (multimapUnion->CPPmultimap192->find(Key__Int) == multimapUnion->CPPmultimap192->end())
			bTempKeyDeleted = true;
		break;
	case 193:
		Key__Int = _Where->GetNode()->CPPmultinode193->GetKey();
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->erase(*(_Where->GetNode()->CPPmultinode193));
		if (multimapUnion->CPPmultimap193->find(Key__Int) == multimapUnion->CPPmultimap193->end())
			bTempKeyDeleted = true;
		break;
	case 194:
		Key__Int = _Where->GetNode()->CPPmultinode194->GetKey();
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->erase(*(_Where->GetNode()->CPPmultinode194));
		if (multimapUnion->CPPmultimap194->find(Key__Int) == multimapUnion->CPPmultimap194->end())
			bTempKeyDeleted = true;
		break;
	case 195:
		Key__Int = _Where->GetNode()->CPPmultinode195->GetKey();
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->erase(*(_Where->GetNode()->CPPmultinode195));
		if (multimapUnion->CPPmultimap195->find(Key__Int) == multimapUnion->CPPmultimap195->end())
			bTempKeyDeleted = true;
		break;
	case 196:
		Key__Int = _Where->GetNode()->CPPmultinode196->GetKey();
		if (gValueClassDictionary)
			bTempKeyDeleted = true;
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmultinode196->GetValue());
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->erase(*(_Where->GetNode()->CPPmultinode196));
		if (multimapUnion->CPPmultimap196->find(Key__Int) == multimapUnion->CPPmultimap196->end())
			bTempKeyDeleted = true;
		break;
	}

	if ((183 <= nKeyValueType && nKeyValueType <= 196) && bTempKeyDeleted)
	{
		if (gKeyClassDictionary && gIntKeyClassDictionary)
		{
			Key temp;
			if (gIntKeyClassDictionary->TryGetValue(Key__Int, temp))
			{
				gIntKeyClassDictionary->Remove(Key__Int);
				gKeyClassDictionary->Remove(temp);
			}
		}
	}

	_Where = TempIter;

	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(CShorpUnOrderedMultiNode<Key, Value>^ First, CShorpUnOrderedMultiNode<Key, Value>^ Last)
{
	if (Object::ReferenceEquals(First, nullptr)) return nullptr;
	if (Object::ReferenceEquals(Last, nullptr)) return nullptr;
	if (First->GetKVType() != Last->GetKVType()) return nullptr;
	if (nKeyValueType != First->GetKVType()) return nullptr;
	if (First->GetInit() == 0) return nullptr;
	if (Last->GetInit() == 0) return nullptr;

	std::set<__int64> TempKeySet;
	std::set<__int64> TempKeyDeletedSet;
	bool bTempKeyDeleted = false;

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->erase(*(First->GetNode()->CPPmultinode1), *(Last->GetNode()->CPPmultinode1));
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->erase(*(First->GetNode()->CPPmultinode2), *(Last->GetNode()->CPPmultinode2));
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->erase(*(First->GetNode()->CPPmultinode3), *(Last->GetNode()->CPPmultinode3));
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->erase(*(First->GetNode()->CPPmultinode4), *(Last->GetNode()->CPPmultinode4));
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->erase(*(First->GetNode()->CPPmultinode5), *(Last->GetNode()->CPPmultinode5));
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->erase(*(First->GetNode()->CPPmultinode6), *(Last->GetNode()->CPPmultinode6));
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->erase(*(First->GetNode()->CPPmultinode7), *(Last->GetNode()->CPPmultinode7));
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->erase(*(First->GetNode()->CPPmultinode8), *(Last->GetNode()->CPPmultinode8));
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->erase(*(First->GetNode()->CPPmultinode9), *(Last->GetNode()->CPPmultinode9));
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->erase(*(First->GetNode()->CPPmultinode10), *(Last->GetNode()->CPPmultinode10));
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->erase(*(First->GetNode()->CPPmultinode11), *(Last->GetNode()->CPPmultinode11));
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->erase(*(First->GetNode()->CPPmultinode12), *(Last->GetNode()->CPPmultinode12));
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->erase(*(First->GetNode()->CPPmultinode13), *(Last->GetNode()->CPPmultinode13));
		break;
	case 14:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned char, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode14); iter != *(Last->GetNode()->CPPmultinode14); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->erase(*(First->GetNode()->CPPmultinode14), *(Last->GetNode()->CPPmultinode14));
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->erase(*(First->GetNode()->CPPmultinode15), *(Last->GetNode()->CPPmultinode15));
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->erase(*(First->GetNode()->CPPmultinode16), *(Last->GetNode()->CPPmultinode16));
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->erase(*(First->GetNode()->CPPmultinode17), *(Last->GetNode()->CPPmultinode17));
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->erase(*(First->GetNode()->CPPmultinode18), *(Last->GetNode()->CPPmultinode18));
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->erase(*(First->GetNode()->CPPmultinode19), *(Last->GetNode()->CPPmultinode19));
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->erase(*(First->GetNode()->CPPmultinode20), *(Last->GetNode()->CPPmultinode20));
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->erase(*(First->GetNode()->CPPmultinode21), *(Last->GetNode()->CPPmultinode21));
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->erase(*(First->GetNode()->CPPmultinode22), *(Last->GetNode()->CPPmultinode22));
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->erase(*(First->GetNode()->CPPmultinode23), *(Last->GetNode()->CPPmultinode23));
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->erase(*(First->GetNode()->CPPmultinode24), *(Last->GetNode()->CPPmultinode24));
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->erase(*(First->GetNode()->CPPmultinode25), *(Last->GetNode()->CPPmultinode25));
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->erase(*(First->GetNode()->CPPmultinode26), *(Last->GetNode()->CPPmultinode26));
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->erase(*(First->GetNode()->CPPmultinode27), *(Last->GetNode()->CPPmultinode27));
		break;
	case 28:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<char, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode28); iter != *(Last->GetNode()->CPPmultinode28); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->erase(*(First->GetNode()->CPPmultinode28), *(Last->GetNode()->CPPmultinode28));
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->erase(*(First->GetNode()->CPPmultinode29), *(Last->GetNode()->CPPmultinode29));
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->erase(*(First->GetNode()->CPPmultinode30), *(Last->GetNode()->CPPmultinode30));
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->erase(*(First->GetNode()->CPPmultinode31), *(Last->GetNode()->CPPmultinode31));
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->erase(*(First->GetNode()->CPPmultinode32), *(Last->GetNode()->CPPmultinode32));
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->erase(*(First->GetNode()->CPPmultinode33), *(Last->GetNode()->CPPmultinode33));
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->erase(*(First->GetNode()->CPPmultinode34), *(Last->GetNode()->CPPmultinode34));
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->erase(*(First->GetNode()->CPPmultinode35), *(Last->GetNode()->CPPmultinode35));
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->erase(*(First->GetNode()->CPPmultinode36), *(Last->GetNode()->CPPmultinode36));
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->erase(*(First->GetNode()->CPPmultinode37), *(Last->GetNode()->CPPmultinode37));
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->erase(*(First->GetNode()->CPPmultinode38), *(Last->GetNode()->CPPmultinode38));
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->erase(*(First->GetNode()->CPPmultinode39), *(Last->GetNode()->CPPmultinode39));
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->erase(*(First->GetNode()->CPPmultinode40), *(Last->GetNode()->CPPmultinode40));
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->erase(*(First->GetNode()->CPPmultinode41), *(Last->GetNode()->CPPmultinode41));
		break;
	case 42:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<short, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode42); iter != *(Last->GetNode()->CPPmultinode42); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->erase(*(First->GetNode()->CPPmultinode42), *(Last->GetNode()->CPPmultinode42));
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->erase(*(First->GetNode()->CPPmultinode43), *(Last->GetNode()->CPPmultinode43));
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->erase(*(First->GetNode()->CPPmultinode44), *(Last->GetNode()->CPPmultinode44));
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->erase(*(First->GetNode()->CPPmultinode45), *(Last->GetNode()->CPPmultinode45));
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->erase(*(First->GetNode()->CPPmultinode46), *(Last->GetNode()->CPPmultinode46));
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->erase(*(First->GetNode()->CPPmultinode47), *(Last->GetNode()->CPPmultinode47));
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->erase(*(First->GetNode()->CPPmultinode48), *(Last->GetNode()->CPPmultinode48));
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->erase(*(First->GetNode()->CPPmultinode49), *(Last->GetNode()->CPPmultinode49));
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->erase(*(First->GetNode()->CPPmultinode50), *(Last->GetNode()->CPPmultinode50));
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->erase(*(First->GetNode()->CPPmultinode51), *(Last->GetNode()->CPPmultinode51));
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->erase(*(First->GetNode()->CPPmultinode52), *(Last->GetNode()->CPPmultinode52));
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->erase(*(First->GetNode()->CPPmultinode53), *(Last->GetNode()->CPPmultinode53));
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->erase(*(First->GetNode()->CPPmultinode54), *(Last->GetNode()->CPPmultinode54));
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->erase(*(First->GetNode()->CPPmultinode55), *(Last->GetNode()->CPPmultinode55));
		break;
	case 56:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned short, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode56); iter != *(Last->GetNode()->CPPmultinode56); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->erase(*(First->GetNode()->CPPmultinode56), *(Last->GetNode()->CPPmultinode56));
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->erase(*(First->GetNode()->CPPmultinode57), *(Last->GetNode()->CPPmultinode57));
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->erase(*(First->GetNode()->CPPmultinode58), *(Last->GetNode()->CPPmultinode58));
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->erase(*(First->GetNode()->CPPmultinode59), *(Last->GetNode()->CPPmultinode59));
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->erase(*(First->GetNode()->CPPmultinode60), *(Last->GetNode()->CPPmultinode60));
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->erase(*(First->GetNode()->CPPmultinode61), *(Last->GetNode()->CPPmultinode61));
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->erase(*(First->GetNode()->CPPmultinode62), *(Last->GetNode()->CPPmultinode62));
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->erase(*(First->GetNode()->CPPmultinode63), *(Last->GetNode()->CPPmultinode63));
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->erase(*(First->GetNode()->CPPmultinode64), *(Last->GetNode()->CPPmultinode64));
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->erase(*(First->GetNode()->CPPmultinode65), *(Last->GetNode()->CPPmultinode65));
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->erase(*(First->GetNode()->CPPmultinode66), *(Last->GetNode()->CPPmultinode66));
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->erase(*(First->GetNode()->CPPmultinode67), *(Last->GetNode()->CPPmultinode67));
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->erase(*(First->GetNode()->CPPmultinode68), *(Last->GetNode()->CPPmultinode68));
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->erase(*(First->GetNode()->CPPmultinode69), *(Last->GetNode()->CPPmultinode69));
		break;
	case 70:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<int, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode70); iter != *(Last->GetNode()->CPPmultinode70); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->erase(*(First->GetNode()->CPPmultinode70), *(Last->GetNode()->CPPmultinode70));
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->erase(*(First->GetNode()->CPPmultinode71), *(Last->GetNode()->CPPmultinode71));
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->erase(*(First->GetNode()->CPPmultinode72), *(Last->GetNode()->CPPmultinode72));
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->erase(*(First->GetNode()->CPPmultinode73), *(Last->GetNode()->CPPmultinode73));
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->erase(*(First->GetNode()->CPPmultinode74), *(Last->GetNode()->CPPmultinode74));
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->erase(*(First->GetNode()->CPPmultinode75), *(Last->GetNode()->CPPmultinode75));
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->erase(*(First->GetNode()->CPPmultinode76), *(Last->GetNode()->CPPmultinode76));
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->erase(*(First->GetNode()->CPPmultinode77), *(Last->GetNode()->CPPmultinode77));
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->erase(*(First->GetNode()->CPPmultinode78), *(Last->GetNode()->CPPmultinode78));
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->erase(*(First->GetNode()->CPPmultinode79), *(Last->GetNode()->CPPmultinode79));
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->erase(*(First->GetNode()->CPPmultinode80), *(Last->GetNode()->CPPmultinode80));
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->erase(*(First->GetNode()->CPPmultinode81), *(Last->GetNode()->CPPmultinode81));
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->erase(*(First->GetNode()->CPPmultinode82), *(Last->GetNode()->CPPmultinode82));
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->erase(*(First->GetNode()->CPPmultinode83), *(Last->GetNode()->CPPmultinode83));
		break;
	case 84:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned int, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode84); iter != *(Last->GetNode()->CPPmultinode84); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->erase(*(First->GetNode()->CPPmultinode84), *(Last->GetNode()->CPPmultinode84));
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->erase(*(First->GetNode()->CPPmultinode85), *(Last->GetNode()->CPPmultinode85));
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->erase(*(First->GetNode()->CPPmultinode86), *(Last->GetNode()->CPPmultinode86));
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->erase(*(First->GetNode()->CPPmultinode87), *(Last->GetNode()->CPPmultinode87));
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->erase(*(First->GetNode()->CPPmultinode88), *(Last->GetNode()->CPPmultinode88));
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->erase(*(First->GetNode()->CPPmultinode89), *(Last->GetNode()->CPPmultinode89));
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->erase(*(First->GetNode()->CPPmultinode90), *(Last->GetNode()->CPPmultinode90));
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->erase(*(First->GetNode()->CPPmultinode91), *(Last->GetNode()->CPPmultinode91));
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->erase(*(First->GetNode()->CPPmultinode92), *(Last->GetNode()->CPPmultinode92));
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->erase(*(First->GetNode()->CPPmultinode93), *(Last->GetNode()->CPPmultinode93));
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->erase(*(First->GetNode()->CPPmultinode94), *(Last->GetNode()->CPPmultinode94));
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->erase(*(First->GetNode()->CPPmultinode95), *(Last->GetNode()->CPPmultinode95));
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->erase(*(First->GetNode()->CPPmultinode96), *(Last->GetNode()->CPPmultinode96));
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->erase(*(First->GetNode()->CPPmultinode97), *(Last->GetNode()->CPPmultinode97));
		break;
	case 98:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<long long, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode98); iter != *(Last->GetNode()->CPPmultinode98); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->erase(*(First->GetNode()->CPPmultinode98), *(Last->GetNode()->CPPmultinode98));
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->erase(*(First->GetNode()->CPPmultinode99), *(Last->GetNode()->CPPmultinode99));
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->erase(*(First->GetNode()->CPPmultinode100), *(Last->GetNode()->CPPmultinode100));
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->erase(*(First->GetNode()->CPPmultinode101), *(Last->GetNode()->CPPmultinode101));
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->erase(*(First->GetNode()->CPPmultinode102), *(Last->GetNode()->CPPmultinode102));
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->erase(*(First->GetNode()->CPPmultinode103), *(Last->GetNode()->CPPmultinode103));
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->erase(*(First->GetNode()->CPPmultinode104), *(Last->GetNode()->CPPmultinode104));
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->erase(*(First->GetNode()->CPPmultinode105), *(Last->GetNode()->CPPmultinode105));
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->erase(*(First->GetNode()->CPPmultinode106), *(Last->GetNode()->CPPmultinode106));
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->erase(*(First->GetNode()->CPPmultinode107), *(Last->GetNode()->CPPmultinode107));
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->erase(*(First->GetNode()->CPPmultinode108), *(Last->GetNode()->CPPmultinode108));
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->erase(*(First->GetNode()->CPPmultinode109), *(Last->GetNode()->CPPmultinode109));
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->erase(*(First->GetNode()->CPPmultinode110), *(Last->GetNode()->CPPmultinode110));
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->erase(*(First->GetNode()->CPPmultinode111), *(Last->GetNode()->CPPmultinode111));
		break;
	case 112:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<unsigned long long, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode112); iter != *(Last->GetNode()->CPPmultinode112); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->erase(*(First->GetNode()->CPPmultinode112), *(Last->GetNode()->CPPmultinode112));
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->erase(*(First->GetNode()->CPPmultinode113), *(Last->GetNode()->CPPmultinode113));
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->erase(*(First->GetNode()->CPPmultinode114), *(Last->GetNode()->CPPmultinode114));
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->erase(*(First->GetNode()->CPPmultinode115), *(Last->GetNode()->CPPmultinode115));
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->erase(*(First->GetNode()->CPPmultinode116), *(Last->GetNode()->CPPmultinode116));
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->erase(*(First->GetNode()->CPPmultinode117), *(Last->GetNode()->CPPmultinode117));
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->erase(*(First->GetNode()->CPPmultinode118), *(Last->GetNode()->CPPmultinode118));
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->erase(*(First->GetNode()->CPPmultinode119), *(Last->GetNode()->CPPmultinode119));
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->erase(*(First->GetNode()->CPPmultinode120), *(Last->GetNode()->CPPmultinode120));
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->erase(*(First->GetNode()->CPPmultinode121), *(Last->GetNode()->CPPmultinode121));
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->erase(*(First->GetNode()->CPPmultinode122), *(Last->GetNode()->CPPmultinode122));
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->erase(*(First->GetNode()->CPPmultinode123), *(Last->GetNode()->CPPmultinode123));
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->erase(*(First->GetNode()->CPPmultinode124), *(Last->GetNode()->CPPmultinode124));
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->erase(*(First->GetNode()->CPPmultinode125), *(Last->GetNode()->CPPmultinode125));
		break;
	case 126:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<float, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode126); iter != *(Last->GetNode()->CPPmultinode126); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->erase(*(First->GetNode()->CPPmultinode126), *(Last->GetNode()->CPPmultinode126));
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->erase(*(First->GetNode()->CPPmultinode127), *(Last->GetNode()->CPPmultinode127));
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->erase(*(First->GetNode()->CPPmultinode128), *(Last->GetNode()->CPPmultinode128));
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->erase(*(First->GetNode()->CPPmultinode129), *(Last->GetNode()->CPPmultinode129));
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->erase(*(First->GetNode()->CPPmultinode130), *(Last->GetNode()->CPPmultinode130));
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->erase(*(First->GetNode()->CPPmultinode131), *(Last->GetNode()->CPPmultinode131));
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->erase(*(First->GetNode()->CPPmultinode132), *(Last->GetNode()->CPPmultinode132));
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->erase(*(First->GetNode()->CPPmultinode133), *(Last->GetNode()->CPPmultinode133));
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->erase(*(First->GetNode()->CPPmultinode134), *(Last->GetNode()->CPPmultinode134));
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->erase(*(First->GetNode()->CPPmultinode135), *(Last->GetNode()->CPPmultinode135));
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->erase(*(First->GetNode()->CPPmultinode136), *(Last->GetNode()->CPPmultinode136));
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->erase(*(First->GetNode()->CPPmultinode137), *(Last->GetNode()->CPPmultinode137));
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->erase(*(First->GetNode()->CPPmultinode138), *(Last->GetNode()->CPPmultinode138));
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->erase(*(First->GetNode()->CPPmultinode139), *(Last->GetNode()->CPPmultinode139));
		break;
	case 140:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<double, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode140); iter != *(Last->GetNode()->CPPmultinode140); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->erase(*(First->GetNode()->CPPmultinode140), *(Last->GetNode()->CPPmultinode140));
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->erase(*(First->GetNode()->CPPmultinode141), *(Last->GetNode()->CPPmultinode141));
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->erase(*(First->GetNode()->CPPmultinode142), *(Last->GetNode()->CPPmultinode142));
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->erase(*(First->GetNode()->CPPmultinode143), *(Last->GetNode()->CPPmultinode143));
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->erase(*(First->GetNode()->CPPmultinode144), *(Last->GetNode()->CPPmultinode144));
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->erase(*(First->GetNode()->CPPmultinode145), *(Last->GetNode()->CPPmultinode145));
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->erase(*(First->GetNode()->CPPmultinode146), *(Last->GetNode()->CPPmultinode146));
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->erase(*(First->GetNode()->CPPmultinode147), *(Last->GetNode()->CPPmultinode147));
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->erase(*(First->GetNode()->CPPmultinode148), *(Last->GetNode()->CPPmultinode148));
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->erase(*(First->GetNode()->CPPmultinode149), *(Last->GetNode()->CPPmultinode149));
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->erase(*(First->GetNode()->CPPmultinode150), *(Last->GetNode()->CPPmultinode150));
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->erase(*(First->GetNode()->CPPmultinode151), *(Last->GetNode()->CPPmultinode151));
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->erase(*(First->GetNode()->CPPmultinode152), *(Last->GetNode()->CPPmultinode152));
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->erase(*(First->GetNode()->CPPmultinode153), *(Last->GetNode()->CPPmultinode153));
		break;
	case 154:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<wchar_t, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode154); iter != *(Last->GetNode()->CPPmultinode154); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->erase(*(First->GetNode()->CPPmultinode154), *(Last->GetNode()->CPPmultinode154));
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->erase(*(First->GetNode()->CPPmultinode155), *(Last->GetNode()->CPPmultinode155));
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->erase(*(First->GetNode()->CPPmultinode156), *(Last->GetNode()->CPPmultinode156));
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->erase(*(First->GetNode()->CPPmultinode157), *(Last->GetNode()->CPPmultinode157));
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->erase(*(First->GetNode()->CPPmultinode158), *(Last->GetNode()->CPPmultinode158));
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->erase(*(First->GetNode()->CPPmultinode159), *(Last->GetNode()->CPPmultinode159));
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->erase(*(First->GetNode()->CPPmultinode160), *(Last->GetNode()->CPPmultinode160));
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->erase(*(First->GetNode()->CPPmultinode161), *(Last->GetNode()->CPPmultinode161));
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->erase(*(First->GetNode()->CPPmultinode162), *(Last->GetNode()->CPPmultinode162));
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->erase(*(First->GetNode()->CPPmultinode163), *(Last->GetNode()->CPPmultinode163));
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->erase(*(First->GetNode()->CPPmultinode164), *(Last->GetNode()->CPPmultinode164));
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->erase(*(First->GetNode()->CPPmultinode165), *(Last->GetNode()->CPPmultinode165));
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->erase(*(First->GetNode()->CPPmultinode166), *(Last->GetNode()->CPPmultinode166));
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->erase(*(First->GetNode()->CPPmultinode167), *(Last->GetNode()->CPPmultinode167));
		break;
	case 168:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<bool, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode168); iter != *(Last->GetNode()->CPPmultinode168); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->erase(*(First->GetNode()->CPPmultinode168), *(Last->GetNode()->CPPmultinode168));
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->erase(*(First->GetNode()->CPPmultinode169), *(Last->GetNode()->CPPmultinode169));
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->erase(*(First->GetNode()->CPPmultinode170), *(Last->GetNode()->CPPmultinode170));
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->erase(*(First->GetNode()->CPPmultinode171), *(Last->GetNode()->CPPmultinode171));
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->erase(*(First->GetNode()->CPPmultinode172), *(Last->GetNode()->CPPmultinode172));
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->erase(*(First->GetNode()->CPPmultinode173), *(Last->GetNode()->CPPmultinode173));
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->erase(*(First->GetNode()->CPPmultinode174), *(Last->GetNode()->CPPmultinode174));
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->erase(*(First->GetNode()->CPPmultinode175), *(Last->GetNode()->CPPmultinode175));
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->erase(*(First->GetNode()->CPPmultinode176), *(Last->GetNode()->CPPmultinode176));
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->erase(*(First->GetNode()->CPPmultinode177), *(Last->GetNode()->CPPmultinode177));
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->erase(*(First->GetNode()->CPPmultinode178), *(Last->GetNode()->CPPmultinode178));
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->erase(*(First->GetNode()->CPPmultinode179), *(Last->GetNode()->CPPmultinode179));
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->erase(*(First->GetNode()->CPPmultinode180), *(Last->GetNode()->CPPmultinode180));
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->erase(*(First->GetNode()->CPPmultinode181), *(Last->GetNode()->CPPmultinode181));
		break;
	case 182:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<std::wstring, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode182); iter != *(Last->GetNode()->CPPmultinode182); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->erase(*(First->GetNode()->CPPmultinode182), *(Last->GetNode()->CPPmultinode182));
		break;
	case 183:
		for (auto iter = *(First->GetNode()->CPPmultinode183); iter != *(Last->GetNode()->CPPmultinode183); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->erase(*(First->GetNode()->CPPmultinode183), *(Last->GetNode()->CPPmultinode183));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap183->find(i) == multimapUnion->CPPmultimap183->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 184:
		for (auto iter = *(First->GetNode()->CPPmultinode184); iter != *(Last->GetNode()->CPPmultinode184); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->erase(*(First->GetNode()->CPPmultinode184), *(Last->GetNode()->CPPmultinode184));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap184->find(i) == multimapUnion->CPPmultimap184->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 185:
		for (auto iter = *(First->GetNode()->CPPmultinode185); iter != *(Last->GetNode()->CPPmultinode185); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->erase(*(First->GetNode()->CPPmultinode185), *(Last->GetNode()->CPPmultinode185));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap185->find(i) == multimapUnion->CPPmultimap185->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 186:
		for (auto iter = *(First->GetNode()->CPPmultinode186); iter != *(Last->GetNode()->CPPmultinode186); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->erase(*(First->GetNode()->CPPmultinode186), *(Last->GetNode()->CPPmultinode186));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap186->find(i) == multimapUnion->CPPmultimap186->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 187:
		for (auto iter = *(First->GetNode()->CPPmultinode187); iter != *(Last->GetNode()->CPPmultinode187); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->erase(*(First->GetNode()->CPPmultinode187), *(Last->GetNode()->CPPmultinode187));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap187->find(i) == multimapUnion->CPPmultimap187->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 188:
		for (auto iter = *(First->GetNode()->CPPmultinode188); iter != *(Last->GetNode()->CPPmultinode188); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->erase(*(First->GetNode()->CPPmultinode188), *(Last->GetNode()->CPPmultinode188));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap188->find(i) == multimapUnion->CPPmultimap188->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 189:
		for (auto iter = *(First->GetNode()->CPPmultinode189); iter != *(Last->GetNode()->CPPmultinode189); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->erase(*(First->GetNode()->CPPmultinode189), *(Last->GetNode()->CPPmultinode189));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap189->find(i) == multimapUnion->CPPmultimap189->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 190:
		for (auto iter = *(First->GetNode()->CPPmultinode190); iter != *(Last->GetNode()->CPPmultinode190); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->erase(*(First->GetNode()->CPPmultinode190), *(Last->GetNode()->CPPmultinode190));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap190->find(i) == multimapUnion->CPPmultimap190->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 191:
		for (auto iter = *(First->GetNode()->CPPmultinode191); iter != *(Last->GetNode()->CPPmultinode191); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->erase(*(First->GetNode()->CPPmultinode191), *(Last->GetNode()->CPPmultinode191));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap191->find(i) == multimapUnion->CPPmultimap191->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 192:
		for (auto iter = *(First->GetNode()->CPPmultinode192); iter != *(Last->GetNode()->CPPmultinode192); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->erase(*(First->GetNode()->CPPmultinode192), *(Last->GetNode()->CPPmultinode192));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap192->find(i) == multimapUnion->CPPmultimap192->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 193:
		for (auto iter = *(First->GetNode()->CPPmultinode193); iter != *(Last->GetNode()->CPPmultinode193); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->erase(*(First->GetNode()->CPPmultinode193), *(Last->GetNode()->CPPmultinode193));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap193->find(i) == multimapUnion->CPPmultimap193->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 194:
		for (auto iter = *(First->GetNode()->CPPmultinode194); iter != *(Last->GetNode()->CPPmultinode194); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->erase(*(First->GetNode()->CPPmultinode194), *(Last->GetNode()->CPPmultinode194));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap194->find(i) == multimapUnion->CPPmultimap194->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 195:
		for (auto iter = *(First->GetNode()->CPPmultinode195); iter != *(Last->GetNode()->CPPmultinode195); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->erase(*(First->GetNode()->CPPmultinode195), *(Last->GetNode()->CPPmultinode195));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap195->find(i) == multimapUnion->CPPmultimap195->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 196:
		if (gValueClassDictionary)
		{
			UnOrderedMultiNode<__int64, __int64> iter;
			for (iter = *(First->GetNode()->CPPmultinode196); iter != *(Last->GetNode()->CPPmultinode196); iter++)
			{
				TempKeySet.emplace(iter.GetKey());
				gValueClassDictionary->Remove(iter.GetValue());
			}
		}
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->erase(*(First->GetNode()->CPPmultinode196), *(Last->GetNode()->CPPmultinode196));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap196->find(i) == multimapUnion->CPPmultimap196->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	}

	if ((183 <= nKeyValueType && nKeyValueType <= 196) && bTempKeyDeleted)
	{
		if (gKeyClassDictionary && gIntKeyClassDictionary)
		{
			Key temp;
			for (__int64 Key__Int : TempKeyDeletedSet)
				if (gIntKeyClassDictionary->TryGetValue(Key__Int, temp))
				{
					gIntKeyClassDictionary->Remove(Key__Int);
					gKeyClassDictionary->Remove(temp);
				}
		}
	}

	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(CShorpUnOrderedMultiConstNode<Key, Value>^% _Where)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (nKeyValueType != _Where->GetKVType()) return nullptr;
	if (_Where->GetInit() == 0) return nullptr;

	auto TempIter = _Where->DeepCopy();
	TempIter->operator++(TempIter);

	__int64 Key__Int = 0;
	bool bTempKeyDeleted = false;

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->erase(*(_Where->GetNode()->CPPmulticonstnode1));
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->erase(*(_Where->GetNode()->CPPmulticonstnode2));
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->erase(*(_Where->GetNode()->CPPmulticonstnode3));
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->erase(*(_Where->GetNode()->CPPmulticonstnode4));
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->erase(*(_Where->GetNode()->CPPmulticonstnode5));
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->erase(*(_Where->GetNode()->CPPmulticonstnode6));
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->erase(*(_Where->GetNode()->CPPmulticonstnode7));
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->erase(*(_Where->GetNode()->CPPmulticonstnode8));
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->erase(*(_Where->GetNode()->CPPmulticonstnode9));
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->erase(*(_Where->GetNode()->CPPmulticonstnode10));
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->erase(*(_Where->GetNode()->CPPmulticonstnode11));
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->erase(*(_Where->GetNode()->CPPmulticonstnode12));
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->erase(*(_Where->GetNode()->CPPmulticonstnode13));
		break;
	case 14:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode14->GetValue());
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->erase(*(_Where->GetNode()->CPPmulticonstnode14));
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->erase(*(_Where->GetNode()->CPPmulticonstnode15));
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->erase(*(_Where->GetNode()->CPPmulticonstnode16));
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->erase(*(_Where->GetNode()->CPPmulticonstnode17));
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->erase(*(_Where->GetNode()->CPPmulticonstnode18));
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->erase(*(_Where->GetNode()->CPPmulticonstnode19));
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->erase(*(_Where->GetNode()->CPPmulticonstnode20));
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->erase(*(_Where->GetNode()->CPPmulticonstnode21));
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->erase(*(_Where->GetNode()->CPPmulticonstnode22));
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->erase(*(_Where->GetNode()->CPPmulticonstnode23));
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->erase(*(_Where->GetNode()->CPPmulticonstnode24));
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->erase(*(_Where->GetNode()->CPPmulticonstnode25));
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->erase(*(_Where->GetNode()->CPPmulticonstnode26));
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->erase(*(_Where->GetNode()->CPPmulticonstnode27));
		break;
	case 28:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode28->GetValue());
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->erase(*(_Where->GetNode()->CPPmulticonstnode28));
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->erase(*(_Where->GetNode()->CPPmulticonstnode29));
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->erase(*(_Where->GetNode()->CPPmulticonstnode30));
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->erase(*(_Where->GetNode()->CPPmulticonstnode31));
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->erase(*(_Where->GetNode()->CPPmulticonstnode32));
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->erase(*(_Where->GetNode()->CPPmulticonstnode33));
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->erase(*(_Where->GetNode()->CPPmulticonstnode34));
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->erase(*(_Where->GetNode()->CPPmulticonstnode35));
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->erase(*(_Where->GetNode()->CPPmulticonstnode36));
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->erase(*(_Where->GetNode()->CPPmulticonstnode37));
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->erase(*(_Where->GetNode()->CPPmulticonstnode38));
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->erase(*(_Where->GetNode()->CPPmulticonstnode39));
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->erase(*(_Where->GetNode()->CPPmulticonstnode40));
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->erase(*(_Where->GetNode()->CPPmulticonstnode41));
		break;
	case 42:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode42->GetValue());
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->erase(*(_Where->GetNode()->CPPmulticonstnode42));
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->erase(*(_Where->GetNode()->CPPmulticonstnode43));
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->erase(*(_Where->GetNode()->CPPmulticonstnode44));
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->erase(*(_Where->GetNode()->CPPmulticonstnode45));
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->erase(*(_Where->GetNode()->CPPmulticonstnode46));
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->erase(*(_Where->GetNode()->CPPmulticonstnode47));
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->erase(*(_Where->GetNode()->CPPmulticonstnode48));
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->erase(*(_Where->GetNode()->CPPmulticonstnode49));
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->erase(*(_Where->GetNode()->CPPmulticonstnode50));
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->erase(*(_Where->GetNode()->CPPmulticonstnode51));
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->erase(*(_Where->GetNode()->CPPmulticonstnode52));
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->erase(*(_Where->GetNode()->CPPmulticonstnode53));
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->erase(*(_Where->GetNode()->CPPmulticonstnode54));
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->erase(*(_Where->GetNode()->CPPmulticonstnode55));
		break;
	case 56:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode56->GetValue());
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->erase(*(_Where->GetNode()->CPPmulticonstnode56));
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->erase(*(_Where->GetNode()->CPPmulticonstnode57));
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->erase(*(_Where->GetNode()->CPPmulticonstnode58));
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->erase(*(_Where->GetNode()->CPPmulticonstnode59));
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->erase(*(_Where->GetNode()->CPPmulticonstnode60));
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->erase(*(_Where->GetNode()->CPPmulticonstnode61));
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->erase(*(_Where->GetNode()->CPPmulticonstnode62));
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->erase(*(_Where->GetNode()->CPPmulticonstnode63));
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->erase(*(_Where->GetNode()->CPPmulticonstnode64));
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->erase(*(_Where->GetNode()->CPPmulticonstnode65));
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->erase(*(_Where->GetNode()->CPPmulticonstnode66));
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->erase(*(_Where->GetNode()->CPPmulticonstnode67));
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->erase(*(_Where->GetNode()->CPPmulticonstnode68));
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->erase(*(_Where->GetNode()->CPPmulticonstnode69));
		break;
	case 70:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode70->GetValue());
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->erase(*(_Where->GetNode()->CPPmulticonstnode70));
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->erase(*(_Where->GetNode()->CPPmulticonstnode71));
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->erase(*(_Where->GetNode()->CPPmulticonstnode72));
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->erase(*(_Where->GetNode()->CPPmulticonstnode73));
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->erase(*(_Where->GetNode()->CPPmulticonstnode74));
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->erase(*(_Where->GetNode()->CPPmulticonstnode75));
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->erase(*(_Where->GetNode()->CPPmulticonstnode76));
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->erase(*(_Where->GetNode()->CPPmulticonstnode77));
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->erase(*(_Where->GetNode()->CPPmulticonstnode78));
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->erase(*(_Where->GetNode()->CPPmulticonstnode79));
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->erase(*(_Where->GetNode()->CPPmulticonstnode80));
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->erase(*(_Where->GetNode()->CPPmulticonstnode81));
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->erase(*(_Where->GetNode()->CPPmulticonstnode82));
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->erase(*(_Where->GetNode()->CPPmulticonstnode83));
		break;
	case 84:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode84->GetValue());
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->erase(*(_Where->GetNode()->CPPmulticonstnode84));
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->erase(*(_Where->GetNode()->CPPmulticonstnode85));
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->erase(*(_Where->GetNode()->CPPmulticonstnode86));
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->erase(*(_Where->GetNode()->CPPmulticonstnode87));
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->erase(*(_Where->GetNode()->CPPmulticonstnode88));
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->erase(*(_Where->GetNode()->CPPmulticonstnode89));
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->erase(*(_Where->GetNode()->CPPmulticonstnode90));
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->erase(*(_Where->GetNode()->CPPmulticonstnode91));
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->erase(*(_Where->GetNode()->CPPmulticonstnode92));
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->erase(*(_Where->GetNode()->CPPmulticonstnode93));
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->erase(*(_Where->GetNode()->CPPmulticonstnode94));
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->erase(*(_Where->GetNode()->CPPmulticonstnode95));
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->erase(*(_Where->GetNode()->CPPmulticonstnode96));
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->erase(*(_Where->GetNode()->CPPmulticonstnode97));
		break;
	case 98:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode98->GetValue());
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->erase(*(_Where->GetNode()->CPPmulticonstnode98));
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->erase(*(_Where->GetNode()->CPPmulticonstnode99));
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->erase(*(_Where->GetNode()->CPPmulticonstnode100));
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->erase(*(_Where->GetNode()->CPPmulticonstnode101));
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->erase(*(_Where->GetNode()->CPPmulticonstnode102));
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->erase(*(_Where->GetNode()->CPPmulticonstnode103));
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->erase(*(_Where->GetNode()->CPPmulticonstnode104));
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->erase(*(_Where->GetNode()->CPPmulticonstnode105));
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->erase(*(_Where->GetNode()->CPPmulticonstnode106));
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->erase(*(_Where->GetNode()->CPPmulticonstnode107));
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->erase(*(_Where->GetNode()->CPPmulticonstnode108));
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->erase(*(_Where->GetNode()->CPPmulticonstnode109));
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->erase(*(_Where->GetNode()->CPPmulticonstnode110));
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->erase(*(_Where->GetNode()->CPPmulticonstnode111));
		break;
	case 112:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode112->GetValue());
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->erase(*(_Where->GetNode()->CPPmulticonstnode112));
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->erase(*(_Where->GetNode()->CPPmulticonstnode113));
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->erase(*(_Where->GetNode()->CPPmulticonstnode114));
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->erase(*(_Where->GetNode()->CPPmulticonstnode115));
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->erase(*(_Where->GetNode()->CPPmulticonstnode116));
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->erase(*(_Where->GetNode()->CPPmulticonstnode117));
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->erase(*(_Where->GetNode()->CPPmulticonstnode118));
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->erase(*(_Where->GetNode()->CPPmulticonstnode119));
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->erase(*(_Where->GetNode()->CPPmulticonstnode120));
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->erase(*(_Where->GetNode()->CPPmulticonstnode121));
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->erase(*(_Where->GetNode()->CPPmulticonstnode122));
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->erase(*(_Where->GetNode()->CPPmulticonstnode123));
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->erase(*(_Where->GetNode()->CPPmulticonstnode124));
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->erase(*(_Where->GetNode()->CPPmulticonstnode125));
		break;
	case 126:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode126->GetValue());
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->erase(*(_Where->GetNode()->CPPmulticonstnode126));
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->erase(*(_Where->GetNode()->CPPmulticonstnode127));
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->erase(*(_Where->GetNode()->CPPmulticonstnode128));
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->erase(*(_Where->GetNode()->CPPmulticonstnode129));
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->erase(*(_Where->GetNode()->CPPmulticonstnode130));
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->erase(*(_Where->GetNode()->CPPmulticonstnode131));
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->erase(*(_Where->GetNode()->CPPmulticonstnode132));
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->erase(*(_Where->GetNode()->CPPmulticonstnode133));
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->erase(*(_Where->GetNode()->CPPmulticonstnode134));
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->erase(*(_Where->GetNode()->CPPmulticonstnode135));
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->erase(*(_Where->GetNode()->CPPmulticonstnode136));
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->erase(*(_Where->GetNode()->CPPmulticonstnode137));
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->erase(*(_Where->GetNode()->CPPmulticonstnode138));
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->erase(*(_Where->GetNode()->CPPmulticonstnode139));
		break;
	case 140:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode140->GetValue());
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->erase(*(_Where->GetNode()->CPPmulticonstnode140));
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->erase(*(_Where->GetNode()->CPPmulticonstnode141));
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->erase(*(_Where->GetNode()->CPPmulticonstnode142));
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->erase(*(_Where->GetNode()->CPPmulticonstnode143));
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->erase(*(_Where->GetNode()->CPPmulticonstnode144));
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->erase(*(_Where->GetNode()->CPPmulticonstnode145));
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->erase(*(_Where->GetNode()->CPPmulticonstnode146));
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->erase(*(_Where->GetNode()->CPPmulticonstnode147));
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->erase(*(_Where->GetNode()->CPPmulticonstnode148));
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->erase(*(_Where->GetNode()->CPPmulticonstnode149));
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->erase(*(_Where->GetNode()->CPPmulticonstnode150));
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->erase(*(_Where->GetNode()->CPPmulticonstnode151));
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->erase(*(_Where->GetNode()->CPPmulticonstnode152));
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->erase(*(_Where->GetNode()->CPPmulticonstnode153));
		break;
	case 154:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode154->GetValue());
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->erase(*(_Where->GetNode()->CPPmulticonstnode154));
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->erase(*(_Where->GetNode()->CPPmulticonstnode155));
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->erase(*(_Where->GetNode()->CPPmulticonstnode156));
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->erase(*(_Where->GetNode()->CPPmulticonstnode157));
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->erase(*(_Where->GetNode()->CPPmulticonstnode158));
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->erase(*(_Where->GetNode()->CPPmulticonstnode159));
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->erase(*(_Where->GetNode()->CPPmulticonstnode160));
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->erase(*(_Where->GetNode()->CPPmulticonstnode161));
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->erase(*(_Where->GetNode()->CPPmulticonstnode162));
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->erase(*(_Where->GetNode()->CPPmulticonstnode163));
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->erase(*(_Where->GetNode()->CPPmulticonstnode164));
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->erase(*(_Where->GetNode()->CPPmulticonstnode165));
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->erase(*(_Where->GetNode()->CPPmulticonstnode166));
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->erase(*(_Where->GetNode()->CPPmulticonstnode167));
		break;
	case 168:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode168->GetValue());
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->erase(*(_Where->GetNode()->CPPmulticonstnode168));
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->erase(*(_Where->GetNode()->CPPmulticonstnode169));
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->erase(*(_Where->GetNode()->CPPmulticonstnode170));
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->erase(*(_Where->GetNode()->CPPmulticonstnode171));
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->erase(*(_Where->GetNode()->CPPmulticonstnode172));
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->erase(*(_Where->GetNode()->CPPmulticonstnode173));
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->erase(*(_Where->GetNode()->CPPmulticonstnode174));
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->erase(*(_Where->GetNode()->CPPmulticonstnode175));
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->erase(*(_Where->GetNode()->CPPmulticonstnode176));
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->erase(*(_Where->GetNode()->CPPmulticonstnode177));
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->erase(*(_Where->GetNode()->CPPmulticonstnode178));
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->erase(*(_Where->GetNode()->CPPmulticonstnode179));
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->erase(*(_Where->GetNode()->CPPmulticonstnode180));
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->erase(*(_Where->GetNode()->CPPmulticonstnode181));
		break;
	case 182:
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode182->GetValue());
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->erase(*(_Where->GetNode()->CPPmulticonstnode182));
		break;
	case 183:
		Key__Int = _Where->GetNode()->CPPmulticonstnode183->GetKey();
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->erase(*(_Where->GetNode()->CPPmulticonstnode183));
		if (multimapUnion->CPPmultimap183->find(Key__Int) == multimapUnion->CPPmultimap183->end())
			bTempKeyDeleted = true;
		break;
	case 184:
		Key__Int = _Where->GetNode()->CPPmulticonstnode184->GetKey();
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->erase(*(_Where->GetNode()->CPPmulticonstnode184));
		if (multimapUnion->CPPmultimap184->find(Key__Int) == multimapUnion->CPPmultimap184->end())
			bTempKeyDeleted = true;
		break;
	case 185:
		Key__Int = _Where->GetNode()->CPPmulticonstnode185->GetKey();
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->erase(*(_Where->GetNode()->CPPmulticonstnode185));
		if (multimapUnion->CPPmultimap185->find(Key__Int) == multimapUnion->CPPmultimap185->end())
			bTempKeyDeleted = true;
		break;
	case 186:
		Key__Int = _Where->GetNode()->CPPmulticonstnode186->GetKey();
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->erase(*(_Where->GetNode()->CPPmulticonstnode186));
		if (multimapUnion->CPPmultimap186->find(Key__Int) == multimapUnion->CPPmultimap186->end())
			bTempKeyDeleted = true;
		break;
	case 187:
		Key__Int = _Where->GetNode()->CPPmulticonstnode187->GetKey();
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->erase(*(_Where->GetNode()->CPPmulticonstnode187));
		if (multimapUnion->CPPmultimap187->find(Key__Int) == multimapUnion->CPPmultimap187->end())
			bTempKeyDeleted = true;
		break;
	case 188:
		Key__Int = _Where->GetNode()->CPPmulticonstnode188->GetKey();
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->erase(*(_Where->GetNode()->CPPmulticonstnode188));
		if (multimapUnion->CPPmultimap188->find(Key__Int) == multimapUnion->CPPmultimap188->end())
			bTempKeyDeleted = true;
		break;
	case 189:
		Key__Int = _Where->GetNode()->CPPmulticonstnode189->GetKey();
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->erase(*(_Where->GetNode()->CPPmulticonstnode189));
		if (multimapUnion->CPPmultimap189->find(Key__Int) == multimapUnion->CPPmultimap189->end())
			bTempKeyDeleted = true;
		break;
	case 190:
		Key__Int = _Where->GetNode()->CPPmulticonstnode190->GetKey();
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->erase(*(_Where->GetNode()->CPPmulticonstnode190));
		if (multimapUnion->CPPmultimap190->find(Key__Int) == multimapUnion->CPPmultimap190->end())
			bTempKeyDeleted = true;
		break;
	case 191:
		Key__Int = _Where->GetNode()->CPPmulticonstnode191->GetKey();
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->erase(*(_Where->GetNode()->CPPmulticonstnode191));
		if (multimapUnion->CPPmultimap191->find(Key__Int) == multimapUnion->CPPmultimap191->end())
			bTempKeyDeleted = true;
		break;
	case 192:
		Key__Int = _Where->GetNode()->CPPmulticonstnode192->GetKey();
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->erase(*(_Where->GetNode()->CPPmulticonstnode192));
		if (multimapUnion->CPPmultimap192->find(Key__Int) == multimapUnion->CPPmultimap192->end())
			bTempKeyDeleted = true;
		break;
	case 193:
		Key__Int = _Where->GetNode()->CPPmulticonstnode193->GetKey();
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->erase(*(_Where->GetNode()->CPPmulticonstnode193));
		if (multimapUnion->CPPmultimap193->find(Key__Int) == multimapUnion->CPPmultimap193->end())
			bTempKeyDeleted = true;
		break;
	case 194:
		Key__Int = _Where->GetNode()->CPPmulticonstnode194->GetKey();
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->erase(*(_Where->GetNode()->CPPmulticonstnode194));
		if (multimapUnion->CPPmultimap194->find(Key__Int) == multimapUnion->CPPmultimap194->end())
			bTempKeyDeleted = true;
		break;
	case 195:
		Key__Int = _Where->GetNode()->CPPmulticonstnode195->GetKey();
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->erase(*(_Where->GetNode()->CPPmulticonstnode195));
		if (multimapUnion->CPPmultimap195->find(Key__Int) == multimapUnion->CPPmultimap195->end())
			bTempKeyDeleted = true;
		break;
	case 196:
		Key__Int = _Where->GetNode()->CPPmulticonstnode196->GetKey();
		if (gValueClassDictionary)
			gValueClassDictionary->Remove(_Where->GetNode()->CPPmulticonstnode196->GetValue());
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->erase(*(_Where->GetNode()->CPPmulticonstnode196));
		if (multimapUnion->CPPmultimap196->find(Key__Int) == multimapUnion->CPPmultimap196->end())
			bTempKeyDeleted = true;
		break;
	}

	if ((183 <= nKeyValueType && nKeyValueType <= 196) && bTempKeyDeleted)
	{
		if (gKeyClassDictionary && gIntKeyClassDictionary)
		{
			Key temp;
			if (gIntKeyClassDictionary->TryGetValue(Key__Int, temp))
			{
				gIntKeyClassDictionary->Remove(Key__Int);
				gKeyClassDictionary->Remove(temp);
			}
		}
	}

	_Where = TempIter;

	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::erase(CShorpUnOrderedMultiConstNode<Key, Value>^ First, CShorpUnOrderedMultiConstNode<Key, Value>^ Last)
{
	if (Object::ReferenceEquals(First, nullptr)) return nullptr;
	if (Object::ReferenceEquals(Last, nullptr)) return nullptr;
	if (First->GetKVType() != Last->GetKVType()) return nullptr;
	if (nKeyValueType != First->GetKVType()) return nullptr;
	if (First->GetInit() == 0) return nullptr;
	if (Last->GetInit() == 0) return nullptr;

	std::set<__int64> TempKeySet;
	std::set<__int64> TempKeyDeletedSet;
	bool bTempKeyDeleted = false;

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->erase(*(First->GetNode()->CPPmulticonstnode1), *(Last->GetNode()->CPPmulticonstnode1));
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->erase(*(First->GetNode()->CPPmulticonstnode2), *(Last->GetNode()->CPPmulticonstnode2));
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->erase(*(First->GetNode()->CPPmulticonstnode3), *(Last->GetNode()->CPPmulticonstnode3));
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->erase(*(First->GetNode()->CPPmulticonstnode4), *(Last->GetNode()->CPPmulticonstnode4));
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->erase(*(First->GetNode()->CPPmulticonstnode5), *(Last->GetNode()->CPPmulticonstnode5));
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->erase(*(First->GetNode()->CPPmulticonstnode6), *(Last->GetNode()->CPPmulticonstnode6));
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->erase(*(First->GetNode()->CPPmulticonstnode7), *(Last->GetNode()->CPPmulticonstnode7));
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->erase(*(First->GetNode()->CPPmulticonstnode8), *(Last->GetNode()->CPPmulticonstnode8));
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->erase(*(First->GetNode()->CPPmulticonstnode9), *(Last->GetNode()->CPPmulticonstnode9));
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->erase(*(First->GetNode()->CPPmulticonstnode10), *(Last->GetNode()->CPPmulticonstnode10));
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->erase(*(First->GetNode()->CPPmulticonstnode11), *(Last->GetNode()->CPPmulticonstnode11));
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->erase(*(First->GetNode()->CPPmulticonstnode12), *(Last->GetNode()->CPPmulticonstnode12));
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->erase(*(First->GetNode()->CPPmulticonstnode13), *(Last->GetNode()->CPPmulticonstnode13));
		break;
	case 14:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<unsigned char, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode14); iter != *(Last->GetNode()->CPPmulticonstnode14); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->erase(*(First->GetNode()->CPPmulticonstnode14), *(Last->GetNode()->CPPmulticonstnode14));
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->erase(*(First->GetNode()->CPPmulticonstnode15), *(Last->GetNode()->CPPmulticonstnode15));
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->erase(*(First->GetNode()->CPPmulticonstnode16), *(Last->GetNode()->CPPmulticonstnode16));
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->erase(*(First->GetNode()->CPPmulticonstnode17), *(Last->GetNode()->CPPmulticonstnode17));
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->erase(*(First->GetNode()->CPPmulticonstnode18), *(Last->GetNode()->CPPmulticonstnode18));
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->erase(*(First->GetNode()->CPPmulticonstnode19), *(Last->GetNode()->CPPmulticonstnode19));
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->erase(*(First->GetNode()->CPPmulticonstnode20), *(Last->GetNode()->CPPmulticonstnode20));
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->erase(*(First->GetNode()->CPPmulticonstnode21), *(Last->GetNode()->CPPmulticonstnode21));
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->erase(*(First->GetNode()->CPPmulticonstnode22), *(Last->GetNode()->CPPmulticonstnode22));
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->erase(*(First->GetNode()->CPPmulticonstnode23), *(Last->GetNode()->CPPmulticonstnode23));
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->erase(*(First->GetNode()->CPPmulticonstnode24), *(Last->GetNode()->CPPmulticonstnode24));
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->erase(*(First->GetNode()->CPPmulticonstnode25), *(Last->GetNode()->CPPmulticonstnode25));
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->erase(*(First->GetNode()->CPPmulticonstnode26), *(Last->GetNode()->CPPmulticonstnode26));
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->erase(*(First->GetNode()->CPPmulticonstnode27), *(Last->GetNode()->CPPmulticonstnode27));
		break;
	case 28:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<char, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode28); iter != *(Last->GetNode()->CPPmulticonstnode28); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->erase(*(First->GetNode()->CPPmulticonstnode28), *(Last->GetNode()->CPPmulticonstnode28));
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->erase(*(First->GetNode()->CPPmulticonstnode29), *(Last->GetNode()->CPPmulticonstnode29));
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->erase(*(First->GetNode()->CPPmulticonstnode30), *(Last->GetNode()->CPPmulticonstnode30));
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->erase(*(First->GetNode()->CPPmulticonstnode31), *(Last->GetNode()->CPPmulticonstnode31));
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->erase(*(First->GetNode()->CPPmulticonstnode32), *(Last->GetNode()->CPPmulticonstnode32));
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->erase(*(First->GetNode()->CPPmulticonstnode33), *(Last->GetNode()->CPPmulticonstnode33));
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->erase(*(First->GetNode()->CPPmulticonstnode34), *(Last->GetNode()->CPPmulticonstnode34));
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->erase(*(First->GetNode()->CPPmulticonstnode35), *(Last->GetNode()->CPPmulticonstnode35));
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->erase(*(First->GetNode()->CPPmulticonstnode36), *(Last->GetNode()->CPPmulticonstnode36));
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->erase(*(First->GetNode()->CPPmulticonstnode37), *(Last->GetNode()->CPPmulticonstnode37));
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->erase(*(First->GetNode()->CPPmulticonstnode38), *(Last->GetNode()->CPPmulticonstnode38));
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->erase(*(First->GetNode()->CPPmulticonstnode39), *(Last->GetNode()->CPPmulticonstnode39));
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->erase(*(First->GetNode()->CPPmulticonstnode40), *(Last->GetNode()->CPPmulticonstnode40));
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->erase(*(First->GetNode()->CPPmulticonstnode41), *(Last->GetNode()->CPPmulticonstnode41));
		break;
	case 42:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<short, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode42); iter != *(Last->GetNode()->CPPmulticonstnode42); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->erase(*(First->GetNode()->CPPmulticonstnode42), *(Last->GetNode()->CPPmulticonstnode42));
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->erase(*(First->GetNode()->CPPmulticonstnode43), *(Last->GetNode()->CPPmulticonstnode43));
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->erase(*(First->GetNode()->CPPmulticonstnode44), *(Last->GetNode()->CPPmulticonstnode44));
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->erase(*(First->GetNode()->CPPmulticonstnode45), *(Last->GetNode()->CPPmulticonstnode45));
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->erase(*(First->GetNode()->CPPmulticonstnode46), *(Last->GetNode()->CPPmulticonstnode46));
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->erase(*(First->GetNode()->CPPmulticonstnode47), *(Last->GetNode()->CPPmulticonstnode47));
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->erase(*(First->GetNode()->CPPmulticonstnode48), *(Last->GetNode()->CPPmulticonstnode48));
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->erase(*(First->GetNode()->CPPmulticonstnode49), *(Last->GetNode()->CPPmulticonstnode49));
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->erase(*(First->GetNode()->CPPmulticonstnode50), *(Last->GetNode()->CPPmulticonstnode50));
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->erase(*(First->GetNode()->CPPmulticonstnode51), *(Last->GetNode()->CPPmulticonstnode51));
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->erase(*(First->GetNode()->CPPmulticonstnode52), *(Last->GetNode()->CPPmulticonstnode52));
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->erase(*(First->GetNode()->CPPmulticonstnode53), *(Last->GetNode()->CPPmulticonstnode53));
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->erase(*(First->GetNode()->CPPmulticonstnode54), *(Last->GetNode()->CPPmulticonstnode54));
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->erase(*(First->GetNode()->CPPmulticonstnode55), *(Last->GetNode()->CPPmulticonstnode55));
		break;
	case 56:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<unsigned short, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode56); iter != *(Last->GetNode()->CPPmulticonstnode56); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->erase(*(First->GetNode()->CPPmulticonstnode56), *(Last->GetNode()->CPPmulticonstnode56));
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->erase(*(First->GetNode()->CPPmulticonstnode57), *(Last->GetNode()->CPPmulticonstnode57));
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->erase(*(First->GetNode()->CPPmulticonstnode58), *(Last->GetNode()->CPPmulticonstnode58));
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->erase(*(First->GetNode()->CPPmulticonstnode59), *(Last->GetNode()->CPPmulticonstnode59));
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->erase(*(First->GetNode()->CPPmulticonstnode60), *(Last->GetNode()->CPPmulticonstnode60));
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->erase(*(First->GetNode()->CPPmulticonstnode61), *(Last->GetNode()->CPPmulticonstnode61));
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->erase(*(First->GetNode()->CPPmulticonstnode62), *(Last->GetNode()->CPPmulticonstnode62));
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->erase(*(First->GetNode()->CPPmulticonstnode63), *(Last->GetNode()->CPPmulticonstnode63));
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->erase(*(First->GetNode()->CPPmulticonstnode64), *(Last->GetNode()->CPPmulticonstnode64));
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->erase(*(First->GetNode()->CPPmulticonstnode65), *(Last->GetNode()->CPPmulticonstnode65));
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->erase(*(First->GetNode()->CPPmulticonstnode66), *(Last->GetNode()->CPPmulticonstnode66));
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->erase(*(First->GetNode()->CPPmulticonstnode67), *(Last->GetNode()->CPPmulticonstnode67));
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->erase(*(First->GetNode()->CPPmulticonstnode68), *(Last->GetNode()->CPPmulticonstnode68));
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->erase(*(First->GetNode()->CPPmulticonstnode69), *(Last->GetNode()->CPPmulticonstnode69));
		break;
	case 70:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<int, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode70); iter != *(Last->GetNode()->CPPmulticonstnode70); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->erase(*(First->GetNode()->CPPmulticonstnode70), *(Last->GetNode()->CPPmulticonstnode70));
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->erase(*(First->GetNode()->CPPmulticonstnode71), *(Last->GetNode()->CPPmulticonstnode71));
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->erase(*(First->GetNode()->CPPmulticonstnode72), *(Last->GetNode()->CPPmulticonstnode72));
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->erase(*(First->GetNode()->CPPmulticonstnode73), *(Last->GetNode()->CPPmulticonstnode73));
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->erase(*(First->GetNode()->CPPmulticonstnode74), *(Last->GetNode()->CPPmulticonstnode74));
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->erase(*(First->GetNode()->CPPmulticonstnode75), *(Last->GetNode()->CPPmulticonstnode75));
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->erase(*(First->GetNode()->CPPmulticonstnode76), *(Last->GetNode()->CPPmulticonstnode76));
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->erase(*(First->GetNode()->CPPmulticonstnode77), *(Last->GetNode()->CPPmulticonstnode77));
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->erase(*(First->GetNode()->CPPmulticonstnode78), *(Last->GetNode()->CPPmulticonstnode78));
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->erase(*(First->GetNode()->CPPmulticonstnode79), *(Last->GetNode()->CPPmulticonstnode79));
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->erase(*(First->GetNode()->CPPmulticonstnode80), *(Last->GetNode()->CPPmulticonstnode80));
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->erase(*(First->GetNode()->CPPmulticonstnode81), *(Last->GetNode()->CPPmulticonstnode81));
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->erase(*(First->GetNode()->CPPmulticonstnode82), *(Last->GetNode()->CPPmulticonstnode82));
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->erase(*(First->GetNode()->CPPmulticonstnode83), *(Last->GetNode()->CPPmulticonstnode83));
		break;
	case 84:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<unsigned int, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode84); iter != *(Last->GetNode()->CPPmulticonstnode84); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->erase(*(First->GetNode()->CPPmulticonstnode84), *(Last->GetNode()->CPPmulticonstnode84));
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->erase(*(First->GetNode()->CPPmulticonstnode85), *(Last->GetNode()->CPPmulticonstnode85));
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->erase(*(First->GetNode()->CPPmulticonstnode86), *(Last->GetNode()->CPPmulticonstnode86));
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->erase(*(First->GetNode()->CPPmulticonstnode87), *(Last->GetNode()->CPPmulticonstnode87));
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->erase(*(First->GetNode()->CPPmulticonstnode88), *(Last->GetNode()->CPPmulticonstnode88));
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->erase(*(First->GetNode()->CPPmulticonstnode89), *(Last->GetNode()->CPPmulticonstnode89));
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->erase(*(First->GetNode()->CPPmulticonstnode90), *(Last->GetNode()->CPPmulticonstnode90));
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->erase(*(First->GetNode()->CPPmulticonstnode91), *(Last->GetNode()->CPPmulticonstnode91));
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->erase(*(First->GetNode()->CPPmulticonstnode92), *(Last->GetNode()->CPPmulticonstnode92));
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->erase(*(First->GetNode()->CPPmulticonstnode93), *(Last->GetNode()->CPPmulticonstnode93));
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->erase(*(First->GetNode()->CPPmulticonstnode94), *(Last->GetNode()->CPPmulticonstnode94));
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->erase(*(First->GetNode()->CPPmulticonstnode95), *(Last->GetNode()->CPPmulticonstnode95));
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->erase(*(First->GetNode()->CPPmulticonstnode96), *(Last->GetNode()->CPPmulticonstnode96));
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->erase(*(First->GetNode()->CPPmulticonstnode97), *(Last->GetNode()->CPPmulticonstnode97));
		break;
	case 98:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<long long, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode98); iter != *(Last->GetNode()->CPPmulticonstnode98); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->erase(*(First->GetNode()->CPPmulticonstnode98), *(Last->GetNode()->CPPmulticonstnode98));
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->erase(*(First->GetNode()->CPPmulticonstnode99), *(Last->GetNode()->CPPmulticonstnode99));
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->erase(*(First->GetNode()->CPPmulticonstnode100), *(Last->GetNode()->CPPmulticonstnode100));
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->erase(*(First->GetNode()->CPPmulticonstnode101), *(Last->GetNode()->CPPmulticonstnode101));
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->erase(*(First->GetNode()->CPPmulticonstnode102), *(Last->GetNode()->CPPmulticonstnode102));
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->erase(*(First->GetNode()->CPPmulticonstnode103), *(Last->GetNode()->CPPmulticonstnode103));
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->erase(*(First->GetNode()->CPPmulticonstnode104), *(Last->GetNode()->CPPmulticonstnode104));
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->erase(*(First->GetNode()->CPPmulticonstnode105), *(Last->GetNode()->CPPmulticonstnode105));
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->erase(*(First->GetNode()->CPPmulticonstnode106), *(Last->GetNode()->CPPmulticonstnode106));
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->erase(*(First->GetNode()->CPPmulticonstnode107), *(Last->GetNode()->CPPmulticonstnode107));
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->erase(*(First->GetNode()->CPPmulticonstnode108), *(Last->GetNode()->CPPmulticonstnode108));
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->erase(*(First->GetNode()->CPPmulticonstnode109), *(Last->GetNode()->CPPmulticonstnode109));
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->erase(*(First->GetNode()->CPPmulticonstnode110), *(Last->GetNode()->CPPmulticonstnode110));
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->erase(*(First->GetNode()->CPPmulticonstnode111), *(Last->GetNode()->CPPmulticonstnode111));
		break;
	case 112:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<unsigned long long, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode112); iter != *(Last->GetNode()->CPPmulticonstnode112); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->erase(*(First->GetNode()->CPPmulticonstnode112), *(Last->GetNode()->CPPmulticonstnode112));
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->erase(*(First->GetNode()->CPPmulticonstnode113), *(Last->GetNode()->CPPmulticonstnode113));
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->erase(*(First->GetNode()->CPPmulticonstnode114), *(Last->GetNode()->CPPmulticonstnode114));
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->erase(*(First->GetNode()->CPPmulticonstnode115), *(Last->GetNode()->CPPmulticonstnode115));
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->erase(*(First->GetNode()->CPPmulticonstnode116), *(Last->GetNode()->CPPmulticonstnode116));
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->erase(*(First->GetNode()->CPPmulticonstnode117), *(Last->GetNode()->CPPmulticonstnode117));
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->erase(*(First->GetNode()->CPPmulticonstnode118), *(Last->GetNode()->CPPmulticonstnode118));
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->erase(*(First->GetNode()->CPPmulticonstnode119), *(Last->GetNode()->CPPmulticonstnode119));
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->erase(*(First->GetNode()->CPPmulticonstnode120), *(Last->GetNode()->CPPmulticonstnode120));
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->erase(*(First->GetNode()->CPPmulticonstnode121), *(Last->GetNode()->CPPmulticonstnode121));
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->erase(*(First->GetNode()->CPPmulticonstnode122), *(Last->GetNode()->CPPmulticonstnode122));
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->erase(*(First->GetNode()->CPPmulticonstnode123), *(Last->GetNode()->CPPmulticonstnode123));
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->erase(*(First->GetNode()->CPPmulticonstnode124), *(Last->GetNode()->CPPmulticonstnode124));
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->erase(*(First->GetNode()->CPPmulticonstnode125), *(Last->GetNode()->CPPmulticonstnode125));
		break;
	case 126:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<float, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode126); iter != *(Last->GetNode()->CPPmulticonstnode126); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->erase(*(First->GetNode()->CPPmulticonstnode126), *(Last->GetNode()->CPPmulticonstnode126));
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->erase(*(First->GetNode()->CPPmulticonstnode127), *(Last->GetNode()->CPPmulticonstnode127));
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->erase(*(First->GetNode()->CPPmulticonstnode128), *(Last->GetNode()->CPPmulticonstnode128));
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->erase(*(First->GetNode()->CPPmulticonstnode129), *(Last->GetNode()->CPPmulticonstnode129));
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->erase(*(First->GetNode()->CPPmulticonstnode130), *(Last->GetNode()->CPPmulticonstnode130));
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->erase(*(First->GetNode()->CPPmulticonstnode131), *(Last->GetNode()->CPPmulticonstnode131));
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->erase(*(First->GetNode()->CPPmulticonstnode132), *(Last->GetNode()->CPPmulticonstnode132));
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->erase(*(First->GetNode()->CPPmulticonstnode133), *(Last->GetNode()->CPPmulticonstnode133));
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->erase(*(First->GetNode()->CPPmulticonstnode134), *(Last->GetNode()->CPPmulticonstnode134));
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->erase(*(First->GetNode()->CPPmulticonstnode135), *(Last->GetNode()->CPPmulticonstnode135));
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->erase(*(First->GetNode()->CPPmulticonstnode136), *(Last->GetNode()->CPPmulticonstnode136));
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->erase(*(First->GetNode()->CPPmulticonstnode137), *(Last->GetNode()->CPPmulticonstnode137));
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->erase(*(First->GetNode()->CPPmulticonstnode138), *(Last->GetNode()->CPPmulticonstnode138));
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->erase(*(First->GetNode()->CPPmulticonstnode139), *(Last->GetNode()->CPPmulticonstnode139));
		break;
	case 140:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<double, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode140); iter != *(Last->GetNode()->CPPmulticonstnode140); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->erase(*(First->GetNode()->CPPmulticonstnode140), *(Last->GetNode()->CPPmulticonstnode140));
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->erase(*(First->GetNode()->CPPmulticonstnode141), *(Last->GetNode()->CPPmulticonstnode141));
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->erase(*(First->GetNode()->CPPmulticonstnode142), *(Last->GetNode()->CPPmulticonstnode142));
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->erase(*(First->GetNode()->CPPmulticonstnode143), *(Last->GetNode()->CPPmulticonstnode143));
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->erase(*(First->GetNode()->CPPmulticonstnode144), *(Last->GetNode()->CPPmulticonstnode144));
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->erase(*(First->GetNode()->CPPmulticonstnode145), *(Last->GetNode()->CPPmulticonstnode145));
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->erase(*(First->GetNode()->CPPmulticonstnode146), *(Last->GetNode()->CPPmulticonstnode146));
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->erase(*(First->GetNode()->CPPmulticonstnode147), *(Last->GetNode()->CPPmulticonstnode147));
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->erase(*(First->GetNode()->CPPmulticonstnode148), *(Last->GetNode()->CPPmulticonstnode148));
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->erase(*(First->GetNode()->CPPmulticonstnode149), *(Last->GetNode()->CPPmulticonstnode149));
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->erase(*(First->GetNode()->CPPmulticonstnode150), *(Last->GetNode()->CPPmulticonstnode150));
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->erase(*(First->GetNode()->CPPmulticonstnode151), *(Last->GetNode()->CPPmulticonstnode151));
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->erase(*(First->GetNode()->CPPmulticonstnode152), *(Last->GetNode()->CPPmulticonstnode152));
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->erase(*(First->GetNode()->CPPmulticonstnode153), *(Last->GetNode()->CPPmulticonstnode153));
		break;
	case 154:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<wchar_t, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode154); iter != *(Last->GetNode()->CPPmulticonstnode154); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->erase(*(First->GetNode()->CPPmulticonstnode154), *(Last->GetNode()->CPPmulticonstnode154));
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->erase(*(First->GetNode()->CPPmulticonstnode155), *(Last->GetNode()->CPPmulticonstnode155));
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->erase(*(First->GetNode()->CPPmulticonstnode156), *(Last->GetNode()->CPPmulticonstnode156));
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->erase(*(First->GetNode()->CPPmulticonstnode157), *(Last->GetNode()->CPPmulticonstnode157));
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->erase(*(First->GetNode()->CPPmulticonstnode158), *(Last->GetNode()->CPPmulticonstnode158));
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->erase(*(First->GetNode()->CPPmulticonstnode159), *(Last->GetNode()->CPPmulticonstnode159));
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->erase(*(First->GetNode()->CPPmulticonstnode160), *(Last->GetNode()->CPPmulticonstnode160));
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->erase(*(First->GetNode()->CPPmulticonstnode161), *(Last->GetNode()->CPPmulticonstnode161));
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->erase(*(First->GetNode()->CPPmulticonstnode162), *(Last->GetNode()->CPPmulticonstnode162));
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->erase(*(First->GetNode()->CPPmulticonstnode163), *(Last->GetNode()->CPPmulticonstnode163));
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->erase(*(First->GetNode()->CPPmulticonstnode164), *(Last->GetNode()->CPPmulticonstnode164));
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->erase(*(First->GetNode()->CPPmulticonstnode165), *(Last->GetNode()->CPPmulticonstnode165));
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->erase(*(First->GetNode()->CPPmulticonstnode166), *(Last->GetNode()->CPPmulticonstnode166));
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->erase(*(First->GetNode()->CPPmulticonstnode167), *(Last->GetNode()->CPPmulticonstnode167));
		break;
	case 168:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<bool, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode168); iter != *(Last->GetNode()->CPPmulticonstnode168); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->erase(*(First->GetNode()->CPPmulticonstnode168), *(Last->GetNode()->CPPmulticonstnode168));
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->erase(*(First->GetNode()->CPPmulticonstnode169), *(Last->GetNode()->CPPmulticonstnode169));
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->erase(*(First->GetNode()->CPPmulticonstnode170), *(Last->GetNode()->CPPmulticonstnode170));
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->erase(*(First->GetNode()->CPPmulticonstnode171), *(Last->GetNode()->CPPmulticonstnode171));
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->erase(*(First->GetNode()->CPPmulticonstnode172), *(Last->GetNode()->CPPmulticonstnode172));
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->erase(*(First->GetNode()->CPPmulticonstnode173), *(Last->GetNode()->CPPmulticonstnode173));
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->erase(*(First->GetNode()->CPPmulticonstnode174), *(Last->GetNode()->CPPmulticonstnode174));
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->erase(*(First->GetNode()->CPPmulticonstnode175), *(Last->GetNode()->CPPmulticonstnode175));
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->erase(*(First->GetNode()->CPPmulticonstnode176), *(Last->GetNode()->CPPmulticonstnode176));
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->erase(*(First->GetNode()->CPPmulticonstnode177), *(Last->GetNode()->CPPmulticonstnode177));
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->erase(*(First->GetNode()->CPPmulticonstnode178), *(Last->GetNode()->CPPmulticonstnode178));
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->erase(*(First->GetNode()->CPPmulticonstnode179), *(Last->GetNode()->CPPmulticonstnode179));
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->erase(*(First->GetNode()->CPPmulticonstnode180), *(Last->GetNode()->CPPmulticonstnode180));
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->erase(*(First->GetNode()->CPPmulticonstnode181), *(Last->GetNode()->CPPmulticonstnode181));
		break;
	case 182:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<std::wstring, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode182); iter != *(Last->GetNode()->CPPmulticonstnode182); iter++)
				gValueClassDictionary->Remove(iter.GetValue());
		}
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->erase(*(First->GetNode()->CPPmulticonstnode182), *(Last->GetNode()->CPPmulticonstnode182));
		break;
	case 183:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode183); iter != *(Last->GetNode()->CPPmulticonstnode183); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->erase(*(First->GetNode()->CPPmulticonstnode183), *(Last->GetNode()->CPPmulticonstnode183));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap183->find(i) == multimapUnion->CPPmultimap183->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 184:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode184); iter != *(Last->GetNode()->CPPmulticonstnode184); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->erase(*(First->GetNode()->CPPmulticonstnode184), *(Last->GetNode()->CPPmulticonstnode184));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap184->find(i) == multimapUnion->CPPmultimap184->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 185:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode185); iter != *(Last->GetNode()->CPPmulticonstnode185); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->erase(*(First->GetNode()->CPPmulticonstnode185), *(Last->GetNode()->CPPmulticonstnode185));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap185->find(i) == multimapUnion->CPPmultimap185->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 186:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode186); iter != *(Last->GetNode()->CPPmulticonstnode186); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->erase(*(First->GetNode()->CPPmulticonstnode186), *(Last->GetNode()->CPPmulticonstnode186));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap186->find(i) == multimapUnion->CPPmultimap186->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 187:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode187); iter != *(Last->GetNode()->CPPmulticonstnode187); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->erase(*(First->GetNode()->CPPmulticonstnode187), *(Last->GetNode()->CPPmulticonstnode187));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap187->find(i) == multimapUnion->CPPmultimap187->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 188:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode188); iter != *(Last->GetNode()->CPPmulticonstnode188); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->erase(*(First->GetNode()->CPPmulticonstnode188), *(Last->GetNode()->CPPmulticonstnode188));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap188->find(i) == multimapUnion->CPPmultimap188->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 189:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode189); iter != *(Last->GetNode()->CPPmulticonstnode189); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->erase(*(First->GetNode()->CPPmulticonstnode189), *(Last->GetNode()->CPPmulticonstnode189));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap189->find(i) == multimapUnion->CPPmultimap189->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 190:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode190); iter != *(Last->GetNode()->CPPmulticonstnode190); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->erase(*(First->GetNode()->CPPmulticonstnode190), *(Last->GetNode()->CPPmulticonstnode190));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap190->find(i) == multimapUnion->CPPmultimap190->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 191:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode191); iter != *(Last->GetNode()->CPPmulticonstnode191); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->erase(*(First->GetNode()->CPPmulticonstnode191), *(Last->GetNode()->CPPmulticonstnode191));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap191->find(i) == multimapUnion->CPPmultimap191->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 192:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode192); iter != *(Last->GetNode()->CPPmulticonstnode192); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->erase(*(First->GetNode()->CPPmulticonstnode192), *(Last->GetNode()->CPPmulticonstnode192));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap192->find(i) == multimapUnion->CPPmultimap192->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 193:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode193); iter != *(Last->GetNode()->CPPmulticonstnode193); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->erase(*(First->GetNode()->CPPmulticonstnode193), *(Last->GetNode()->CPPmulticonstnode193));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap193->find(i) == multimapUnion->CPPmultimap193->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 194:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode194); iter != *(Last->GetNode()->CPPmulticonstnode194); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->erase(*(First->GetNode()->CPPmulticonstnode194), *(Last->GetNode()->CPPmulticonstnode194));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap194->find(i) == multimapUnion->CPPmultimap194->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 195:
		for (auto iter = *(First->GetNode()->CPPmulticonstnode195); iter != *(Last->GetNode()->CPPmulticonstnode195); iter++)
			TempKeySet.emplace(iter.GetKey());
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->erase(*(First->GetNode()->CPPmulticonstnode195), *(Last->GetNode()->CPPmulticonstnode195));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap195->find(i) == multimapUnion->CPPmultimap195->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	case 196:
		if (gValueClassDictionary)
		{
			UnOrderedMultiConstNode<__int64, __int64> iter;
			for (iter = *(First->GetNode()->CPPmulticonstnode196); iter != *(Last->GetNode()->CPPmulticonstnode196); iter++)
			{
				TempKeySet.emplace(iter.GetKey());
				gValueClassDictionary->Remove(iter.GetValue());
			}
		}
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->erase(*(First->GetNode()->CPPmulticonstnode196), *(Last->GetNode()->CPPmulticonstnode196));
		for (auto i : TempKeySet)
			if (multimapUnion->CPPmultimap196->find(i) == multimapUnion->CPPmultimap196->end())
			{
				bTempKeyDeleted = true;
				TempKeyDeletedSet.emplace(i);
			}
		break;
	}

	if ((183 <= nKeyValueType && nKeyValueType <= 196) && bTempKeyDeleted)
	{
		if (gKeyClassDictionary && gIntKeyClassDictionary)
		{
			Key temp;
			for (__int64 Key__Int : TempKeyDeletedSet)
				if (gIntKeyClassDictionary->TryGetValue(Key__Int, temp))
				{
					gIntKeyClassDictionary->Remove(Key__Int);
					gKeyClassDictionary->Remove(temp);
				}
		}
	}

	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::equal_range(const Key key)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(const_cast<Key>(key), Key__Int));
		else
		{
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->KeyEnd();
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->KeyEnd();
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->KeyEnd();
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->KeyEnd();
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->KeyEnd();
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->KeyEnd();
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->KeyEnd();
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->KeyEnd();
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->KeyEnd();
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->KeyEnd();
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->KeyEnd();
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->KeyEnd();
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->KeyEnd();
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->equal_range(KeyUchar);
		*(KeyEndNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->KeyEnd();
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->KeyEnd();
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->KeyEnd();
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->KeyEnd();
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->KeyEnd();
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->KeyEnd();
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->KeyEnd();
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->KeyEnd();
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->KeyEnd();
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->KeyEnd();
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->KeyEnd();
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->KeyEnd();
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->KeyEnd();
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->KeyEnd();
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->equal_range(KeyChar);
		*(KeyEndNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->KeyEnd();
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->KeyEnd();
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->KeyEnd();
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->KeyEnd();
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->KeyEnd();
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->KeyEnd();
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->KeyEnd();
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->KeyEnd();
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->KeyEnd();
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->KeyEnd();
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->KeyEnd();
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->KeyEnd();
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->KeyEnd();
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->KeyEnd();
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->equal_range(KeyShort);
		*(KeyEndNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->KeyEnd();
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->KeyEnd();
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->KeyEnd();
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->KeyEnd();
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->KeyEnd();
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->KeyEnd();
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->KeyEnd();
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->KeyEnd();
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->KeyEnd();
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->KeyEnd();
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->KeyEnd();
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->KeyEnd();
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->KeyEnd();
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->KeyEnd();
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->equal_range(KeyUshort);
		*(KeyEndNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->KeyEnd();
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->KeyEnd();
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->KeyEnd();
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->KeyEnd();
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->KeyEnd();
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->KeyEnd();
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->KeyEnd();
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->KeyEnd();
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->KeyEnd();
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->KeyEnd();
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->KeyEnd();
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->KeyEnd();
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->KeyEnd();
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->KeyEnd();
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->equal_range(KeyInt);
		*(KeyEndNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->KeyEnd();
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->KeyEnd();
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->KeyEnd();
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->KeyEnd();
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->KeyEnd();
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->KeyEnd();
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->KeyEnd();
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->KeyEnd();
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->KeyEnd();
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->KeyEnd();
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->KeyEnd();
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->KeyEnd();
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->KeyEnd();
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->KeyEnd();
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->equal_range(KeyUint);
		*(KeyEndNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->KeyEnd();
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->KeyEnd();
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->KeyEnd();
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->KeyEnd();
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->KeyEnd();
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->KeyEnd();
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->KeyEnd();
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->KeyEnd();
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->KeyEnd();
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->KeyEnd();
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->KeyEnd();
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->KeyEnd();
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->KeyEnd();
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->KeyEnd();
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->equal_range(KeyLonglong);
		*(KeyEndNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->KeyEnd();
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->KeyEnd();
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->KeyEnd();
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->KeyEnd();
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->KeyEnd();
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->KeyEnd();
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->KeyEnd();
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->KeyEnd();
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->KeyEnd();
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->KeyEnd();
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->KeyEnd();
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->KeyEnd();
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->KeyEnd();
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->KeyEnd();
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->equal_range(KeyUlonglong);
		*(KeyEndNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->KeyEnd();
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->KeyEnd();
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->KeyEnd();
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->KeyEnd();
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->KeyEnd();
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->KeyEnd();
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->KeyEnd();
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->KeyEnd();
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->KeyEnd();
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->KeyEnd();
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->KeyEnd();
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->KeyEnd();
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->KeyEnd();
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->KeyEnd();
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->equal_range(KeyFloat);
		*(KeyEndNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->KeyEnd();
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->KeyEnd();
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->KeyEnd();
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->KeyEnd();
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->KeyEnd();
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->KeyEnd();
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->KeyEnd();
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->KeyEnd();
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->KeyEnd();
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->KeyEnd();
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->KeyEnd();
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->KeyEnd();
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->KeyEnd();
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->KeyEnd();
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->equal_range(KeyDouble);
		*(KeyEndNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->KeyEnd();
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->KeyEnd();
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->KeyEnd();
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->KeyEnd();
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->KeyEnd();
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->KeyEnd();
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->KeyEnd();
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->KeyEnd();
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->KeyEnd();
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->KeyEnd();
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->KeyEnd();
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->KeyEnd();
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->KeyEnd();
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->KeyEnd();
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->equal_range(KeyWchar);
		*(KeyEndNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->KeyEnd();
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->KeyEnd();
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->KeyEnd();
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->KeyEnd();
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->KeyEnd();
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->KeyEnd();
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->KeyEnd();
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->KeyEnd();
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->KeyEnd();
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->KeyEnd();
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->KeyEnd();
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->KeyEnd();
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->KeyEnd();
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->KeyEnd();
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->equal_range(KeyBool);
		*(KeyEndNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->KeyEnd();
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->KeyEnd();
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->KeyEnd();
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->KeyEnd();
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->KeyEnd();
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->KeyEnd();
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->KeyEnd();
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->KeyEnd();
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->KeyEnd();
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->KeyEnd();
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->KeyEnd();
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->KeyEnd();
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->KeyEnd();
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->KeyEnd();
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->equal_range(KeyWstring);
		*(KeyEndNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->KeyEnd();
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->KeyEnd();
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->KeyEnd();
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->KeyEnd();
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->KeyEnd();
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->KeyEnd();
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->KeyEnd();
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->KeyEnd();
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->KeyEnd();
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->KeyEnd();
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->KeyEnd();
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->KeyEnd();
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->KeyEnd();
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->KeyEnd();
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->equal_range(Key__Int);
		*(KeyEndNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->KeyEnd();
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::insert(Key key, Value value)
{
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			System::Object^ managedObject = safe_cast<System::Object^>(key);
			Key__Int = static_cast<__int64>(Convert::ToInt64(managedObject));
			gKeyClassDictionary->Add(key, Key__Int);
			gIntKeyClassDictionary->Add(Key__Int, key);
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->insert(KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->insert(KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->insert(KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->insert(KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->insert(KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->insert(KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->insert(KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->insert(KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->insert(KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->insert(KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->insert(KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->insert(KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->insert(KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->insert(KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->insert(KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->insert(KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->insert(KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->insert(KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->insert(KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->insert(KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->insert(KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->insert(KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->insert(KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->insert(KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->insert(KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->insert(KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->insert(KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->insert(KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->insert(KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->insert(KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->insert(KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->insert(KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->insert(KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->insert(KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->insert(KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->insert(KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->insert(KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->insert(KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->insert(KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->insert(KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->insert(KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->insert(KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->insert(KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->insert(KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->insert(KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->insert(KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->insert(KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->insert(KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->insert(KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->insert(KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->insert(KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->insert(KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->insert(KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->insert(KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->insert(KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->insert(KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->insert(KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->insert(KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->insert(KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->insert(KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->insert(KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->insert(KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->insert(KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->insert(KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->insert(KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->insert(KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->insert(KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->insert(KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->insert(KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->insert(KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->insert(KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->insert(KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->insert(KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->insert(KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->insert(KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->insert(KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->insert(KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->insert(KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->insert(KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->insert(KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->insert(KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->insert(KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->insert(KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->insert(KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->insert(KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->insert(KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->insert(KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->insert(KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->insert(KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->insert(KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->insert(KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->insert(KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->insert(KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->insert(KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->insert(KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->insert(KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->insert(KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->insert(KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->insert(KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->insert(KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->insert(KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->insert(KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->insert(KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->insert(KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->insert(KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->insert(KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->insert(KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->insert(KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->insert(KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->insert(KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->insert(KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->insert(KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->insert(KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->insert(KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->insert(KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->insert(KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->insert(KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->insert(KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->insert(KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->insert(KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->insert(KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->insert(KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->insert(KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->insert(KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->insert(KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->insert(KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->insert(KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->insert(KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->insert(KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->insert(KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->insert(KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->insert(KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->insert(KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->insert(KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->insert(KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->insert(KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->insert(KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->insert(KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->insert(KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->insert(KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->insert(KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->insert(KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->insert(KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->insert(KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->insert(KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->insert(KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->insert(KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->insert(KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->insert(KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->insert(KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->insert(KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->insert(KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->insert(KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->insert(KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->insert(KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->insert(KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->insert(KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->insert(KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->insert(KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->insert(KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->insert(KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->insert(KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->insert(KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->insert(KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->insert(KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->insert(KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->insert(KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->insert(KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->insert(KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->insert(KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->insert(KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->insert(KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->insert(KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->insert(KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->insert(KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->insert(KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->insert(KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->insert(KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->insert(KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->insert(KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->insert(KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->insert(KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->insert(Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->insert(Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->insert(Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->insert(Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->insert(Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->insert(Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->insert(Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->insert(Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->insert(Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->insert(Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->insert(Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->insert(Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->insert(Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->insert(Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::insert(CShorpUnOrderedMultiNode<Key, Value>^ _Where, Key key, Value value)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			System::Object^ managedObject = safe_cast<System::Object^>(key);
			Key__Int = static_cast<__int64>(Convert::ToInt64(managedObject));
			gKeyClassDictionary->Add(key, Key__Int);
			gIntKeyClassDictionary->Add(Key__Int, key);
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->insert(*(_Where->GetNode()->CPPmultinode1), KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->insert(*(_Where->GetNode()->CPPmultinode2), KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->insert(*(_Where->GetNode()->CPPmultinode3), KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->insert(*(_Where->GetNode()->CPPmultinode4), KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->insert(*(_Where->GetNode()->CPPmultinode5), KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->insert(*(_Where->GetNode()->CPPmultinode6), KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->insert(*(_Where->GetNode()->CPPmultinode7), KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->insert(*(_Where->GetNode()->CPPmultinode8), KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->insert(*(_Where->GetNode()->CPPmultinode9), KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->insert(*(_Where->GetNode()->CPPmultinode10), KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->insert(*(_Where->GetNode()->CPPmultinode11), KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->insert(*(_Where->GetNode()->CPPmultinode12), KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->insert(*(_Where->GetNode()->CPPmultinode13), KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->insert(*(_Where->GetNode()->CPPmultinode14), KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->insert(*(_Where->GetNode()->CPPmultinode15), KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->insert(*(_Where->GetNode()->CPPmultinode16), KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->insert(*(_Where->GetNode()->CPPmultinode17), KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->insert(*(_Where->GetNode()->CPPmultinode18), KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->insert(*(_Where->GetNode()->CPPmultinode19), KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->insert(*(_Where->GetNode()->CPPmultinode20), KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->insert(*(_Where->GetNode()->CPPmultinode21), KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->insert(*(_Where->GetNode()->CPPmultinode22), KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->insert(*(_Where->GetNode()->CPPmultinode23), KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->insert(*(_Where->GetNode()->CPPmultinode24), KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->insert(*(_Where->GetNode()->CPPmultinode25), KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->insert(*(_Where->GetNode()->CPPmultinode26), KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->insert(*(_Where->GetNode()->CPPmultinode27), KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->insert(*(_Where->GetNode()->CPPmultinode28), KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->insert(*(_Where->GetNode()->CPPmultinode29), KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->insert(*(_Where->GetNode()->CPPmultinode30), KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->insert(*(_Where->GetNode()->CPPmultinode31), KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->insert(*(_Where->GetNode()->CPPmultinode32), KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->insert(*(_Where->GetNode()->CPPmultinode33), KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->insert(*(_Where->GetNode()->CPPmultinode34), KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->insert(*(_Where->GetNode()->CPPmultinode35), KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->insert(*(_Where->GetNode()->CPPmultinode36), KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->insert(*(_Where->GetNode()->CPPmultinode37), KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->insert(*(_Where->GetNode()->CPPmultinode38), KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->insert(*(_Where->GetNode()->CPPmultinode39), KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->insert(*(_Where->GetNode()->CPPmultinode40), KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->insert(*(_Where->GetNode()->CPPmultinode41), KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->insert(*(_Where->GetNode()->CPPmultinode42), KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->insert(*(_Where->GetNode()->CPPmultinode43), KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->insert(*(_Where->GetNode()->CPPmultinode44), KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->insert(*(_Where->GetNode()->CPPmultinode45), KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->insert(*(_Where->GetNode()->CPPmultinode46), KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->insert(*(_Where->GetNode()->CPPmultinode47), KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->insert(*(_Where->GetNode()->CPPmultinode48), KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->insert(*(_Where->GetNode()->CPPmultinode49), KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->insert(*(_Where->GetNode()->CPPmultinode50), KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->insert(*(_Where->GetNode()->CPPmultinode51), KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->insert(*(_Where->GetNode()->CPPmultinode52), KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->insert(*(_Where->GetNode()->CPPmultinode53), KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->insert(*(_Where->GetNode()->CPPmultinode54), KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->insert(*(_Where->GetNode()->CPPmultinode55), KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->insert(*(_Where->GetNode()->CPPmultinode56), KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->insert(*(_Where->GetNode()->CPPmultinode57), KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->insert(*(_Where->GetNode()->CPPmultinode58), KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->insert(*(_Where->GetNode()->CPPmultinode59), KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->insert(*(_Where->GetNode()->CPPmultinode60), KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->insert(*(_Where->GetNode()->CPPmultinode61), KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->insert(*(_Where->GetNode()->CPPmultinode62), KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->insert(*(_Where->GetNode()->CPPmultinode63), KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->insert(*(_Where->GetNode()->CPPmultinode64), KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->insert(*(_Where->GetNode()->CPPmultinode65), KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->insert(*(_Where->GetNode()->CPPmultinode66), KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->insert(*(_Where->GetNode()->CPPmultinode67), KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->insert(*(_Where->GetNode()->CPPmultinode68), KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->insert(*(_Where->GetNode()->CPPmultinode69), KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->insert(*(_Where->GetNode()->CPPmultinode70), KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->insert(*(_Where->GetNode()->CPPmultinode71), KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->insert(*(_Where->GetNode()->CPPmultinode72), KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->insert(*(_Where->GetNode()->CPPmultinode73), KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->insert(*(_Where->GetNode()->CPPmultinode74), KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->insert(*(_Where->GetNode()->CPPmultinode75), KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->insert(*(_Where->GetNode()->CPPmultinode76), KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->insert(*(_Where->GetNode()->CPPmultinode77), KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->insert(*(_Where->GetNode()->CPPmultinode78), KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->insert(*(_Where->GetNode()->CPPmultinode79), KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->insert(*(_Where->GetNode()->CPPmultinode80), KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->insert(*(_Where->GetNode()->CPPmultinode81), KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->insert(*(_Where->GetNode()->CPPmultinode82), KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->insert(*(_Where->GetNode()->CPPmultinode83), KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->insert(*(_Where->GetNode()->CPPmultinode84), KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->insert(*(_Where->GetNode()->CPPmultinode85), KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->insert(*(_Where->GetNode()->CPPmultinode86), KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->insert(*(_Where->GetNode()->CPPmultinode87), KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->insert(*(_Where->GetNode()->CPPmultinode88), KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->insert(*(_Where->GetNode()->CPPmultinode89), KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->insert(*(_Where->GetNode()->CPPmultinode90), KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->insert(*(_Where->GetNode()->CPPmultinode91), KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->insert(*(_Where->GetNode()->CPPmultinode92), KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->insert(*(_Where->GetNode()->CPPmultinode93), KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->insert(*(_Where->GetNode()->CPPmultinode94), KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->insert(*(_Where->GetNode()->CPPmultinode95), KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->insert(*(_Where->GetNode()->CPPmultinode96), KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->insert(*(_Where->GetNode()->CPPmultinode97), KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->insert(*(_Where->GetNode()->CPPmultinode98), KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->insert(*(_Where->GetNode()->CPPmultinode99), KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->insert(*(_Where->GetNode()->CPPmultinode100), KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->insert(*(_Where->GetNode()->CPPmultinode101), KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->insert(*(_Where->GetNode()->CPPmultinode102), KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->insert(*(_Where->GetNode()->CPPmultinode103), KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->insert(*(_Where->GetNode()->CPPmultinode104), KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->insert(*(_Where->GetNode()->CPPmultinode105), KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->insert(*(_Where->GetNode()->CPPmultinode106), KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->insert(*(_Where->GetNode()->CPPmultinode107), KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->insert(*(_Where->GetNode()->CPPmultinode108), KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->insert(*(_Where->GetNode()->CPPmultinode109), KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->insert(*(_Where->GetNode()->CPPmultinode110), KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->insert(*(_Where->GetNode()->CPPmultinode111), KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->insert(*(_Where->GetNode()->CPPmultinode112), KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->insert(*(_Where->GetNode()->CPPmultinode113), KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->insert(*(_Where->GetNode()->CPPmultinode114), KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->insert(*(_Where->GetNode()->CPPmultinode115), KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->insert(*(_Where->GetNode()->CPPmultinode116), KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->insert(*(_Where->GetNode()->CPPmultinode117), KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->insert(*(_Where->GetNode()->CPPmultinode118), KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->insert(*(_Where->GetNode()->CPPmultinode119), KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->insert(*(_Where->GetNode()->CPPmultinode120), KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->insert(*(_Where->GetNode()->CPPmultinode121), KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->insert(*(_Where->GetNode()->CPPmultinode122), KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->insert(*(_Where->GetNode()->CPPmultinode123), KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->insert(*(_Where->GetNode()->CPPmultinode124), KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->insert(*(_Where->GetNode()->CPPmultinode125), KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->insert(*(_Where->GetNode()->CPPmultinode126), KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->insert(*(_Where->GetNode()->CPPmultinode127), KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->insert(*(_Where->GetNode()->CPPmultinode128), KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->insert(*(_Where->GetNode()->CPPmultinode129), KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->insert(*(_Where->GetNode()->CPPmultinode130), KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->insert(*(_Where->GetNode()->CPPmultinode131), KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->insert(*(_Where->GetNode()->CPPmultinode132), KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->insert(*(_Where->GetNode()->CPPmultinode133), KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->insert(*(_Where->GetNode()->CPPmultinode134), KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->insert(*(_Where->GetNode()->CPPmultinode135), KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->insert(*(_Where->GetNode()->CPPmultinode136), KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->insert(*(_Where->GetNode()->CPPmultinode137), KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->insert(*(_Where->GetNode()->CPPmultinode138), KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->insert(*(_Where->GetNode()->CPPmultinode139), KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->insert(*(_Where->GetNode()->CPPmultinode140), KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->insert(*(_Where->GetNode()->CPPmultinode141), KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->insert(*(_Where->GetNode()->CPPmultinode142), KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->insert(*(_Where->GetNode()->CPPmultinode143), KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->insert(*(_Where->GetNode()->CPPmultinode144), KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->insert(*(_Where->GetNode()->CPPmultinode145), KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->insert(*(_Where->GetNode()->CPPmultinode146), KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->insert(*(_Where->GetNode()->CPPmultinode147), KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->insert(*(_Where->GetNode()->CPPmultinode148), KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->insert(*(_Where->GetNode()->CPPmultinode149), KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->insert(*(_Where->GetNode()->CPPmultinode150), KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->insert(*(_Where->GetNode()->CPPmultinode151), KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->insert(*(_Where->GetNode()->CPPmultinode152), KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->insert(*(_Where->GetNode()->CPPmultinode153), KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->insert(*(_Where->GetNode()->CPPmultinode154), KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->insert(*(_Where->GetNode()->CPPmultinode155), KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->insert(*(_Where->GetNode()->CPPmultinode156), KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->insert(*(_Where->GetNode()->CPPmultinode157), KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->insert(*(_Where->GetNode()->CPPmultinode158), KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->insert(*(_Where->GetNode()->CPPmultinode159), KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->insert(*(_Where->GetNode()->CPPmultinode160), KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->insert(*(_Where->GetNode()->CPPmultinode161), KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->insert(*(_Where->GetNode()->CPPmultinode162), KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->insert(*(_Where->GetNode()->CPPmultinode163), KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->insert(*(_Where->GetNode()->CPPmultinode164), KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->insert(*(_Where->GetNode()->CPPmultinode165), KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->insert(*(_Where->GetNode()->CPPmultinode166), KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->insert(*(_Where->GetNode()->CPPmultinode167), KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->insert(*(_Where->GetNode()->CPPmultinode168), KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->insert(*(_Where->GetNode()->CPPmultinode169), KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->insert(*(_Where->GetNode()->CPPmultinode170), KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->insert(*(_Where->GetNode()->CPPmultinode171), KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->insert(*(_Where->GetNode()->CPPmultinode172), KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->insert(*(_Where->GetNode()->CPPmultinode173), KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->insert(*(_Where->GetNode()->CPPmultinode174), KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->insert(*(_Where->GetNode()->CPPmultinode175), KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->insert(*(_Where->GetNode()->CPPmultinode176), KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->insert(*(_Where->GetNode()->CPPmultinode177), KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->insert(*(_Where->GetNode()->CPPmultinode178), KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->insert(*(_Where->GetNode()->CPPmultinode179), KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->insert(*(_Where->GetNode()->CPPmultinode180), KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->insert(*(_Where->GetNode()->CPPmultinode181), KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->insert(*(_Where->GetNode()->CPPmultinode182), KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->insert(*(_Where->GetNode()->CPPmultinode183), Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->insert(*(_Where->GetNode()->CPPmultinode184), Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->insert(*(_Where->GetNode()->CPPmultinode185), Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->insert(*(_Where->GetNode()->CPPmultinode186), Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->insert(*(_Where->GetNode()->CPPmultinode187), Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->insert(*(_Where->GetNode()->CPPmultinode188), Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->insert(*(_Where->GetNode()->CPPmultinode189), Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->insert(*(_Where->GetNode()->CPPmultinode190), Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->insert(*(_Where->GetNode()->CPPmultinode191), Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->insert(*(_Where->GetNode()->CPPmultinode192), Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->insert(*(_Where->GetNode()->CPPmultinode193), Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->insert(*(_Where->GetNode()->CPPmultinode194), Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->insert(*(_Where->GetNode()->CPPmultinode195), Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->insert(*(_Where->GetNode()->CPPmultinode196), Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::insert(CShorpUnOrderedMultiConstNode<Key, Value>^ _Where, Key key, Value value)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			System::Object^ managedObject = safe_cast<System::Object^>(key);
			Key__Int = static_cast<__int64>(Convert::ToInt64(managedObject));
			gKeyClassDictionary->Add(key, Key__Int);
			gIntKeyClassDictionary->Add(Key__Int, key);
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->insert(*(_Where->GetNode()->CPPmulticonstnode1), KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->insert(*(_Where->GetNode()->CPPmulticonstnode2), KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->insert(*(_Where->GetNode()->CPPmulticonstnode3), KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->insert(*(_Where->GetNode()->CPPmulticonstnode4), KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->insert(*(_Where->GetNode()->CPPmulticonstnode5), KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->insert(*(_Where->GetNode()->CPPmulticonstnode6), KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->insert(*(_Where->GetNode()->CPPmulticonstnode7), KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->insert(*(_Where->GetNode()->CPPmulticonstnode8), KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->insert(*(_Where->GetNode()->CPPmulticonstnode9), KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->insert(*(_Where->GetNode()->CPPmulticonstnode10), KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->insert(*(_Where->GetNode()->CPPmulticonstnode11), KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->insert(*(_Where->GetNode()->CPPmulticonstnode12), KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->insert(*(_Where->GetNode()->CPPmulticonstnode13), KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->insert(*(_Where->GetNode()->CPPmulticonstnode14), KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->insert(*(_Where->GetNode()->CPPmulticonstnode15), KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->insert(*(_Where->GetNode()->CPPmulticonstnode16), KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->insert(*(_Where->GetNode()->CPPmulticonstnode17), KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->insert(*(_Where->GetNode()->CPPmulticonstnode18), KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->insert(*(_Where->GetNode()->CPPmulticonstnode19), KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->insert(*(_Where->GetNode()->CPPmulticonstnode20), KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->insert(*(_Where->GetNode()->CPPmulticonstnode21), KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->insert(*(_Where->GetNode()->CPPmulticonstnode22), KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->insert(*(_Where->GetNode()->CPPmulticonstnode23), KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->insert(*(_Where->GetNode()->CPPmulticonstnode24), KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->insert(*(_Where->GetNode()->CPPmulticonstnode25), KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->insert(*(_Where->GetNode()->CPPmulticonstnode26), KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->insert(*(_Where->GetNode()->CPPmulticonstnode27), KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->insert(*(_Where->GetNode()->CPPmulticonstnode28), KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->insert(*(_Where->GetNode()->CPPmulticonstnode29), KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->insert(*(_Where->GetNode()->CPPmulticonstnode30), KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->insert(*(_Where->GetNode()->CPPmulticonstnode31), KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->insert(*(_Where->GetNode()->CPPmulticonstnode32), KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->insert(*(_Where->GetNode()->CPPmulticonstnode33), KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->insert(*(_Where->GetNode()->CPPmulticonstnode34), KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->insert(*(_Where->GetNode()->CPPmulticonstnode35), KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->insert(*(_Where->GetNode()->CPPmulticonstnode36), KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->insert(*(_Where->GetNode()->CPPmulticonstnode37), KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->insert(*(_Where->GetNode()->CPPmulticonstnode38), KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->insert(*(_Where->GetNode()->CPPmulticonstnode39), KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->insert(*(_Where->GetNode()->CPPmulticonstnode40), KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->insert(*(_Where->GetNode()->CPPmulticonstnode41), KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->insert(*(_Where->GetNode()->CPPmulticonstnode42), KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->insert(*(_Where->GetNode()->CPPmulticonstnode43), KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->insert(*(_Where->GetNode()->CPPmulticonstnode44), KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->insert(*(_Where->GetNode()->CPPmulticonstnode45), KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->insert(*(_Where->GetNode()->CPPmulticonstnode46), KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->insert(*(_Where->GetNode()->CPPmulticonstnode47), KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->insert(*(_Where->GetNode()->CPPmulticonstnode48), KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->insert(*(_Where->GetNode()->CPPmulticonstnode49), KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->insert(*(_Where->GetNode()->CPPmulticonstnode50), KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->insert(*(_Where->GetNode()->CPPmulticonstnode51), KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->insert(*(_Where->GetNode()->CPPmulticonstnode52), KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->insert(*(_Where->GetNode()->CPPmulticonstnode53), KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->insert(*(_Where->GetNode()->CPPmulticonstnode54), KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->insert(*(_Where->GetNode()->CPPmulticonstnode55), KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->insert(*(_Where->GetNode()->CPPmulticonstnode56), KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->insert(*(_Where->GetNode()->CPPmulticonstnode57), KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->insert(*(_Where->GetNode()->CPPmulticonstnode58), KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->insert(*(_Where->GetNode()->CPPmulticonstnode59), KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->insert(*(_Where->GetNode()->CPPmulticonstnode60), KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->insert(*(_Where->GetNode()->CPPmulticonstnode61), KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->insert(*(_Where->GetNode()->CPPmulticonstnode62), KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->insert(*(_Where->GetNode()->CPPmulticonstnode63), KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->insert(*(_Where->GetNode()->CPPmulticonstnode64), KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->insert(*(_Where->GetNode()->CPPmulticonstnode65), KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->insert(*(_Where->GetNode()->CPPmulticonstnode66), KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->insert(*(_Where->GetNode()->CPPmulticonstnode67), KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->insert(*(_Where->GetNode()->CPPmulticonstnode68), KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->insert(*(_Where->GetNode()->CPPmulticonstnode69), KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->insert(*(_Where->GetNode()->CPPmulticonstnode70), KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->insert(*(_Where->GetNode()->CPPmulticonstnode71), KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->insert(*(_Where->GetNode()->CPPmulticonstnode72), KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->insert(*(_Where->GetNode()->CPPmulticonstnode73), KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->insert(*(_Where->GetNode()->CPPmulticonstnode74), KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->insert(*(_Where->GetNode()->CPPmulticonstnode75), KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->insert(*(_Where->GetNode()->CPPmulticonstnode76), KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->insert(*(_Where->GetNode()->CPPmulticonstnode77), KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->insert(*(_Where->GetNode()->CPPmulticonstnode78), KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->insert(*(_Where->GetNode()->CPPmulticonstnode79), KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->insert(*(_Where->GetNode()->CPPmulticonstnode80), KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->insert(*(_Where->GetNode()->CPPmulticonstnode81), KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->insert(*(_Where->GetNode()->CPPmulticonstnode82), KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->insert(*(_Where->GetNode()->CPPmulticonstnode83), KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->insert(*(_Where->GetNode()->CPPmulticonstnode84), KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->insert(*(_Where->GetNode()->CPPmulticonstnode85), KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->insert(*(_Where->GetNode()->CPPmulticonstnode86), KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->insert(*(_Where->GetNode()->CPPmulticonstnode87), KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->insert(*(_Where->GetNode()->CPPmulticonstnode88), KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->insert(*(_Where->GetNode()->CPPmulticonstnode89), KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->insert(*(_Where->GetNode()->CPPmulticonstnode90), KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->insert(*(_Where->GetNode()->CPPmulticonstnode91), KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->insert(*(_Where->GetNode()->CPPmulticonstnode92), KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->insert(*(_Where->GetNode()->CPPmulticonstnode93), KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->insert(*(_Where->GetNode()->CPPmulticonstnode94), KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->insert(*(_Where->GetNode()->CPPmulticonstnode95), KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->insert(*(_Where->GetNode()->CPPmulticonstnode96), KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->insert(*(_Where->GetNode()->CPPmulticonstnode97), KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->insert(*(_Where->GetNode()->CPPmulticonstnode98), KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->insert(*(_Where->GetNode()->CPPmulticonstnode99), KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->insert(*(_Where->GetNode()->CPPmulticonstnode100), KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->insert(*(_Where->GetNode()->CPPmulticonstnode101), KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->insert(*(_Where->GetNode()->CPPmulticonstnode102), KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->insert(*(_Where->GetNode()->CPPmulticonstnode103), KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->insert(*(_Where->GetNode()->CPPmulticonstnode104), KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->insert(*(_Where->GetNode()->CPPmulticonstnode105), KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->insert(*(_Where->GetNode()->CPPmulticonstnode106), KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->insert(*(_Where->GetNode()->CPPmulticonstnode107), KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->insert(*(_Where->GetNode()->CPPmulticonstnode108), KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->insert(*(_Where->GetNode()->CPPmulticonstnode109), KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->insert(*(_Where->GetNode()->CPPmulticonstnode110), KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->insert(*(_Where->GetNode()->CPPmulticonstnode111), KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->insert(*(_Where->GetNode()->CPPmulticonstnode112), KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->insert(*(_Where->GetNode()->CPPmulticonstnode113), KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->insert(*(_Where->GetNode()->CPPmulticonstnode114), KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->insert(*(_Where->GetNode()->CPPmulticonstnode115), KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->insert(*(_Where->GetNode()->CPPmulticonstnode116), KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->insert(*(_Where->GetNode()->CPPmulticonstnode117), KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->insert(*(_Where->GetNode()->CPPmulticonstnode118), KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->insert(*(_Where->GetNode()->CPPmulticonstnode119), KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->insert(*(_Where->GetNode()->CPPmulticonstnode120), KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->insert(*(_Where->GetNode()->CPPmulticonstnode121), KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->insert(*(_Where->GetNode()->CPPmulticonstnode122), KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->insert(*(_Where->GetNode()->CPPmulticonstnode123), KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->insert(*(_Where->GetNode()->CPPmulticonstnode124), KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->insert(*(_Where->GetNode()->CPPmulticonstnode125), KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->insert(*(_Where->GetNode()->CPPmulticonstnode126), KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->insert(*(_Where->GetNode()->CPPmulticonstnode127), KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->insert(*(_Where->GetNode()->CPPmulticonstnode128), KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->insert(*(_Where->GetNode()->CPPmulticonstnode129), KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->insert(*(_Where->GetNode()->CPPmulticonstnode130), KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->insert(*(_Where->GetNode()->CPPmulticonstnode131), KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->insert(*(_Where->GetNode()->CPPmulticonstnode132), KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->insert(*(_Where->GetNode()->CPPmulticonstnode133), KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->insert(*(_Where->GetNode()->CPPmulticonstnode134), KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->insert(*(_Where->GetNode()->CPPmulticonstnode135), KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->insert(*(_Where->GetNode()->CPPmulticonstnode136), KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->insert(*(_Where->GetNode()->CPPmulticonstnode137), KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->insert(*(_Where->GetNode()->CPPmulticonstnode138), KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->insert(*(_Where->GetNode()->CPPmulticonstnode139), KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->insert(*(_Where->GetNode()->CPPmulticonstnode140), KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->insert(*(_Where->GetNode()->CPPmulticonstnode141), KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->insert(*(_Where->GetNode()->CPPmulticonstnode142), KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->insert(*(_Where->GetNode()->CPPmulticonstnode143), KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->insert(*(_Where->GetNode()->CPPmulticonstnode144), KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->insert(*(_Where->GetNode()->CPPmulticonstnode145), KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->insert(*(_Where->GetNode()->CPPmulticonstnode146), KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->insert(*(_Where->GetNode()->CPPmulticonstnode147), KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->insert(*(_Where->GetNode()->CPPmulticonstnode148), KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->insert(*(_Where->GetNode()->CPPmulticonstnode149), KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->insert(*(_Where->GetNode()->CPPmulticonstnode150), KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->insert(*(_Where->GetNode()->CPPmulticonstnode151), KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->insert(*(_Where->GetNode()->CPPmulticonstnode152), KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->insert(*(_Where->GetNode()->CPPmulticonstnode153), KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->insert(*(_Where->GetNode()->CPPmulticonstnode154), KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->insert(*(_Where->GetNode()->CPPmulticonstnode155), KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->insert(*(_Where->GetNode()->CPPmulticonstnode156), KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->insert(*(_Where->GetNode()->CPPmulticonstnode157), KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->insert(*(_Where->GetNode()->CPPmulticonstnode158), KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->insert(*(_Where->GetNode()->CPPmulticonstnode159), KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->insert(*(_Where->GetNode()->CPPmulticonstnode160), KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->insert(*(_Where->GetNode()->CPPmulticonstnode161), KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->insert(*(_Where->GetNode()->CPPmulticonstnode162), KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->insert(*(_Where->GetNode()->CPPmulticonstnode163), KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->insert(*(_Where->GetNode()->CPPmulticonstnode164), KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->insert(*(_Where->GetNode()->CPPmulticonstnode165), KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->insert(*(_Where->GetNode()->CPPmulticonstnode166), KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->insert(*(_Where->GetNode()->CPPmulticonstnode167), KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->insert(*(_Where->GetNode()->CPPmulticonstnode168), KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->insert(*(_Where->GetNode()->CPPmulticonstnode169), KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->insert(*(_Where->GetNode()->CPPmulticonstnode170), KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->insert(*(_Where->GetNode()->CPPmulticonstnode171), KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->insert(*(_Where->GetNode()->CPPmulticonstnode172), KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->insert(*(_Where->GetNode()->CPPmulticonstnode173), KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->insert(*(_Where->GetNode()->CPPmulticonstnode174), KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->insert(*(_Where->GetNode()->CPPmulticonstnode175), KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->insert(*(_Where->GetNode()->CPPmulticonstnode176), KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->insert(*(_Where->GetNode()->CPPmulticonstnode177), KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->insert(*(_Where->GetNode()->CPPmulticonstnode178), KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->insert(*(_Where->GetNode()->CPPmulticonstnode179), KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->insert(*(_Where->GetNode()->CPPmulticonstnode180), KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->insert(*(_Where->GetNode()->CPPmulticonstnode181), KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->insert(*(_Where->GetNode()->CPPmulticonstnode182), KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->insert(*(_Where->GetNode()->CPPmulticonstnode183), Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->insert(*(_Where->GetNode()->CPPmulticonstnode184), Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->insert(*(_Where->GetNode()->CPPmulticonstnode185), Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->insert(*(_Where->GetNode()->CPPmulticonstnode186), Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->insert(*(_Where->GetNode()->CPPmulticonstnode187), Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->insert(*(_Where->GetNode()->CPPmulticonstnode188), Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->insert(*(_Where->GetNode()->CPPmulticonstnode189), Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->insert(*(_Where->GetNode()->CPPmulticonstnode190), Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->insert(*(_Where->GetNode()->CPPmulticonstnode191), Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->insert(*(_Where->GetNode()->CPPmulticonstnode192), Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->insert(*(_Where->GetNode()->CPPmulticonstnode193), Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->insert(*(_Where->GetNode()->CPPmulticonstnode194), Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->insert(*(_Where->GetNode()->CPPmulticonstnode195), Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->insert(*(_Where->GetNode()->CPPmulticonstnode196), Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

#define UnOrderedMultiMap_CbeginCend_CASE(NUM, CbeginCend) \
	case NUM: \
		*(temp->GetNode()->CPPmulticonstnode##NUM) = multimapUnion->CPPmultimap##NUM->CbeginCend(); \
		break;

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::cbegin()
{
	CShorpUnOrderedMultiConstNode<Key, Value>^ temp = gcnew CShorpUnOrderedMultiConstNode<Key, Value>();
	if (gIntKeyClassDictionary)
		temp->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	if (gValueClassDictionary)
		temp->SetValueClassDictionary(gValueClassDictionary);
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
		UnOrderedMultiMap_CbeginCend_CASE(1, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(2, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(3, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(4, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(5, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(6, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(7, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(8, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(9, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(10, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(11, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(12, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(13, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(14, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(15, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(16, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(17, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(18, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(19, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(20, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(21, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(22, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(23, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(24, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(25, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(26, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(27, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(28, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(29, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(30, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(31, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(32, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(33, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(34, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(35, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(36, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(37, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(38, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(39, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(40, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(41, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(42, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(43, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(44, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(45, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(46, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(47, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(48, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(49, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(50, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(51, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(52, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(53, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(54, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(55, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(56, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(57, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(58, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(59, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(60, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(61, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(62, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(63, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(64, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(65, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(66, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(67, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(68, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(69, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(70, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(71, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(72, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(73, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(74, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(75, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(76, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(77, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(78, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(79, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(80, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(81, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(82, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(83, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(84, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(85, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(86, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(87, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(88, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(89, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(90, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(91, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(92, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(93, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(94, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(95, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(96, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(97, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(98, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(99, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(100, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(101, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(102, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(103, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(104, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(105, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(106, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(107, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(108, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(109, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(110, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(111, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(112, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(113, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(114, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(115, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(116, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(117, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(118, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(119, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(120, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(121, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(122, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(123, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(124, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(125, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(126, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(127, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(128, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(129, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(130, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(131, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(132, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(133, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(134, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(135, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(136, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(137, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(138, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(139, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(140, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(141, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(142, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(143, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(144, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(145, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(146, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(147, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(148, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(149, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(150, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(151, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(152, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(153, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(154, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(155, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(156, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(157, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(158, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(159, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(160, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(161, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(162, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(163, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(164, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(165, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(166, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(167, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(168, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(169, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(170, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(171, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(172, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(173, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(174, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(175, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(176, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(177, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(178, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(179, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(180, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(181, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(182, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(183, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(184, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(185, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(186, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(187, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(188, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(189, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(190, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(191, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(192, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(193, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(194, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(195, cbegin)
		UnOrderedMultiMap_CbeginCend_CASE(196, cbegin)
	}
	return temp;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::cend()
{
	CShorpUnOrderedMultiConstNode<Key, Value>^ temp = gcnew CShorpUnOrderedMultiConstNode<Key, Value>();
	if (gIntKeyClassDictionary)
		temp->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	if (gValueClassDictionary)
		temp->SetValueClassDictionary(gValueClassDictionary);
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
		UnOrderedMultiMap_CbeginCend_CASE(1, cend)
			UnOrderedMultiMap_CbeginCend_CASE(2, cend)
			UnOrderedMultiMap_CbeginCend_CASE(3, cend)
			UnOrderedMultiMap_CbeginCend_CASE(4, cend)
			UnOrderedMultiMap_CbeginCend_CASE(5, cend)
			UnOrderedMultiMap_CbeginCend_CASE(6, cend)
			UnOrderedMultiMap_CbeginCend_CASE(7, cend)
			UnOrderedMultiMap_CbeginCend_CASE(8, cend)
			UnOrderedMultiMap_CbeginCend_CASE(9, cend)
			UnOrderedMultiMap_CbeginCend_CASE(10, cend)
			UnOrderedMultiMap_CbeginCend_CASE(11, cend)
			UnOrderedMultiMap_CbeginCend_CASE(12, cend)
			UnOrderedMultiMap_CbeginCend_CASE(13, cend)
			UnOrderedMultiMap_CbeginCend_CASE(14, cend)
			UnOrderedMultiMap_CbeginCend_CASE(15, cend)
			UnOrderedMultiMap_CbeginCend_CASE(16, cend)
			UnOrderedMultiMap_CbeginCend_CASE(17, cend)
			UnOrderedMultiMap_CbeginCend_CASE(18, cend)
			UnOrderedMultiMap_CbeginCend_CASE(19, cend)
			UnOrderedMultiMap_CbeginCend_CASE(20, cend)
			UnOrderedMultiMap_CbeginCend_CASE(21, cend)
			UnOrderedMultiMap_CbeginCend_CASE(22, cend)
			UnOrderedMultiMap_CbeginCend_CASE(23, cend)
			UnOrderedMultiMap_CbeginCend_CASE(24, cend)
			UnOrderedMultiMap_CbeginCend_CASE(25, cend)
			UnOrderedMultiMap_CbeginCend_CASE(26, cend)
			UnOrderedMultiMap_CbeginCend_CASE(27, cend)
			UnOrderedMultiMap_CbeginCend_CASE(28, cend)
			UnOrderedMultiMap_CbeginCend_CASE(29, cend)
			UnOrderedMultiMap_CbeginCend_CASE(30, cend)
			UnOrderedMultiMap_CbeginCend_CASE(31, cend)
			UnOrderedMultiMap_CbeginCend_CASE(32, cend)
			UnOrderedMultiMap_CbeginCend_CASE(33, cend)
			UnOrderedMultiMap_CbeginCend_CASE(34, cend)
			UnOrderedMultiMap_CbeginCend_CASE(35, cend)
			UnOrderedMultiMap_CbeginCend_CASE(36, cend)
			UnOrderedMultiMap_CbeginCend_CASE(37, cend)
			UnOrderedMultiMap_CbeginCend_CASE(38, cend)
			UnOrderedMultiMap_CbeginCend_CASE(39, cend)
			UnOrderedMultiMap_CbeginCend_CASE(40, cend)
			UnOrderedMultiMap_CbeginCend_CASE(41, cend)
			UnOrderedMultiMap_CbeginCend_CASE(42, cend)
			UnOrderedMultiMap_CbeginCend_CASE(43, cend)
			UnOrderedMultiMap_CbeginCend_CASE(44, cend)
			UnOrderedMultiMap_CbeginCend_CASE(45, cend)
			UnOrderedMultiMap_CbeginCend_CASE(46, cend)
			UnOrderedMultiMap_CbeginCend_CASE(47, cend)
			UnOrderedMultiMap_CbeginCend_CASE(48, cend)
			UnOrderedMultiMap_CbeginCend_CASE(49, cend)
			UnOrderedMultiMap_CbeginCend_CASE(50, cend)
			UnOrderedMultiMap_CbeginCend_CASE(51, cend)
			UnOrderedMultiMap_CbeginCend_CASE(52, cend)
			UnOrderedMultiMap_CbeginCend_CASE(53, cend)
			UnOrderedMultiMap_CbeginCend_CASE(54, cend)
			UnOrderedMultiMap_CbeginCend_CASE(55, cend)
			UnOrderedMultiMap_CbeginCend_CASE(56, cend)
			UnOrderedMultiMap_CbeginCend_CASE(57, cend)
			UnOrderedMultiMap_CbeginCend_CASE(58, cend)
			UnOrderedMultiMap_CbeginCend_CASE(59, cend)
			UnOrderedMultiMap_CbeginCend_CASE(60, cend)
			UnOrderedMultiMap_CbeginCend_CASE(61, cend)
			UnOrderedMultiMap_CbeginCend_CASE(62, cend)
			UnOrderedMultiMap_CbeginCend_CASE(63, cend)
			UnOrderedMultiMap_CbeginCend_CASE(64, cend)
			UnOrderedMultiMap_CbeginCend_CASE(65, cend)
			UnOrderedMultiMap_CbeginCend_CASE(66, cend)
			UnOrderedMultiMap_CbeginCend_CASE(67, cend)
			UnOrderedMultiMap_CbeginCend_CASE(68, cend)
			UnOrderedMultiMap_CbeginCend_CASE(69, cend)
			UnOrderedMultiMap_CbeginCend_CASE(70, cend)
			UnOrderedMultiMap_CbeginCend_CASE(71, cend)
			UnOrderedMultiMap_CbeginCend_CASE(72, cend)
			UnOrderedMultiMap_CbeginCend_CASE(73, cend)
			UnOrderedMultiMap_CbeginCend_CASE(74, cend)
			UnOrderedMultiMap_CbeginCend_CASE(75, cend)
			UnOrderedMultiMap_CbeginCend_CASE(76, cend)
			UnOrderedMultiMap_CbeginCend_CASE(77, cend)
			UnOrderedMultiMap_CbeginCend_CASE(78, cend)
			UnOrderedMultiMap_CbeginCend_CASE(79, cend)
			UnOrderedMultiMap_CbeginCend_CASE(80, cend)
			UnOrderedMultiMap_CbeginCend_CASE(81, cend)
			UnOrderedMultiMap_CbeginCend_CASE(82, cend)
			UnOrderedMultiMap_CbeginCend_CASE(83, cend)
			UnOrderedMultiMap_CbeginCend_CASE(84, cend)
			UnOrderedMultiMap_CbeginCend_CASE(85, cend)
			UnOrderedMultiMap_CbeginCend_CASE(86, cend)
			UnOrderedMultiMap_CbeginCend_CASE(87, cend)
			UnOrderedMultiMap_CbeginCend_CASE(88, cend)
			UnOrderedMultiMap_CbeginCend_CASE(89, cend)
			UnOrderedMultiMap_CbeginCend_CASE(90, cend)
			UnOrderedMultiMap_CbeginCend_CASE(91, cend)
			UnOrderedMultiMap_CbeginCend_CASE(92, cend)
			UnOrderedMultiMap_CbeginCend_CASE(93, cend)
			UnOrderedMultiMap_CbeginCend_CASE(94, cend)
			UnOrderedMultiMap_CbeginCend_CASE(95, cend)
			UnOrderedMultiMap_CbeginCend_CASE(96, cend)
			UnOrderedMultiMap_CbeginCend_CASE(97, cend)
			UnOrderedMultiMap_CbeginCend_CASE(98, cend)
			UnOrderedMultiMap_CbeginCend_CASE(99, cend)
			UnOrderedMultiMap_CbeginCend_CASE(100, cend)
			UnOrderedMultiMap_CbeginCend_CASE(101, cend)
			UnOrderedMultiMap_CbeginCend_CASE(102, cend)
			UnOrderedMultiMap_CbeginCend_CASE(103, cend)
			UnOrderedMultiMap_CbeginCend_CASE(104, cend)
			UnOrderedMultiMap_CbeginCend_CASE(105, cend)
			UnOrderedMultiMap_CbeginCend_CASE(106, cend)
			UnOrderedMultiMap_CbeginCend_CASE(107, cend)
			UnOrderedMultiMap_CbeginCend_CASE(108, cend)
			UnOrderedMultiMap_CbeginCend_CASE(109, cend)
			UnOrderedMultiMap_CbeginCend_CASE(110, cend)
			UnOrderedMultiMap_CbeginCend_CASE(111, cend)
			UnOrderedMultiMap_CbeginCend_CASE(112, cend)
			UnOrderedMultiMap_CbeginCend_CASE(113, cend)
			UnOrderedMultiMap_CbeginCend_CASE(114, cend)
			UnOrderedMultiMap_CbeginCend_CASE(115, cend)
			UnOrderedMultiMap_CbeginCend_CASE(116, cend)
			UnOrderedMultiMap_CbeginCend_CASE(117, cend)
			UnOrderedMultiMap_CbeginCend_CASE(118, cend)
			UnOrderedMultiMap_CbeginCend_CASE(119, cend)
			UnOrderedMultiMap_CbeginCend_CASE(120, cend)
			UnOrderedMultiMap_CbeginCend_CASE(121, cend)
			UnOrderedMultiMap_CbeginCend_CASE(122, cend)
			UnOrderedMultiMap_CbeginCend_CASE(123, cend)
			UnOrderedMultiMap_CbeginCend_CASE(124, cend)
			UnOrderedMultiMap_CbeginCend_CASE(125, cend)
			UnOrderedMultiMap_CbeginCend_CASE(126, cend)
			UnOrderedMultiMap_CbeginCend_CASE(127, cend)
			UnOrderedMultiMap_CbeginCend_CASE(128, cend)
			UnOrderedMultiMap_CbeginCend_CASE(129, cend)
			UnOrderedMultiMap_CbeginCend_CASE(130, cend)
			UnOrderedMultiMap_CbeginCend_CASE(131, cend)
			UnOrderedMultiMap_CbeginCend_CASE(132, cend)
			UnOrderedMultiMap_CbeginCend_CASE(133, cend)
			UnOrderedMultiMap_CbeginCend_CASE(134, cend)
			UnOrderedMultiMap_CbeginCend_CASE(135, cend)
			UnOrderedMultiMap_CbeginCend_CASE(136, cend)
			UnOrderedMultiMap_CbeginCend_CASE(137, cend)
			UnOrderedMultiMap_CbeginCend_CASE(138, cend)
			UnOrderedMultiMap_CbeginCend_CASE(139, cend)
			UnOrderedMultiMap_CbeginCend_CASE(140, cend)
			UnOrderedMultiMap_CbeginCend_CASE(141, cend)
			UnOrderedMultiMap_CbeginCend_CASE(142, cend)
			UnOrderedMultiMap_CbeginCend_CASE(143, cend)
			UnOrderedMultiMap_CbeginCend_CASE(144, cend)
			UnOrderedMultiMap_CbeginCend_CASE(145, cend)
			UnOrderedMultiMap_CbeginCend_CASE(146, cend)
			UnOrderedMultiMap_CbeginCend_CASE(147, cend)
			UnOrderedMultiMap_CbeginCend_CASE(148, cend)
			UnOrderedMultiMap_CbeginCend_CASE(149, cend)
			UnOrderedMultiMap_CbeginCend_CASE(150, cend)
			UnOrderedMultiMap_CbeginCend_CASE(151, cend)
			UnOrderedMultiMap_CbeginCend_CASE(152, cend)
			UnOrderedMultiMap_CbeginCend_CASE(153, cend)
			UnOrderedMultiMap_CbeginCend_CASE(154, cend)
			UnOrderedMultiMap_CbeginCend_CASE(155, cend)
			UnOrderedMultiMap_CbeginCend_CASE(156, cend)
			UnOrderedMultiMap_CbeginCend_CASE(157, cend)
			UnOrderedMultiMap_CbeginCend_CASE(158, cend)
			UnOrderedMultiMap_CbeginCend_CASE(159, cend)
			UnOrderedMultiMap_CbeginCend_CASE(160, cend)
			UnOrderedMultiMap_CbeginCend_CASE(161, cend)
			UnOrderedMultiMap_CbeginCend_CASE(162, cend)
			UnOrderedMultiMap_CbeginCend_CASE(163, cend)
			UnOrderedMultiMap_CbeginCend_CASE(164, cend)
			UnOrderedMultiMap_CbeginCend_CASE(165, cend)
			UnOrderedMultiMap_CbeginCend_CASE(166, cend)
			UnOrderedMultiMap_CbeginCend_CASE(167, cend)
			UnOrderedMultiMap_CbeginCend_CASE(168, cend)
			UnOrderedMultiMap_CbeginCend_CASE(169, cend)
			UnOrderedMultiMap_CbeginCend_CASE(170, cend)
			UnOrderedMultiMap_CbeginCend_CASE(171, cend)
			UnOrderedMultiMap_CbeginCend_CASE(172, cend)
			UnOrderedMultiMap_CbeginCend_CASE(173, cend)
			UnOrderedMultiMap_CbeginCend_CASE(174, cend)
			UnOrderedMultiMap_CbeginCend_CASE(175, cend)
			UnOrderedMultiMap_CbeginCend_CASE(176, cend)
			UnOrderedMultiMap_CbeginCend_CASE(177, cend)
			UnOrderedMultiMap_CbeginCend_CASE(178, cend)
			UnOrderedMultiMap_CbeginCend_CASE(179, cend)
			UnOrderedMultiMap_CbeginCend_CASE(180, cend)
			UnOrderedMultiMap_CbeginCend_CASE(181, cend)
			UnOrderedMultiMap_CbeginCend_CASE(182, cend)
			UnOrderedMultiMap_CbeginCend_CASE(183, cend)
			UnOrderedMultiMap_CbeginCend_CASE(184, cend)
			UnOrderedMultiMap_CbeginCend_CASE(185, cend)
			UnOrderedMultiMap_CbeginCend_CASE(186, cend)
			UnOrderedMultiMap_CbeginCend_CASE(187, cend)
			UnOrderedMultiMap_CbeginCend_CASE(188, cend)
			UnOrderedMultiMap_CbeginCend_CASE(189, cend)
			UnOrderedMultiMap_CbeginCend_CASE(190, cend)
			UnOrderedMultiMap_CbeginCend_CASE(191, cend)
			UnOrderedMultiMap_CbeginCend_CASE(192, cend)
			UnOrderedMultiMap_CbeginCend_CASE(193, cend)
			UnOrderedMultiMap_CbeginCend_CASE(194, cend)
			UnOrderedMultiMap_CbeginCend_CASE(195, cend)
			UnOrderedMultiMap_CbeginCend_CASE(196, cend)
	}
	return temp;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::emplace_hint(CShorpUnOrderedMultiNode<Key, Value>^ _Where, Key key, Value value)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			System::Object^ managedObject = safe_cast<System::Object^>(key);
			Key__Int = static_cast<__int64>(Convert::ToInt64(managedObject));
			gKeyClassDictionary->Add(key, Key__Int);
			gIntKeyClassDictionary->Add(Key__Int, key);
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->emplace_hint(*(_Where->GetNode()->CPPmultinode1), KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->emplace_hint(*(_Where->GetNode()->CPPmultinode2), KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->emplace_hint(*(_Where->GetNode()->CPPmultinode3), KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->emplace_hint(*(_Where->GetNode()->CPPmultinode4), KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->emplace_hint(*(_Where->GetNode()->CPPmultinode5), KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->emplace_hint(*(_Where->GetNode()->CPPmultinode6), KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->emplace_hint(*(_Where->GetNode()->CPPmultinode7), KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->emplace_hint(*(_Where->GetNode()->CPPmultinode8), KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->emplace_hint(*(_Where->GetNode()->CPPmultinode9), KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->emplace_hint(*(_Where->GetNode()->CPPmultinode10), KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->emplace_hint(*(_Where->GetNode()->CPPmultinode11), KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->emplace_hint(*(_Where->GetNode()->CPPmultinode12), KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->emplace_hint(*(_Where->GetNode()->CPPmultinode13), KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->emplace_hint(*(_Where->GetNode()->CPPmultinode14), KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->emplace_hint(*(_Where->GetNode()->CPPmultinode15), KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->emplace_hint(*(_Where->GetNode()->CPPmultinode16), KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->emplace_hint(*(_Where->GetNode()->CPPmultinode17), KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->emplace_hint(*(_Where->GetNode()->CPPmultinode18), KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->emplace_hint(*(_Where->GetNode()->CPPmultinode19), KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->emplace_hint(*(_Where->GetNode()->CPPmultinode20), KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->emplace_hint(*(_Where->GetNode()->CPPmultinode21), KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->emplace_hint(*(_Where->GetNode()->CPPmultinode22), KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->emplace_hint(*(_Where->GetNode()->CPPmultinode23), KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->emplace_hint(*(_Where->GetNode()->CPPmultinode24), KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->emplace_hint(*(_Where->GetNode()->CPPmultinode25), KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->emplace_hint(*(_Where->GetNode()->CPPmultinode26), KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->emplace_hint(*(_Where->GetNode()->CPPmultinode27), KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->emplace_hint(*(_Where->GetNode()->CPPmultinode28), KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->emplace_hint(*(_Where->GetNode()->CPPmultinode29), KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->emplace_hint(*(_Where->GetNode()->CPPmultinode30), KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->emplace_hint(*(_Where->GetNode()->CPPmultinode31), KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->emplace_hint(*(_Where->GetNode()->CPPmultinode32), KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->emplace_hint(*(_Where->GetNode()->CPPmultinode33), KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->emplace_hint(*(_Where->GetNode()->CPPmultinode34), KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->emplace_hint(*(_Where->GetNode()->CPPmultinode35), KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->emplace_hint(*(_Where->GetNode()->CPPmultinode36), KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->emplace_hint(*(_Where->GetNode()->CPPmultinode37), KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->emplace_hint(*(_Where->GetNode()->CPPmultinode38), KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->emplace_hint(*(_Where->GetNode()->CPPmultinode39), KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->emplace_hint(*(_Where->GetNode()->CPPmultinode40), KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->emplace_hint(*(_Where->GetNode()->CPPmultinode41), KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->emplace_hint(*(_Where->GetNode()->CPPmultinode42), KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->emplace_hint(*(_Where->GetNode()->CPPmultinode43), KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->emplace_hint(*(_Where->GetNode()->CPPmultinode44), KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->emplace_hint(*(_Where->GetNode()->CPPmultinode45), KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->emplace_hint(*(_Where->GetNode()->CPPmultinode46), KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->emplace_hint(*(_Where->GetNode()->CPPmultinode47), KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->emplace_hint(*(_Where->GetNode()->CPPmultinode48), KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->emplace_hint(*(_Where->GetNode()->CPPmultinode49), KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->emplace_hint(*(_Where->GetNode()->CPPmultinode50), KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->emplace_hint(*(_Where->GetNode()->CPPmultinode51), KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->emplace_hint(*(_Where->GetNode()->CPPmultinode52), KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->emplace_hint(*(_Where->GetNode()->CPPmultinode53), KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->emplace_hint(*(_Where->GetNode()->CPPmultinode54), KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->emplace_hint(*(_Where->GetNode()->CPPmultinode55), KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->emplace_hint(*(_Where->GetNode()->CPPmultinode56), KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->emplace_hint(*(_Where->GetNode()->CPPmultinode57), KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->emplace_hint(*(_Where->GetNode()->CPPmultinode58), KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->emplace_hint(*(_Where->GetNode()->CPPmultinode59), KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->emplace_hint(*(_Where->GetNode()->CPPmultinode60), KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->emplace_hint(*(_Where->GetNode()->CPPmultinode61), KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->emplace_hint(*(_Where->GetNode()->CPPmultinode62), KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->emplace_hint(*(_Where->GetNode()->CPPmultinode63), KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->emplace_hint(*(_Where->GetNode()->CPPmultinode64), KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->emplace_hint(*(_Where->GetNode()->CPPmultinode65), KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->emplace_hint(*(_Where->GetNode()->CPPmultinode66), KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->emplace_hint(*(_Where->GetNode()->CPPmultinode67), KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->emplace_hint(*(_Where->GetNode()->CPPmultinode68), KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->emplace_hint(*(_Where->GetNode()->CPPmultinode69), KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->emplace_hint(*(_Where->GetNode()->CPPmultinode70), KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->emplace_hint(*(_Where->GetNode()->CPPmultinode71), KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->emplace_hint(*(_Where->GetNode()->CPPmultinode72), KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->emplace_hint(*(_Where->GetNode()->CPPmultinode73), KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->emplace_hint(*(_Where->GetNode()->CPPmultinode74), KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->emplace_hint(*(_Where->GetNode()->CPPmultinode75), KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->emplace_hint(*(_Where->GetNode()->CPPmultinode76), KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->emplace_hint(*(_Where->GetNode()->CPPmultinode77), KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->emplace_hint(*(_Where->GetNode()->CPPmultinode78), KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->emplace_hint(*(_Where->GetNode()->CPPmultinode79), KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->emplace_hint(*(_Where->GetNode()->CPPmultinode80), KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->emplace_hint(*(_Where->GetNode()->CPPmultinode81), KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->emplace_hint(*(_Where->GetNode()->CPPmultinode82), KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->emplace_hint(*(_Where->GetNode()->CPPmultinode83), KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->emplace_hint(*(_Where->GetNode()->CPPmultinode84), KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->emplace_hint(*(_Where->GetNode()->CPPmultinode85), KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->emplace_hint(*(_Where->GetNode()->CPPmultinode86), KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->emplace_hint(*(_Where->GetNode()->CPPmultinode87), KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->emplace_hint(*(_Where->GetNode()->CPPmultinode88), KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->emplace_hint(*(_Where->GetNode()->CPPmultinode89), KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->emplace_hint(*(_Where->GetNode()->CPPmultinode90), KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->emplace_hint(*(_Where->GetNode()->CPPmultinode91), KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->emplace_hint(*(_Where->GetNode()->CPPmultinode92), KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->emplace_hint(*(_Where->GetNode()->CPPmultinode93), KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->emplace_hint(*(_Where->GetNode()->CPPmultinode94), KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->emplace_hint(*(_Where->GetNode()->CPPmultinode95), KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->emplace_hint(*(_Where->GetNode()->CPPmultinode96), KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->emplace_hint(*(_Where->GetNode()->CPPmultinode97), KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->emplace_hint(*(_Where->GetNode()->CPPmultinode98), KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->emplace_hint(*(_Where->GetNode()->CPPmultinode99), KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->emplace_hint(*(_Where->GetNode()->CPPmultinode100), KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->emplace_hint(*(_Where->GetNode()->CPPmultinode101), KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->emplace_hint(*(_Where->GetNode()->CPPmultinode102), KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->emplace_hint(*(_Where->GetNode()->CPPmultinode103), KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->emplace_hint(*(_Where->GetNode()->CPPmultinode104), KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->emplace_hint(*(_Where->GetNode()->CPPmultinode105), KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->emplace_hint(*(_Where->GetNode()->CPPmultinode106), KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->emplace_hint(*(_Where->GetNode()->CPPmultinode107), KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->emplace_hint(*(_Where->GetNode()->CPPmultinode108), KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->emplace_hint(*(_Where->GetNode()->CPPmultinode109), KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->emplace_hint(*(_Where->GetNode()->CPPmultinode110), KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->emplace_hint(*(_Where->GetNode()->CPPmultinode111), KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->emplace_hint(*(_Where->GetNode()->CPPmultinode112), KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->emplace_hint(*(_Where->GetNode()->CPPmultinode113), KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->emplace_hint(*(_Where->GetNode()->CPPmultinode114), KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->emplace_hint(*(_Where->GetNode()->CPPmultinode115), KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->emplace_hint(*(_Where->GetNode()->CPPmultinode116), KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->emplace_hint(*(_Where->GetNode()->CPPmultinode117), KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->emplace_hint(*(_Where->GetNode()->CPPmultinode118), KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->emplace_hint(*(_Where->GetNode()->CPPmultinode119), KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->emplace_hint(*(_Where->GetNode()->CPPmultinode120), KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->emplace_hint(*(_Where->GetNode()->CPPmultinode121), KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->emplace_hint(*(_Where->GetNode()->CPPmultinode122), KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->emplace_hint(*(_Where->GetNode()->CPPmultinode123), KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->emplace_hint(*(_Where->GetNode()->CPPmultinode124), KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->emplace_hint(*(_Where->GetNode()->CPPmultinode125), KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->emplace_hint(*(_Where->GetNode()->CPPmultinode126), KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->emplace_hint(*(_Where->GetNode()->CPPmultinode127), KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->emplace_hint(*(_Where->GetNode()->CPPmultinode128), KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->emplace_hint(*(_Where->GetNode()->CPPmultinode129), KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->emplace_hint(*(_Where->GetNode()->CPPmultinode130), KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->emplace_hint(*(_Where->GetNode()->CPPmultinode131), KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->emplace_hint(*(_Where->GetNode()->CPPmultinode132), KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->emplace_hint(*(_Where->GetNode()->CPPmultinode133), KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->emplace_hint(*(_Where->GetNode()->CPPmultinode134), KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->emplace_hint(*(_Where->GetNode()->CPPmultinode135), KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->emplace_hint(*(_Where->GetNode()->CPPmultinode136), KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->emplace_hint(*(_Where->GetNode()->CPPmultinode137), KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->emplace_hint(*(_Where->GetNode()->CPPmultinode138), KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->emplace_hint(*(_Where->GetNode()->CPPmultinode139), KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->emplace_hint(*(_Where->GetNode()->CPPmultinode140), KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->emplace_hint(*(_Where->GetNode()->CPPmultinode141), KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->emplace_hint(*(_Where->GetNode()->CPPmultinode142), KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->emplace_hint(*(_Where->GetNode()->CPPmultinode143), KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->emplace_hint(*(_Where->GetNode()->CPPmultinode144), KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->emplace_hint(*(_Where->GetNode()->CPPmultinode145), KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->emplace_hint(*(_Where->GetNode()->CPPmultinode146), KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->emplace_hint(*(_Where->GetNode()->CPPmultinode147), KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->emplace_hint(*(_Where->GetNode()->CPPmultinode148), KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->emplace_hint(*(_Where->GetNode()->CPPmultinode149), KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->emplace_hint(*(_Where->GetNode()->CPPmultinode150), KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->emplace_hint(*(_Where->GetNode()->CPPmultinode151), KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->emplace_hint(*(_Where->GetNode()->CPPmultinode152), KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->emplace_hint(*(_Where->GetNode()->CPPmultinode153), KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->emplace_hint(*(_Where->GetNode()->CPPmultinode154), KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->emplace_hint(*(_Where->GetNode()->CPPmultinode155), KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->emplace_hint(*(_Where->GetNode()->CPPmultinode156), KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->emplace_hint(*(_Where->GetNode()->CPPmultinode157), KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->emplace_hint(*(_Where->GetNode()->CPPmultinode158), KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->emplace_hint(*(_Where->GetNode()->CPPmultinode159), KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->emplace_hint(*(_Where->GetNode()->CPPmultinode160), KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->emplace_hint(*(_Where->GetNode()->CPPmultinode161), KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->emplace_hint(*(_Where->GetNode()->CPPmultinode162), KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->emplace_hint(*(_Where->GetNode()->CPPmultinode163), KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->emplace_hint(*(_Where->GetNode()->CPPmultinode164), KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->emplace_hint(*(_Where->GetNode()->CPPmultinode165), KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->emplace_hint(*(_Where->GetNode()->CPPmultinode166), KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->emplace_hint(*(_Where->GetNode()->CPPmultinode167), KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->emplace_hint(*(_Where->GetNode()->CPPmultinode168), KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->emplace_hint(*(_Where->GetNode()->CPPmultinode169), KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->emplace_hint(*(_Where->GetNode()->CPPmultinode170), KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->emplace_hint(*(_Where->GetNode()->CPPmultinode171), KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->emplace_hint(*(_Where->GetNode()->CPPmultinode172), KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->emplace_hint(*(_Where->GetNode()->CPPmultinode173), KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->emplace_hint(*(_Where->GetNode()->CPPmultinode174), KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->emplace_hint(*(_Where->GetNode()->CPPmultinode175), KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->emplace_hint(*(_Where->GetNode()->CPPmultinode176), KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->emplace_hint(*(_Where->GetNode()->CPPmultinode177), KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->emplace_hint(*(_Where->GetNode()->CPPmultinode178), KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->emplace_hint(*(_Where->GetNode()->CPPmultinode179), KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->emplace_hint(*(_Where->GetNode()->CPPmultinode180), KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->emplace_hint(*(_Where->GetNode()->CPPmultinode181), KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->emplace_hint(*(_Where->GetNode()->CPPmultinode182), KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->emplace_hint(*(_Where->GetNode()->CPPmultinode183), Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->emplace_hint(*(_Where->GetNode()->CPPmultinode184), Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->emplace_hint(*(_Where->GetNode()->CPPmultinode185), Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->emplace_hint(*(_Where->GetNode()->CPPmultinode186), Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->emplace_hint(*(_Where->GetNode()->CPPmultinode187), Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->emplace_hint(*(_Where->GetNode()->CPPmultinode188), Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->emplace_hint(*(_Where->GetNode()->CPPmultinode189), Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->emplace_hint(*(_Where->GetNode()->CPPmultinode190), Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->emplace_hint(*(_Where->GetNode()->CPPmultinode191), Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->emplace_hint(*(_Where->GetNode()->CPPmultinode192), Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->emplace_hint(*(_Where->GetNode()->CPPmultinode193), Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->emplace_hint(*(_Where->GetNode()->CPPmultinode194), Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->emplace_hint(*(_Where->GetNode()->CPPmultinode195), Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->emplace_hint(*(_Where->GetNode()->CPPmultinode196), Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::emplace_hint(CShorpUnOrderedMultiConstNode<Key, Value>^ _Where, Key key, Value value)
{
	if (Object::ReferenceEquals(_Where, nullptr)) return nullptr;
	if (Object::ReferenceEquals(key, nullptr)) return nullptr;
	if (Object::ReferenceEquals(value, nullptr)) return nullptr;
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;

	unsigned char KeyUchar = 0;
	char KeyChar = 0;
	short KeyShort = 0;
	unsigned short KeyUshort = 0;
	int KeyInt = 0;
	unsigned int KeyUint = 0;
	long long KeyLonglong = 0;
	unsigned long long KeyUlonglong = 0;
	float KeyFloat = 0.0f;
	double KeyDouble = 0;
	wchar_t KeyWchar = 0;
	bool KeyBool = false;
	std::wstring KeyWstring = L"";
	__int64 Key__Int = 0;

	if (keyType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		KeyBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (keyType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(key);
		MarshalString(safe_cast<System::String^>(managedObject), KeyWstring);
	}
	else if (keyType->IsClass)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsInterface)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			gKeyClassDictionary->Add(key, nDictionaryCount);
			gIntKeyClassDictionary->Add(nDictionaryCount, key);
			Key__Int = nDictionaryCount;
			nDictionaryCount++;
		}
	}
	else if (keyType->IsEnum)
	{
		if (gKeyClassDictionary->TryGetValue(key, Key__Int));
		else
		{
			System::Object^ managedObject = safe_cast<System::Object^>(key);
			Key__Int = static_cast<__int64>(Convert::ToInt64(managedObject));
			gKeyClassDictionary->Add(key, Key__Int);
			gIntKeyClassDictionary->Add(Key__Int, key);
		}
	}
	else
	{
		return nullptr;
	}

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsInterface)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else if (valueType->IsEnum)
	{
		gValueClassDictionary->Add(nDictionaryCount, value);
		Value__Int = nDictionaryCount;
		nDictionaryCount++;
	}
	else
	{
		return nullptr;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
	case 1:
		*(multiNode->GetNode()->CPPmultinode1) = multimapUnion->CPPmultimap1->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode1), KeyUchar, ValueUchar);
		break;
	case 2:
		*(multiNode->GetNode()->CPPmultinode2) = multimapUnion->CPPmultimap2->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode2), KeyUchar, ValueChar);
		break;
	case 3:
		*(multiNode->GetNode()->CPPmultinode3) = multimapUnion->CPPmultimap3->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode3), KeyUchar, ValueShort);
		break;
	case 4:
		*(multiNode->GetNode()->CPPmultinode4) = multimapUnion->CPPmultimap4->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode4), KeyUchar, ValueUshort);
		break;
	case 5:
		*(multiNode->GetNode()->CPPmultinode5) = multimapUnion->CPPmultimap5->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode5), KeyUchar, ValueInt);
		break;
	case 6:
		*(multiNode->GetNode()->CPPmultinode6) = multimapUnion->CPPmultimap6->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode6), KeyUchar, ValueUint);
		break;
	case 7:
		*(multiNode->GetNode()->CPPmultinode7) = multimapUnion->CPPmultimap7->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode7), KeyUchar, ValueLonglong);
		break;
	case 8:
		*(multiNode->GetNode()->CPPmultinode8) = multimapUnion->CPPmultimap8->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode8), KeyUchar, ValueUlonglong);
		break;
	case 9:
		*(multiNode->GetNode()->CPPmultinode9) = multimapUnion->CPPmultimap9->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode9), KeyUchar, ValueFloat);
		break;
	case 10:
		*(multiNode->GetNode()->CPPmultinode10) = multimapUnion->CPPmultimap10->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode10), KeyUchar, ValueDouble);
		break;
	case 11:
		*(multiNode->GetNode()->CPPmultinode11) = multimapUnion->CPPmultimap11->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode11), KeyUchar, ValueWchar);
		break;
	case 12:
		*(multiNode->GetNode()->CPPmultinode12) = multimapUnion->CPPmultimap12->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode12), KeyUchar, ValueBool);
		break;
	case 13:
		*(multiNode->GetNode()->CPPmultinode13) = multimapUnion->CPPmultimap13->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode13), KeyUchar, ValueWstring);
		break;
	case 14:
		*(multiNode->GetNode()->CPPmultinode14) = multimapUnion->CPPmultimap14->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode14), KeyUchar, Value__Int);
		break;
	case 15:
		*(multiNode->GetNode()->CPPmultinode15) = multimapUnion->CPPmultimap15->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode15), KeyChar, ValueUchar);
		break;
	case 16:
		*(multiNode->GetNode()->CPPmultinode16) = multimapUnion->CPPmultimap16->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode16), KeyChar, ValueChar);
		break;
	case 17:
		*(multiNode->GetNode()->CPPmultinode17) = multimapUnion->CPPmultimap17->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode17), KeyChar, ValueShort);
		break;
	case 18:
		*(multiNode->GetNode()->CPPmultinode18) = multimapUnion->CPPmultimap18->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode18), KeyChar, ValueUshort);
		break;
	case 19:
		*(multiNode->GetNode()->CPPmultinode19) = multimapUnion->CPPmultimap19->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode19), KeyChar, ValueInt);
		break;
	case 20:
		*(multiNode->GetNode()->CPPmultinode20) = multimapUnion->CPPmultimap20->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode20), KeyChar, ValueUint);
		break;
	case 21:
		*(multiNode->GetNode()->CPPmultinode21) = multimapUnion->CPPmultimap21->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode21), KeyChar, ValueLonglong);
		break;
	case 22:
		*(multiNode->GetNode()->CPPmultinode22) = multimapUnion->CPPmultimap22->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode22), KeyChar, ValueUlonglong);
		break;
	case 23:
		*(multiNode->GetNode()->CPPmultinode23) = multimapUnion->CPPmultimap23->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode23), KeyChar, ValueFloat);
		break;
	case 24:
		*(multiNode->GetNode()->CPPmultinode24) = multimapUnion->CPPmultimap24->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode24), KeyChar, ValueDouble);
		break;
	case 25:
		*(multiNode->GetNode()->CPPmultinode25) = multimapUnion->CPPmultimap25->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode25), KeyChar, ValueWchar);
		break;
	case 26:
		*(multiNode->GetNode()->CPPmultinode26) = multimapUnion->CPPmultimap26->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode26), KeyChar, ValueBool);
		break;
	case 27:
		*(multiNode->GetNode()->CPPmultinode27) = multimapUnion->CPPmultimap27->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode27), KeyChar, ValueWstring);
		break;
	case 28:
		*(multiNode->GetNode()->CPPmultinode28) = multimapUnion->CPPmultimap28->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode28), KeyChar, Value__Int);
		break;
	case 29:
		*(multiNode->GetNode()->CPPmultinode29) = multimapUnion->CPPmultimap29->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode29), KeyShort, ValueUchar);
		break;
	case 30:
		*(multiNode->GetNode()->CPPmultinode30) = multimapUnion->CPPmultimap30->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode30), KeyShort, ValueChar);
		break;
	case 31:
		*(multiNode->GetNode()->CPPmultinode31) = multimapUnion->CPPmultimap31->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode31), KeyShort, ValueShort);
		break;
	case 32:
		*(multiNode->GetNode()->CPPmultinode32) = multimapUnion->CPPmultimap32->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode32), KeyShort, ValueUshort);
		break;
	case 33:
		*(multiNode->GetNode()->CPPmultinode33) = multimapUnion->CPPmultimap33->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode33), KeyShort, ValueInt);
		break;
	case 34:
		*(multiNode->GetNode()->CPPmultinode34) = multimapUnion->CPPmultimap34->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode34), KeyShort, ValueUint);
		break;
	case 35:
		*(multiNode->GetNode()->CPPmultinode35) = multimapUnion->CPPmultimap35->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode35), KeyShort, ValueLonglong);
		break;
	case 36:
		*(multiNode->GetNode()->CPPmultinode36) = multimapUnion->CPPmultimap36->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode36), KeyShort, ValueUlonglong);
		break;
	case 37:
		*(multiNode->GetNode()->CPPmultinode37) = multimapUnion->CPPmultimap37->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode37), KeyShort, ValueFloat);
		break;
	case 38:
		*(multiNode->GetNode()->CPPmultinode38) = multimapUnion->CPPmultimap38->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode38), KeyShort, ValueDouble);
		break;
	case 39:
		*(multiNode->GetNode()->CPPmultinode39) = multimapUnion->CPPmultimap39->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode39), KeyShort, ValueWchar);
		break;
	case 40:
		*(multiNode->GetNode()->CPPmultinode40) = multimapUnion->CPPmultimap40->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode40), KeyShort, ValueBool);
		break;
	case 41:
		*(multiNode->GetNode()->CPPmultinode41) = multimapUnion->CPPmultimap41->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode41), KeyShort, ValueWstring);
		break;
	case 42:
		*(multiNode->GetNode()->CPPmultinode42) = multimapUnion->CPPmultimap42->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode42), KeyShort, Value__Int);
		break;
	case 43:
		*(multiNode->GetNode()->CPPmultinode43) = multimapUnion->CPPmultimap43->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode43), KeyUshort, ValueUchar);
		break;
	case 44:
		*(multiNode->GetNode()->CPPmultinode44) = multimapUnion->CPPmultimap44->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode44), KeyUshort, ValueChar);
		break;
	case 45:
		*(multiNode->GetNode()->CPPmultinode45) = multimapUnion->CPPmultimap45->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode45), KeyUshort, ValueShort);
		break;
	case 46:
		*(multiNode->GetNode()->CPPmultinode46) = multimapUnion->CPPmultimap46->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode46), KeyUshort, ValueUshort);
		break;
	case 47:
		*(multiNode->GetNode()->CPPmultinode47) = multimapUnion->CPPmultimap47->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode47), KeyUshort, ValueInt);
		break;
	case 48:
		*(multiNode->GetNode()->CPPmultinode48) = multimapUnion->CPPmultimap48->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode48), KeyUshort, ValueUint);
		break;
	case 49:
		*(multiNode->GetNode()->CPPmultinode49) = multimapUnion->CPPmultimap49->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode49), KeyUshort, ValueLonglong);
		break;
	case 50:
		*(multiNode->GetNode()->CPPmultinode50) = multimapUnion->CPPmultimap50->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode50), KeyUshort, ValueUlonglong);
		break;
	case 51:
		*(multiNode->GetNode()->CPPmultinode51) = multimapUnion->CPPmultimap51->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode51), KeyUshort, ValueFloat);
		break;
	case 52:
		*(multiNode->GetNode()->CPPmultinode52) = multimapUnion->CPPmultimap52->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode52), KeyUshort, ValueDouble);
		break;
	case 53:
		*(multiNode->GetNode()->CPPmultinode53) = multimapUnion->CPPmultimap53->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode53), KeyUshort, ValueWchar);
		break;
	case 54:
		*(multiNode->GetNode()->CPPmultinode54) = multimapUnion->CPPmultimap54->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode54), KeyUshort, ValueBool);
		break;
	case 55:
		*(multiNode->GetNode()->CPPmultinode55) = multimapUnion->CPPmultimap55->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode55), KeyUshort, ValueWstring);
		break;
	case 56:
		*(multiNode->GetNode()->CPPmultinode56) = multimapUnion->CPPmultimap56->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode56), KeyUshort, Value__Int);
		break;
	case 57:
		*(multiNode->GetNode()->CPPmultinode57) = multimapUnion->CPPmultimap57->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode57), KeyInt, ValueUchar);
		break;
	case 58:
		*(multiNode->GetNode()->CPPmultinode58) = multimapUnion->CPPmultimap58->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode58), KeyInt, ValueChar);
		break;
	case 59:
		*(multiNode->GetNode()->CPPmultinode59) = multimapUnion->CPPmultimap59->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode59), KeyInt, ValueShort);
		break;
	case 60:
		*(multiNode->GetNode()->CPPmultinode60) = multimapUnion->CPPmultimap60->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode60), KeyInt, ValueUshort);
		break;
	case 61:
		*(multiNode->GetNode()->CPPmultinode61) = multimapUnion->CPPmultimap61->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode61), KeyInt, ValueInt);
		break;
	case 62:
		*(multiNode->GetNode()->CPPmultinode62) = multimapUnion->CPPmultimap62->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode62), KeyInt, ValueUint);
		break;
	case 63:
		*(multiNode->GetNode()->CPPmultinode63) = multimapUnion->CPPmultimap63->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode63), KeyInt, ValueLonglong);
		break;
	case 64:
		*(multiNode->GetNode()->CPPmultinode64) = multimapUnion->CPPmultimap64->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode64), KeyInt, ValueUlonglong);
		break;
	case 65:
		*(multiNode->GetNode()->CPPmultinode65) = multimapUnion->CPPmultimap65->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode65), KeyInt, ValueFloat);
		break;
	case 66:
		*(multiNode->GetNode()->CPPmultinode66) = multimapUnion->CPPmultimap66->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode66), KeyInt, ValueDouble);
		break;
	case 67:
		*(multiNode->GetNode()->CPPmultinode67) = multimapUnion->CPPmultimap67->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode67), KeyInt, ValueWchar);
		break;
	case 68:
		*(multiNode->GetNode()->CPPmultinode68) = multimapUnion->CPPmultimap68->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode68), KeyInt, ValueBool);
		break;
	case 69:
		*(multiNode->GetNode()->CPPmultinode69) = multimapUnion->CPPmultimap69->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode69), KeyInt, ValueWstring);
		break;
	case 70:
		*(multiNode->GetNode()->CPPmultinode70) = multimapUnion->CPPmultimap70->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode70), KeyInt, Value__Int);
		break;
	case 71:
		*(multiNode->GetNode()->CPPmultinode71) = multimapUnion->CPPmultimap71->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode71), KeyUint, ValueUchar);
		break;
	case 72:
		*(multiNode->GetNode()->CPPmultinode72) = multimapUnion->CPPmultimap72->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode72), KeyUint, ValueChar);
		break;
	case 73:
		*(multiNode->GetNode()->CPPmultinode73) = multimapUnion->CPPmultimap73->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode73), KeyUint, ValueShort);
		break;
	case 74:
		*(multiNode->GetNode()->CPPmultinode74) = multimapUnion->CPPmultimap74->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode74), KeyUint, ValueUshort);
		break;
	case 75:
		*(multiNode->GetNode()->CPPmultinode75) = multimapUnion->CPPmultimap75->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode75), KeyUint, ValueInt);
		break;
	case 76:
		*(multiNode->GetNode()->CPPmultinode76) = multimapUnion->CPPmultimap76->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode76), KeyUint, ValueUint);
		break;
	case 77:
		*(multiNode->GetNode()->CPPmultinode77) = multimapUnion->CPPmultimap77->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode77), KeyUint, ValueLonglong);
		break;
	case 78:
		*(multiNode->GetNode()->CPPmultinode78) = multimapUnion->CPPmultimap78->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode78), KeyUint, ValueUlonglong);
		break;
	case 79:
		*(multiNode->GetNode()->CPPmultinode79) = multimapUnion->CPPmultimap79->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode79), KeyUint, ValueFloat);
		break;
	case 80:
		*(multiNode->GetNode()->CPPmultinode80) = multimapUnion->CPPmultimap80->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode80), KeyUint, ValueDouble);
		break;
	case 81:
		*(multiNode->GetNode()->CPPmultinode81) = multimapUnion->CPPmultimap81->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode81), KeyUint, ValueWchar);
		break;
	case 82:
		*(multiNode->GetNode()->CPPmultinode82) = multimapUnion->CPPmultimap82->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode82), KeyUint, ValueBool);
		break;
	case 83:
		*(multiNode->GetNode()->CPPmultinode83) = multimapUnion->CPPmultimap83->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode83), KeyUint, ValueWstring);
		break;
	case 84:
		*(multiNode->GetNode()->CPPmultinode84) = multimapUnion->CPPmultimap84->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode84), KeyUint, Value__Int);
		break;
	case 85:
		*(multiNode->GetNode()->CPPmultinode85) = multimapUnion->CPPmultimap85->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode85), KeyLonglong, ValueUchar);
		break;
	case 86:
		*(multiNode->GetNode()->CPPmultinode86) = multimapUnion->CPPmultimap86->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode86), KeyLonglong, ValueChar);
		break;
	case 87:
		*(multiNode->GetNode()->CPPmultinode87) = multimapUnion->CPPmultimap87->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode87), KeyLonglong, ValueShort);
		break;
	case 88:
		*(multiNode->GetNode()->CPPmultinode88) = multimapUnion->CPPmultimap88->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode88), KeyLonglong, ValueUshort);
		break;
	case 89:
		*(multiNode->GetNode()->CPPmultinode89) = multimapUnion->CPPmultimap89->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode89), KeyLonglong, ValueInt);
		break;
	case 90:
		*(multiNode->GetNode()->CPPmultinode90) = multimapUnion->CPPmultimap90->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode90), KeyLonglong, ValueUint);
		break;
	case 91:
		*(multiNode->GetNode()->CPPmultinode91) = multimapUnion->CPPmultimap91->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode91), KeyLonglong, ValueLonglong);
		break;
	case 92:
		*(multiNode->GetNode()->CPPmultinode92) = multimapUnion->CPPmultimap92->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode92), KeyLonglong, ValueUlonglong);
		break;
	case 93:
		*(multiNode->GetNode()->CPPmultinode93) = multimapUnion->CPPmultimap93->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode93), KeyLonglong, ValueFloat);
		break;
	case 94:
		*(multiNode->GetNode()->CPPmultinode94) = multimapUnion->CPPmultimap94->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode94), KeyLonglong, ValueDouble);
		break;
	case 95:
		*(multiNode->GetNode()->CPPmultinode95) = multimapUnion->CPPmultimap95->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode95), KeyLonglong, ValueWchar);
		break;
	case 96:
		*(multiNode->GetNode()->CPPmultinode96) = multimapUnion->CPPmultimap96->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode96), KeyLonglong, ValueBool);
		break;
	case 97:
		*(multiNode->GetNode()->CPPmultinode97) = multimapUnion->CPPmultimap97->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode97), KeyLonglong, ValueWstring);
		break;
	case 98:
		*(multiNode->GetNode()->CPPmultinode98) = multimapUnion->CPPmultimap98->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode98), KeyLonglong, Value__Int);
		break;
	case 99:
		*(multiNode->GetNode()->CPPmultinode99) = multimapUnion->CPPmultimap99->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode99), KeyUlonglong, ValueUchar);
		break;
	case 100:
		*(multiNode->GetNode()->CPPmultinode100) = multimapUnion->CPPmultimap100->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode100), KeyUlonglong, ValueChar);
		break;
	case 101:
		*(multiNode->GetNode()->CPPmultinode101) = multimapUnion->CPPmultimap101->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode101), KeyUlonglong, ValueShort);
		break;
	case 102:
		*(multiNode->GetNode()->CPPmultinode102) = multimapUnion->CPPmultimap102->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode102), KeyUlonglong, ValueUshort);
		break;
	case 103:
		*(multiNode->GetNode()->CPPmultinode103) = multimapUnion->CPPmultimap103->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode103), KeyUlonglong, ValueInt);
		break;
	case 104:
		*(multiNode->GetNode()->CPPmultinode104) = multimapUnion->CPPmultimap104->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode104), KeyUlonglong, ValueUint);
		break;
	case 105:
		*(multiNode->GetNode()->CPPmultinode105) = multimapUnion->CPPmultimap105->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode105), KeyUlonglong, ValueLonglong);
		break;
	case 106:
		*(multiNode->GetNode()->CPPmultinode106) = multimapUnion->CPPmultimap106->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode106), KeyUlonglong, ValueUlonglong);
		break;
	case 107:
		*(multiNode->GetNode()->CPPmultinode107) = multimapUnion->CPPmultimap107->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode107), KeyUlonglong, ValueFloat);
		break;
	case 108:
		*(multiNode->GetNode()->CPPmultinode108) = multimapUnion->CPPmultimap108->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode108), KeyUlonglong, ValueDouble);
		break;
	case 109:
		*(multiNode->GetNode()->CPPmultinode109) = multimapUnion->CPPmultimap109->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode109), KeyUlonglong, ValueWchar);
		break;
	case 110:
		*(multiNode->GetNode()->CPPmultinode110) = multimapUnion->CPPmultimap110->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode110), KeyUlonglong, ValueBool);
		break;
	case 111:
		*(multiNode->GetNode()->CPPmultinode111) = multimapUnion->CPPmultimap111->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode111), KeyUlonglong, ValueWstring);
		break;
	case 112:
		*(multiNode->GetNode()->CPPmultinode112) = multimapUnion->CPPmultimap112->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode112), KeyUlonglong, Value__Int);
		break;
	case 113:
		*(multiNode->GetNode()->CPPmultinode113) = multimapUnion->CPPmultimap113->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode113), KeyFloat, ValueUchar);
		break;
	case 114:
		*(multiNode->GetNode()->CPPmultinode114) = multimapUnion->CPPmultimap114->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode114), KeyFloat, ValueChar);
		break;
	case 115:
		*(multiNode->GetNode()->CPPmultinode115) = multimapUnion->CPPmultimap115->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode115), KeyFloat, ValueShort);
		break;
	case 116:
		*(multiNode->GetNode()->CPPmultinode116) = multimapUnion->CPPmultimap116->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode116), KeyFloat, ValueUshort);
		break;
	case 117:
		*(multiNode->GetNode()->CPPmultinode117) = multimapUnion->CPPmultimap117->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode117), KeyFloat, ValueInt);
		break;
	case 118:
		*(multiNode->GetNode()->CPPmultinode118) = multimapUnion->CPPmultimap118->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode118), KeyFloat, ValueUint);
		break;
	case 119:
		*(multiNode->GetNode()->CPPmultinode119) = multimapUnion->CPPmultimap119->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode119), KeyFloat, ValueLonglong);
		break;
	case 120:
		*(multiNode->GetNode()->CPPmultinode120) = multimapUnion->CPPmultimap120->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode120), KeyFloat, ValueUlonglong);
		break;
	case 121:
		*(multiNode->GetNode()->CPPmultinode121) = multimapUnion->CPPmultimap121->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode121), KeyFloat, ValueFloat);
		break;
	case 122:
		*(multiNode->GetNode()->CPPmultinode122) = multimapUnion->CPPmultimap122->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode122), KeyFloat, ValueDouble);
		break;
	case 123:
		*(multiNode->GetNode()->CPPmultinode123) = multimapUnion->CPPmultimap123->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode123), KeyFloat, ValueWchar);
		break;
	case 124:
		*(multiNode->GetNode()->CPPmultinode124) = multimapUnion->CPPmultimap124->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode124), KeyFloat, ValueBool);
		break;
	case 125:
		*(multiNode->GetNode()->CPPmultinode125) = multimapUnion->CPPmultimap125->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode125), KeyFloat, ValueWstring);
		break;
	case 126:
		*(multiNode->GetNode()->CPPmultinode126) = multimapUnion->CPPmultimap126->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode126), KeyFloat, Value__Int);
		break;
	case 127:
		*(multiNode->GetNode()->CPPmultinode127) = multimapUnion->CPPmultimap127->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode127), KeyDouble, ValueUchar);
		break;
	case 128:
		*(multiNode->GetNode()->CPPmultinode128) = multimapUnion->CPPmultimap128->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode128), KeyDouble, ValueChar);
		break;
	case 129:
		*(multiNode->GetNode()->CPPmultinode129) = multimapUnion->CPPmultimap129->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode129), KeyDouble, ValueShort);
		break;
	case 130:
		*(multiNode->GetNode()->CPPmultinode130) = multimapUnion->CPPmultimap130->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode130), KeyDouble, ValueUshort);
		break;
	case 131:
		*(multiNode->GetNode()->CPPmultinode131) = multimapUnion->CPPmultimap131->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode131), KeyDouble, ValueInt);
		break;
	case 132:
		*(multiNode->GetNode()->CPPmultinode132) = multimapUnion->CPPmultimap132->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode132), KeyDouble, ValueUint);
		break;
	case 133:
		*(multiNode->GetNode()->CPPmultinode133) = multimapUnion->CPPmultimap133->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode133), KeyDouble, ValueLonglong);
		break;
	case 134:
		*(multiNode->GetNode()->CPPmultinode134) = multimapUnion->CPPmultimap134->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode134), KeyDouble, ValueUlonglong);
		break;
	case 135:
		*(multiNode->GetNode()->CPPmultinode135) = multimapUnion->CPPmultimap135->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode135), KeyDouble, ValueFloat);
		break;
	case 136:
		*(multiNode->GetNode()->CPPmultinode136) = multimapUnion->CPPmultimap136->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode136), KeyDouble, ValueDouble);
		break;
	case 137:
		*(multiNode->GetNode()->CPPmultinode137) = multimapUnion->CPPmultimap137->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode137), KeyDouble, ValueWchar);
		break;
	case 138:
		*(multiNode->GetNode()->CPPmultinode138) = multimapUnion->CPPmultimap138->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode138), KeyDouble, ValueBool);
		break;
	case 139:
		*(multiNode->GetNode()->CPPmultinode139) = multimapUnion->CPPmultimap139->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode139), KeyDouble, ValueWstring);
		break;
	case 140:
		*(multiNode->GetNode()->CPPmultinode140) = multimapUnion->CPPmultimap140->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode140), KeyDouble, Value__Int);
		break;
	case 141:
		*(multiNode->GetNode()->CPPmultinode141) = multimapUnion->CPPmultimap141->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode141), KeyWchar, ValueUchar);
		break;
	case 142:
		*(multiNode->GetNode()->CPPmultinode142) = multimapUnion->CPPmultimap142->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode142), KeyWchar, ValueChar);
		break;
	case 143:
		*(multiNode->GetNode()->CPPmultinode143) = multimapUnion->CPPmultimap143->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode143), KeyWchar, ValueShort);
		break;
	case 144:
		*(multiNode->GetNode()->CPPmultinode144) = multimapUnion->CPPmultimap144->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode144), KeyWchar, ValueUshort);
		break;
	case 145:
		*(multiNode->GetNode()->CPPmultinode145) = multimapUnion->CPPmultimap145->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode145), KeyWchar, ValueInt);
		break;
	case 146:
		*(multiNode->GetNode()->CPPmultinode146) = multimapUnion->CPPmultimap146->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode146), KeyWchar, ValueUint);
		break;
	case 147:
		*(multiNode->GetNode()->CPPmultinode147) = multimapUnion->CPPmultimap147->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode147), KeyWchar, ValueLonglong);
		break;
	case 148:
		*(multiNode->GetNode()->CPPmultinode148) = multimapUnion->CPPmultimap148->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode148), KeyWchar, ValueUlonglong);
		break;
	case 149:
		*(multiNode->GetNode()->CPPmultinode149) = multimapUnion->CPPmultimap149->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode149), KeyWchar, ValueFloat);
		break;
	case 150:
		*(multiNode->GetNode()->CPPmultinode150) = multimapUnion->CPPmultimap150->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode150), KeyWchar, ValueDouble);
		break;
	case 151:
		*(multiNode->GetNode()->CPPmultinode151) = multimapUnion->CPPmultimap151->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode151), KeyWchar, ValueWchar);
		break;
	case 152:
		*(multiNode->GetNode()->CPPmultinode152) = multimapUnion->CPPmultimap152->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode152), KeyWchar, ValueBool);
		break;
	case 153:
		*(multiNode->GetNode()->CPPmultinode153) = multimapUnion->CPPmultimap153->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode153), KeyWchar, ValueWstring);
		break;
	case 154:
		*(multiNode->GetNode()->CPPmultinode154) = multimapUnion->CPPmultimap154->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode154), KeyWchar, Value__Int);
		break;
	case 155:
		*(multiNode->GetNode()->CPPmultinode155) = multimapUnion->CPPmultimap155->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode155), KeyBool, ValueUchar);
		break;
	case 156:
		*(multiNode->GetNode()->CPPmultinode156) = multimapUnion->CPPmultimap156->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode156), KeyBool, ValueChar);
		break;
	case 157:
		*(multiNode->GetNode()->CPPmultinode157) = multimapUnion->CPPmultimap157->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode157), KeyBool, ValueShort);
		break;
	case 158:
		*(multiNode->GetNode()->CPPmultinode158) = multimapUnion->CPPmultimap158->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode158), KeyBool, ValueUshort);
		break;
	case 159:
		*(multiNode->GetNode()->CPPmultinode159) = multimapUnion->CPPmultimap159->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode159), KeyBool, ValueInt);
		break;
	case 160:
		*(multiNode->GetNode()->CPPmultinode160) = multimapUnion->CPPmultimap160->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode160), KeyBool, ValueUint);
		break;
	case 161:
		*(multiNode->GetNode()->CPPmultinode161) = multimapUnion->CPPmultimap161->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode161), KeyBool, ValueLonglong);
		break;
	case 162:
		*(multiNode->GetNode()->CPPmultinode162) = multimapUnion->CPPmultimap162->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode162), KeyBool, ValueUlonglong);
		break;
	case 163:
		*(multiNode->GetNode()->CPPmultinode163) = multimapUnion->CPPmultimap163->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode163), KeyBool, ValueFloat);
		break;
	case 164:
		*(multiNode->GetNode()->CPPmultinode164) = multimapUnion->CPPmultimap164->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode164), KeyBool, ValueDouble);
		break;
	case 165:
		*(multiNode->GetNode()->CPPmultinode165) = multimapUnion->CPPmultimap165->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode165), KeyBool, ValueWchar);
		break;
	case 166:
		*(multiNode->GetNode()->CPPmultinode166) = multimapUnion->CPPmultimap166->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode166), KeyBool, ValueBool);
		break;
	case 167:
		*(multiNode->GetNode()->CPPmultinode167) = multimapUnion->CPPmultimap167->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode167), KeyBool, ValueWstring);
		break;
	case 168:
		*(multiNode->GetNode()->CPPmultinode168) = multimapUnion->CPPmultimap168->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode168), KeyBool, Value__Int);
		break;
	case 169:
		*(multiNode->GetNode()->CPPmultinode169) = multimapUnion->CPPmultimap169->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode169), KeyWstring, ValueUchar);
		break;
	case 170:
		*(multiNode->GetNode()->CPPmultinode170) = multimapUnion->CPPmultimap170->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode170), KeyWstring, ValueChar);
		break;
	case 171:
		*(multiNode->GetNode()->CPPmultinode171) = multimapUnion->CPPmultimap171->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode171), KeyWstring, ValueShort);
		break;
	case 172:
		*(multiNode->GetNode()->CPPmultinode172) = multimapUnion->CPPmultimap172->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode172), KeyWstring, ValueUshort);
		break;
	case 173:
		*(multiNode->GetNode()->CPPmultinode173) = multimapUnion->CPPmultimap173->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode173), KeyWstring, ValueInt);
		break;
	case 174:
		*(multiNode->GetNode()->CPPmultinode174) = multimapUnion->CPPmultimap174->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode174), KeyWstring, ValueUint);
		break;
	case 175:
		*(multiNode->GetNode()->CPPmultinode175) = multimapUnion->CPPmultimap175->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode175), KeyWstring, ValueLonglong);
		break;
	case 176:
		*(multiNode->GetNode()->CPPmultinode176) = multimapUnion->CPPmultimap176->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode176), KeyWstring, ValueUlonglong);
		break;
	case 177:
		*(multiNode->GetNode()->CPPmultinode177) = multimapUnion->CPPmultimap177->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode177), KeyWstring, ValueFloat);
		break;
	case 178:
		*(multiNode->GetNode()->CPPmultinode178) = multimapUnion->CPPmultimap178->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode178), KeyWstring, ValueDouble);
		break;
	case 179:
		*(multiNode->GetNode()->CPPmultinode179) = multimapUnion->CPPmultimap179->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode179), KeyWstring, ValueWchar);
		break;
	case 180:
		*(multiNode->GetNode()->CPPmultinode180) = multimapUnion->CPPmultimap180->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode180), KeyWstring, ValueBool);
		break;
	case 181:
		*(multiNode->GetNode()->CPPmultinode181) = multimapUnion->CPPmultimap181->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode181), KeyWstring, ValueWstring);
		break;
	case 182:
		*(multiNode->GetNode()->CPPmultinode182) = multimapUnion->CPPmultimap182->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode182), KeyWstring, Value__Int);
		break;
	case 183:
		*(multiNode->GetNode()->CPPmultinode183) = multimapUnion->CPPmultimap183->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode183), Key__Int, ValueUchar);
		break;
	case 184:
		*(multiNode->GetNode()->CPPmultinode184) = multimapUnion->CPPmultimap184->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode184), Key__Int, ValueChar);
		break;
	case 185:
		*(multiNode->GetNode()->CPPmultinode185) = multimapUnion->CPPmultimap185->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode185), Key__Int, ValueShort);
		break;
	case 186:
		*(multiNode->GetNode()->CPPmultinode186) = multimapUnion->CPPmultimap186->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode186), Key__Int, ValueUshort);
		break;
	case 187:
		*(multiNode->GetNode()->CPPmultinode187) = multimapUnion->CPPmultimap187->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode187), Key__Int, ValueInt);
		break;
	case 188:
		*(multiNode->GetNode()->CPPmultinode188) = multimapUnion->CPPmultimap188->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode188), Key__Int, ValueUint);
		break;
	case 189:
		*(multiNode->GetNode()->CPPmultinode189) = multimapUnion->CPPmultimap189->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode189), Key__Int, ValueLonglong);
		break;
	case 190:
		*(multiNode->GetNode()->CPPmultinode190) = multimapUnion->CPPmultimap190->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode190), Key__Int, ValueUlonglong);
		break;
	case 191:
		*(multiNode->GetNode()->CPPmultinode191) = multimapUnion->CPPmultimap191->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode191), Key__Int, ValueFloat);
		break;
	case 192:
		*(multiNode->GetNode()->CPPmultinode192) = multimapUnion->CPPmultimap192->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode192), Key__Int, ValueDouble);
		break;
	case 193:
		*(multiNode->GetNode()->CPPmultinode193) = multimapUnion->CPPmultimap193->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode193), Key__Int, ValueWchar);
		break;
	case 194:
		*(multiNode->GetNode()->CPPmultinode194) = multimapUnion->CPPmultimap194->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode194), Key__Int, ValueBool);
		break;
	case 195:
		*(multiNode->GetNode()->CPPmultinode195) = multimapUnion->CPPmultimap195->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode195), Key__Int, ValueWstring);
		break;
	case 196:
		*(multiNode->GetNode()->CPPmultinode196) = multimapUnion->CPPmultimap196->emplace_hint(*(_Where->GetNode()->CPPmulticonstnode196), Key__Int, Value__Int);
		break;
	}
	return multiNode->DeepCopy();
}

#define UnOrderedMultiMap_RbeginRend_CASE(NUM, RbeginRend) \
	case NUM: \
		*(RIterNode->GetNode()->CPPreversenode##NUM) = multimapUnion->CPPmultimap##NUM->rbegin(); \
		break;

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::rbegin()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
		UnOrderedMultiMap_RbeginRend_CASE(1, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(2, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(3, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(4, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(5, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(6, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(7, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(8, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(9, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(10, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(11, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(12, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(13, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(14, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(15, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(16, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(17, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(18, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(19, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(20, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(21, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(22, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(23, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(24, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(25, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(26, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(27, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(28, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(29, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(30, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(31, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(32, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(33, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(34, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(35, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(36, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(37, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(38, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(39, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(40, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(41, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(42, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(43, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(44, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(45, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(46, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(47, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(48, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(49, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(50, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(51, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(52, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(53, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(54, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(55, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(56, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(57, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(58, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(59, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(60, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(61, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(62, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(63, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(64, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(65, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(66, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(67, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(68, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(69, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(70, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(71, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(72, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(73, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(74, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(75, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(76, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(77, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(78, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(79, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(80, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(81, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(82, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(83, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(84, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(85, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(86, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(87, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(88, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(89, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(90, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(91, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(92, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(93, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(94, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(95, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(96, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(97, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(98, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(99, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(100, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(101, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(102, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(103, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(104, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(105, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(106, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(107, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(108, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(109, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(110, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(111, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(112, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(113, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(114, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(115, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(116, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(117, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(118, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(119, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(120, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(121, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(122, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(123, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(124, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(125, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(126, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(127, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(128, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(129, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(130, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(131, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(132, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(133, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(134, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(135, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(136, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(137, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(138, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(139, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(140, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(141, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(142, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(143, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(144, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(145, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(146, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(147, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(148, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(149, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(150, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(151, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(152, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(153, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(154, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(155, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(156, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(157, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(158, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(159, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(160, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(161, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(162, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(163, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(164, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(165, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(166, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(167, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(168, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(169, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(170, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(171, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(172, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(173, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(174, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(175, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(176, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(177, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(178, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(179, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(180, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(181, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(182, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(183, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(184, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(185, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(186, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(187, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(188, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(189, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(190, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(191, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(192, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(193, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(194, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(195, rbegin)
			UnOrderedMultiMap_RbeginRend_CASE(196, rbegin)
	}
	return RIterNode->DeepCopy();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::rend()
{
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
		UnOrderedMultiMap_RbeginRend_CASE(1, rend)
			UnOrderedMultiMap_RbeginRend_CASE(2, rend)
			UnOrderedMultiMap_RbeginRend_CASE(3, rend)
			UnOrderedMultiMap_RbeginRend_CASE(4, rend)
			UnOrderedMultiMap_RbeginRend_CASE(5, rend)
			UnOrderedMultiMap_RbeginRend_CASE(6, rend)
			UnOrderedMultiMap_RbeginRend_CASE(7, rend)
			UnOrderedMultiMap_RbeginRend_CASE(8, rend)
			UnOrderedMultiMap_RbeginRend_CASE(9, rend)
			UnOrderedMultiMap_RbeginRend_CASE(10, rend)
			UnOrderedMultiMap_RbeginRend_CASE(11, rend)
			UnOrderedMultiMap_RbeginRend_CASE(12, rend)
			UnOrderedMultiMap_RbeginRend_CASE(13, rend)
			UnOrderedMultiMap_RbeginRend_CASE(14, rend)
			UnOrderedMultiMap_RbeginRend_CASE(15, rend)
			UnOrderedMultiMap_RbeginRend_CASE(16, rend)
			UnOrderedMultiMap_RbeginRend_CASE(17, rend)
			UnOrderedMultiMap_RbeginRend_CASE(18, rend)
			UnOrderedMultiMap_RbeginRend_CASE(19, rend)
			UnOrderedMultiMap_RbeginRend_CASE(20, rend)
			UnOrderedMultiMap_RbeginRend_CASE(21, rend)
			UnOrderedMultiMap_RbeginRend_CASE(22, rend)
			UnOrderedMultiMap_RbeginRend_CASE(23, rend)
			UnOrderedMultiMap_RbeginRend_CASE(24, rend)
			UnOrderedMultiMap_RbeginRend_CASE(25, rend)
			UnOrderedMultiMap_RbeginRend_CASE(26, rend)
			UnOrderedMultiMap_RbeginRend_CASE(27, rend)
			UnOrderedMultiMap_RbeginRend_CASE(28, rend)
			UnOrderedMultiMap_RbeginRend_CASE(29, rend)
			UnOrderedMultiMap_RbeginRend_CASE(30, rend)
			UnOrderedMultiMap_RbeginRend_CASE(31, rend)
			UnOrderedMultiMap_RbeginRend_CASE(32, rend)
			UnOrderedMultiMap_RbeginRend_CASE(33, rend)
			UnOrderedMultiMap_RbeginRend_CASE(34, rend)
			UnOrderedMultiMap_RbeginRend_CASE(35, rend)
			UnOrderedMultiMap_RbeginRend_CASE(36, rend)
			UnOrderedMultiMap_RbeginRend_CASE(37, rend)
			UnOrderedMultiMap_RbeginRend_CASE(38, rend)
			UnOrderedMultiMap_RbeginRend_CASE(39, rend)
			UnOrderedMultiMap_RbeginRend_CASE(40, rend)
			UnOrderedMultiMap_RbeginRend_CASE(41, rend)
			UnOrderedMultiMap_RbeginRend_CASE(42, rend)
			UnOrderedMultiMap_RbeginRend_CASE(43, rend)
			UnOrderedMultiMap_RbeginRend_CASE(44, rend)
			UnOrderedMultiMap_RbeginRend_CASE(45, rend)
			UnOrderedMultiMap_RbeginRend_CASE(46, rend)
			UnOrderedMultiMap_RbeginRend_CASE(47, rend)
			UnOrderedMultiMap_RbeginRend_CASE(48, rend)
			UnOrderedMultiMap_RbeginRend_CASE(49, rend)
			UnOrderedMultiMap_RbeginRend_CASE(50, rend)
			UnOrderedMultiMap_RbeginRend_CASE(51, rend)
			UnOrderedMultiMap_RbeginRend_CASE(52, rend)
			UnOrderedMultiMap_RbeginRend_CASE(53, rend)
			UnOrderedMultiMap_RbeginRend_CASE(54, rend)
			UnOrderedMultiMap_RbeginRend_CASE(55, rend)
			UnOrderedMultiMap_RbeginRend_CASE(56, rend)
			UnOrderedMultiMap_RbeginRend_CASE(57, rend)
			UnOrderedMultiMap_RbeginRend_CASE(58, rend)
			UnOrderedMultiMap_RbeginRend_CASE(59, rend)
			UnOrderedMultiMap_RbeginRend_CASE(60, rend)
			UnOrderedMultiMap_RbeginRend_CASE(61, rend)
			UnOrderedMultiMap_RbeginRend_CASE(62, rend)
			UnOrderedMultiMap_RbeginRend_CASE(63, rend)
			UnOrderedMultiMap_RbeginRend_CASE(64, rend)
			UnOrderedMultiMap_RbeginRend_CASE(65, rend)
			UnOrderedMultiMap_RbeginRend_CASE(66, rend)
			UnOrderedMultiMap_RbeginRend_CASE(67, rend)
			UnOrderedMultiMap_RbeginRend_CASE(68, rend)
			UnOrderedMultiMap_RbeginRend_CASE(69, rend)
			UnOrderedMultiMap_RbeginRend_CASE(70, rend)
			UnOrderedMultiMap_RbeginRend_CASE(71, rend)
			UnOrderedMultiMap_RbeginRend_CASE(72, rend)
			UnOrderedMultiMap_RbeginRend_CASE(73, rend)
			UnOrderedMultiMap_RbeginRend_CASE(74, rend)
			UnOrderedMultiMap_RbeginRend_CASE(75, rend)
			UnOrderedMultiMap_RbeginRend_CASE(76, rend)
			UnOrderedMultiMap_RbeginRend_CASE(77, rend)
			UnOrderedMultiMap_RbeginRend_CASE(78, rend)
			UnOrderedMultiMap_RbeginRend_CASE(79, rend)
			UnOrderedMultiMap_RbeginRend_CASE(80, rend)
			UnOrderedMultiMap_RbeginRend_CASE(81, rend)
			UnOrderedMultiMap_RbeginRend_CASE(82, rend)
			UnOrderedMultiMap_RbeginRend_CASE(83, rend)
			UnOrderedMultiMap_RbeginRend_CASE(84, rend)
			UnOrderedMultiMap_RbeginRend_CASE(85, rend)
			UnOrderedMultiMap_RbeginRend_CASE(86, rend)
			UnOrderedMultiMap_RbeginRend_CASE(87, rend)
			UnOrderedMultiMap_RbeginRend_CASE(88, rend)
			UnOrderedMultiMap_RbeginRend_CASE(89, rend)
			UnOrderedMultiMap_RbeginRend_CASE(90, rend)
			UnOrderedMultiMap_RbeginRend_CASE(91, rend)
			UnOrderedMultiMap_RbeginRend_CASE(92, rend)
			UnOrderedMultiMap_RbeginRend_CASE(93, rend)
			UnOrderedMultiMap_RbeginRend_CASE(94, rend)
			UnOrderedMultiMap_RbeginRend_CASE(95, rend)
			UnOrderedMultiMap_RbeginRend_CASE(96, rend)
			UnOrderedMultiMap_RbeginRend_CASE(97, rend)
			UnOrderedMultiMap_RbeginRend_CASE(98, rend)
			UnOrderedMultiMap_RbeginRend_CASE(99, rend)
			UnOrderedMultiMap_RbeginRend_CASE(100, rend)
			UnOrderedMultiMap_RbeginRend_CASE(101, rend)
			UnOrderedMultiMap_RbeginRend_CASE(102, rend)
			UnOrderedMultiMap_RbeginRend_CASE(103, rend)
			UnOrderedMultiMap_RbeginRend_CASE(104, rend)
			UnOrderedMultiMap_RbeginRend_CASE(105, rend)
			UnOrderedMultiMap_RbeginRend_CASE(106, rend)
			UnOrderedMultiMap_RbeginRend_CASE(107, rend)
			UnOrderedMultiMap_RbeginRend_CASE(108, rend)
			UnOrderedMultiMap_RbeginRend_CASE(109, rend)
			UnOrderedMultiMap_RbeginRend_CASE(110, rend)
			UnOrderedMultiMap_RbeginRend_CASE(111, rend)
			UnOrderedMultiMap_RbeginRend_CASE(112, rend)
			UnOrderedMultiMap_RbeginRend_CASE(113, rend)
			UnOrderedMultiMap_RbeginRend_CASE(114, rend)
			UnOrderedMultiMap_RbeginRend_CASE(115, rend)
			UnOrderedMultiMap_RbeginRend_CASE(116, rend)
			UnOrderedMultiMap_RbeginRend_CASE(117, rend)
			UnOrderedMultiMap_RbeginRend_CASE(118, rend)
			UnOrderedMultiMap_RbeginRend_CASE(119, rend)
			UnOrderedMultiMap_RbeginRend_CASE(120, rend)
			UnOrderedMultiMap_RbeginRend_CASE(121, rend)
			UnOrderedMultiMap_RbeginRend_CASE(122, rend)
			UnOrderedMultiMap_RbeginRend_CASE(123, rend)
			UnOrderedMultiMap_RbeginRend_CASE(124, rend)
			UnOrderedMultiMap_RbeginRend_CASE(125, rend)
			UnOrderedMultiMap_RbeginRend_CASE(126, rend)
			UnOrderedMultiMap_RbeginRend_CASE(127, rend)
			UnOrderedMultiMap_RbeginRend_CASE(128, rend)
			UnOrderedMultiMap_RbeginRend_CASE(129, rend)
			UnOrderedMultiMap_RbeginRend_CASE(130, rend)
			UnOrderedMultiMap_RbeginRend_CASE(131, rend)
			UnOrderedMultiMap_RbeginRend_CASE(132, rend)
			UnOrderedMultiMap_RbeginRend_CASE(133, rend)
			UnOrderedMultiMap_RbeginRend_CASE(134, rend)
			UnOrderedMultiMap_RbeginRend_CASE(135, rend)
			UnOrderedMultiMap_RbeginRend_CASE(136, rend)
			UnOrderedMultiMap_RbeginRend_CASE(137, rend)
			UnOrderedMultiMap_RbeginRend_CASE(138, rend)
			UnOrderedMultiMap_RbeginRend_CASE(139, rend)
			UnOrderedMultiMap_RbeginRend_CASE(140, rend)
			UnOrderedMultiMap_RbeginRend_CASE(141, rend)
			UnOrderedMultiMap_RbeginRend_CASE(142, rend)
			UnOrderedMultiMap_RbeginRend_CASE(143, rend)
			UnOrderedMultiMap_RbeginRend_CASE(144, rend)
			UnOrderedMultiMap_RbeginRend_CASE(145, rend)
			UnOrderedMultiMap_RbeginRend_CASE(146, rend)
			UnOrderedMultiMap_RbeginRend_CASE(147, rend)
			UnOrderedMultiMap_RbeginRend_CASE(148, rend)
			UnOrderedMultiMap_RbeginRend_CASE(149, rend)
			UnOrderedMultiMap_RbeginRend_CASE(150, rend)
			UnOrderedMultiMap_RbeginRend_CASE(151, rend)
			UnOrderedMultiMap_RbeginRend_CASE(152, rend)
			UnOrderedMultiMap_RbeginRend_CASE(153, rend)
			UnOrderedMultiMap_RbeginRend_CASE(154, rend)
			UnOrderedMultiMap_RbeginRend_CASE(155, rend)
			UnOrderedMultiMap_RbeginRend_CASE(156, rend)
			UnOrderedMultiMap_RbeginRend_CASE(157, rend)
			UnOrderedMultiMap_RbeginRend_CASE(158, rend)
			UnOrderedMultiMap_RbeginRend_CASE(159, rend)
			UnOrderedMultiMap_RbeginRend_CASE(160, rend)
			UnOrderedMultiMap_RbeginRend_CASE(161, rend)
			UnOrderedMultiMap_RbeginRend_CASE(162, rend)
			UnOrderedMultiMap_RbeginRend_CASE(163, rend)
			UnOrderedMultiMap_RbeginRend_CASE(164, rend)
			UnOrderedMultiMap_RbeginRend_CASE(165, rend)
			UnOrderedMultiMap_RbeginRend_CASE(166, rend)
			UnOrderedMultiMap_RbeginRend_CASE(167, rend)
			UnOrderedMultiMap_RbeginRend_CASE(168, rend)
			UnOrderedMultiMap_RbeginRend_CASE(169, rend)
			UnOrderedMultiMap_RbeginRend_CASE(170, rend)
			UnOrderedMultiMap_RbeginRend_CASE(171, rend)
			UnOrderedMultiMap_RbeginRend_CASE(172, rend)
			UnOrderedMultiMap_RbeginRend_CASE(173, rend)
			UnOrderedMultiMap_RbeginRend_CASE(174, rend)
			UnOrderedMultiMap_RbeginRend_CASE(175, rend)
			UnOrderedMultiMap_RbeginRend_CASE(176, rend)
			UnOrderedMultiMap_RbeginRend_CASE(177, rend)
			UnOrderedMultiMap_RbeginRend_CASE(178, rend)
			UnOrderedMultiMap_RbeginRend_CASE(179, rend)
			UnOrderedMultiMap_RbeginRend_CASE(180, rend)
			UnOrderedMultiMap_RbeginRend_CASE(181, rend)
			UnOrderedMultiMap_RbeginRend_CASE(182, rend)
			UnOrderedMultiMap_RbeginRend_CASE(183, rend)
			UnOrderedMultiMap_RbeginRend_CASE(184, rend)
			UnOrderedMultiMap_RbeginRend_CASE(185, rend)
			UnOrderedMultiMap_RbeginRend_CASE(186, rend)
			UnOrderedMultiMap_RbeginRend_CASE(187, rend)
			UnOrderedMultiMap_RbeginRend_CASE(188, rend)
			UnOrderedMultiMap_RbeginRend_CASE(189, rend)
			UnOrderedMultiMap_RbeginRend_CASE(190, rend)
			UnOrderedMultiMap_RbeginRend_CASE(191, rend)
			UnOrderedMultiMap_RbeginRend_CASE(192, rend)
			UnOrderedMultiMap_RbeginRend_CASE(193, rend)
			UnOrderedMultiMap_RbeginRend_CASE(194, rend)
			UnOrderedMultiMap_RbeginRend_CASE(195, rend)
			UnOrderedMultiMap_RbeginRend_CASE(196, rend)
	}
	return RIterNode;
}

#define UnOrderedMultiMap_CrbeginCrend_CASE(NUM, CrbeginCrend) \
	case NUM: \
		*(temp->GetNode()->CPPcreversenode##NUM) = multimapUnion->CPPmultimap##NUM->CrbeginCrend(); \
		break;

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::crbegin()
{
	CShorpUnOrderedCReverseNode<Key, Value>^ temp = gcnew CShorpUnOrderedCReverseNode<Key, Value>();
	if (gIntKeyClassDictionary)
		temp->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	if (gValueClassDictionary)
		temp->SetValueClassDictionary(gValueClassDictionary);
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
		UnOrderedMultiMap_CrbeginCrend_CASE(1, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(2, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(3, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(4, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(5, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(6, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(7, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(8, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(9, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(10, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(11, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(12, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(13, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(14, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(15, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(16, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(17, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(18, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(19, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(20, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(21, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(22, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(23, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(24, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(25, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(26, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(27, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(28, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(29, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(30, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(31, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(32, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(33, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(34, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(35, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(36, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(37, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(38, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(39, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(40, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(41, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(42, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(43, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(44, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(45, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(46, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(47, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(48, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(49, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(50, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(51, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(52, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(53, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(54, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(55, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(56, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(57, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(58, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(59, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(60, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(61, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(62, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(63, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(64, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(65, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(66, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(67, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(68, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(69, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(70, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(71, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(72, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(73, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(74, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(75, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(76, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(77, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(78, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(79, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(80, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(81, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(82, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(83, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(84, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(85, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(86, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(87, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(88, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(89, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(90, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(91, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(92, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(93, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(94, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(95, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(96, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(97, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(98, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(99, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(100, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(101, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(102, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(103, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(104, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(105, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(106, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(107, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(108, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(109, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(110, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(111, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(112, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(113, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(114, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(115, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(116, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(117, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(118, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(119, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(120, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(121, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(122, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(123, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(124, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(125, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(126, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(127, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(128, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(129, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(130, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(131, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(132, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(133, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(134, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(135, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(136, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(137, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(138, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(139, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(140, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(141, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(142, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(143, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(144, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(145, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(146, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(147, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(148, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(149, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(150, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(151, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(152, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(153, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(154, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(155, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(156, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(157, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(158, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(159, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(160, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(161, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(162, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(163, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(164, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(165, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(166, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(167, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(168, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(169, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(170, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(171, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(172, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(173, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(174, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(175, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(176, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(177, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(178, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(179, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(180, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(181, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(182, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(183, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(184, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(185, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(186, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(187, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(188, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(189, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(190, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(191, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(192, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(193, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(194, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(195, crbegin)
		UnOrderedMultiMap_CrbeginCrend_CASE(196, crbegin)
	}
	return temp;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::crend()
{
	CShorpUnOrderedCReverseNode<Key, Value>^ temp = gcnew CShorpUnOrderedCReverseNode<Key, Value>();
	if (gIntKeyClassDictionary)
		temp->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	if (gValueClassDictionary)
		temp->SetValueClassDictionary(gValueClassDictionary);
	switch (nKeyValueType)
	{
	case 0: default:
		return nullptr;
		UnOrderedMultiMap_CrbeginCrend_CASE(1, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(2, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(3, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(4, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(5, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(6, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(7, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(8, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(9, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(10, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(11, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(12, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(13, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(14, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(15, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(16, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(17, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(18, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(19, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(20, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(21, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(22, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(23, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(24, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(25, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(26, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(27, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(28, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(29, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(30, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(31, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(32, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(33, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(34, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(35, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(36, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(37, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(38, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(39, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(40, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(41, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(42, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(43, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(44, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(45, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(46, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(47, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(48, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(49, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(50, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(51, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(52, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(53, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(54, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(55, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(56, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(57, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(58, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(59, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(60, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(61, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(62, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(63, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(64, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(65, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(66, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(67, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(68, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(69, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(70, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(71, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(72, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(73, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(74, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(75, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(76, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(77, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(78, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(79, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(80, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(81, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(82, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(83, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(84, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(85, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(86, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(87, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(88, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(89, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(90, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(91, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(92, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(93, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(94, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(95, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(96, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(97, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(98, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(99, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(100, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(101, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(102, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(103, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(104, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(105, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(106, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(107, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(108, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(109, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(110, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(111, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(112, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(113, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(114, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(115, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(116, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(117, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(118, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(119, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(120, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(121, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(122, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(123, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(124, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(125, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(126, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(127, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(128, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(129, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(130, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(131, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(132, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(133, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(134, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(135, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(136, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(137, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(138, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(139, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(140, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(141, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(142, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(143, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(144, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(145, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(146, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(147, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(148, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(149, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(150, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(151, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(152, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(153, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(154, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(155, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(156, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(157, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(158, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(159, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(160, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(161, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(162, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(163, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(164, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(165, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(166, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(167, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(168, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(169, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(170, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(171, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(172, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(173, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(174, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(175, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(176, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(177, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(178, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(179, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(180, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(181, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(182, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(183, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(184, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(185, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(186, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(187, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(188, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(189, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(190, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(191, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(192, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(193, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(194, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(195, crend)
		UnOrderedMultiMap_CrbeginCrend_CASE(196, crend)
	}
	return temp;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiNode<Key, Value>::SetValue(Value value)
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (nKeyValueType == 0 || nKeyValueType > 196)return;
	if (isInitialized == 0) return;
	if (Object::ReferenceEquals(value, nullptr)) return;
	Type^ valueType = Value::typeid;

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
	}
	else if (valueType->IsInterface)
	{
	}
	else if (valueType->IsEnum)
	{
	}
	else
	{
		return;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		multiNodeUnion->CPPmultinode1->GetValue() = ValueUchar;
		return;
	case 2:
		multiNodeUnion->CPPmultinode2->GetValue() = ValueChar;
		return;
	case 3:
		multiNodeUnion->CPPmultinode3->GetValue() = ValueShort;
		return;
	case 4:
		multiNodeUnion->CPPmultinode4->GetValue() = ValueUshort;
		return;
	case 5:
		multiNodeUnion->CPPmultinode5->GetValue() = ValueInt;
		return;
	case 6:
		multiNodeUnion->CPPmultinode6->GetValue() = ValueUint;
		return;
	case 7:
		multiNodeUnion->CPPmultinode7->GetValue() = ValueLonglong;
		return;
	case 8:
		multiNodeUnion->CPPmultinode8->GetValue() = ValueUlonglong;
		return;
	case 9:
		multiNodeUnion->CPPmultinode9->GetValue() = ValueFloat;
		return;
	case 10:
		multiNodeUnion->CPPmultinode10->GetValue() = ValueDouble;
		return;
	case 11:
		multiNodeUnion->CPPmultinode11->GetValue() = ValueWchar;
		return;
	case 12:
		multiNodeUnion->CPPmultinode12->GetValue() = ValueBool;
		return;
	case 13:
		multiNodeUnion->CPPmultinode13->GetValue() = ValueWstring;
		return;
	case 14:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode14->GetValue()] = value;
		return;
	case 15:
		multiNodeUnion->CPPmultinode15->GetValue() = ValueUchar;
		return;
	case 16:
		multiNodeUnion->CPPmultinode16->GetValue() = ValueChar;
		return;
	case 17:
		multiNodeUnion->CPPmultinode17->GetValue() = ValueShort;
		return;
	case 18:
		multiNodeUnion->CPPmultinode18->GetValue() = ValueUshort;
		return;
	case 19:
		multiNodeUnion->CPPmultinode19->GetValue() = ValueInt;
		return;
	case 20:
		multiNodeUnion->CPPmultinode20->GetValue() = ValueUint;
		return;
	case 21:
		multiNodeUnion->CPPmultinode21->GetValue() = ValueLonglong;
		return;
	case 22:
		multiNodeUnion->CPPmultinode22->GetValue() = ValueUlonglong;
		return;
	case 23:
		multiNodeUnion->CPPmultinode23->GetValue() = ValueFloat;
		return;
	case 24:
		multiNodeUnion->CPPmultinode24->GetValue() = ValueDouble;
		return;
	case 25:
		multiNodeUnion->CPPmultinode25->GetValue() = ValueWchar;
		return;
	case 26:
		multiNodeUnion->CPPmultinode26->GetValue() = ValueBool;
		return;
	case 27:
		multiNodeUnion->CPPmultinode27->GetValue() = ValueWstring;
		return;
	case 28:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode28->GetValue()] = value;
		return;
	case 29:
		multiNodeUnion->CPPmultinode29->GetValue() = ValueUchar;
		return;
	case 30:
		multiNodeUnion->CPPmultinode30->GetValue() = ValueChar;
		return;
	case 31:
		multiNodeUnion->CPPmultinode31->GetValue() = ValueShort;
		return;
	case 32:
		multiNodeUnion->CPPmultinode32->GetValue() = ValueUshort;
		return;
	case 33:
		multiNodeUnion->CPPmultinode33->GetValue() = ValueInt;
		return;
	case 34:
		multiNodeUnion->CPPmultinode34->GetValue() = ValueUint;
		return;
	case 35:
		multiNodeUnion->CPPmultinode35->GetValue() = ValueLonglong;
		return;
	case 36:
		multiNodeUnion->CPPmultinode36->GetValue() = ValueUlonglong;
		return;
	case 37:
		multiNodeUnion->CPPmultinode37->GetValue() = ValueFloat;
		return;
	case 38:
		multiNodeUnion->CPPmultinode38->GetValue() = ValueDouble;
		return;
	case 39:
		multiNodeUnion->CPPmultinode39->GetValue() = ValueWchar;
		return;
	case 40:
		multiNodeUnion->CPPmultinode40->GetValue() = ValueBool;
		return;
	case 41:
		multiNodeUnion->CPPmultinode41->GetValue() = ValueWstring;
		return;
	case 42:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode42->GetValue()] = value;
		return;
	case 43:
		multiNodeUnion->CPPmultinode43->GetValue() = ValueUchar;
		return;
	case 44:
		multiNodeUnion->CPPmultinode44->GetValue() = ValueChar;
		return;
	case 45:
		multiNodeUnion->CPPmultinode45->GetValue() = ValueShort;
		return;
	case 46:
		multiNodeUnion->CPPmultinode46->GetValue() = ValueUshort;
		return;
	case 47:
		multiNodeUnion->CPPmultinode47->GetValue() = ValueInt;
		return;
	case 48:
		multiNodeUnion->CPPmultinode48->GetValue() = ValueUint;
		return;
	case 49:
		multiNodeUnion->CPPmultinode49->GetValue() = ValueLonglong;
		return;
	case 50:
		multiNodeUnion->CPPmultinode50->GetValue() = ValueUlonglong;
		return;
	case 51:
		multiNodeUnion->CPPmultinode51->GetValue() = ValueFloat;
		return;
	case 52:
		multiNodeUnion->CPPmultinode52->GetValue() = ValueDouble;
		return;
	case 53:
		multiNodeUnion->CPPmultinode53->GetValue() = ValueWchar;
		return;
	case 54:
		multiNodeUnion->CPPmultinode54->GetValue() = ValueBool;
		return;
	case 55:
		multiNodeUnion->CPPmultinode55->GetValue() = ValueWstring;
		return;
	case 56:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode56->GetValue()] = value;
		return;
	case 57:
		multiNodeUnion->CPPmultinode57->GetValue() = ValueUchar;
		return;
	case 58:
		multiNodeUnion->CPPmultinode58->GetValue() = ValueChar;
		return;
	case 59:
		multiNodeUnion->CPPmultinode59->GetValue() = ValueShort;
		return;
	case 60:
		multiNodeUnion->CPPmultinode60->GetValue() = ValueUshort;
		return;
	case 61:
		multiNodeUnion->CPPmultinode61->GetValue() = ValueInt;
		return;
	case 62:
		multiNodeUnion->CPPmultinode62->GetValue() = ValueUint;
		return;
	case 63:
		multiNodeUnion->CPPmultinode63->GetValue() = ValueLonglong;
		return;
	case 64:
		multiNodeUnion->CPPmultinode64->GetValue() = ValueUlonglong;
		return;
	case 65:
		multiNodeUnion->CPPmultinode65->GetValue() = ValueFloat;
		return;
	case 66:
		multiNodeUnion->CPPmultinode66->GetValue() = ValueDouble;
		return;
	case 67:
		multiNodeUnion->CPPmultinode67->GetValue() = ValueWchar;
		return;
	case 68:
		multiNodeUnion->CPPmultinode68->GetValue() = ValueBool;
		return;
	case 69:
		multiNodeUnion->CPPmultinode69->GetValue() = ValueWstring;
		return;
	case 70:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode70->GetValue()] = value;
		return;
	case 71:
		multiNodeUnion->CPPmultinode71->GetValue() = ValueUchar;
		return;
	case 72:
		multiNodeUnion->CPPmultinode72->GetValue() = ValueChar;
		return;
	case 73:
		multiNodeUnion->CPPmultinode73->GetValue() = ValueShort;
		return;
	case 74:
		multiNodeUnion->CPPmultinode74->GetValue() = ValueUshort;
		return;
	case 75:
		multiNodeUnion->CPPmultinode75->GetValue() = ValueInt;
		return;
	case 76:
		multiNodeUnion->CPPmultinode76->GetValue() = ValueUint;
		return;
	case 77:
		multiNodeUnion->CPPmultinode77->GetValue() = ValueLonglong;
		return;
	case 78:
		multiNodeUnion->CPPmultinode78->GetValue() = ValueUlonglong;
		return;
	case 79:
		multiNodeUnion->CPPmultinode79->GetValue() = ValueFloat;
		return;
	case 80:
		multiNodeUnion->CPPmultinode80->GetValue() = ValueDouble;
		return;
	case 81:
		multiNodeUnion->CPPmultinode81->GetValue() = ValueWchar;
		return;
	case 82:
		multiNodeUnion->CPPmultinode82->GetValue() = ValueBool;
		return;
	case 83:
		multiNodeUnion->CPPmultinode83->GetValue() = ValueWstring;
		return;
	case 84:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode84->GetValue()] = value;
		return;
	case 85:
		multiNodeUnion->CPPmultinode85->GetValue() = ValueUchar;
		return;
	case 86:
		multiNodeUnion->CPPmultinode86->GetValue() = ValueChar;
		return;
	case 87:
		multiNodeUnion->CPPmultinode87->GetValue() = ValueShort;
		return;
	case 88:
		multiNodeUnion->CPPmultinode88->GetValue() = ValueUshort;
		return;
	case 89:
		multiNodeUnion->CPPmultinode89->GetValue() = ValueInt;
		return;
	case 90:
		multiNodeUnion->CPPmultinode90->GetValue() = ValueUint;
		return;
	case 91:
		multiNodeUnion->CPPmultinode91->GetValue() = ValueLonglong;
		return;
	case 92:
		multiNodeUnion->CPPmultinode92->GetValue() = ValueUlonglong;
		return;
	case 93:
		multiNodeUnion->CPPmultinode93->GetValue() = ValueFloat;
		return;
	case 94:
		multiNodeUnion->CPPmultinode94->GetValue() = ValueDouble;
		return;
	case 95:
		multiNodeUnion->CPPmultinode95->GetValue() = ValueWchar;
		return;
	case 96:
		multiNodeUnion->CPPmultinode96->GetValue() = ValueBool;
		return;
	case 97:
		multiNodeUnion->CPPmultinode97->GetValue() = ValueWstring;
		return;
	case 98:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode98->GetValue()] = value;
		return;
	case 99:
		multiNodeUnion->CPPmultinode99->GetValue() = ValueUchar;
		return;
	case 100:
		multiNodeUnion->CPPmultinode100->GetValue() = ValueChar;
		return;
	case 101:
		multiNodeUnion->CPPmultinode101->GetValue() = ValueShort;
		return;
	case 102:
		multiNodeUnion->CPPmultinode102->GetValue() = ValueUshort;
		return;
	case 103:
		multiNodeUnion->CPPmultinode103->GetValue() = ValueInt;
		return;
	case 104:
		multiNodeUnion->CPPmultinode104->GetValue() = ValueUint;
		return;
	case 105:
		multiNodeUnion->CPPmultinode105->GetValue() = ValueLonglong;
		return;
	case 106:
		multiNodeUnion->CPPmultinode106->GetValue() = ValueUlonglong;
		return;
	case 107:
		multiNodeUnion->CPPmultinode107->GetValue() = ValueFloat;
		return;
	case 108:
		multiNodeUnion->CPPmultinode108->GetValue() = ValueDouble;
		return;
	case 109:
		multiNodeUnion->CPPmultinode109->GetValue() = ValueWchar;
		return;
	case 110:
		multiNodeUnion->CPPmultinode110->GetValue() = ValueBool;
		return;
	case 111:
		multiNodeUnion->CPPmultinode111->GetValue() = ValueWstring;
		return;
	case 112:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode112->GetValue()] = value;
		return;
	case 113:
		multiNodeUnion->CPPmultinode113->GetValue() = ValueUchar;
		return;
	case 114:
		multiNodeUnion->CPPmultinode114->GetValue() = ValueChar;
		return;
	case 115:
		multiNodeUnion->CPPmultinode115->GetValue() = ValueShort;
		return;
	case 116:
		multiNodeUnion->CPPmultinode116->GetValue() = ValueUshort;
		return;
	case 117:
		multiNodeUnion->CPPmultinode117->GetValue() = ValueInt;
		return;
	case 118:
		multiNodeUnion->CPPmultinode118->GetValue() = ValueUint;
		return;
	case 119:
		multiNodeUnion->CPPmultinode119->GetValue() = ValueLonglong;
		return;
	case 120:
		multiNodeUnion->CPPmultinode120->GetValue() = ValueUlonglong;
		return;
	case 121:
		multiNodeUnion->CPPmultinode121->GetValue() = ValueFloat;
		return;
	case 122:
		multiNodeUnion->CPPmultinode122->GetValue() = ValueDouble;
		return;
	case 123:
		multiNodeUnion->CPPmultinode123->GetValue() = ValueWchar;
		return;
	case 124:
		multiNodeUnion->CPPmultinode124->GetValue() = ValueBool;
		return;
	case 125:
		multiNodeUnion->CPPmultinode125->GetValue() = ValueWstring;
		return;
	case 126:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode126->GetValue()] = value;
		return;
	case 127:
		multiNodeUnion->CPPmultinode127->GetValue() = ValueUchar;
		return;
	case 128:
		multiNodeUnion->CPPmultinode128->GetValue() = ValueChar;
		return;
	case 129:
		multiNodeUnion->CPPmultinode129->GetValue() = ValueShort;
		return;
	case 130:
		multiNodeUnion->CPPmultinode130->GetValue() = ValueUshort;
		return;
	case 131:
		multiNodeUnion->CPPmultinode131->GetValue() = ValueInt;
		return;
	case 132:
		multiNodeUnion->CPPmultinode132->GetValue() = ValueUint;
		return;
	case 133:
		multiNodeUnion->CPPmultinode133->GetValue() = ValueLonglong;
		return;
	case 134:
		multiNodeUnion->CPPmultinode134->GetValue() = ValueUlonglong;
		return;
	case 135:
		multiNodeUnion->CPPmultinode135->GetValue() = ValueFloat;
		return;
	case 136:
		multiNodeUnion->CPPmultinode136->GetValue() = ValueDouble;
		return;
	case 137:
		multiNodeUnion->CPPmultinode137->GetValue() = ValueWchar;
		return;
	case 138:
		multiNodeUnion->CPPmultinode138->GetValue() = ValueBool;
		return;
	case 139:
		multiNodeUnion->CPPmultinode139->GetValue() = ValueWstring;
		return;
	case 140:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode140->GetValue()] = value;
		return;
	case 141:
		multiNodeUnion->CPPmultinode141->GetValue() = ValueUchar;
		return;
	case 142:
		multiNodeUnion->CPPmultinode142->GetValue() = ValueChar;
		return;
	case 143:
		multiNodeUnion->CPPmultinode143->GetValue() = ValueShort;
		return;
	case 144:
		multiNodeUnion->CPPmultinode144->GetValue() = ValueUshort;
		return;
	case 145:
		multiNodeUnion->CPPmultinode145->GetValue() = ValueInt;
		return;
	case 146:
		multiNodeUnion->CPPmultinode146->GetValue() = ValueUint;
		return;
	case 147:
		multiNodeUnion->CPPmultinode147->GetValue() = ValueLonglong;
		return;
	case 148:
		multiNodeUnion->CPPmultinode148->GetValue() = ValueUlonglong;
		return;
	case 149:
		multiNodeUnion->CPPmultinode149->GetValue() = ValueFloat;
		return;
	case 150:
		multiNodeUnion->CPPmultinode150->GetValue() = ValueDouble;
		return;
	case 151:
		multiNodeUnion->CPPmultinode151->GetValue() = ValueWchar;
		return;
	case 152:
		multiNodeUnion->CPPmultinode152->GetValue() = ValueBool;
		return;
	case 153:
		multiNodeUnion->CPPmultinode153->GetValue() = ValueWstring;
		return;
	case 154:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode154->GetValue()] = value;
		return;
	case 155:
		multiNodeUnion->CPPmultinode155->GetValue() = ValueUchar;
		return;
	case 156:
		multiNodeUnion->CPPmultinode156->GetValue() = ValueChar;
		return;
	case 157:
		multiNodeUnion->CPPmultinode157->GetValue() = ValueShort;
		return;
	case 158:
		multiNodeUnion->CPPmultinode158->GetValue() = ValueUshort;
		return;
	case 159:
		multiNodeUnion->CPPmultinode159->GetValue() = ValueInt;
		return;
	case 160:
		multiNodeUnion->CPPmultinode160->GetValue() = ValueUint;
		return;
	case 161:
		multiNodeUnion->CPPmultinode161->GetValue() = ValueLonglong;
		return;
	case 162:
		multiNodeUnion->CPPmultinode162->GetValue() = ValueUlonglong;
		return;
	case 163:
		multiNodeUnion->CPPmultinode163->GetValue() = ValueFloat;
		return;
	case 164:
		multiNodeUnion->CPPmultinode164->GetValue() = ValueDouble;
		return;
	case 165:
		multiNodeUnion->CPPmultinode165->GetValue() = ValueWchar;
		return;
	case 166:
		multiNodeUnion->CPPmultinode166->GetValue() = ValueBool;
		return;
	case 167:
		multiNodeUnion->CPPmultinode167->GetValue() = ValueWstring;
		return;
	case 168:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode168->GetValue()] = value;
		return;
	case 169:
		multiNodeUnion->CPPmultinode169->GetValue() = ValueUchar;
		return;
	case 170:
		multiNodeUnion->CPPmultinode170->GetValue() = ValueChar;
		return;
	case 171:
		multiNodeUnion->CPPmultinode171->GetValue() = ValueShort;
		return;
	case 172:
		multiNodeUnion->CPPmultinode172->GetValue() = ValueUshort;
		return;
	case 173:
		multiNodeUnion->CPPmultinode173->GetValue() = ValueInt;
		return;
	case 174:
		multiNodeUnion->CPPmultinode174->GetValue() = ValueUint;
		return;
	case 175:
		multiNodeUnion->CPPmultinode175->GetValue() = ValueLonglong;
		return;
	case 176:
		multiNodeUnion->CPPmultinode176->GetValue() = ValueUlonglong;
		return;
	case 177:
		multiNodeUnion->CPPmultinode177->GetValue() = ValueFloat;
		return;
	case 178:
		multiNodeUnion->CPPmultinode178->GetValue() = ValueDouble;
		return;
	case 179:
		multiNodeUnion->CPPmultinode179->GetValue() = ValueWchar;
		return;
	case 180:
		multiNodeUnion->CPPmultinode180->GetValue() = ValueBool;
		return;
	case 181:
		multiNodeUnion->CPPmultinode181->GetValue() = ValueWstring;
		return;
	case 182:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode182->GetValue()] = value;
		return;
	case 183:
		multiNodeUnion->CPPmultinode183->GetValue() = ValueUchar;
		return;
	case 184:
		multiNodeUnion->CPPmultinode184->GetValue() = ValueChar;
		return;
	case 185:
		multiNodeUnion->CPPmultinode185->GetValue() = ValueShort;
		return;
	case 186:
		multiNodeUnion->CPPmultinode186->GetValue() = ValueUshort;
		return;
	case 187:
		multiNodeUnion->CPPmultinode187->GetValue() = ValueInt;
		return;
	case 188:
		multiNodeUnion->CPPmultinode188->GetValue() = ValueUint;
		return;
	case 189:
		multiNodeUnion->CPPmultinode189->GetValue() = ValueLonglong;
		return;
	case 190:
		multiNodeUnion->CPPmultinode190->GetValue() = ValueUlonglong;
		return;
	case 191:
		multiNodeUnion->CPPmultinode191->GetValue() = ValueFloat;
		return;
	case 192:
		multiNodeUnion->CPPmultinode192->GetValue() = ValueDouble;
		return;
	case 193:
		multiNodeUnion->CPPmultinode193->GetValue() = ValueWchar;
		return;
	case 194:
		multiNodeUnion->CPPmultinode194->GetValue() = ValueBool;
		return;
	case 195:
		multiNodeUnion->CPPmultinode195->GetValue() = ValueWstring;
		return;
	case 196:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[multiNodeUnion->CPPmultinode196->GetValue()] = value;
		return;
	}
	return;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedReverseNode<Key, Value>::SetValue(Value value)
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (nKeyValueType == 0 || nKeyValueType > 196)return;
	if (isInitialized == 0) return;
	if (Object::ReferenceEquals(value, nullptr)) return;
	Type^ valueType = Value::typeid;

	unsigned char ValueUchar = 0;
	char ValueChar = 0;
	short ValueShort = 0;
	unsigned short ValueUshort = 0;
	int ValueInt = 0;
	unsigned int ValueUint = 0;
	long long ValueLonglong = 0;
	unsigned long long ValueUlonglong = 0;
	float ValueFloat = 0.0f;
	double ValueDouble = 0;
	wchar_t ValueWchar = 0;
	bool ValueBool = false;
	std::wstring ValueWstring = L"";
	__int64 Value__Int = 0;

	if (valueType->Equals(System::Byte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUchar = static_cast<unsigned char>(safe_cast<System::Byte>(managedObject));
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueChar = static_cast<char>(safe_cast<System::SByte>(managedObject));
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueShort = static_cast<short>(safe_cast<System::Int16>(managedObject));
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUshort = static_cast<unsigned short>(safe_cast<System::UInt16>(managedObject));
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueInt = static_cast<int>(safe_cast<System::Int32>(managedObject));
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUint = static_cast<unsigned int>(safe_cast<System::UInt32>(managedObject));
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueLonglong = static_cast<long long>(safe_cast<System::Int64>(managedObject));
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueUlonglong = static_cast<unsigned long long>(safe_cast<System::UInt64>(managedObject));
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueFloat = static_cast<float>(safe_cast<System::Single>(managedObject));
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueDouble = static_cast<double>(safe_cast<System::Double>(managedObject));
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueWchar = static_cast<wchar_t>(safe_cast<System::Char>(managedObject));
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		ValueBool = static_cast<bool>(safe_cast<System::Boolean>(managedObject));
	}
	else if (valueType->Equals(System::String::typeid))
	{
		System::Object^ managedObject = safe_cast<System::Object^>(value);
		MarshalString(safe_cast<System::String^>(managedObject), ValueWstring);
	}
	else if (valueType->IsClass)
	{
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
	}
	else if (valueType->IsInterface)
	{
	}
	else if (valueType->IsEnum)
	{
	}
	else
	{
		return;
	}

	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		reverseNodeUnion->CPPreversenode1->GetValue() = ValueUchar;
		return;
	case 2:
		reverseNodeUnion->CPPreversenode2->GetValue() = ValueChar;
		return;
	case 3:
		reverseNodeUnion->CPPreversenode3->GetValue() = ValueShort;
		return;
	case 4:
		reverseNodeUnion->CPPreversenode4->GetValue() = ValueUshort;
		return;
	case 5:
		reverseNodeUnion->CPPreversenode5->GetValue() = ValueInt;
		return;
	case 6:
		reverseNodeUnion->CPPreversenode6->GetValue() = ValueUint;
		return;
	case 7:
		reverseNodeUnion->CPPreversenode7->GetValue() = ValueLonglong;
		return;
	case 8:
		reverseNodeUnion->CPPreversenode8->GetValue() = ValueUlonglong;
		return;
	case 9:
		reverseNodeUnion->CPPreversenode9->GetValue() = ValueFloat;
		return;
	case 10:
		reverseNodeUnion->CPPreversenode10->GetValue() = ValueDouble;
		return;
	case 11:
		reverseNodeUnion->CPPreversenode11->GetValue() = ValueWchar;
		return;
	case 12:
		reverseNodeUnion->CPPreversenode12->GetValue() = ValueBool;
		return;
	case 13:
		reverseNodeUnion->CPPreversenode13->GetValue() = ValueWstring;
		return;
	case 14:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode14->GetValue()] = value;
		return;
	case 15:
		reverseNodeUnion->CPPreversenode15->GetValue() = ValueUchar;
		return;
	case 16:
		reverseNodeUnion->CPPreversenode16->GetValue() = ValueChar;
		return;
	case 17:
		reverseNodeUnion->CPPreversenode17->GetValue() = ValueShort;
		return;
	case 18:
		reverseNodeUnion->CPPreversenode18->GetValue() = ValueUshort;
		return;
	case 19:
		reverseNodeUnion->CPPreversenode19->GetValue() = ValueInt;
		return;
	case 20:
		reverseNodeUnion->CPPreversenode20->GetValue() = ValueUint;
		return;
	case 21:
		reverseNodeUnion->CPPreversenode21->GetValue() = ValueLonglong;
		return;
	case 22:
		reverseNodeUnion->CPPreversenode22->GetValue() = ValueUlonglong;
		return;
	case 23:
		reverseNodeUnion->CPPreversenode23->GetValue() = ValueFloat;
		return;
	case 24:
		reverseNodeUnion->CPPreversenode24->GetValue() = ValueDouble;
		return;
	case 25:
		reverseNodeUnion->CPPreversenode25->GetValue() = ValueWchar;
		return;
	case 26:
		reverseNodeUnion->CPPreversenode26->GetValue() = ValueBool;
		return;
	case 27:
		reverseNodeUnion->CPPreversenode27->GetValue() = ValueWstring;
		return;
	case 28:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode28->GetValue()] = value;
		return;
	case 29:
		reverseNodeUnion->CPPreversenode29->GetValue() = ValueUchar;
		return;
	case 30:
		reverseNodeUnion->CPPreversenode30->GetValue() = ValueChar;
		return;
	case 31:
		reverseNodeUnion->CPPreversenode31->GetValue() = ValueShort;
		return;
	case 32:
		reverseNodeUnion->CPPreversenode32->GetValue() = ValueUshort;
		return;
	case 33:
		reverseNodeUnion->CPPreversenode33->GetValue() = ValueInt;
		return;
	case 34:
		reverseNodeUnion->CPPreversenode34->GetValue() = ValueUint;
		return;
	case 35:
		reverseNodeUnion->CPPreversenode35->GetValue() = ValueLonglong;
		return;
	case 36:
		reverseNodeUnion->CPPreversenode36->GetValue() = ValueUlonglong;
		return;
	case 37:
		reverseNodeUnion->CPPreversenode37->GetValue() = ValueFloat;
		return;
	case 38:
		reverseNodeUnion->CPPreversenode38->GetValue() = ValueDouble;
		return;
	case 39:
		reverseNodeUnion->CPPreversenode39->GetValue() = ValueWchar;
		return;
	case 40:
		reverseNodeUnion->CPPreversenode40->GetValue() = ValueBool;
		return;
	case 41:
		reverseNodeUnion->CPPreversenode41->GetValue() = ValueWstring;
		return;
	case 42:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode42->GetValue()] = value;
		return;
	case 43:
		reverseNodeUnion->CPPreversenode43->GetValue() = ValueUchar;
		return;
	case 44:
		reverseNodeUnion->CPPreversenode44->GetValue() = ValueChar;
		return;
	case 45:
		reverseNodeUnion->CPPreversenode45->GetValue() = ValueShort;
		return;
	case 46:
		reverseNodeUnion->CPPreversenode46->GetValue() = ValueUshort;
		return;
	case 47:
		reverseNodeUnion->CPPreversenode47->GetValue() = ValueInt;
		return;
	case 48:
		reverseNodeUnion->CPPreversenode48->GetValue() = ValueUint;
		return;
	case 49:
		reverseNodeUnion->CPPreversenode49->GetValue() = ValueLonglong;
		return;
	case 50:
		reverseNodeUnion->CPPreversenode50->GetValue() = ValueUlonglong;
		return;
	case 51:
		reverseNodeUnion->CPPreversenode51->GetValue() = ValueFloat;
		return;
	case 52:
		reverseNodeUnion->CPPreversenode52->GetValue() = ValueDouble;
		return;
	case 53:
		reverseNodeUnion->CPPreversenode53->GetValue() = ValueWchar;
		return;
	case 54:
		reverseNodeUnion->CPPreversenode54->GetValue() = ValueBool;
		return;
	case 55:
		reverseNodeUnion->CPPreversenode55->GetValue() = ValueWstring;
		return;
	case 56:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode56->GetValue()] = value;
		return;
	case 57:
		reverseNodeUnion->CPPreversenode57->GetValue() = ValueUchar;
		return;
	case 58:
		reverseNodeUnion->CPPreversenode58->GetValue() = ValueChar;
		return;
	case 59:
		reverseNodeUnion->CPPreversenode59->GetValue() = ValueShort;
		return;
	case 60:
		reverseNodeUnion->CPPreversenode60->GetValue() = ValueUshort;
		return;
	case 61:
		reverseNodeUnion->CPPreversenode61->GetValue() = ValueInt;
		return;
	case 62:
		reverseNodeUnion->CPPreversenode62->GetValue() = ValueUint;
		return;
	case 63:
		reverseNodeUnion->CPPreversenode63->GetValue() = ValueLonglong;
		return;
	case 64:
		reverseNodeUnion->CPPreversenode64->GetValue() = ValueUlonglong;
		return;
	case 65:
		reverseNodeUnion->CPPreversenode65->GetValue() = ValueFloat;
		return;
	case 66:
		reverseNodeUnion->CPPreversenode66->GetValue() = ValueDouble;
		return;
	case 67:
		reverseNodeUnion->CPPreversenode67->GetValue() = ValueWchar;
		return;
	case 68:
		reverseNodeUnion->CPPreversenode68->GetValue() = ValueBool;
		return;
	case 69:
		reverseNodeUnion->CPPreversenode69->GetValue() = ValueWstring;
		return;
	case 70:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode70->GetValue()] = value;
		return;
	case 71:
		reverseNodeUnion->CPPreversenode71->GetValue() = ValueUchar;
		return;
	case 72:
		reverseNodeUnion->CPPreversenode72->GetValue() = ValueChar;
		return;
	case 73:
		reverseNodeUnion->CPPreversenode73->GetValue() = ValueShort;
		return;
	case 74:
		reverseNodeUnion->CPPreversenode74->GetValue() = ValueUshort;
		return;
	case 75:
		reverseNodeUnion->CPPreversenode75->GetValue() = ValueInt;
		return;
	case 76:
		reverseNodeUnion->CPPreversenode76->GetValue() = ValueUint;
		return;
	case 77:
		reverseNodeUnion->CPPreversenode77->GetValue() = ValueLonglong;
		return;
	case 78:
		reverseNodeUnion->CPPreversenode78->GetValue() = ValueUlonglong;
		return;
	case 79:
		reverseNodeUnion->CPPreversenode79->GetValue() = ValueFloat;
		return;
	case 80:
		reverseNodeUnion->CPPreversenode80->GetValue() = ValueDouble;
		return;
	case 81:
		reverseNodeUnion->CPPreversenode81->GetValue() = ValueWchar;
		return;
	case 82:
		reverseNodeUnion->CPPreversenode82->GetValue() = ValueBool;
		return;
	case 83:
		reverseNodeUnion->CPPreversenode83->GetValue() = ValueWstring;
		return;
	case 84:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode84->GetValue()] = value;
		return;
	case 85:
		reverseNodeUnion->CPPreversenode85->GetValue() = ValueUchar;
		return;
	case 86:
		reverseNodeUnion->CPPreversenode86->GetValue() = ValueChar;
		return;
	case 87:
		reverseNodeUnion->CPPreversenode87->GetValue() = ValueShort;
		return;
	case 88:
		reverseNodeUnion->CPPreversenode88->GetValue() = ValueUshort;
		return;
	case 89:
		reverseNodeUnion->CPPreversenode89->GetValue() = ValueInt;
		return;
	case 90:
		reverseNodeUnion->CPPreversenode90->GetValue() = ValueUint;
		return;
	case 91:
		reverseNodeUnion->CPPreversenode91->GetValue() = ValueLonglong;
		return;
	case 92:
		reverseNodeUnion->CPPreversenode92->GetValue() = ValueUlonglong;
		return;
	case 93:
		reverseNodeUnion->CPPreversenode93->GetValue() = ValueFloat;
		return;
	case 94:
		reverseNodeUnion->CPPreversenode94->GetValue() = ValueDouble;
		return;
	case 95:
		reverseNodeUnion->CPPreversenode95->GetValue() = ValueWchar;
		return;
	case 96:
		reverseNodeUnion->CPPreversenode96->GetValue() = ValueBool;
		return;
	case 97:
		reverseNodeUnion->CPPreversenode97->GetValue() = ValueWstring;
		return;
	case 98:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode98->GetValue()] = value;
		return;
	case 99:
		reverseNodeUnion->CPPreversenode99->GetValue() = ValueUchar;
		return;
	case 100:
		reverseNodeUnion->CPPreversenode100->GetValue() = ValueChar;
		return;
	case 101:
		reverseNodeUnion->CPPreversenode101->GetValue() = ValueShort;
		return;
	case 102:
		reverseNodeUnion->CPPreversenode102->GetValue() = ValueUshort;
		return;
	case 103:
		reverseNodeUnion->CPPreversenode103->GetValue() = ValueInt;
		return;
	case 104:
		reverseNodeUnion->CPPreversenode104->GetValue() = ValueUint;
		return;
	case 105:
		reverseNodeUnion->CPPreversenode105->GetValue() = ValueLonglong;
		return;
	case 106:
		reverseNodeUnion->CPPreversenode106->GetValue() = ValueUlonglong;
		return;
	case 107:
		reverseNodeUnion->CPPreversenode107->GetValue() = ValueFloat;
		return;
	case 108:
		reverseNodeUnion->CPPreversenode108->GetValue() = ValueDouble;
		return;
	case 109:
		reverseNodeUnion->CPPreversenode109->GetValue() = ValueWchar;
		return;
	case 110:
		reverseNodeUnion->CPPreversenode110->GetValue() = ValueBool;
		return;
	case 111:
		reverseNodeUnion->CPPreversenode111->GetValue() = ValueWstring;
		return;
	case 112:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode112->GetValue()] = value;
		return;
	case 113:
		reverseNodeUnion->CPPreversenode113->GetValue() = ValueUchar;
		return;
	case 114:
		reverseNodeUnion->CPPreversenode114->GetValue() = ValueChar;
		return;
	case 115:
		reverseNodeUnion->CPPreversenode115->GetValue() = ValueShort;
		return;
	case 116:
		reverseNodeUnion->CPPreversenode116->GetValue() = ValueUshort;
		return;
	case 117:
		reverseNodeUnion->CPPreversenode117->GetValue() = ValueInt;
		return;
	case 118:
		reverseNodeUnion->CPPreversenode118->GetValue() = ValueUint;
		return;
	case 119:
		reverseNodeUnion->CPPreversenode119->GetValue() = ValueLonglong;
		return;
	case 120:
		reverseNodeUnion->CPPreversenode120->GetValue() = ValueUlonglong;
		return;
	case 121:
		reverseNodeUnion->CPPreversenode121->GetValue() = ValueFloat;
		return;
	case 122:
		reverseNodeUnion->CPPreversenode122->GetValue() = ValueDouble;
		return;
	case 123:
		reverseNodeUnion->CPPreversenode123->GetValue() = ValueWchar;
		return;
	case 124:
		reverseNodeUnion->CPPreversenode124->GetValue() = ValueBool;
		return;
	case 125:
		reverseNodeUnion->CPPreversenode125->GetValue() = ValueWstring;
		return;
	case 126:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode126->GetValue()] = value;
		return;
	case 127:
		reverseNodeUnion->CPPreversenode127->GetValue() = ValueUchar;
		return;
	case 128:
		reverseNodeUnion->CPPreversenode128->GetValue() = ValueChar;
		return;
	case 129:
		reverseNodeUnion->CPPreversenode129->GetValue() = ValueShort;
		return;
	case 130:
		reverseNodeUnion->CPPreversenode130->GetValue() = ValueUshort;
		return;
	case 131:
		reverseNodeUnion->CPPreversenode131->GetValue() = ValueInt;
		return;
	case 132:
		reverseNodeUnion->CPPreversenode132->GetValue() = ValueUint;
		return;
	case 133:
		reverseNodeUnion->CPPreversenode133->GetValue() = ValueLonglong;
		return;
	case 134:
		reverseNodeUnion->CPPreversenode134->GetValue() = ValueUlonglong;
		return;
	case 135:
		reverseNodeUnion->CPPreversenode135->GetValue() = ValueFloat;
		return;
	case 136:
		reverseNodeUnion->CPPreversenode136->GetValue() = ValueDouble;
		return;
	case 137:
		reverseNodeUnion->CPPreversenode137->GetValue() = ValueWchar;
		return;
	case 138:
		reverseNodeUnion->CPPreversenode138->GetValue() = ValueBool;
		return;
	case 139:
		reverseNodeUnion->CPPreversenode139->GetValue() = ValueWstring;
		return;
	case 140:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode140->GetValue()] = value;
		return;
	case 141:
		reverseNodeUnion->CPPreversenode141->GetValue() = ValueUchar;
		return;
	case 142:
		reverseNodeUnion->CPPreversenode142->GetValue() = ValueChar;
		return;
	case 143:
		reverseNodeUnion->CPPreversenode143->GetValue() = ValueShort;
		return;
	case 144:
		reverseNodeUnion->CPPreversenode144->GetValue() = ValueUshort;
		return;
	case 145:
		reverseNodeUnion->CPPreversenode145->GetValue() = ValueInt;
		return;
	case 146:
		reverseNodeUnion->CPPreversenode146->GetValue() = ValueUint;
		return;
	case 147:
		reverseNodeUnion->CPPreversenode147->GetValue() = ValueLonglong;
		return;
	case 148:
		reverseNodeUnion->CPPreversenode148->GetValue() = ValueUlonglong;
		return;
	case 149:
		reverseNodeUnion->CPPreversenode149->GetValue() = ValueFloat;
		return;
	case 150:
		reverseNodeUnion->CPPreversenode150->GetValue() = ValueDouble;
		return;
	case 151:
		reverseNodeUnion->CPPreversenode151->GetValue() = ValueWchar;
		return;
	case 152:
		reverseNodeUnion->CPPreversenode152->GetValue() = ValueBool;
		return;
	case 153:
		reverseNodeUnion->CPPreversenode153->GetValue() = ValueWstring;
		return;
	case 154:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode154->GetValue()] = value;
		return;
	case 155:
		reverseNodeUnion->CPPreversenode155->GetValue() = ValueUchar;
		return;
	case 156:
		reverseNodeUnion->CPPreversenode156->GetValue() = ValueChar;
		return;
	case 157:
		reverseNodeUnion->CPPreversenode157->GetValue() = ValueShort;
		return;
	case 158:
		reverseNodeUnion->CPPreversenode158->GetValue() = ValueUshort;
		return;
	case 159:
		reverseNodeUnion->CPPreversenode159->GetValue() = ValueInt;
		return;
	case 160:
		reverseNodeUnion->CPPreversenode160->GetValue() = ValueUint;
		return;
	case 161:
		reverseNodeUnion->CPPreversenode161->GetValue() = ValueLonglong;
		return;
	case 162:
		reverseNodeUnion->CPPreversenode162->GetValue() = ValueUlonglong;
		return;
	case 163:
		reverseNodeUnion->CPPreversenode163->GetValue() = ValueFloat;
		return;
	case 164:
		reverseNodeUnion->CPPreversenode164->GetValue() = ValueDouble;
		return;
	case 165:
		reverseNodeUnion->CPPreversenode165->GetValue() = ValueWchar;
		return;
	case 166:
		reverseNodeUnion->CPPreversenode166->GetValue() = ValueBool;
		return;
	case 167:
		reverseNodeUnion->CPPreversenode167->GetValue() = ValueWstring;
		return;
	case 168:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode168->GetValue()] = value;
		return;
	case 169:
		reverseNodeUnion->CPPreversenode169->GetValue() = ValueUchar;
		return;
	case 170:
		reverseNodeUnion->CPPreversenode170->GetValue() = ValueChar;
		return;
	case 171:
		reverseNodeUnion->CPPreversenode171->GetValue() = ValueShort;
		return;
	case 172:
		reverseNodeUnion->CPPreversenode172->GetValue() = ValueUshort;
		return;
	case 173:
		reverseNodeUnion->CPPreversenode173->GetValue() = ValueInt;
		return;
	case 174:
		reverseNodeUnion->CPPreversenode174->GetValue() = ValueUint;
		return;
	case 175:
		reverseNodeUnion->CPPreversenode175->GetValue() = ValueLonglong;
		return;
	case 176:
		reverseNodeUnion->CPPreversenode176->GetValue() = ValueUlonglong;
		return;
	case 177:
		reverseNodeUnion->CPPreversenode177->GetValue() = ValueFloat;
		return;
	case 178:
		reverseNodeUnion->CPPreversenode178->GetValue() = ValueDouble;
		return;
	case 179:
		reverseNodeUnion->CPPreversenode179->GetValue() = ValueWchar;
		return;
	case 180:
		reverseNodeUnion->CPPreversenode180->GetValue() = ValueBool;
		return;
	case 181:
		reverseNodeUnion->CPPreversenode181->GetValue() = ValueWstring;
		return;
	case 182:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode182->GetValue()] = value;
		return;
	case 183:
		reverseNodeUnion->CPPreversenode183->GetValue() = ValueUchar;
		return;
	case 184:
		reverseNodeUnion->CPPreversenode184->GetValue() = ValueChar;
		return;
	case 185:
		reverseNodeUnion->CPPreversenode185->GetValue() = ValueShort;
		return;
	case 186:
		reverseNodeUnion->CPPreversenode186->GetValue() = ValueUshort;
		return;
	case 187:
		reverseNodeUnion->CPPreversenode187->GetValue() = ValueInt;
		return;
	case 188:
		reverseNodeUnion->CPPreversenode188->GetValue() = ValueUint;
		return;
	case 189:
		reverseNodeUnion->CPPreversenode189->GetValue() = ValueLonglong;
		return;
	case 190:
		reverseNodeUnion->CPPreversenode190->GetValue() = ValueUlonglong;
		return;
	case 191:
		reverseNodeUnion->CPPreversenode191->GetValue() = ValueFloat;
		return;
	case 192:
		reverseNodeUnion->CPPreversenode192->GetValue() = ValueDouble;
		return;
	case 193:
		reverseNodeUnion->CPPreversenode193->GetValue() = ValueWchar;
		return;
	case 194:
		reverseNodeUnion->CPPreversenode194->GetValue() = ValueBool;
		return;
	case 195:
		reverseNodeUnion->CPPreversenode195->GetValue() = ValueWstring;
		return;
	case 196:
		if (gValueClassDictionary != nullptr)
			gValueClassDictionary[reverseNodeUnion->CPPreversenode196->GetValue()] = value;
		return;
	}
	return;
}


//generic<typename Key, typename Value>
//Value MultiMapWapper::CSharpMultiMap<Key, Value>::operator[](System::Int32 index)
//{
//	if (Object::ReferenceEquals(this, nullptr)) return Value();
//	System::Object^ managedValue;
//	Value objtarget;
//	switch (nKeyValueType)
//	{
//	case 0: default:
//		return Value();
//	case 1:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap1)[index]);
//		return safe_cast<Value>(managedValue);
//	case 2:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap2)[index]);
//		return safe_cast<Value>(managedValue);
//	case 3:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap3)[index]);
//		return safe_cast<Value>(managedValue);
//	case 4:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap4)[index]);
//		return safe_cast<Value>(managedValue);
//	case 5:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap5)[index]);
//		return safe_cast<Value>(managedValue);
//	case 6:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap6)[index]);
//		return safe_cast<Value>(managedValue);
//	case 7:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap7)[index]);
//		return safe_cast<Value>(managedValue);
//	case 8:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap8)[index]);
//		return safe_cast<Value>(managedValue);
//	case 9:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap9)[index]);
//		return safe_cast<Value>(managedValue);
//	case 10:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap10)[index]);
//		return safe_cast<Value>(managedValue);
//	case 11:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap11)[index]);
//		return safe_cast<Value>(managedValue);
//	case 12:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap12)[index]);
//		return safe_cast<Value>(managedValue);
//	case 13:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap13)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 15:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap15)[index]);
//		return safe_cast<Value>(managedValue);
//	case 16:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap16)[index]);
//		return safe_cast<Value>(managedValue);
//	case 17:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap17)[index]);
//		return safe_cast<Value>(managedValue);
//	case 18:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap18)[index]);
//		return safe_cast<Value>(managedValue);
//	case 19:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap19)[index]);
//		return safe_cast<Value>(managedValue);
//	case 20:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap20)[index]);
//		return safe_cast<Value>(managedValue);
//	case 21:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap21)[index]);
//		return safe_cast<Value>(managedValue);
//	case 22:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap22)[index]);
//		return safe_cast<Value>(managedValue);
//	case 23:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap23)[index]);
//		return safe_cast<Value>(managedValue);
//	case 24:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap24)[index]);
//		return safe_cast<Value>(managedValue);
//	case 25:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap25)[index]);
//		return safe_cast<Value>(managedValue);
//	case 26:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap26)[index]);
//		return safe_cast<Value>(managedValue);
//	case 27:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap27)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 29:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap29)[index]);
//		return safe_cast<Value>(managedValue);
//	case 30:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap30)[index]);
//		return safe_cast<Value>(managedValue);
//	case 31:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap31)[index]);
//		return safe_cast<Value>(managedValue);
//	case 32:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap32)[index]);
//		return safe_cast<Value>(managedValue);
//	case 33:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap33)[index]);
//		return safe_cast<Value>(managedValue);
//	case 34:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap34)[index]);
//		return safe_cast<Value>(managedValue);
//	case 35:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap35)[index]);
//		return safe_cast<Value>(managedValue);
//	case 36:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap36)[index]);
//		return safe_cast<Value>(managedValue);
//	case 37:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap37)[index]);
//		return safe_cast<Value>(managedValue);
//	case 38:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap38)[index]);
//		return safe_cast<Value>(managedValue);
//	case 39:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap39)[index]);
//		return safe_cast<Value>(managedValue);
//	case 40:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap40)[index]);
//		return safe_cast<Value>(managedValue);
//	case 41:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap41)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 43:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap43)[index]);
//		return safe_cast<Value>(managedValue);
//	case 44:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap44)[index]);
//		return safe_cast<Value>(managedValue);
//	case 45:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap45)[index]);
//		return safe_cast<Value>(managedValue);
//	case 46:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap46)[index]);
//		return safe_cast<Value>(managedValue);
//	case 47:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap47)[index]);
//		return safe_cast<Value>(managedValue);
//	case 48:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap48)[index]);
//		return safe_cast<Value>(managedValue);
//	case 49:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap49)[index]);
//		return safe_cast<Value>(managedValue);
//	case 50:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap50)[index]);
//		return safe_cast<Value>(managedValue);
//	case 51:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap51)[index]);
//		return safe_cast<Value>(managedValue);
//	case 52:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap52)[index]);
//		return safe_cast<Value>(managedValue);
//	case 53:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap53)[index]);
//		return safe_cast<Value>(managedValue);
//	case 54:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap54)[index]);
//		return safe_cast<Value>(managedValue);
//	case 55:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap55)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 57:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap57)[index]);
//		return safe_cast<Value>(managedValue);
//	case 58:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap58)[index]);
//		return safe_cast<Value>(managedValue);
//	case 59:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap59)[index]);
//		return safe_cast<Value>(managedValue);
//	case 60:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap60)[index]);
//		return safe_cast<Value>(managedValue);
//	case 61:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap61)[index]);
//		return safe_cast<Value>(managedValue);
//	case 62:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap62)[index]);
//		return safe_cast<Value>(managedValue);
//	case 63:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap63)[index]);
//		return safe_cast<Value>(managedValue);
//	case 64:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap64)[index]);
//		return safe_cast<Value>(managedValue);
//	case 65:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap65)[index]);
//		return safe_cast<Value>(managedValue);
//	case 66:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap66)[index]);
//		return safe_cast<Value>(managedValue);
//	case 67:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap67)[index]);
//		return safe_cast<Value>(managedValue);
//	case 68:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap68)[index]);
//		return safe_cast<Value>(managedValue);
//	case 69:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap69)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 71:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap71)[index]);
//		return safe_cast<Value>(managedValue);
//	case 72:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap72)[index]);
//		return safe_cast<Value>(managedValue);
//	case 73:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap73)[index]);
//		return safe_cast<Value>(managedValue);
//	case 74:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap74)[index]);
//		return safe_cast<Value>(managedValue);
//	case 75:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap75)[index]);
//		return safe_cast<Value>(managedValue);
//	case 76:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap76)[index]);
//		return safe_cast<Value>(managedValue);
//	case 77:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap77)[index]);
//		return safe_cast<Value>(managedValue);
//	case 78:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap78)[index]);
//		return safe_cast<Value>(managedValue);
//	case 79:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap79)[index]);
//		return safe_cast<Value>(managedValue);
//	case 80:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap80)[index]);
//		return safe_cast<Value>(managedValue);
//	case 81:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap81)[index]);
//		return safe_cast<Value>(managedValue);
//	case 82:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap82)[index]);
//		return safe_cast<Value>(managedValue);
//	case 83:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap83)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 85:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap85)[index]);
//		return safe_cast<Value>(managedValue);
//	case 86:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap86)[index]);
//		return safe_cast<Value>(managedValue);
//	case 87:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap87)[index]);
//		return safe_cast<Value>(managedValue);
//	case 88:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap88)[index]);
//		return safe_cast<Value>(managedValue);
//	case 89:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap89)[index]);
//		return safe_cast<Value>(managedValue);
//	case 90:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap90)[index]);
//		return safe_cast<Value>(managedValue);
//	case 91:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap91)[index]);
//		return safe_cast<Value>(managedValue);
//	case 92:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap92)[index]);
//		return safe_cast<Value>(managedValue);
//	case 93:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap93)[index]);
//		return safe_cast<Value>(managedValue);
//	case 94:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap94)[index]);
//		return safe_cast<Value>(managedValue);
//	case 95:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap95)[index]);
//		return safe_cast<Value>(managedValue);
//	case 96:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap96)[index]);
//		return safe_cast<Value>(managedValue);
//	case 97:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap97)[index].c_str());
//		return safe_cast<Value>(managedValue);
//
//	case 99:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap99)[index]);
//		return safe_cast<Value>(managedValue);
//	case 100:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap100)[index]);
//		return safe_cast<Value>(managedValue);
//	case 101:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap101)[index]);
//		return safe_cast<Value>(managedValue);
//	case 102:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap102)[index]);
//		return safe_cast<Value>(managedValue);
//	case 103:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap103)[index]);
//		return safe_cast<Value>(managedValue);
//	case 104:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap104)[index]);
//		return safe_cast<Value>(managedValue);
//	case 105:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap105)[index]);
//		return safe_cast<Value>(managedValue);
//	case 106:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap106)[index]);
//		return safe_cast<Value>(managedValue);
//	case 107:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap107)[index]);
//		return safe_cast<Value>(managedValue);
//	case 108:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap108)[index]);
//		return safe_cast<Value>(managedValue);
//	case 109:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap109)[index]);
//		return safe_cast<Value>(managedValue);
//	case 110:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap110)[index]);
//		return safe_cast<Value>(managedValue);
//	case 111:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap111)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 113:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap113)[index]);
//		return safe_cast<Value>(managedValue);
//	case 114:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap114)[index]);
//		return safe_cast<Value>(managedValue);
//	case 115:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap115)[index]);
//		return safe_cast<Value>(managedValue);
//	case 116:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap116)[index]);
//		return safe_cast<Value>(managedValue);
//	case 117:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap117)[index]);
//		return safe_cast<Value>(managedValue);
//	case 118:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap118)[index]);
//		return safe_cast<Value>(managedValue);
//	case 119:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap119)[index]);
//		return safe_cast<Value>(managedValue);
//	case 120:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap120)[index]);
//		return safe_cast<Value>(managedValue);
//	case 121:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap121)[index]);
//		return safe_cast<Value>(managedValue);
//	case 122:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap122)[index]);
//		return safe_cast<Value>(managedValue);
//	case 123:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap123)[index]);
//		return safe_cast<Value>(managedValue);
//	case 124:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap124)[index]);
//		return safe_cast<Value>(managedValue);
//	case 125:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap125)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 127:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap127)[index]);
//		return safe_cast<Value>(managedValue);
//	case 128:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap128)[index]);
//		return safe_cast<Value>(managedValue);
//	case 129:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap129)[index]);
//		return safe_cast<Value>(managedValue);
//	case 130:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap130)[index]);
//		return safe_cast<Value>(managedValue);
//	case 131:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap131)[index]);
//		return safe_cast<Value>(managedValue);
//	case 132:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap132)[index]);
//		return safe_cast<Value>(managedValue);
//	case 133:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap133)[index]);
//		return safe_cast<Value>(managedValue);
//	case 134:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap134)[index]);
//		return safe_cast<Value>(managedValue);
//	case 135:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap135)[index]);
//		return safe_cast<Value>(managedValue);
//	case 136:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap136)[index]);
//		return safe_cast<Value>(managedValue);
//	case 137:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap137)[index]);
//		return safe_cast<Value>(managedValue);
//	case 138:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap138)[index]);
//		return safe_cast<Value>(managedValue);
//	case 139:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap139)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 141:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap141)[index]);
//		return safe_cast<Value>(managedValue);
//	case 142:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap142)[index]);
//		return safe_cast<Value>(managedValue);
//	case 143:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap143)[index]);
//		return safe_cast<Value>(managedValue);
//	case 144:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap144)[index]);
//		return safe_cast<Value>(managedValue);
//	case 145:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap145)[index]);
//		return safe_cast<Value>(managedValue);
//	case 146:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap146)[index]);
//		return safe_cast<Value>(managedValue);
//	case 147:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap147)[index]);
//		return safe_cast<Value>(managedValue);
//	case 148:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap148)[index]);
//		return safe_cast<Value>(managedValue);
//	case 149:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap149)[index]);
//		return safe_cast<Value>(managedValue);
//	case 150:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap150)[index]);
//		return safe_cast<Value>(managedValue);
//	case 151:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap151)[index]);
//		return safe_cast<Value>(managedValue);
//	case 152:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap152)[index]);
//		return safe_cast<Value>(managedValue);
//	case 153:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap153)[index].c_str());
//		return safe_cast<Value>(managedValue);
//
//	case 155:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap155)[index]);
//		return safe_cast<Value>(managedValue);
//	case 156:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap156)[index]);
//		return safe_cast<Value>(managedValue);
//	case 157:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap157)[index]);
//		return safe_cast<Value>(managedValue);
//	case 158:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap158)[index]);
//		return safe_cast<Value>(managedValue);
//	case 159:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap159)[index]);
//		return safe_cast<Value>(managedValue);
//	case 160:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap160)[index]);
//		return safe_cast<Value>(managedValue);
//	case 161:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap161)[index]);
//		return safe_cast<Value>(managedValue);
//	case 162:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap162)[index]);
//		return safe_cast<Value>(managedValue);
//	case 163:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap163)[index]);
//		return safe_cast<Value>(managedValue);
//	case 164:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap164)[index]);
//		return safe_cast<Value>(managedValue);
//	case 165:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap165)[index]);
//		return safe_cast<Value>(managedValue);
//	case 166:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap166)[index]);
//		return safe_cast<Value>(managedValue);
//	case 167:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap167)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 169:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap169)[index]);
//		return safe_cast<Value>(managedValue);
//	case 170:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap170)[index]);
//		return safe_cast<Value>(managedValue);
//	case 171:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap171)[index]);
//		return safe_cast<Value>(managedValue);
//	case 172:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap172)[index]);
//		return safe_cast<Value>(managedValue);
//	case 173:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap173)[index]);
//		return safe_cast<Value>(managedValue);
//	case 174:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap174)[index]);
//		return safe_cast<Value>(managedValue);
//	case 175:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap175)[index]);
//		return safe_cast<Value>(managedValue);
//	case 176:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap176)[index]);
//		return safe_cast<Value>(managedValue);
//	case 177:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap177)[index]);
//		return safe_cast<Value>(managedValue);
//	case 178:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap178)[index]);
//		return safe_cast<Value>(managedValue);
//	case 179:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap179)[index]);
//		return safe_cast<Value>(managedValue);
//	case 180:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap180)[index]);
//		return safe_cast<Value>(managedValue);
//	case 181:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap181)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 183:
//		managedValue = gcnew System::Byte((*multimapUnion->CPPmultimap183)[index]);
//		return safe_cast<Value>(managedValue);
//	case 184:
//		managedValue = gcnew System::SByte((*multimapUnion->CPPmultimap184)[index]);
//		return safe_cast<Value>(managedValue);
//	case 185:
//		managedValue = gcnew System::Int16((*multimapUnion->CPPmultimap185)[index]);
//		return safe_cast<Value>(managedValue);
//	case 186:
//		managedValue = gcnew System::UInt16((*multimapUnion->CPPmultimap186)[index]);
//		return safe_cast<Value>(managedValue);
//	case 187:
//		managedValue = gcnew System::Int32((*multimapUnion->CPPmultimap187)[index]);
//		return safe_cast<Value>(managedValue);
//	case 188:
//		managedValue = gcnew System::UInt32((*multimapUnion->CPPmultimap188)[index]);
//		return safe_cast<Value>(managedValue);
//	case 189:
//		managedValue = gcnew System::Int64((*multimapUnion->CPPmultimap189)[index]);
//		return safe_cast<Value>(managedValue);
//	case 190:
//		managedValue = gcnew System::UInt64((*multimapUnion->CPPmultimap190)[index]);
//		return safe_cast<Value>(managedValue);
//	case 191:
//		managedValue = gcnew System::Single((*multimapUnion->CPPmultimap191)[index]);
//		return safe_cast<Value>(managedValue);
//	case 192:
//		managedValue = gcnew System::Double((*multimapUnion->CPPmultimap192)[index]);
//		return safe_cast<Value>(managedValue);
//	case 193:
//		managedValue = gcnew System::Char((*multimapUnion->CPPmultimap193)[index]);
//		return safe_cast<Value>(managedValue);
//	case 194:
//		managedValue = gcnew System::Boolean((*multimapUnion->CPPmultimap194)[index]);
//		return safe_cast<Value>(managedValue);
//	case 195:
//		managedValue = gcnew String((*multimapUnion->CPPmultimap195)[index].c_str());
//		return safe_cast<Value>(managedValue);
//	case 14:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap14)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 28:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap28)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 42:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap42)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 56:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap56)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 70:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap70)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 84:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap84)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 98:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap98)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 112:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap112)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 126:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap126)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 140:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap140)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 154:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap154)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 168:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap168)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 182:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap182)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	case 196:
//		if (MultiMapWapper::CSharpMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue((*multimapUnion->CPPmultimap196)[index], objtarget))
//		{
//			return objtarget;
//		}
//		else break;
//	}
//	return Value();
//}
