#include "pch.h"


generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::CSharpUnOrderedMultiMap(UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>^ other)
{
	if (Object::ReferenceEquals(other, nullptr)) return;

	nDictionaryKeyCount = other->nDictionaryKeyCount;

	multimapUnion = new Utilities::UnOrderedMultiMapUnion();
	multiNode = gcnew CShorpUnOrderedMultiNode<Key, Value>();
	KeyEndNode = gcnew CShorpUnOrderedMultiNode<Key, Value>();
	RIterNode = gcnew CShorpUnOrderedReverseNode<Key, Value>();
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;
	int KeyNum = 0;
	int ValueNum = 0;
	bool bgClassKeyDictionaryInit = false;
	bool bgClassValueDictionaryInit = false;
	bool bCopyKeyValue = false;
	if (keyType->Equals(System::Byte::typeid))
	{
		KeyNum = 0;
	}
	else if (keyType->Equals(System::SByte::typeid))
	{
		KeyNum = 14;
	}
	else if (keyType->Equals(System::Int16::typeid))
	{
		KeyNum = 14 * 2;
	}
	else if (keyType->Equals(System::UInt16::typeid))
	{
		KeyNum = 14 * 3;
	}
	else if (keyType->Equals(System::Int32::typeid))
	{
		KeyNum = 14 * 4;
	}
	else if (keyType->Equals(System::UInt32::typeid))
	{
		KeyNum = 14 * 5;
	}
	else if (keyType->Equals(System::Int64::typeid))
	{
		KeyNum = 14 * 6;
	}
	else if (keyType->Equals(System::UInt64::typeid))
	{
		KeyNum = 14 * 7;
	}
	else if (keyType->Equals(System::Single::typeid))
	{
		KeyNum = 14 * 8;
	}
	else if (keyType->Equals(System::Double::typeid))
	{
		KeyNum = 14 * 9;
	}
	else if (keyType->Equals(System::Char::typeid))
	{
		KeyNum = 14 * 10;
	}
	else if (keyType->Equals(System::Boolean::typeid))
	{
		KeyNum = 14 * 11;
	}
	else if (keyType->Equals(System::String::typeid))
	{
		KeyNum = 14 * 12;
	}
	else if (keyType->IsClass)
	{
		KeyNum = 14 * 13;
		bgClassKeyDictionaryInit = true;
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		KeyNum = 14 * 13;
		bgClassKeyDictionaryInit = true;
	}
	else if (keyType->IsInterface)
	{
		KeyNum = 14 * 13;
		bgClassKeyDictionaryInit = true;
	}
	else
	{
		KeyNum = 200;
	}

	if (valueType->Equals(System::Byte::typeid))
	{
		ValueNum = 1;
	}
	else if (valueType->Equals(System::SByte::typeid))
	{
		ValueNum = 2;
	}
	else if (valueType->Equals(System::Int16::typeid))
	{
		ValueNum = 3;
	}
	else if (valueType->Equals(System::UInt16::typeid))
	{
		ValueNum = 4;
	}
	else if (valueType->Equals(System::Int32::typeid))
	{
		ValueNum = 5;
	}
	else if (valueType->Equals(System::UInt32::typeid))
	{
		ValueNum = 6;
	}
	else if (valueType->Equals(System::Int64::typeid))
	{
		ValueNum = 7;
	}
	else if (valueType->Equals(System::UInt64::typeid))
	{
		ValueNum = 8;
	}
	else if (valueType->Equals(System::Single::typeid))
	{
		ValueNum = 9;
	}
	else if (valueType->Equals(System::Double::typeid))
	{
		ValueNum = 10;
	}
	else if (valueType->Equals(System::Char::typeid))
	{
		ValueNum = 11;
	}
	else if (valueType->Equals(System::Boolean::typeid))
	{
		ValueNum = 12;
	}
	else if (valueType->Equals(System::String::typeid))
	{
		ValueNum = 13;
	}
	else if (valueType->IsClass)
	{
		ValueNum = 14;
		bgClassValueDictionaryInit = true;
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		ValueNum = 14;
		bgClassValueDictionaryInit = true;
	}
	else if (valueType->IsInterface)
	{
		ValueNum = 14;
		bgClassValueDictionaryInit = true;
	}
	else
	{
		ValueNum = 200;
	}

	nKeyValueType = KeyNum + ValueNum;


	switch (nKeyValueType)
	{
	case 0: default:
		multimapUnion->ptrToDelete = nullptr;
		break;
	case 1:
		multimapUnion->CPPmultimap1 = new UnOrderedMultiMap<unsigned char, unsigned char>(*other->multimapUnion->CPPmultimap1);
		break;
	case 2:
		multimapUnion->CPPmultimap2 = new UnOrderedMultiMap<unsigned char, char>(*other->multimapUnion->CPPmultimap2);
		break;
	case 3:
		multimapUnion->CPPmultimap3 = new UnOrderedMultiMap<unsigned char, short>(*other->multimapUnion->CPPmultimap3);
		break;
	case 4:
		multimapUnion->CPPmultimap4 = new UnOrderedMultiMap<unsigned char, unsigned short>(*other->multimapUnion->CPPmultimap4);
		break;
	case 5:
		multimapUnion->CPPmultimap5 = new UnOrderedMultiMap<unsigned char, int>(*other->multimapUnion->CPPmultimap5);
		break;
	case 6:
		multimapUnion->CPPmultimap6 = new UnOrderedMultiMap<unsigned char, unsigned int>(*other->multimapUnion->CPPmultimap6);
		break;
	case 7:
		multimapUnion->CPPmultimap7 = new UnOrderedMultiMap<unsigned char, long long>(*other->multimapUnion->CPPmultimap7);
		break;
	case 8:
		multimapUnion->CPPmultimap8 = new UnOrderedMultiMap<unsigned char, unsigned long long>(*other->multimapUnion->CPPmultimap8);
		break;
	case 9:
		multimapUnion->CPPmultimap9 = new UnOrderedMultiMap<unsigned char, float>(*other->multimapUnion->CPPmultimap9);
		break;
	case 10:
		multimapUnion->CPPmultimap10 = new UnOrderedMultiMap<unsigned char, double>(*other->multimapUnion->CPPmultimap10);
		break;
	case 11:
		multimapUnion->CPPmultimap11 = new UnOrderedMultiMap<unsigned char, wchar_t>(*other->multimapUnion->CPPmultimap11);
		break;
	case 12:
		multimapUnion->CPPmultimap12 = new UnOrderedMultiMap<unsigned char, bool>(*other->multimapUnion->CPPmultimap12);
		break;
	case 13:
		multimapUnion->CPPmultimap13 = new UnOrderedMultiMap<unsigned char, std::wstring>(*other->multimapUnion->CPPmultimap13);
		break;
	case 14:
		multimapUnion->CPPmultimap14 = new UnOrderedMultiMap<unsigned char, __int64>();
		bCopyKeyValue = true;
		break;
	case 15:
		multimapUnion->CPPmultimap15 = new UnOrderedMultiMap<char, unsigned char>(*other->multimapUnion->CPPmultimap15);
		break;
	case 16:
		multimapUnion->CPPmultimap16 = new UnOrderedMultiMap<char, char>(*other->multimapUnion->CPPmultimap16);
		break;
	case 17:
		multimapUnion->CPPmultimap17 = new UnOrderedMultiMap<char, short>(*other->multimapUnion->CPPmultimap17);
		break;
	case 18:
		multimapUnion->CPPmultimap18 = new UnOrderedMultiMap<char, unsigned short>(*other->multimapUnion->CPPmultimap18);
		break;
	case 19:
		multimapUnion->CPPmultimap19 = new UnOrderedMultiMap<char, int>(*other->multimapUnion->CPPmultimap19);
		break;
	case 20:
		multimapUnion->CPPmultimap20 = new UnOrderedMultiMap<char, unsigned int>(*other->multimapUnion->CPPmultimap20);
		break;
	case 21:
		multimapUnion->CPPmultimap21 = new UnOrderedMultiMap<char, long long>(*other->multimapUnion->CPPmultimap21);
		break;
	case 22:
		multimapUnion->CPPmultimap22 = new UnOrderedMultiMap<char, unsigned long long>(*other->multimapUnion->CPPmultimap22);
		break;
	case 23:
		multimapUnion->CPPmultimap23 = new UnOrderedMultiMap<char, float>(*other->multimapUnion->CPPmultimap23);
		break;
	case 24:
		multimapUnion->CPPmultimap24 = new UnOrderedMultiMap<char, double>(*other->multimapUnion->CPPmultimap24);
		break;
	case 25:
		multimapUnion->CPPmultimap25 = new UnOrderedMultiMap<char, wchar_t>(*other->multimapUnion->CPPmultimap25);
		break;
	case 26:
		multimapUnion->CPPmultimap26 = new UnOrderedMultiMap<char, bool>(*other->multimapUnion->CPPmultimap26);
		break;
	case 27:
		multimapUnion->CPPmultimap27 = new UnOrderedMultiMap<char, std::wstring>(*other->multimapUnion->CPPmultimap27);
		break;
	case 28:
		multimapUnion->CPPmultimap28 = new UnOrderedMultiMap<char, __int64>();
		bCopyKeyValue = true;
		break;
	case 29:
		multimapUnion->CPPmultimap29 = new UnOrderedMultiMap<short, unsigned char>(*other->multimapUnion->CPPmultimap29);
		break;
	case 30:
		multimapUnion->CPPmultimap30 = new UnOrderedMultiMap<short, char>(*other->multimapUnion->CPPmultimap30);
		break;
	case 31:
		multimapUnion->CPPmultimap31 = new UnOrderedMultiMap<short, short>(*other->multimapUnion->CPPmultimap31);
		break;
	case 32:
		multimapUnion->CPPmultimap32 = new UnOrderedMultiMap<short, unsigned short>(*other->multimapUnion->CPPmultimap32);
		break;
	case 33:
		multimapUnion->CPPmultimap33 = new UnOrderedMultiMap<short, int>(*other->multimapUnion->CPPmultimap33);
		break;
	case 34:
		multimapUnion->CPPmultimap34 = new UnOrderedMultiMap<short, unsigned int>(*other->multimapUnion->CPPmultimap34);
		break;
	case 35:
		multimapUnion->CPPmultimap35 = new UnOrderedMultiMap<short, long long>(*other->multimapUnion->CPPmultimap35);
		break;
	case 36:
		multimapUnion->CPPmultimap36 = new UnOrderedMultiMap<short, unsigned long long>(*other->multimapUnion->CPPmultimap36);
		break;
	case 37:
		multimapUnion->CPPmultimap37 = new UnOrderedMultiMap<short, float>(*other->multimapUnion->CPPmultimap37);
		break;
	case 38:
		multimapUnion->CPPmultimap38 = new UnOrderedMultiMap<short, double>(*other->multimapUnion->CPPmultimap38);
		break;
	case 39:
		multimapUnion->CPPmultimap39 = new UnOrderedMultiMap<short, wchar_t>(*other->multimapUnion->CPPmultimap39);
		break;
	case 40:
		multimapUnion->CPPmultimap40 = new UnOrderedMultiMap<short, bool>(*other->multimapUnion->CPPmultimap40);
		break;
	case 41:
		multimapUnion->CPPmultimap41 = new UnOrderedMultiMap<short, std::wstring>(*other->multimapUnion->CPPmultimap41);
		break;
	case 42:
		multimapUnion->CPPmultimap42 = new UnOrderedMultiMap<short, __int64>();
		bCopyKeyValue = true;
		break;
	case 43:
		multimapUnion->CPPmultimap43 = new UnOrderedMultiMap<unsigned short, unsigned char>(*other->multimapUnion->CPPmultimap43);
		break;
	case 44:
		multimapUnion->CPPmultimap44 = new UnOrderedMultiMap<unsigned short, char>(*other->multimapUnion->CPPmultimap44);
		break;
	case 45:
		multimapUnion->CPPmultimap45 = new UnOrderedMultiMap<unsigned short, short>(*other->multimapUnion->CPPmultimap45);
		break;
	case 46:
		multimapUnion->CPPmultimap46 = new UnOrderedMultiMap<unsigned short, unsigned short>(*other->multimapUnion->CPPmultimap46);
		break;
	case 47:
		multimapUnion->CPPmultimap47 = new UnOrderedMultiMap<unsigned short, int>(*other->multimapUnion->CPPmultimap47);
		break;
	case 48:
		multimapUnion->CPPmultimap48 = new UnOrderedMultiMap<unsigned short, unsigned int>(*other->multimapUnion->CPPmultimap48);
		break;
	case 49:
		multimapUnion->CPPmultimap49 = new UnOrderedMultiMap<unsigned short, long long>(*other->multimapUnion->CPPmultimap49);
		break;
	case 50:
		multimapUnion->CPPmultimap50 = new UnOrderedMultiMap<unsigned short, unsigned long long>(*other->multimapUnion->CPPmultimap50);
		break;
	case 51:
		multimapUnion->CPPmultimap51 = new UnOrderedMultiMap<unsigned short, float>(*other->multimapUnion->CPPmultimap51);
		break;
	case 52:
		multimapUnion->CPPmultimap52 = new UnOrderedMultiMap<unsigned short, double>(*other->multimapUnion->CPPmultimap52);
		break;
	case 53:
		multimapUnion->CPPmultimap53 = new UnOrderedMultiMap<unsigned short, wchar_t>(*other->multimapUnion->CPPmultimap53);
		break;
	case 54:
		multimapUnion->CPPmultimap54 = new UnOrderedMultiMap<unsigned short, bool>(*other->multimapUnion->CPPmultimap54);
		break;
	case 55:
		multimapUnion->CPPmultimap55 = new UnOrderedMultiMap<unsigned short, std::wstring>(*other->multimapUnion->CPPmultimap55);
		break;
	case 56:
		multimapUnion->CPPmultimap56 = new UnOrderedMultiMap<unsigned short, __int64>();
		bCopyKeyValue = true;
		break;
	case 57:
		multimapUnion->CPPmultimap57 = new UnOrderedMultiMap<int, unsigned char>(*other->multimapUnion->CPPmultimap57);
		break;
	case 58:
		multimapUnion->CPPmultimap58 = new UnOrderedMultiMap<int, char>(*other->multimapUnion->CPPmultimap58);
		break;
	case 59:
		multimapUnion->CPPmultimap59 = new UnOrderedMultiMap<int, short>(*other->multimapUnion->CPPmultimap59);
		break;
	case 60:
		multimapUnion->CPPmultimap60 = new UnOrderedMultiMap<int, unsigned short>(*other->multimapUnion->CPPmultimap60);
		break;
	case 61:
		multimapUnion->CPPmultimap61 = new UnOrderedMultiMap<int, int>(*other->multimapUnion->CPPmultimap61);
		break;
	case 62:
		multimapUnion->CPPmultimap62 = new UnOrderedMultiMap<int, unsigned int>(*other->multimapUnion->CPPmultimap62);
		break;
	case 63:
		multimapUnion->CPPmultimap63 = new UnOrderedMultiMap<int, long long>(*other->multimapUnion->CPPmultimap63);
		break;
	case 64:
		multimapUnion->CPPmultimap64 = new UnOrderedMultiMap<int, unsigned long long>(*other->multimapUnion->CPPmultimap64);
		break;
	case 65:
		multimapUnion->CPPmultimap65 = new UnOrderedMultiMap<int, float>(*other->multimapUnion->CPPmultimap65);
		break;
	case 66:
		multimapUnion->CPPmultimap66 = new UnOrderedMultiMap<int, double>(*other->multimapUnion->CPPmultimap66);
		break;
	case 67:
		multimapUnion->CPPmultimap67 = new UnOrderedMultiMap<int, wchar_t>(*other->multimapUnion->CPPmultimap67);
		break;
	case 68:
		multimapUnion->CPPmultimap68 = new UnOrderedMultiMap<int, bool>(*other->multimapUnion->CPPmultimap68);
		break;
	case 69:
		multimapUnion->CPPmultimap69 = new UnOrderedMultiMap<int, std::wstring>(*other->multimapUnion->CPPmultimap69);
		break;
	case 70:
		multimapUnion->CPPmultimap70 = new UnOrderedMultiMap<int, __int64>();
		bCopyKeyValue = true;
		break;
	case 71:
		multimapUnion->CPPmultimap71 = new UnOrderedMultiMap<unsigned int, unsigned char>(*other->multimapUnion->CPPmultimap71);
		break;
	case 72:
		multimapUnion->CPPmultimap72 = new UnOrderedMultiMap<unsigned int, char>(*other->multimapUnion->CPPmultimap72);
		break;
	case 73:
		multimapUnion->CPPmultimap73 = new UnOrderedMultiMap<unsigned int, short>(*other->multimapUnion->CPPmultimap73);
		break;
	case 74:
		multimapUnion->CPPmultimap74 = new UnOrderedMultiMap<unsigned int, unsigned short>(*other->multimapUnion->CPPmultimap74);
		break;
	case 75:
		multimapUnion->CPPmultimap75 = new UnOrderedMultiMap<unsigned int, int>(*other->multimapUnion->CPPmultimap75);
		break;
	case 76:
		multimapUnion->CPPmultimap76 = new UnOrderedMultiMap<unsigned int, unsigned int>(*other->multimapUnion->CPPmultimap76);
		break;
	case 77:
		multimapUnion->CPPmultimap77 = new UnOrderedMultiMap<unsigned int, long long>(*other->multimapUnion->CPPmultimap77);
		break;
	case 78:
		multimapUnion->CPPmultimap78 = new UnOrderedMultiMap<unsigned int, unsigned long long>(*other->multimapUnion->CPPmultimap78);
		break;
	case 79:
		multimapUnion->CPPmultimap79 = new UnOrderedMultiMap<unsigned int, float>(*other->multimapUnion->CPPmultimap79);
		break;
	case 80:
		multimapUnion->CPPmultimap80 = new UnOrderedMultiMap<unsigned int, double>(*other->multimapUnion->CPPmultimap80);
		break;
	case 81:
		multimapUnion->CPPmultimap81 = new UnOrderedMultiMap<unsigned int, wchar_t>(*other->multimapUnion->CPPmultimap81);
		break;
	case 82:
		multimapUnion->CPPmultimap82 = new UnOrderedMultiMap<unsigned int, bool>(*other->multimapUnion->CPPmultimap82);
		break;
	case 83:
		multimapUnion->CPPmultimap83 = new UnOrderedMultiMap<unsigned int, std::wstring>(*other->multimapUnion->CPPmultimap83);
		break;
	case 84:
		multimapUnion->CPPmultimap84 = new UnOrderedMultiMap<unsigned int, __int64>();
		bCopyKeyValue = true;
		break;
	case 85:
		multimapUnion->CPPmultimap85 = new UnOrderedMultiMap<long long, unsigned char>(*other->multimapUnion->CPPmultimap85);
		break;
	case 86:
		multimapUnion->CPPmultimap86 = new UnOrderedMultiMap<long long, char>(*other->multimapUnion->CPPmultimap86);
		break;
	case 87:
		multimapUnion->CPPmultimap87 = new UnOrderedMultiMap<long long, short>(*other->multimapUnion->CPPmultimap87);
		break;
	case 88:
		multimapUnion->CPPmultimap88 = new UnOrderedMultiMap<long long, unsigned short>(*other->multimapUnion->CPPmultimap88);
		break;
	case 89:
		multimapUnion->CPPmultimap89 = new UnOrderedMultiMap<long long, int>(*other->multimapUnion->CPPmultimap89);
		break;
	case 90:
		multimapUnion->CPPmultimap90 = new UnOrderedMultiMap<long long, unsigned int>(*other->multimapUnion->CPPmultimap90);
		break;
	case 91:
		multimapUnion->CPPmultimap91 = new UnOrderedMultiMap<long long, long long>(*other->multimapUnion->CPPmultimap91);
		break;
	case 92:
		multimapUnion->CPPmultimap92 = new UnOrderedMultiMap<long long, unsigned long long>(*other->multimapUnion->CPPmultimap92);
		break;
	case 93:
		multimapUnion->CPPmultimap93 = new UnOrderedMultiMap<long long, float>(*other->multimapUnion->CPPmultimap93);
		break;
	case 94:
		multimapUnion->CPPmultimap94 = new UnOrderedMultiMap<long long, double>(*other->multimapUnion->CPPmultimap94);
		break;
	case 95:
		multimapUnion->CPPmultimap95 = new UnOrderedMultiMap<long long, wchar_t>(*other->multimapUnion->CPPmultimap95);
		break;
	case 96:
		multimapUnion->CPPmultimap96 = new UnOrderedMultiMap<long long, bool>(*other->multimapUnion->CPPmultimap96);
		break;
	case 97:
		multimapUnion->CPPmultimap97 = new UnOrderedMultiMap<long long, std::wstring>(*other->multimapUnion->CPPmultimap97);
		break;
	case 98:
		multimapUnion->CPPmultimap98 = new UnOrderedMultiMap<long long, __int64>();
		bCopyKeyValue = true;
		break;
	case 99:
		multimapUnion->CPPmultimap99 = new UnOrderedMultiMap<unsigned long long, unsigned char>(*other->multimapUnion->CPPmultimap99);
		break;
	case 100:
		multimapUnion->CPPmultimap100 = new UnOrderedMultiMap<unsigned long long, char>(*other->multimapUnion->CPPmultimap100);
		break;
	case 101:
		multimapUnion->CPPmultimap101 = new UnOrderedMultiMap<unsigned long long, short>(*other->multimapUnion->CPPmultimap101);
		break;
	case 102:
		multimapUnion->CPPmultimap102 = new UnOrderedMultiMap<unsigned long long, unsigned short>(*other->multimapUnion->CPPmultimap102);
		break;
	case 103:
		multimapUnion->CPPmultimap103 = new UnOrderedMultiMap<unsigned long long, int>(*other->multimapUnion->CPPmultimap103);
		break;
	case 104:
		multimapUnion->CPPmultimap104 = new UnOrderedMultiMap<unsigned long long, unsigned int>(*other->multimapUnion->CPPmultimap104);
		break;
	case 105:
		multimapUnion->CPPmultimap105 = new UnOrderedMultiMap<unsigned long long, long long>(*other->multimapUnion->CPPmultimap105);
		break;
	case 106:
		multimapUnion->CPPmultimap106 = new UnOrderedMultiMap<unsigned long long, unsigned long long>(*other->multimapUnion->CPPmultimap106);
		break;
	case 107:
		multimapUnion->CPPmultimap107 = new UnOrderedMultiMap<unsigned long long, float>(*other->multimapUnion->CPPmultimap107);
		break;
	case 108:
		multimapUnion->CPPmultimap108 = new UnOrderedMultiMap<unsigned long long, double>(*other->multimapUnion->CPPmultimap108);
		break;
	case 109:
		multimapUnion->CPPmultimap109 = new UnOrderedMultiMap<unsigned long long, wchar_t>(*other->multimapUnion->CPPmultimap109);
		break;
	case 110:
		multimapUnion->CPPmultimap110 = new UnOrderedMultiMap<unsigned long long, bool>(*other->multimapUnion->CPPmultimap110);
		break;
	case 111:
		multimapUnion->CPPmultimap111 = new UnOrderedMultiMap<unsigned long long, std::wstring>(*other->multimapUnion->CPPmultimap111);
		break;
	case 112:
		multimapUnion->CPPmultimap112 = new UnOrderedMultiMap<unsigned long long, __int64>();
		bCopyKeyValue = true;
		break;
	case 113:
		multimapUnion->CPPmultimap113 = new UnOrderedMultiMap<float, unsigned char>(*other->multimapUnion->CPPmultimap113);
		break;
	case 114:
		multimapUnion->CPPmultimap114 = new UnOrderedMultiMap<float, char>(*other->multimapUnion->CPPmultimap114);
		break;
	case 115:
		multimapUnion->CPPmultimap115 = new UnOrderedMultiMap<float, short>(*other->multimapUnion->CPPmultimap115);
		break;
	case 116:
		multimapUnion->CPPmultimap116 = new UnOrderedMultiMap<float, unsigned short>(*other->multimapUnion->CPPmultimap116);
		break;
	case 117:
		multimapUnion->CPPmultimap117 = new UnOrderedMultiMap<float, int>(*other->multimapUnion->CPPmultimap117);
		break;
	case 118:
		multimapUnion->CPPmultimap118 = new UnOrderedMultiMap<float, unsigned int>(*other->multimapUnion->CPPmultimap118);
		break;
	case 119:
		multimapUnion->CPPmultimap119 = new UnOrderedMultiMap<float, long long>(*other->multimapUnion->CPPmultimap119);
		break;
	case 120:
		multimapUnion->CPPmultimap120 = new UnOrderedMultiMap<float, unsigned long long>(*other->multimapUnion->CPPmultimap120);
		break;
	case 121:
		multimapUnion->CPPmultimap121 = new UnOrderedMultiMap<float, float>(*other->multimapUnion->CPPmultimap121);
		break;
	case 122:
		multimapUnion->CPPmultimap122 = new UnOrderedMultiMap<float, double>(*other->multimapUnion->CPPmultimap122);
		break;
	case 123:
		multimapUnion->CPPmultimap123 = new UnOrderedMultiMap<float, wchar_t>(*other->multimapUnion->CPPmultimap123);
		break;
	case 124:
		multimapUnion->CPPmultimap124 = new UnOrderedMultiMap<float, bool>(*other->multimapUnion->CPPmultimap124);
		break;
	case 125:
		multimapUnion->CPPmultimap125 = new UnOrderedMultiMap<float, std::wstring>(*other->multimapUnion->CPPmultimap125);
		break;
	case 126:
		multimapUnion->CPPmultimap126 = new UnOrderedMultiMap<float, __int64>();
		bCopyKeyValue = true;
		break;
	case 127:
		multimapUnion->CPPmultimap127 = new UnOrderedMultiMap<double, unsigned char>(*other->multimapUnion->CPPmultimap127);
		break;
	case 128:
		multimapUnion->CPPmultimap128 = new UnOrderedMultiMap<double, char>(*other->multimapUnion->CPPmultimap128);
		break;
	case 129:
		multimapUnion->CPPmultimap129 = new UnOrderedMultiMap<double, short>(*other->multimapUnion->CPPmultimap129);
		break;
	case 130:
		multimapUnion->CPPmultimap130 = new UnOrderedMultiMap<double, unsigned short>(*other->multimapUnion->CPPmultimap130);
		break;
	case 131:
		multimapUnion->CPPmultimap131 = new UnOrderedMultiMap<double, int>(*other->multimapUnion->CPPmultimap131);
		break;
	case 132:
		multimapUnion->CPPmultimap132 = new UnOrderedMultiMap<double, unsigned int>(*other->multimapUnion->CPPmultimap132);
		break;
	case 133:
		multimapUnion->CPPmultimap133 = new UnOrderedMultiMap<double, long long>(*other->multimapUnion->CPPmultimap133);
		break;
	case 134:
		multimapUnion->CPPmultimap134 = new UnOrderedMultiMap<double, unsigned long long>(*other->multimapUnion->CPPmultimap134);
		break;
	case 135:
		multimapUnion->CPPmultimap135 = new UnOrderedMultiMap<double, float>(*other->multimapUnion->CPPmultimap135);
		break;
	case 136:
		multimapUnion->CPPmultimap136 = new UnOrderedMultiMap<double, double>(*other->multimapUnion->CPPmultimap136);
		break;
	case 137:
		multimapUnion->CPPmultimap137 = new UnOrderedMultiMap<double, wchar_t>(*other->multimapUnion->CPPmultimap137);
		break;
	case 138:
		multimapUnion->CPPmultimap138 = new UnOrderedMultiMap<double, bool>(*other->multimapUnion->CPPmultimap138);
		break;
	case 139:
		multimapUnion->CPPmultimap139 = new UnOrderedMultiMap<double, std::wstring>(*other->multimapUnion->CPPmultimap139);
		break;
	case 140:
		multimapUnion->CPPmultimap140 = new UnOrderedMultiMap<double, __int64>();
		bCopyKeyValue = true;
		break;
	case 141:
		multimapUnion->CPPmultimap141 = new UnOrderedMultiMap<wchar_t, unsigned char>(*other->multimapUnion->CPPmultimap141);
		break;
	case 142:
		multimapUnion->CPPmultimap142 = new UnOrderedMultiMap<wchar_t, char>(*other->multimapUnion->CPPmultimap142);
		break;
	case 143:
		multimapUnion->CPPmultimap143 = new UnOrderedMultiMap<wchar_t, short>(*other->multimapUnion->CPPmultimap143);
		break;
	case 144:
		multimapUnion->CPPmultimap144 = new UnOrderedMultiMap<wchar_t, unsigned short>(*other->multimapUnion->CPPmultimap144);
		break;
	case 145:
		multimapUnion->CPPmultimap145 = new UnOrderedMultiMap<wchar_t, int>(*other->multimapUnion->CPPmultimap145);
		break;
	case 146:
		multimapUnion->CPPmultimap146 = new UnOrderedMultiMap<wchar_t, unsigned int>(*other->multimapUnion->CPPmultimap146);
		break;
	case 147:
		multimapUnion->CPPmultimap147 = new UnOrderedMultiMap<wchar_t, long long>(*other->multimapUnion->CPPmultimap147);
		break;
	case 148:
		multimapUnion->CPPmultimap148 = new UnOrderedMultiMap<wchar_t, unsigned long long>(*other->multimapUnion->CPPmultimap148);
		break;
	case 149:
		multimapUnion->CPPmultimap149 = new UnOrderedMultiMap<wchar_t, float>(*other->multimapUnion->CPPmultimap149);
		break;
	case 150:
		multimapUnion->CPPmultimap150 = new UnOrderedMultiMap<wchar_t, double>(*other->multimapUnion->CPPmultimap150);
		break;
	case 151:
		multimapUnion->CPPmultimap151 = new UnOrderedMultiMap<wchar_t, wchar_t>(*other->multimapUnion->CPPmultimap151);
		break;
	case 152:
		multimapUnion->CPPmultimap152 = new UnOrderedMultiMap<wchar_t, bool>(*other->multimapUnion->CPPmultimap152);
		break;
	case 153:
		multimapUnion->CPPmultimap153 = new UnOrderedMultiMap<wchar_t, std::wstring>(*other->multimapUnion->CPPmultimap153);
		break;
	case 154:
		multimapUnion->CPPmultimap154 = new UnOrderedMultiMap<wchar_t, __int64>();
		bCopyKeyValue = true;
		break;
	case 155:
		multimapUnion->CPPmultimap155 = new UnOrderedMultiMap<bool, unsigned char>(*other->multimapUnion->CPPmultimap155);
		break;
	case 156:
		multimapUnion->CPPmultimap156 = new UnOrderedMultiMap<bool, char>(*other->multimapUnion->CPPmultimap156);
		break;
	case 157:
		multimapUnion->CPPmultimap157 = new UnOrderedMultiMap<bool, short>(*other->multimapUnion->CPPmultimap157);
		break;
	case 158:
		multimapUnion->CPPmultimap158 = new UnOrderedMultiMap<bool, unsigned short>(*other->multimapUnion->CPPmultimap158);
		break;
	case 159:
		multimapUnion->CPPmultimap159 = new UnOrderedMultiMap<bool, int>(*other->multimapUnion->CPPmultimap159);
		break;
	case 160:
		multimapUnion->CPPmultimap160 = new UnOrderedMultiMap<bool, unsigned int>(*other->multimapUnion->CPPmultimap160);
		break;
	case 161:
		multimapUnion->CPPmultimap161 = new UnOrderedMultiMap<bool, long long>(*other->multimapUnion->CPPmultimap161);
		break;
	case 162:
		multimapUnion->CPPmultimap162 = new UnOrderedMultiMap<bool, unsigned long long>(*other->multimapUnion->CPPmultimap162);
		break;
	case 163:
		multimapUnion->CPPmultimap163 = new UnOrderedMultiMap<bool, float>(*other->multimapUnion->CPPmultimap163);
		break;
	case 164:
		multimapUnion->CPPmultimap164 = new UnOrderedMultiMap<bool, double>(*other->multimapUnion->CPPmultimap164);
		break;
	case 165:
		multimapUnion->CPPmultimap165 = new UnOrderedMultiMap<bool, wchar_t>(*other->multimapUnion->CPPmultimap165);
		break;
	case 166:
		multimapUnion->CPPmultimap166 = new UnOrderedMultiMap<bool, bool>(*other->multimapUnion->CPPmultimap166);
		break;
	case 167:
		multimapUnion->CPPmultimap167 = new UnOrderedMultiMap<bool, std::wstring>(*other->multimapUnion->CPPmultimap167);
		break;
	case 168:
		multimapUnion->CPPmultimap168 = new UnOrderedMultiMap<bool, __int64>();
		bCopyKeyValue = true;
		break;
	case 169:
		multimapUnion->CPPmultimap169 = new UnOrderedMultiMap<std::wstring, unsigned char>(*other->multimapUnion->CPPmultimap169);
		break;
	case 170:
		multimapUnion->CPPmultimap170 = new UnOrderedMultiMap<std::wstring, char>(*other->multimapUnion->CPPmultimap170);
		break;
	case 171:
		multimapUnion->CPPmultimap171 = new UnOrderedMultiMap<std::wstring, short>(*other->multimapUnion->CPPmultimap171);
		break;
	case 172:
		multimapUnion->CPPmultimap172 = new UnOrderedMultiMap<std::wstring, unsigned short>(*other->multimapUnion->CPPmultimap172);
		break;
	case 173:
		multimapUnion->CPPmultimap173 = new UnOrderedMultiMap<std::wstring, int>(*other->multimapUnion->CPPmultimap173);
		break;
	case 174:
		multimapUnion->CPPmultimap174 = new UnOrderedMultiMap<std::wstring, unsigned int>(*other->multimapUnion->CPPmultimap174);
		break;
	case 175:
		multimapUnion->CPPmultimap175 = new UnOrderedMultiMap<std::wstring, long long>(*other->multimapUnion->CPPmultimap175);
		break;
	case 176:
		multimapUnion->CPPmultimap176 = new UnOrderedMultiMap<std::wstring, unsigned long long>(*other->multimapUnion->CPPmultimap176);
		break;
	case 177:
		multimapUnion->CPPmultimap177 = new UnOrderedMultiMap<std::wstring, float>(*other->multimapUnion->CPPmultimap177);
		break;
	case 178:
		multimapUnion->CPPmultimap178 = new UnOrderedMultiMap<std::wstring, double>(*other->multimapUnion->CPPmultimap178);
		break;
	case 179:
		multimapUnion->CPPmultimap179 = new UnOrderedMultiMap<std::wstring, wchar_t>(*other->multimapUnion->CPPmultimap179);
		break;
	case 180:
		multimapUnion->CPPmultimap180 = new UnOrderedMultiMap<std::wstring, bool>(*other->multimapUnion->CPPmultimap180);
		break;
	case 181:
		multimapUnion->CPPmultimap181 = new UnOrderedMultiMap<std::wstring, std::wstring>(*other->multimapUnion->CPPmultimap181);
		break;
	case 182:
		multimapUnion->CPPmultimap182 = new UnOrderedMultiMap<std::wstring, __int64>();
		bCopyKeyValue = true;
		break;
	case 183:
		multimapUnion->CPPmultimap183 = new UnOrderedMultiMap<__int64, unsigned char>(*other->multimapUnion->CPPmultimap183);
		break;
	case 184:
		multimapUnion->CPPmultimap184 = new UnOrderedMultiMap<__int64, char>(*other->multimapUnion->CPPmultimap184);
		break;
	case 185:
		multimapUnion->CPPmultimap185 = new UnOrderedMultiMap<__int64, short>(*other->multimapUnion->CPPmultimap185);
		break;
	case 186:
		multimapUnion->CPPmultimap186 = new UnOrderedMultiMap<__int64, unsigned short>(*other->multimapUnion->CPPmultimap186);
		break;
	case 187:
		multimapUnion->CPPmultimap187 = new UnOrderedMultiMap<__int64, int>(*other->multimapUnion->CPPmultimap187);
		break;
	case 188:
		multimapUnion->CPPmultimap188 = new UnOrderedMultiMap<__int64, unsigned int>(*other->multimapUnion->CPPmultimap188);
		break;
	case 189:
		multimapUnion->CPPmultimap189 = new UnOrderedMultiMap<__int64, long long>(*other->multimapUnion->CPPmultimap189);
		break;
	case 190:
		multimapUnion->CPPmultimap190 = new UnOrderedMultiMap<__int64, unsigned long long>(*other->multimapUnion->CPPmultimap190);
		break;
	case 191:
		multimapUnion->CPPmultimap191 = new UnOrderedMultiMap<__int64, float>(*other->multimapUnion->CPPmultimap191);
		break;
	case 192:
		multimapUnion->CPPmultimap192 = new UnOrderedMultiMap<__int64, double>(*other->multimapUnion->CPPmultimap192);
		break;
	case 193:
		multimapUnion->CPPmultimap193 = new UnOrderedMultiMap<__int64, wchar_t>(*other->multimapUnion->CPPmultimap193);
		break;
	case 194:
		multimapUnion->CPPmultimap194 = new UnOrderedMultiMap<__int64, bool>(*other->multimapUnion->CPPmultimap194);
		break;
	case 195:
		multimapUnion->CPPmultimap195 = new UnOrderedMultiMap<__int64, std::wstring>(*other->multimapUnion->CPPmultimap195);
		break;
	case 196:
		multimapUnion->CPPmultimap196 = new UnOrderedMultiMap<__int64, __int64>();
		bCopyKeyValue = true;
		break;
	}

	if (bgClassValueDictionaryInit == true)
		if (gValueClassDictionary == nullptr)
			gValueClassDictionary = gcnew System::Collections::Generic::Dictionary<System::Int64, Value>();
	if (bgClassKeyDictionaryInit == true)
	{

		if (gKeyClassDictionary == nullptr)
		{
			if (bCopyKeyValue == false)
				gKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<Key, System::Int64>(other->gKeyClassDictionary);
			else
				gKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<Key, System::Int64>();
		}

		if (gIntKeyClassDictionary == nullptr)
		{
			if (bCopyKeyValue == false)
				gIntKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<System::Int64, Key>(other->gIntKeyClassDictionary);
			else
				gIntKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<System::Int64, Key>();
		}

		multiNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		KeyEndNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		RIterNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	}

	if (bCopyKeyValue)
	{
		for (auto iter = other->begin(); iter != other->end(); ++iter)
		{
			emplace(iter->GetKey(), iter->GetValue());
		}
	}
}