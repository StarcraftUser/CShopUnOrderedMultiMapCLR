#include "pch.h"

generic<typename Key, typename Value>
inline UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::CSharpUnOrderedMultiMap()
{
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
		multimapUnion->CPPmultimap1 = new UnOrderedMultiMap<unsigned char, unsigned char>();
		break;
	case 2:
		multimapUnion->CPPmultimap2 = new UnOrderedMultiMap<unsigned char, char>();
		break;
	case 3:
		multimapUnion->CPPmultimap3 = new UnOrderedMultiMap<unsigned char, short>();
		break;
	case 4:
		multimapUnion->CPPmultimap4 = new UnOrderedMultiMap<unsigned char, unsigned short>();
		break;
	case 5:
		multimapUnion->CPPmultimap5 = new UnOrderedMultiMap<unsigned char, int>();
		break;
	case 6:
		multimapUnion->CPPmultimap6 = new UnOrderedMultiMap<unsigned char, unsigned int>();
		break;
	case 7:
		multimapUnion->CPPmultimap7 = new UnOrderedMultiMap<unsigned char, long long>();
		break;
	case 8:
		multimapUnion->CPPmultimap8 = new UnOrderedMultiMap<unsigned char, unsigned long long>();
		break;
	case 9:
		multimapUnion->CPPmultimap9 = new UnOrderedMultiMap<unsigned char, float>();
		break;
	case 10:
		multimapUnion->CPPmultimap10 = new UnOrderedMultiMap<unsigned char, double>();
		break;
	case 11:
		multimapUnion->CPPmultimap11 = new UnOrderedMultiMap<unsigned char, wchar_t>();
		break;
	case 12:
		multimapUnion->CPPmultimap12 = new UnOrderedMultiMap<unsigned char, bool>();
		break;
	case 13:
		multimapUnion->CPPmultimap13 = new UnOrderedMultiMap<unsigned char, std::wstring>();
		break;
	case 14:
		multimapUnion->CPPmultimap14 = new UnOrderedMultiMap<unsigned char, __int64>();
		break;
	case 15:
		multimapUnion->CPPmultimap15 = new UnOrderedMultiMap<char, unsigned char>();
		break;
	case 16:
		multimapUnion->CPPmultimap16 = new UnOrderedMultiMap<char, char>();
		break;
	case 17:
		multimapUnion->CPPmultimap17 = new UnOrderedMultiMap<char, short>();
		break;
	case 18:
		multimapUnion->CPPmultimap18 = new UnOrderedMultiMap<char, unsigned short>();
		break;
	case 19:
		multimapUnion->CPPmultimap19 = new UnOrderedMultiMap<char, int>();
		break;
	case 20:
		multimapUnion->CPPmultimap20 = new UnOrderedMultiMap<char, unsigned int>();
		break;
	case 21:
		multimapUnion->CPPmultimap21 = new UnOrderedMultiMap<char, long long>();
		break;
	case 22:
		multimapUnion->CPPmultimap22 = new UnOrderedMultiMap<char, unsigned long long>();
		break;
	case 23:
		multimapUnion->CPPmultimap23 = new UnOrderedMultiMap<char, float>();
		break;
	case 24:
		multimapUnion->CPPmultimap24 = new UnOrderedMultiMap<char, double>();
		break;
	case 25:
		multimapUnion->CPPmultimap25 = new UnOrderedMultiMap<char, wchar_t>();
		break;
	case 26:
		multimapUnion->CPPmultimap26 = new UnOrderedMultiMap<char, bool>();
		break;
	case 27:
		multimapUnion->CPPmultimap27 = new UnOrderedMultiMap<char, std::wstring>();
		break;
	case 28:
		multimapUnion->CPPmultimap28 = new UnOrderedMultiMap<char, __int64>();
		break;
	case 29:
		multimapUnion->CPPmultimap29 = new UnOrderedMultiMap<short, unsigned char>();
		break;
	case 30:
		multimapUnion->CPPmultimap30 = new UnOrderedMultiMap<short, char>();
		break;
	case 31:
		multimapUnion->CPPmultimap31 = new UnOrderedMultiMap<short, short>();
		break;
	case 32:
		multimapUnion->CPPmultimap32 = new UnOrderedMultiMap<short, unsigned short>();
		break;
	case 33:
		multimapUnion->CPPmultimap33 = new UnOrderedMultiMap<short, int>();
		break;
	case 34:
		multimapUnion->CPPmultimap34 = new UnOrderedMultiMap<short, unsigned int>();
		break;
	case 35:
		multimapUnion->CPPmultimap35 = new UnOrderedMultiMap<short, long long>();
		break;
	case 36:
		multimapUnion->CPPmultimap36 = new UnOrderedMultiMap<short, unsigned long long>();
		break;
	case 37:
		multimapUnion->CPPmultimap37 = new UnOrderedMultiMap<short, float>();
		break;
	case 38:
		multimapUnion->CPPmultimap38 = new UnOrderedMultiMap<short, double>();
		break;
	case 39:
		multimapUnion->CPPmultimap39 = new UnOrderedMultiMap<short, wchar_t>();
		break;
	case 40:
		multimapUnion->CPPmultimap40 = new UnOrderedMultiMap<short, bool>();
		break;
	case 41:
		multimapUnion->CPPmultimap41 = new UnOrderedMultiMap<short, std::wstring>();
		break;
	case 42:
		multimapUnion->CPPmultimap42 = new UnOrderedMultiMap<short, __int64>();
		break;
	case 43:
		multimapUnion->CPPmultimap43 = new UnOrderedMultiMap<unsigned short, unsigned char>();
		break;
	case 44:
		multimapUnion->CPPmultimap44 = new UnOrderedMultiMap<unsigned short, char>();
		break;
	case 45:
		multimapUnion->CPPmultimap45 = new UnOrderedMultiMap<unsigned short, short>();
		break;
	case 46:
		multimapUnion->CPPmultimap46 = new UnOrderedMultiMap<unsigned short, unsigned short>();
		break;
	case 47:
		multimapUnion->CPPmultimap47 = new UnOrderedMultiMap<unsigned short, int>();
		break;
	case 48:
		multimapUnion->CPPmultimap48 = new UnOrderedMultiMap<unsigned short, unsigned int>();
		break;
	case 49:
		multimapUnion->CPPmultimap49 = new UnOrderedMultiMap<unsigned short, long long>();
		break;
	case 50:
		multimapUnion->CPPmultimap50 = new UnOrderedMultiMap<unsigned short, unsigned long long>();
		break;
	case 51:
		multimapUnion->CPPmultimap51 = new UnOrderedMultiMap<unsigned short, float>();
		break;
	case 52:
		multimapUnion->CPPmultimap52 = new UnOrderedMultiMap<unsigned short, double>();
		break;
	case 53:
		multimapUnion->CPPmultimap53 = new UnOrderedMultiMap<unsigned short, wchar_t>();
		break;
	case 54:
		multimapUnion->CPPmultimap54 = new UnOrderedMultiMap<unsigned short, bool>();
		break;
	case 55:
		multimapUnion->CPPmultimap55 = new UnOrderedMultiMap<unsigned short, std::wstring>();
		break;
	case 56:
		multimapUnion->CPPmultimap56 = new UnOrderedMultiMap<unsigned short, __int64>();
		break;
	case 57:
		multimapUnion->CPPmultimap57 = new UnOrderedMultiMap<int, unsigned char>();
		break;
	case 58:
		multimapUnion->CPPmultimap58 = new UnOrderedMultiMap<int, char>();
		break;
	case 59:
		multimapUnion->CPPmultimap59 = new UnOrderedMultiMap<int, short>();
		break;
	case 60:
		multimapUnion->CPPmultimap60 = new UnOrderedMultiMap<int, unsigned short>();
		break;
	case 61:
		multimapUnion->CPPmultimap61 = new UnOrderedMultiMap<int, int>();
		break;
	case 62:
		multimapUnion->CPPmultimap62 = new UnOrderedMultiMap<int, unsigned int>();
		break;
	case 63:
		multimapUnion->CPPmultimap63 = new UnOrderedMultiMap<int, long long>();
		break;
	case 64:
		multimapUnion->CPPmultimap64 = new UnOrderedMultiMap<int, unsigned long long>();
		break;
	case 65:
		multimapUnion->CPPmultimap65 = new UnOrderedMultiMap<int, float>();
		break;
	case 66:
		multimapUnion->CPPmultimap66 = new UnOrderedMultiMap<int, double>();
		break;
	case 67:
		multimapUnion->CPPmultimap67 = new UnOrderedMultiMap<int, wchar_t>();
		break;
	case 68:
		multimapUnion->CPPmultimap68 = new UnOrderedMultiMap<int, bool>();
		break;
	case 69:
		multimapUnion->CPPmultimap69 = new UnOrderedMultiMap<int, std::wstring>();
		break;
	case 70:
		multimapUnion->CPPmultimap70 = new UnOrderedMultiMap<int, __int64>();
		break;
	case 71:
		multimapUnion->CPPmultimap71 = new UnOrderedMultiMap<unsigned int, unsigned char>();
		break;
	case 72:
		multimapUnion->CPPmultimap72 = new UnOrderedMultiMap<unsigned int, char>();
		break;
	case 73:
		multimapUnion->CPPmultimap73 = new UnOrderedMultiMap<unsigned int, short>();
		break;
	case 74:
		multimapUnion->CPPmultimap74 = new UnOrderedMultiMap<unsigned int, unsigned short>();
		break;
	case 75:
		multimapUnion->CPPmultimap75 = new UnOrderedMultiMap<unsigned int, int>();
		break;
	case 76:
		multimapUnion->CPPmultimap76 = new UnOrderedMultiMap<unsigned int, unsigned int>();
		break;
	case 77:
		multimapUnion->CPPmultimap77 = new UnOrderedMultiMap<unsigned int, long long>();
		break;
	case 78:
		multimapUnion->CPPmultimap78 = new UnOrderedMultiMap<unsigned int, unsigned long long>();
		break;
	case 79:
		multimapUnion->CPPmultimap79 = new UnOrderedMultiMap<unsigned int, float>();
		break;
	case 80:
		multimapUnion->CPPmultimap80 = new UnOrderedMultiMap<unsigned int, double>();
		break;
	case 81:
		multimapUnion->CPPmultimap81 = new UnOrderedMultiMap<unsigned int, wchar_t>();
		break;
	case 82:
		multimapUnion->CPPmultimap82 = new UnOrderedMultiMap<unsigned int, bool>();
		break;
	case 83:
		multimapUnion->CPPmultimap83 = new UnOrderedMultiMap<unsigned int, std::wstring>();
		break;
	case 84:
		multimapUnion->CPPmultimap84 = new UnOrderedMultiMap<unsigned int, __int64>();
		break;
	case 85:
		multimapUnion->CPPmultimap85 = new UnOrderedMultiMap<long long, unsigned char>();
		break;
	case 86:
		multimapUnion->CPPmultimap86 = new UnOrderedMultiMap<long long, char>();
		break;
	case 87:
		multimapUnion->CPPmultimap87 = new UnOrderedMultiMap<long long, short>();
		break;
	case 88:
		multimapUnion->CPPmultimap88 = new UnOrderedMultiMap<long long, unsigned short>();
		break;
	case 89:
		multimapUnion->CPPmultimap89 = new UnOrderedMultiMap<long long, int>();
		break;
	case 90:
		multimapUnion->CPPmultimap90 = new UnOrderedMultiMap<long long, unsigned int>();
		break;
	case 91:
		multimapUnion->CPPmultimap91 = new UnOrderedMultiMap<long long, long long>();
		break;
	case 92:
		multimapUnion->CPPmultimap92 = new UnOrderedMultiMap<long long, unsigned long long>();
		break;
	case 93:
		multimapUnion->CPPmultimap93 = new UnOrderedMultiMap<long long, float>();
		break;
	case 94:
		multimapUnion->CPPmultimap94 = new UnOrderedMultiMap<long long, double>();
		break;
	case 95:
		multimapUnion->CPPmultimap95 = new UnOrderedMultiMap<long long, wchar_t>();
		break;
	case 96:
		multimapUnion->CPPmultimap96 = new UnOrderedMultiMap<long long, bool>();
		break;
	case 97:
		multimapUnion->CPPmultimap97 = new UnOrderedMultiMap<long long, std::wstring>();
		break;
	case 98:
		multimapUnion->CPPmultimap98 = new UnOrderedMultiMap<long long, __int64>();
		break;
	case 99:
		multimapUnion->CPPmultimap99 = new UnOrderedMultiMap<unsigned long long, unsigned char>();
		break;
	case 100:
		multimapUnion->CPPmultimap100 = new UnOrderedMultiMap<unsigned long long, char>();
		break;
	case 101:
		multimapUnion->CPPmultimap101 = new UnOrderedMultiMap<unsigned long long, short>();
		break;
	case 102:
		multimapUnion->CPPmultimap102 = new UnOrderedMultiMap<unsigned long long, unsigned short>();
		break;
	case 103:
		multimapUnion->CPPmultimap103 = new UnOrderedMultiMap<unsigned long long, int>();
		break;
	case 104:
		multimapUnion->CPPmultimap104 = new UnOrderedMultiMap<unsigned long long, unsigned int>();
		break;
	case 105:
		multimapUnion->CPPmultimap105 = new UnOrderedMultiMap<unsigned long long, long long>();
		break;
	case 106:
		multimapUnion->CPPmultimap106 = new UnOrderedMultiMap<unsigned long long, unsigned long long>();
		break;
	case 107:
		multimapUnion->CPPmultimap107 = new UnOrderedMultiMap<unsigned long long, float>();
		break;
	case 108:
		multimapUnion->CPPmultimap108 = new UnOrderedMultiMap<unsigned long long, double>();
		break;
	case 109:
		multimapUnion->CPPmultimap109 = new UnOrderedMultiMap<unsigned long long, wchar_t>();
		break;
	case 110:
		multimapUnion->CPPmultimap110 = new UnOrderedMultiMap<unsigned long long, bool>();
		break;
	case 111:
		multimapUnion->CPPmultimap111 = new UnOrderedMultiMap<unsigned long long, std::wstring>();
		break;
	case 112:
		multimapUnion->CPPmultimap112 = new UnOrderedMultiMap<unsigned long long, __int64>();
		break;
	case 113:
		multimapUnion->CPPmultimap113 = new UnOrderedMultiMap<float, unsigned char>();
		break;
	case 114:
		multimapUnion->CPPmultimap114 = new UnOrderedMultiMap<float, char>();
		break;
	case 115:
		multimapUnion->CPPmultimap115 = new UnOrderedMultiMap<float, short>();
		break;
	case 116:
		multimapUnion->CPPmultimap116 = new UnOrderedMultiMap<float, unsigned short>();
		break;
	case 117:
		multimapUnion->CPPmultimap117 = new UnOrderedMultiMap<float, int>();
		break;
	case 118:
		multimapUnion->CPPmultimap118 = new UnOrderedMultiMap<float, unsigned int>();
		break;
	case 119:
		multimapUnion->CPPmultimap119 = new UnOrderedMultiMap<float, long long>();
		break;
	case 120:
		multimapUnion->CPPmultimap120 = new UnOrderedMultiMap<float, unsigned long long>();
		break;
	case 121:
		multimapUnion->CPPmultimap121 = new UnOrderedMultiMap<float, float>();
		break;
	case 122:
		multimapUnion->CPPmultimap122 = new UnOrderedMultiMap<float, double>();
		break;
	case 123:
		multimapUnion->CPPmultimap123 = new UnOrderedMultiMap<float, wchar_t>();
		break;
	case 124:
		multimapUnion->CPPmultimap124 = new UnOrderedMultiMap<float, bool>();
		break;
	case 125:
		multimapUnion->CPPmultimap125 = new UnOrderedMultiMap<float, std::wstring>();
		break;
	case 126:
		multimapUnion->CPPmultimap126 = new UnOrderedMultiMap<float, __int64>();
		break;
	case 127:
		multimapUnion->CPPmultimap127 = new UnOrderedMultiMap<double, unsigned char>();
		break;
	case 128:
		multimapUnion->CPPmultimap128 = new UnOrderedMultiMap<double, char>();
		break;
	case 129:
		multimapUnion->CPPmultimap129 = new UnOrderedMultiMap<double, short>();
		break;
	case 130:
		multimapUnion->CPPmultimap130 = new UnOrderedMultiMap<double, unsigned short>();
		break;
	case 131:
		multimapUnion->CPPmultimap131 = new UnOrderedMultiMap<double, int>();
		break;
	case 132:
		multimapUnion->CPPmultimap132 = new UnOrderedMultiMap<double, unsigned int>();
		break;
	case 133:
		multimapUnion->CPPmultimap133 = new UnOrderedMultiMap<double, long long>();
		break;
	case 134:
		multimapUnion->CPPmultimap134 = new UnOrderedMultiMap<double, unsigned long long>();
		break;
	case 135:
		multimapUnion->CPPmultimap135 = new UnOrderedMultiMap<double, float>();
		break;
	case 136:
		multimapUnion->CPPmultimap136 = new UnOrderedMultiMap<double, double>();
		break;
	case 137:
		multimapUnion->CPPmultimap137 = new UnOrderedMultiMap<double, wchar_t>();
		break;
	case 138:
		multimapUnion->CPPmultimap138 = new UnOrderedMultiMap<double, bool>();
		break;
	case 139:
		multimapUnion->CPPmultimap139 = new UnOrderedMultiMap<double, std::wstring>();
		break;
	case 140:
		multimapUnion->CPPmultimap140 = new UnOrderedMultiMap<double, __int64>();
		break;
	case 141:
		multimapUnion->CPPmultimap141 = new UnOrderedMultiMap<wchar_t, unsigned char>();
		break;
	case 142:
		multimapUnion->CPPmultimap142 = new UnOrderedMultiMap<wchar_t, char>();
		break;
	case 143:
		multimapUnion->CPPmultimap143 = new UnOrderedMultiMap<wchar_t, short>();
		break;
	case 144:
		multimapUnion->CPPmultimap144 = new UnOrderedMultiMap<wchar_t, unsigned short>();
		break;
	case 145:
		multimapUnion->CPPmultimap145 = new UnOrderedMultiMap<wchar_t, int>();
		break;
	case 146:
		multimapUnion->CPPmultimap146 = new UnOrderedMultiMap<wchar_t, unsigned int>();
		break;
	case 147:
		multimapUnion->CPPmultimap147 = new UnOrderedMultiMap<wchar_t, long long>();
		break;
	case 148:
		multimapUnion->CPPmultimap148 = new UnOrderedMultiMap<wchar_t, unsigned long long>();
		break;
	case 149:
		multimapUnion->CPPmultimap149 = new UnOrderedMultiMap<wchar_t, float>();
		break;
	case 150:
		multimapUnion->CPPmultimap150 = new UnOrderedMultiMap<wchar_t, double>();
		break;
	case 151:
		multimapUnion->CPPmultimap151 = new UnOrderedMultiMap<wchar_t, wchar_t>();
		break;
	case 152:
		multimapUnion->CPPmultimap152 = new UnOrderedMultiMap<wchar_t, bool>();
		break;
	case 153:
		multimapUnion->CPPmultimap153 = new UnOrderedMultiMap<wchar_t, std::wstring>();
		break;
	case 154:
		multimapUnion->CPPmultimap154 = new UnOrderedMultiMap<wchar_t, __int64>();
		break;
	case 155:
		multimapUnion->CPPmultimap155 = new UnOrderedMultiMap<bool, unsigned char>();
		break;
	case 156:
		multimapUnion->CPPmultimap156 = new UnOrderedMultiMap<bool, char>();
		break;
	case 157:
		multimapUnion->CPPmultimap157 = new UnOrderedMultiMap<bool, short>();
		break;
	case 158:
		multimapUnion->CPPmultimap158 = new UnOrderedMultiMap<bool, unsigned short>();
		break;
	case 159:
		multimapUnion->CPPmultimap159 = new UnOrderedMultiMap<bool, int>();
		break;
	case 160:
		multimapUnion->CPPmultimap160 = new UnOrderedMultiMap<bool, unsigned int>();
		break;
	case 161:
		multimapUnion->CPPmultimap161 = new UnOrderedMultiMap<bool, long long>();
		break;
	case 162:
		multimapUnion->CPPmultimap162 = new UnOrderedMultiMap<bool, unsigned long long>();
		break;
	case 163:
		multimapUnion->CPPmultimap163 = new UnOrderedMultiMap<bool, float>();
		break;
	case 164:
		multimapUnion->CPPmultimap164 = new UnOrderedMultiMap<bool, double>();
		break;
	case 165:
		multimapUnion->CPPmultimap165 = new UnOrderedMultiMap<bool, wchar_t>();
		break;
	case 166:
		multimapUnion->CPPmultimap166 = new UnOrderedMultiMap<bool, bool>();
		break;
	case 167:
		multimapUnion->CPPmultimap167 = new UnOrderedMultiMap<bool, std::wstring>();
		break;
	case 168:
		multimapUnion->CPPmultimap168 = new UnOrderedMultiMap<bool, __int64>();
		break;
	case 169:
		multimapUnion->CPPmultimap169 = new UnOrderedMultiMap<std::wstring, unsigned char>();
		break;
	case 170:
		multimapUnion->CPPmultimap170 = new UnOrderedMultiMap<std::wstring, char>();
		break;
	case 171:
		multimapUnion->CPPmultimap171 = new UnOrderedMultiMap<std::wstring, short>();
		break;
	case 172:
		multimapUnion->CPPmultimap172 = new UnOrderedMultiMap<std::wstring, unsigned short>();
		break;
	case 173:
		multimapUnion->CPPmultimap173 = new UnOrderedMultiMap<std::wstring, int>();
		break;
	case 174:
		multimapUnion->CPPmultimap174 = new UnOrderedMultiMap<std::wstring, unsigned int>();
		break;
	case 175:
		multimapUnion->CPPmultimap175 = new UnOrderedMultiMap<std::wstring, long long>();
		break;
	case 176:
		multimapUnion->CPPmultimap176 = new UnOrderedMultiMap<std::wstring, unsigned long long>();
		break;
	case 177:
		multimapUnion->CPPmultimap177 = new UnOrderedMultiMap<std::wstring, float>();
		break;
	case 178:
		multimapUnion->CPPmultimap178 = new UnOrderedMultiMap<std::wstring, double>();
		break;
	case 179:
		multimapUnion->CPPmultimap179 = new UnOrderedMultiMap<std::wstring, wchar_t>();
		break;
	case 180:
		multimapUnion->CPPmultimap180 = new UnOrderedMultiMap<std::wstring, bool>();
		break;
	case 181:
		multimapUnion->CPPmultimap181 = new UnOrderedMultiMap<std::wstring, std::wstring>();
		break;
	case 182:
		multimapUnion->CPPmultimap182 = new UnOrderedMultiMap<std::wstring, __int64>();
		break;
	case 183:
		multimapUnion->CPPmultimap183 = new UnOrderedMultiMap<__int64, unsigned char>();
		break;
	case 184:
		multimapUnion->CPPmultimap184 = new UnOrderedMultiMap<__int64, char>();
		break;
	case 185:
		multimapUnion->CPPmultimap185 = new UnOrderedMultiMap<__int64, short>();
		break;
	case 186:
		multimapUnion->CPPmultimap186 = new UnOrderedMultiMap<__int64, unsigned short>();
		break;
	case 187:
		multimapUnion->CPPmultimap187 = new UnOrderedMultiMap<__int64, int>();
		break;
	case 188:
		multimapUnion->CPPmultimap188 = new UnOrderedMultiMap<__int64, unsigned int>();
		break;
	case 189:
		multimapUnion->CPPmultimap189 = new UnOrderedMultiMap<__int64, long long>();
		break;
	case 190:
		multimapUnion->CPPmultimap190 = new UnOrderedMultiMap<__int64, unsigned long long>();
		break;
	case 191:
		multimapUnion->CPPmultimap191 = new UnOrderedMultiMap<__int64, float>();
		break;
	case 192:
		multimapUnion->CPPmultimap192 = new UnOrderedMultiMap<__int64, double>();
		break;
	case 193:
		multimapUnion->CPPmultimap193 = new UnOrderedMultiMap<__int64, wchar_t>();
		break;
	case 194:
		multimapUnion->CPPmultimap194 = new UnOrderedMultiMap<__int64, bool>();
		break;
	case 195:
		multimapUnion->CPPmultimap195 = new UnOrderedMultiMap<__int64, std::wstring>();
		break;
	case 196:
		multimapUnion->CPPmultimap196 = new UnOrderedMultiMap<__int64, __int64>();
		break;
	}

	if (bgClassValueDictionaryInit == true)
		if (gValueClassDictionary == nullptr)
			gValueClassDictionary = gcnew System::Collections::Generic::Dictionary<System::Int64, Value>();
	if (bgClassKeyDictionaryInit == true)
	{

		if (gKeyClassDictionary == nullptr)
			gKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<Key, System::Int64>();

		if (gIntKeyClassDictionary == nullptr)
			gIntKeyClassDictionary = gcnew System::Collections::Generic::Dictionary<System::Int64, Key>();

		multiNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		KeyEndNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
		RIterNode->SetIntKeyClassDictionary(gIntKeyClassDictionary);
	}
}
