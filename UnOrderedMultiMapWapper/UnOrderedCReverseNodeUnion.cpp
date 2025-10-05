#include "pch.h"

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::CShorpUnOrderedCReverseNode()
{
	gIntKeyClassDictionary = nullptr;
	gValueClassDictionary = nullptr;
	creverseNodeUnion = new Utilities::UnOrderedCReverseNodeUnion();
	Type^ keyType = Key::typeid;
	Type^ valueType = Value::typeid;
	int KeyNum = 0;
	int ValueNum = 0;

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
	}
	else if (keyType->IsValueType && !keyType->IsPrimitive && !keyType->IsEnum)
	{
		KeyNum = 14 * 13;
	}
	else if (keyType->IsInterface)
	{
		KeyNum = 14 * 13;
	}
	else if (keyType->IsEnum)
	{
		KeyNum = 14 * 13;
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
	}
	else if (valueType->IsValueType && !valueType->IsPrimitive && !valueType->IsEnum)
	{
		ValueNum = 14;
	}
	else if (valueType->IsInterface)
	{
		ValueNum = 14;
	}
	else if (valueType->IsEnum)
	{
		ValueNum = 14;
	}
	else
	{
		ValueNum = 200;
	}

	nKeyValueType = KeyNum + ValueNum;

	switch (nKeyValueType)
	{
	case 0: default:
		creverseNodeUnion->ptrToDelete = nullptr;
		break;
	case 1:
		creverseNodeUnion->CPPcreversenode1 = new UnOrderedCReverseNode<unsigned char, unsigned char>();
		break;
	case 2:
		creverseNodeUnion->CPPcreversenode2 = new UnOrderedCReverseNode<unsigned char, char>();
		break;
	case 3:
		creverseNodeUnion->CPPcreversenode3 = new UnOrderedCReverseNode<unsigned char, short>();
		break;
	case 4:
		creverseNodeUnion->CPPcreversenode4 = new UnOrderedCReverseNode<unsigned char, unsigned short>();
		break;
	case 5:
		creverseNodeUnion->CPPcreversenode5 = new UnOrderedCReverseNode<unsigned char, int>();
		break;
	case 6:
		creverseNodeUnion->CPPcreversenode6 = new UnOrderedCReverseNode<unsigned char, unsigned int>();
		break;
	case 7:
		creverseNodeUnion->CPPcreversenode7 = new UnOrderedCReverseNode<unsigned char, long long>();
		break;
	case 8:
		creverseNodeUnion->CPPcreversenode8 = new UnOrderedCReverseNode<unsigned char, unsigned long long>();
		break;
	case 9:
		creverseNodeUnion->CPPcreversenode9 = new UnOrderedCReverseNode<unsigned char, float>();
		break;
	case 10:
		creverseNodeUnion->CPPcreversenode10 = new UnOrderedCReverseNode<unsigned char, double>();
		break;
	case 11:
		creverseNodeUnion->CPPcreversenode11 = new UnOrderedCReverseNode<unsigned char, wchar_t>();
		break;
	case 12:
		creverseNodeUnion->CPPcreversenode12 = new UnOrderedCReverseNode<unsigned char, bool>();
		break;
	case 13:
		creverseNodeUnion->CPPcreversenode13 = new UnOrderedCReverseNode<unsigned char, std::wstring>();
		break;
	case 14:
		creverseNodeUnion->CPPcreversenode14 = new UnOrderedCReverseNode<unsigned char, __int64>();
		break;
	case 15:
		creverseNodeUnion->CPPcreversenode15 = new UnOrderedCReverseNode<char, unsigned char>();
		break;
	case 16:
		creverseNodeUnion->CPPcreversenode16 = new UnOrderedCReverseNode<char, char>();
		break;
	case 17:
		creverseNodeUnion->CPPcreversenode17 = new UnOrderedCReverseNode<char, short>();
		break;
	case 18:
		creverseNodeUnion->CPPcreversenode18 = new UnOrderedCReverseNode<char, unsigned short>();
		break;
	case 19:
		creverseNodeUnion->CPPcreversenode19 = new UnOrderedCReverseNode<char, int>();
		break;
	case 20:
		creverseNodeUnion->CPPcreversenode20 = new UnOrderedCReverseNode<char, unsigned int>();
		break;
	case 21:
		creverseNodeUnion->CPPcreversenode21 = new UnOrderedCReverseNode<char, long long>();
		break;
	case 22:
		creverseNodeUnion->CPPcreversenode22 = new UnOrderedCReverseNode<char, unsigned long long>();
		break;
	case 23:
		creverseNodeUnion->CPPcreversenode23 = new UnOrderedCReverseNode<char, float>();
		break;
	case 24:
		creverseNodeUnion->CPPcreversenode24 = new UnOrderedCReverseNode<char, double>();
		break;
	case 25:
		creverseNodeUnion->CPPcreversenode25 = new UnOrderedCReverseNode<char, wchar_t>();
		break;
	case 26:
		creverseNodeUnion->CPPcreversenode26 = new UnOrderedCReverseNode<char, bool>();
		break;
	case 27:
		creverseNodeUnion->CPPcreversenode27 = new UnOrderedCReverseNode<char, std::wstring>();
		break;
	case 28:
		creverseNodeUnion->CPPcreversenode28 = new UnOrderedCReverseNode<char, __int64>();
		break;
	case 29:
		creverseNodeUnion->CPPcreversenode29 = new UnOrderedCReverseNode<short, unsigned char>();
		break;
	case 30:
		creverseNodeUnion->CPPcreversenode30 = new UnOrderedCReverseNode<short, char>();
		break;
	case 31:
		creverseNodeUnion->CPPcreversenode31 = new UnOrderedCReverseNode<short, short>();
		break;
	case 32:
		creverseNodeUnion->CPPcreversenode32 = new UnOrderedCReverseNode<short, unsigned short>();
		break;
	case 33:
		creverseNodeUnion->CPPcreversenode33 = new UnOrderedCReverseNode<short, int>();
		break;
	case 34:
		creverseNodeUnion->CPPcreversenode34 = new UnOrderedCReverseNode<short, unsigned int>();
		break;
	case 35:
		creverseNodeUnion->CPPcreversenode35 = new UnOrderedCReverseNode<short, long long>();
		break;
	case 36:
		creverseNodeUnion->CPPcreversenode36 = new UnOrderedCReverseNode<short, unsigned long long>();
		break;
	case 37:
		creverseNodeUnion->CPPcreversenode37 = new UnOrderedCReverseNode<short, float>();
		break;
	case 38:
		creverseNodeUnion->CPPcreversenode38 = new UnOrderedCReverseNode<short, double>();
		break;
	case 39:
		creverseNodeUnion->CPPcreversenode39 = new UnOrderedCReverseNode<short, wchar_t>();
		break;
	case 40:
		creverseNodeUnion->CPPcreversenode40 = new UnOrderedCReverseNode<short, bool>();
		break;
	case 41:
		creverseNodeUnion->CPPcreversenode41 = new UnOrderedCReverseNode<short, std::wstring>();
		break;
	case 42:
		creverseNodeUnion->CPPcreversenode42 = new UnOrderedCReverseNode<short, __int64>();
		break;
	case 43:
		creverseNodeUnion->CPPcreversenode43 = new UnOrderedCReverseNode<unsigned short, unsigned char>();
		break;
	case 44:
		creverseNodeUnion->CPPcreversenode44 = new UnOrderedCReverseNode<unsigned short, char>();
		break;
	case 45:
		creverseNodeUnion->CPPcreversenode45 = new UnOrderedCReverseNode<unsigned short, short>();
		break;
	case 46:
		creverseNodeUnion->CPPcreversenode46 = new UnOrderedCReverseNode<unsigned short, unsigned short>();
		break;
	case 47:
		creverseNodeUnion->CPPcreversenode47 = new UnOrderedCReverseNode<unsigned short, int>();
		break;
	case 48:
		creverseNodeUnion->CPPcreversenode48 = new UnOrderedCReverseNode<unsigned short, unsigned int>();
		break;
	case 49:
		creverseNodeUnion->CPPcreversenode49 = new UnOrderedCReverseNode<unsigned short, long long>();
		break;
	case 50:
		creverseNodeUnion->CPPcreversenode50 = new UnOrderedCReverseNode<unsigned short, unsigned long long>();
		break;
	case 51:
		creverseNodeUnion->CPPcreversenode51 = new UnOrderedCReverseNode<unsigned short, float>();
		break;
	case 52:
		creverseNodeUnion->CPPcreversenode52 = new UnOrderedCReverseNode<unsigned short, double>();
		break;
	case 53:
		creverseNodeUnion->CPPcreversenode53 = new UnOrderedCReverseNode<unsigned short, wchar_t>();
		break;
	case 54:
		creverseNodeUnion->CPPcreversenode54 = new UnOrderedCReverseNode<unsigned short, bool>();
		break;
	case 55:
		creverseNodeUnion->CPPcreversenode55 = new UnOrderedCReverseNode<unsigned short, std::wstring>();
		break;
	case 56:
		creverseNodeUnion->CPPcreversenode56 = new UnOrderedCReverseNode<unsigned short, __int64>();
		break;
	case 57:
		creverseNodeUnion->CPPcreversenode57 = new UnOrderedCReverseNode<int, unsigned char>();
		break;
	case 58:
		creverseNodeUnion->CPPcreversenode58 = new UnOrderedCReverseNode<int, char>();
		break;
	case 59:
		creverseNodeUnion->CPPcreversenode59 = new UnOrderedCReverseNode<int, short>();
		break;
	case 60:
		creverseNodeUnion->CPPcreversenode60 = new UnOrderedCReverseNode<int, unsigned short>();
		break;
	case 61:
		creverseNodeUnion->CPPcreversenode61 = new UnOrderedCReverseNode<int, int>();
		break;
	case 62:
		creverseNodeUnion->CPPcreversenode62 = new UnOrderedCReverseNode<int, unsigned int>();
		break;
	case 63:
		creverseNodeUnion->CPPcreversenode63 = new UnOrderedCReverseNode<int, long long>();
		break;
	case 64:
		creverseNodeUnion->CPPcreversenode64 = new UnOrderedCReverseNode<int, unsigned long long>();
		break;
	case 65:
		creverseNodeUnion->CPPcreversenode65 = new UnOrderedCReverseNode<int, float>();
		break;
	case 66:
		creverseNodeUnion->CPPcreversenode66 = new UnOrderedCReverseNode<int, double>();
		break;
	case 67:
		creverseNodeUnion->CPPcreversenode67 = new UnOrderedCReverseNode<int, wchar_t>();
		break;
	case 68:
		creverseNodeUnion->CPPcreversenode68 = new UnOrderedCReverseNode<int, bool>();
		break;
	case 69:
		creverseNodeUnion->CPPcreversenode69 = new UnOrderedCReverseNode<int, std::wstring>();
		break;
	case 70:
		creverseNodeUnion->CPPcreversenode70 = new UnOrderedCReverseNode<int, __int64>();
		break;
	case 71:
		creverseNodeUnion->CPPcreversenode71 = new UnOrderedCReverseNode<unsigned int, unsigned char>();
		break;
	case 72:
		creverseNodeUnion->CPPcreversenode72 = new UnOrderedCReverseNode<unsigned int, char>();
		break;
	case 73:
		creverseNodeUnion->CPPcreversenode73 = new UnOrderedCReverseNode<unsigned int, short>();
		break;
	case 74:
		creverseNodeUnion->CPPcreversenode74 = new UnOrderedCReverseNode<unsigned int, unsigned short>();
		break;
	case 75:
		creverseNodeUnion->CPPcreversenode75 = new UnOrderedCReverseNode<unsigned int, int>();
		break;
	case 76:
		creverseNodeUnion->CPPcreversenode76 = new UnOrderedCReverseNode<unsigned int, unsigned int>();
		break;
	case 77:
		creverseNodeUnion->CPPcreversenode77 = new UnOrderedCReverseNode<unsigned int, long long>();
		break;
	case 78:
		creverseNodeUnion->CPPcreversenode78 = new UnOrderedCReverseNode<unsigned int, unsigned long long>();
		break;
	case 79:
		creverseNodeUnion->CPPcreversenode79 = new UnOrderedCReverseNode<unsigned int, float>();
		break;
	case 80:
		creverseNodeUnion->CPPcreversenode80 = new UnOrderedCReverseNode<unsigned int, double>();
		break;
	case 81:
		creverseNodeUnion->CPPcreversenode81 = new UnOrderedCReverseNode<unsigned int, wchar_t>();
		break;
	case 82:
		creverseNodeUnion->CPPcreversenode82 = new UnOrderedCReverseNode<unsigned int, bool>();
		break;
	case 83:
		creverseNodeUnion->CPPcreversenode83 = new UnOrderedCReverseNode<unsigned int, std::wstring>();
		break;
	case 84:
		creverseNodeUnion->CPPcreversenode84 = new UnOrderedCReverseNode<unsigned int, __int64>();
		break;
	case 85:
		creverseNodeUnion->CPPcreversenode85 = new UnOrderedCReverseNode<long long, unsigned char>();
		break;
	case 86:
		creverseNodeUnion->CPPcreversenode86 = new UnOrderedCReverseNode<long long, char>();
		break;
	case 87:
		creverseNodeUnion->CPPcreversenode87 = new UnOrderedCReverseNode<long long, short>();
		break;
	case 88:
		creverseNodeUnion->CPPcreversenode88 = new UnOrderedCReverseNode<long long, unsigned short>();
		break;
	case 89:
		creverseNodeUnion->CPPcreversenode89 = new UnOrderedCReverseNode<long long, int>();
		break;
	case 90:
		creverseNodeUnion->CPPcreversenode90 = new UnOrderedCReverseNode<long long, unsigned int>();
		break;
	case 91:
		creverseNodeUnion->CPPcreversenode91 = new UnOrderedCReverseNode<long long, long long>();
		break;
	case 92:
		creverseNodeUnion->CPPcreversenode92 = new UnOrderedCReverseNode<long long, unsigned long long>();
		break;
	case 93:
		creverseNodeUnion->CPPcreversenode93 = new UnOrderedCReverseNode<long long, float>();
		break;
	case 94:
		creverseNodeUnion->CPPcreversenode94 = new UnOrderedCReverseNode<long long, double>();
		break;
	case 95:
		creverseNodeUnion->CPPcreversenode95 = new UnOrderedCReverseNode<long long, wchar_t>();
		break;
	case 96:
		creverseNodeUnion->CPPcreversenode96 = new UnOrderedCReverseNode<long long, bool>();
		break;
	case 97:
		creverseNodeUnion->CPPcreversenode97 = new UnOrderedCReverseNode<long long, std::wstring>();
		break;
	case 98:
		creverseNodeUnion->CPPcreversenode98 = new UnOrderedCReverseNode<long long, __int64>();
		break;
	case 99:
		creverseNodeUnion->CPPcreversenode99 = new UnOrderedCReverseNode<unsigned long long, unsigned char>();
		break;
	case 100:
		creverseNodeUnion->CPPcreversenode100 = new UnOrderedCReverseNode<unsigned long long, char>();
		break;
	case 101:
		creverseNodeUnion->CPPcreversenode101 = new UnOrderedCReverseNode<unsigned long long, short>();
		break;
	case 102:
		creverseNodeUnion->CPPcreversenode102 = new UnOrderedCReverseNode<unsigned long long, unsigned short>();
		break;
	case 103:
		creverseNodeUnion->CPPcreversenode103 = new UnOrderedCReverseNode<unsigned long long, int>();
		break;
	case 104:
		creverseNodeUnion->CPPcreversenode104 = new UnOrderedCReverseNode<unsigned long long, unsigned int>();
		break;
	case 105:
		creverseNodeUnion->CPPcreversenode105 = new UnOrderedCReverseNode<unsigned long long, long long>();
		break;
	case 106:
		creverseNodeUnion->CPPcreversenode106 = new UnOrderedCReverseNode<unsigned long long, unsigned long long>();
		break;
	case 107:
		creverseNodeUnion->CPPcreversenode107 = new UnOrderedCReverseNode<unsigned long long, float>();
		break;
	case 108:
		creverseNodeUnion->CPPcreversenode108 = new UnOrderedCReverseNode<unsigned long long, double>();
		break;
	case 109:
		creverseNodeUnion->CPPcreversenode109 = new UnOrderedCReverseNode<unsigned long long, wchar_t>();
		break;
	case 110:
		creverseNodeUnion->CPPcreversenode110 = new UnOrderedCReverseNode<unsigned long long, bool>();
		break;
	case 111:
		creverseNodeUnion->CPPcreversenode111 = new UnOrderedCReverseNode<unsigned long long, std::wstring>();
		break;
	case 112:
		creverseNodeUnion->CPPcreversenode112 = new UnOrderedCReverseNode<unsigned long long, __int64>();
		break;
	case 113:
		creverseNodeUnion->CPPcreversenode113 = new UnOrderedCReverseNode<float, unsigned char>();
		break;
	case 114:
		creverseNodeUnion->CPPcreversenode114 = new UnOrderedCReverseNode<float, char>();
		break;
	case 115:
		creverseNodeUnion->CPPcreversenode115 = new UnOrderedCReverseNode<float, short>();
		break;
	case 116:
		creverseNodeUnion->CPPcreversenode116 = new UnOrderedCReverseNode<float, unsigned short>();
		break;
	case 117:
		creverseNodeUnion->CPPcreversenode117 = new UnOrderedCReverseNode<float, int>();
		break;
	case 118:
		creverseNodeUnion->CPPcreversenode118 = new UnOrderedCReverseNode<float, unsigned int>();
		break;
	case 119:
		creverseNodeUnion->CPPcreversenode119 = new UnOrderedCReverseNode<float, long long>();
		break;
	case 120:
		creverseNodeUnion->CPPcreversenode120 = new UnOrderedCReverseNode<float, unsigned long long>();
		break;
	case 121:
		creverseNodeUnion->CPPcreversenode121 = new UnOrderedCReverseNode<float, float>();
		break;
	case 122:
		creverseNodeUnion->CPPcreversenode122 = new UnOrderedCReverseNode<float, double>();
		break;
	case 123:
		creverseNodeUnion->CPPcreversenode123 = new UnOrderedCReverseNode<float, wchar_t>();
		break;
	case 124:
		creverseNodeUnion->CPPcreversenode124 = new UnOrderedCReverseNode<float, bool>();
		break;
	case 125:
		creverseNodeUnion->CPPcreversenode125 = new UnOrderedCReverseNode<float, std::wstring>();
		break;
	case 126:
		creverseNodeUnion->CPPcreversenode126 = new UnOrderedCReverseNode<float, __int64>();
		break;
	case 127:
		creverseNodeUnion->CPPcreversenode127 = new UnOrderedCReverseNode<double, unsigned char>();
		break;
	case 128:
		creverseNodeUnion->CPPcreversenode128 = new UnOrderedCReverseNode<double, char>();
		break;
	case 129:
		creverseNodeUnion->CPPcreversenode129 = new UnOrderedCReverseNode<double, short>();
		break;
	case 130:
		creverseNodeUnion->CPPcreversenode130 = new UnOrderedCReverseNode<double, unsigned short>();
		break;
	case 131:
		creverseNodeUnion->CPPcreversenode131 = new UnOrderedCReverseNode<double, int>();
		break;
	case 132:
		creverseNodeUnion->CPPcreversenode132 = new UnOrderedCReverseNode<double, unsigned int>();
		break;
	case 133:
		creverseNodeUnion->CPPcreversenode133 = new UnOrderedCReverseNode<double, long long>();
		break;
	case 134:
		creverseNodeUnion->CPPcreversenode134 = new UnOrderedCReverseNode<double, unsigned long long>();
		break;
	case 135:
		creverseNodeUnion->CPPcreversenode135 = new UnOrderedCReverseNode<double, float>();
		break;
	case 136:
		creverseNodeUnion->CPPcreversenode136 = new UnOrderedCReverseNode<double, double>();
		break;
	case 137:
		creverseNodeUnion->CPPcreversenode137 = new UnOrderedCReverseNode<double, wchar_t>();
		break;
	case 138:
		creverseNodeUnion->CPPcreversenode138 = new UnOrderedCReverseNode<double, bool>();
		break;
	case 139:
		creverseNodeUnion->CPPcreversenode139 = new UnOrderedCReverseNode<double, std::wstring>();
		break;
	case 140:
		creverseNodeUnion->CPPcreversenode140 = new UnOrderedCReverseNode<double, __int64>();
		break;
	case 141:
		creverseNodeUnion->CPPcreversenode141 = new UnOrderedCReverseNode<wchar_t, unsigned char>();
		break;
	case 142:
		creverseNodeUnion->CPPcreversenode142 = new UnOrderedCReverseNode<wchar_t, char>();
		break;
	case 143:
		creverseNodeUnion->CPPcreversenode143 = new UnOrderedCReverseNode<wchar_t, short>();
		break;
	case 144:
		creverseNodeUnion->CPPcreversenode144 = new UnOrderedCReverseNode<wchar_t, unsigned short>();
		break;
	case 145:
		creverseNodeUnion->CPPcreversenode145 = new UnOrderedCReverseNode<wchar_t, int>();
		break;
	case 146:
		creverseNodeUnion->CPPcreversenode146 = new UnOrderedCReverseNode<wchar_t, unsigned int>();
		break;
	case 147:
		creverseNodeUnion->CPPcreversenode147 = new UnOrderedCReverseNode<wchar_t, long long>();
		break;
	case 148:
		creverseNodeUnion->CPPcreversenode148 = new UnOrderedCReverseNode<wchar_t, unsigned long long>();
		break;
	case 149:
		creverseNodeUnion->CPPcreversenode149 = new UnOrderedCReverseNode<wchar_t, float>();
		break;
	case 150:
		creverseNodeUnion->CPPcreversenode150 = new UnOrderedCReverseNode<wchar_t, double>();
		break;
	case 151:
		creverseNodeUnion->CPPcreversenode151 = new UnOrderedCReverseNode<wchar_t, wchar_t>();
		break;
	case 152:
		creverseNodeUnion->CPPcreversenode152 = new UnOrderedCReverseNode<wchar_t, bool>();
		break;
	case 153:
		creverseNodeUnion->CPPcreversenode153 = new UnOrderedCReverseNode<wchar_t, std::wstring>();
		break;
	case 154:
		creverseNodeUnion->CPPcreversenode154 = new UnOrderedCReverseNode<wchar_t, __int64>();
		break;
	case 155:
		creverseNodeUnion->CPPcreversenode155 = new UnOrderedCReverseNode<bool, unsigned char>();
		break;
	case 156:
		creverseNodeUnion->CPPcreversenode156 = new UnOrderedCReverseNode<bool, char>();
		break;
	case 157:
		creverseNodeUnion->CPPcreversenode157 = new UnOrderedCReverseNode<bool, short>();
		break;
	case 158:
		creverseNodeUnion->CPPcreversenode158 = new UnOrderedCReverseNode<bool, unsigned short>();
		break;
	case 159:
		creverseNodeUnion->CPPcreversenode159 = new UnOrderedCReverseNode<bool, int>();
		break;
	case 160:
		creverseNodeUnion->CPPcreversenode160 = new UnOrderedCReverseNode<bool, unsigned int>();
		break;
	case 161:
		creverseNodeUnion->CPPcreversenode161 = new UnOrderedCReverseNode<bool, long long>();
		break;
	case 162:
		creverseNodeUnion->CPPcreversenode162 = new UnOrderedCReverseNode<bool, unsigned long long>();
		break;
	case 163:
		creverseNodeUnion->CPPcreversenode163 = new UnOrderedCReverseNode<bool, float>();
		break;
	case 164:
		creverseNodeUnion->CPPcreversenode164 = new UnOrderedCReverseNode<bool, double>();
		break;
	case 165:
		creverseNodeUnion->CPPcreversenode165 = new UnOrderedCReverseNode<bool, wchar_t>();
		break;
	case 166:
		creverseNodeUnion->CPPcreversenode166 = new UnOrderedCReverseNode<bool, bool>();
		break;
	case 167:
		creverseNodeUnion->CPPcreversenode167 = new UnOrderedCReverseNode<bool, std::wstring>();
		break;
	case 168:
		creverseNodeUnion->CPPcreversenode168 = new UnOrderedCReverseNode<bool, __int64>();
		break;
	case 169:
		creverseNodeUnion->CPPcreversenode169 = new UnOrderedCReverseNode<std::wstring, unsigned char>();
		break;
	case 170:
		creverseNodeUnion->CPPcreversenode170 = new UnOrderedCReverseNode<std::wstring, char>();
		break;
	case 171:
		creverseNodeUnion->CPPcreversenode171 = new UnOrderedCReverseNode<std::wstring, short>();
		break;
	case 172:
		creverseNodeUnion->CPPcreversenode172 = new UnOrderedCReverseNode<std::wstring, unsigned short>();
		break;
	case 173:
		creverseNodeUnion->CPPcreversenode173 = new UnOrderedCReverseNode<std::wstring, int>();
		break;
	case 174:
		creverseNodeUnion->CPPcreversenode174 = new UnOrderedCReverseNode<std::wstring, unsigned int>();
		break;
	case 175:
		creverseNodeUnion->CPPcreversenode175 = new UnOrderedCReverseNode<std::wstring, long long>();
		break;
	case 176:
		creverseNodeUnion->CPPcreversenode176 = new UnOrderedCReverseNode<std::wstring, unsigned long long>();
		break;
	case 177:
		creverseNodeUnion->CPPcreversenode177 = new UnOrderedCReverseNode<std::wstring, float>();
		break;
	case 178:
		creverseNodeUnion->CPPcreversenode178 = new UnOrderedCReverseNode<std::wstring, double>();
		break;
	case 179:
		creverseNodeUnion->CPPcreversenode179 = new UnOrderedCReverseNode<std::wstring, wchar_t>();
		break;
	case 180:
		creverseNodeUnion->CPPcreversenode180 = new UnOrderedCReverseNode<std::wstring, bool>();
		break;
	case 181:
		creverseNodeUnion->CPPcreversenode181 = new UnOrderedCReverseNode<std::wstring, std::wstring>();
		break;
	case 182:
		creverseNodeUnion->CPPcreversenode182 = new UnOrderedCReverseNode<std::wstring, __int64>();
		break;
	case 183:
		creverseNodeUnion->CPPcreversenode183 = new UnOrderedCReverseNode<__int64, unsigned char>();
		break;
	case 184:
		creverseNodeUnion->CPPcreversenode184 = new UnOrderedCReverseNode<__int64, char>();
		break;
	case 185:
		creverseNodeUnion->CPPcreversenode185 = new UnOrderedCReverseNode<__int64, short>();
		break;
	case 186:
		creverseNodeUnion->CPPcreversenode186 = new UnOrderedCReverseNode<__int64, unsigned short>();
		break;
	case 187:
		creverseNodeUnion->CPPcreversenode187 = new UnOrderedCReverseNode<__int64, int>();
		break;
	case 188:
		creverseNodeUnion->CPPcreversenode188 = new UnOrderedCReverseNode<__int64, unsigned int>();
		break;
	case 189:
		creverseNodeUnion->CPPcreversenode189 = new UnOrderedCReverseNode<__int64, long long>();
		break;
	case 190:
		creverseNodeUnion->CPPcreversenode190 = new UnOrderedCReverseNode<__int64, unsigned long long>();
		break;
	case 191:
		creverseNodeUnion->CPPcreversenode191 = new UnOrderedCReverseNode<__int64, float>();
		break;
	case 192:
		creverseNodeUnion->CPPcreversenode192 = new UnOrderedCReverseNode<__int64, double>();
		break;
	case 193:
		creverseNodeUnion->CPPcreversenode193 = new UnOrderedCReverseNode<__int64, wchar_t>();
		break;
	case 194:
		creverseNodeUnion->CPPcreversenode194 = new UnOrderedCReverseNode<__int64, bool>();
		break;
	case 195:
		creverseNodeUnion->CPPcreversenode195 = new UnOrderedCReverseNode<__int64, std::wstring>();
		break;
	case 196:
		creverseNodeUnion->CPPcreversenode196 = new UnOrderedCReverseNode<__int64, __int64>();
		break;
	}
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::~CShorpUnOrderedCReverseNode()
{
	if (creverseNodeUnion->ptrToDelete) delete creverseNodeUnion->ptrToDelete;
	if (creverseNodeUnion) delete creverseNodeUnion;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::DeepCopy()
{
	CShorpUnOrderedCReverseNode<Key, Value>^ newCopy = gcnew CShorpUnOrderedCReverseNode<Key, Value>();
	newCopy->nKeyValueType = this->nKeyValueType;
	newCopy->isInitialized = this->isInitialized;
	newCopy %= this;
	return newCopy;
}

#define UnOrderedCReverseNode_Next_CASE(NUM) \
	case NUM: \
		(*(creverseNodeUnion->CPPcreversenode##NUM))++; \
		return;

generic<typename Key, typename Value>
inline void UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::Next()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		UnOrderedCReverseNode_Next_CASE(1)
		UnOrderedCReverseNode_Next_CASE(2)
		UnOrderedCReverseNode_Next_CASE(3)
		UnOrderedCReverseNode_Next_CASE(4)
		UnOrderedCReverseNode_Next_CASE(5)
		UnOrderedCReverseNode_Next_CASE(6)
		UnOrderedCReverseNode_Next_CASE(7)
		UnOrderedCReverseNode_Next_CASE(8)
		UnOrderedCReverseNode_Next_CASE(9)
		UnOrderedCReverseNode_Next_CASE(10)
		UnOrderedCReverseNode_Next_CASE(11)
		UnOrderedCReverseNode_Next_CASE(12)
		UnOrderedCReverseNode_Next_CASE(13)
		UnOrderedCReverseNode_Next_CASE(14)
		UnOrderedCReverseNode_Next_CASE(15)
		UnOrderedCReverseNode_Next_CASE(16)
		UnOrderedCReverseNode_Next_CASE(17)
		UnOrderedCReverseNode_Next_CASE(18)
		UnOrderedCReverseNode_Next_CASE(19)
		UnOrderedCReverseNode_Next_CASE(20)
		UnOrderedCReverseNode_Next_CASE(21)
		UnOrderedCReverseNode_Next_CASE(22)
		UnOrderedCReverseNode_Next_CASE(23)
		UnOrderedCReverseNode_Next_CASE(24)
		UnOrderedCReverseNode_Next_CASE(25)
		UnOrderedCReverseNode_Next_CASE(26)
		UnOrderedCReverseNode_Next_CASE(27)
		UnOrderedCReverseNode_Next_CASE(28)
		UnOrderedCReverseNode_Next_CASE(29)
		UnOrderedCReverseNode_Next_CASE(30)
		UnOrderedCReverseNode_Next_CASE(31)
		UnOrderedCReverseNode_Next_CASE(32)
		UnOrderedCReverseNode_Next_CASE(33)
		UnOrderedCReverseNode_Next_CASE(34)
		UnOrderedCReverseNode_Next_CASE(35)
		UnOrderedCReverseNode_Next_CASE(36)
		UnOrderedCReverseNode_Next_CASE(37)
		UnOrderedCReverseNode_Next_CASE(38)
		UnOrderedCReverseNode_Next_CASE(39)
		UnOrderedCReverseNode_Next_CASE(40)
		UnOrderedCReverseNode_Next_CASE(41)
		UnOrderedCReverseNode_Next_CASE(42)
		UnOrderedCReverseNode_Next_CASE(43)
		UnOrderedCReverseNode_Next_CASE(44)
		UnOrderedCReverseNode_Next_CASE(45)
		UnOrderedCReverseNode_Next_CASE(46)
		UnOrderedCReverseNode_Next_CASE(47)
		UnOrderedCReverseNode_Next_CASE(48)
		UnOrderedCReverseNode_Next_CASE(49)
		UnOrderedCReverseNode_Next_CASE(50)
		UnOrderedCReverseNode_Next_CASE(51)
		UnOrderedCReverseNode_Next_CASE(52)
		UnOrderedCReverseNode_Next_CASE(53)
		UnOrderedCReverseNode_Next_CASE(54)
		UnOrderedCReverseNode_Next_CASE(55)
		UnOrderedCReverseNode_Next_CASE(56)
		UnOrderedCReverseNode_Next_CASE(57)
		UnOrderedCReverseNode_Next_CASE(58)
		UnOrderedCReverseNode_Next_CASE(59)
		UnOrderedCReverseNode_Next_CASE(60)
		UnOrderedCReverseNode_Next_CASE(61)
		UnOrderedCReverseNode_Next_CASE(62)
		UnOrderedCReverseNode_Next_CASE(63)
		UnOrderedCReverseNode_Next_CASE(64)
		UnOrderedCReverseNode_Next_CASE(65)
		UnOrderedCReverseNode_Next_CASE(66)
		UnOrderedCReverseNode_Next_CASE(67)
		UnOrderedCReverseNode_Next_CASE(68)
		UnOrderedCReverseNode_Next_CASE(69)
		UnOrderedCReverseNode_Next_CASE(70)
		UnOrderedCReverseNode_Next_CASE(71)
		UnOrderedCReverseNode_Next_CASE(72)
		UnOrderedCReverseNode_Next_CASE(73)
		UnOrderedCReverseNode_Next_CASE(74)
		UnOrderedCReverseNode_Next_CASE(75)
		UnOrderedCReverseNode_Next_CASE(76)
		UnOrderedCReverseNode_Next_CASE(77)
		UnOrderedCReverseNode_Next_CASE(78)
		UnOrderedCReverseNode_Next_CASE(79)
		UnOrderedCReverseNode_Next_CASE(80)
		UnOrderedCReverseNode_Next_CASE(81)
		UnOrderedCReverseNode_Next_CASE(82)
		UnOrderedCReverseNode_Next_CASE(83)
		UnOrderedCReverseNode_Next_CASE(84)
		UnOrderedCReverseNode_Next_CASE(85)
		UnOrderedCReverseNode_Next_CASE(86)
		UnOrderedCReverseNode_Next_CASE(87)
		UnOrderedCReverseNode_Next_CASE(88)
		UnOrderedCReverseNode_Next_CASE(89)
		UnOrderedCReverseNode_Next_CASE(90)
		UnOrderedCReverseNode_Next_CASE(91)
		UnOrderedCReverseNode_Next_CASE(92)
		UnOrderedCReverseNode_Next_CASE(93)
		UnOrderedCReverseNode_Next_CASE(94)
		UnOrderedCReverseNode_Next_CASE(95)
		UnOrderedCReverseNode_Next_CASE(96)
		UnOrderedCReverseNode_Next_CASE(97)
		UnOrderedCReverseNode_Next_CASE(98)
		UnOrderedCReverseNode_Next_CASE(99)
		UnOrderedCReverseNode_Next_CASE(100)
		UnOrderedCReverseNode_Next_CASE(101)
		UnOrderedCReverseNode_Next_CASE(102)
		UnOrderedCReverseNode_Next_CASE(103)
		UnOrderedCReverseNode_Next_CASE(104)
		UnOrderedCReverseNode_Next_CASE(105)
		UnOrderedCReverseNode_Next_CASE(106)
		UnOrderedCReverseNode_Next_CASE(107)
		UnOrderedCReverseNode_Next_CASE(108)
		UnOrderedCReverseNode_Next_CASE(109)
		UnOrderedCReverseNode_Next_CASE(110)
		UnOrderedCReverseNode_Next_CASE(111)
		UnOrderedCReverseNode_Next_CASE(112)
		UnOrderedCReverseNode_Next_CASE(113)
		UnOrderedCReverseNode_Next_CASE(114)
		UnOrderedCReverseNode_Next_CASE(115)
		UnOrderedCReverseNode_Next_CASE(116)
		UnOrderedCReverseNode_Next_CASE(117)
		UnOrderedCReverseNode_Next_CASE(118)
		UnOrderedCReverseNode_Next_CASE(119)
		UnOrderedCReverseNode_Next_CASE(120)
		UnOrderedCReverseNode_Next_CASE(121)
		UnOrderedCReverseNode_Next_CASE(122)
		UnOrderedCReverseNode_Next_CASE(123)
		UnOrderedCReverseNode_Next_CASE(124)
		UnOrderedCReverseNode_Next_CASE(125)
		UnOrderedCReverseNode_Next_CASE(126)
		UnOrderedCReverseNode_Next_CASE(127)
		UnOrderedCReverseNode_Next_CASE(128)
		UnOrderedCReverseNode_Next_CASE(129)
		UnOrderedCReverseNode_Next_CASE(130)
		UnOrderedCReverseNode_Next_CASE(131)
		UnOrderedCReverseNode_Next_CASE(132)
		UnOrderedCReverseNode_Next_CASE(133)
		UnOrderedCReverseNode_Next_CASE(134)
		UnOrderedCReverseNode_Next_CASE(135)
		UnOrderedCReverseNode_Next_CASE(136)
		UnOrderedCReverseNode_Next_CASE(137)
		UnOrderedCReverseNode_Next_CASE(138)
		UnOrderedCReverseNode_Next_CASE(139)
		UnOrderedCReverseNode_Next_CASE(140)
		UnOrderedCReverseNode_Next_CASE(141)
		UnOrderedCReverseNode_Next_CASE(142)
		UnOrderedCReverseNode_Next_CASE(143)
		UnOrderedCReverseNode_Next_CASE(144)
		UnOrderedCReverseNode_Next_CASE(145)
		UnOrderedCReverseNode_Next_CASE(146)
		UnOrderedCReverseNode_Next_CASE(147)
		UnOrderedCReverseNode_Next_CASE(148)
		UnOrderedCReverseNode_Next_CASE(149)
		UnOrderedCReverseNode_Next_CASE(150)
		UnOrderedCReverseNode_Next_CASE(151)
		UnOrderedCReverseNode_Next_CASE(152)
		UnOrderedCReverseNode_Next_CASE(153)
		UnOrderedCReverseNode_Next_CASE(154)
		UnOrderedCReverseNode_Next_CASE(155)
		UnOrderedCReverseNode_Next_CASE(156)
		UnOrderedCReverseNode_Next_CASE(157)
		UnOrderedCReverseNode_Next_CASE(158)
		UnOrderedCReverseNode_Next_CASE(159)
		UnOrderedCReverseNode_Next_CASE(160)
		UnOrderedCReverseNode_Next_CASE(161)
		UnOrderedCReverseNode_Next_CASE(162)
		UnOrderedCReverseNode_Next_CASE(163)
		UnOrderedCReverseNode_Next_CASE(164)
		UnOrderedCReverseNode_Next_CASE(165)
		UnOrderedCReverseNode_Next_CASE(166)
		UnOrderedCReverseNode_Next_CASE(167)
		UnOrderedCReverseNode_Next_CASE(168)
		UnOrderedCReverseNode_Next_CASE(169)
		UnOrderedCReverseNode_Next_CASE(170)
		UnOrderedCReverseNode_Next_CASE(171)
		UnOrderedCReverseNode_Next_CASE(172)
		UnOrderedCReverseNode_Next_CASE(173)
		UnOrderedCReverseNode_Next_CASE(174)
		UnOrderedCReverseNode_Next_CASE(175)
		UnOrderedCReverseNode_Next_CASE(176)
		UnOrderedCReverseNode_Next_CASE(177)
		UnOrderedCReverseNode_Next_CASE(178)
		UnOrderedCReverseNode_Next_CASE(179)
		UnOrderedCReverseNode_Next_CASE(180)
		UnOrderedCReverseNode_Next_CASE(181)
		UnOrderedCReverseNode_Next_CASE(182)
		UnOrderedCReverseNode_Next_CASE(183)
		UnOrderedCReverseNode_Next_CASE(184)
		UnOrderedCReverseNode_Next_CASE(185)
		UnOrderedCReverseNode_Next_CASE(186)
		UnOrderedCReverseNode_Next_CASE(187)
		UnOrderedCReverseNode_Next_CASE(188)
		UnOrderedCReverseNode_Next_CASE(189)
		UnOrderedCReverseNode_Next_CASE(190)
		UnOrderedCReverseNode_Next_CASE(191)
		UnOrderedCReverseNode_Next_CASE(192)
		UnOrderedCReverseNode_Next_CASE(193)
		UnOrderedCReverseNode_Next_CASE(194)
		UnOrderedCReverseNode_Next_CASE(195)
		UnOrderedCReverseNode_Next_CASE(196)
	}
}

#define UnOrderedCReverseNode_Previous_CASE(NUM) \
	case NUM: \
		(*(creverseNodeUnion->CPPcreversenode##NUM))--; \
		return;

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::Previous()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		UnOrderedCReverseNode_Previous_CASE(1)
		UnOrderedCReverseNode_Previous_CASE(2)
		UnOrderedCReverseNode_Previous_CASE(3)
		UnOrderedCReverseNode_Previous_CASE(4)
		UnOrderedCReverseNode_Previous_CASE(5)
		UnOrderedCReverseNode_Previous_CASE(6)
		UnOrderedCReverseNode_Previous_CASE(7)
		UnOrderedCReverseNode_Previous_CASE(8)
		UnOrderedCReverseNode_Previous_CASE(9)
		UnOrderedCReverseNode_Previous_CASE(10)
		UnOrderedCReverseNode_Previous_CASE(11)
		UnOrderedCReverseNode_Previous_CASE(12)
		UnOrderedCReverseNode_Previous_CASE(13)
		UnOrderedCReverseNode_Previous_CASE(14)
		UnOrderedCReverseNode_Previous_CASE(15)
		UnOrderedCReverseNode_Previous_CASE(16)
		UnOrderedCReverseNode_Previous_CASE(17)
		UnOrderedCReverseNode_Previous_CASE(18)
		UnOrderedCReverseNode_Previous_CASE(19)
		UnOrderedCReverseNode_Previous_CASE(20)
		UnOrderedCReverseNode_Previous_CASE(21)
		UnOrderedCReverseNode_Previous_CASE(22)
		UnOrderedCReverseNode_Previous_CASE(23)
		UnOrderedCReverseNode_Previous_CASE(24)
		UnOrderedCReverseNode_Previous_CASE(25)
		UnOrderedCReverseNode_Previous_CASE(26)
		UnOrderedCReverseNode_Previous_CASE(27)
		UnOrderedCReverseNode_Previous_CASE(28)
		UnOrderedCReverseNode_Previous_CASE(29)
		UnOrderedCReverseNode_Previous_CASE(30)
		UnOrderedCReverseNode_Previous_CASE(31)
		UnOrderedCReverseNode_Previous_CASE(32)
		UnOrderedCReverseNode_Previous_CASE(33)
		UnOrderedCReverseNode_Previous_CASE(34)
		UnOrderedCReverseNode_Previous_CASE(35)
		UnOrderedCReverseNode_Previous_CASE(36)
		UnOrderedCReverseNode_Previous_CASE(37)
		UnOrderedCReverseNode_Previous_CASE(38)
		UnOrderedCReverseNode_Previous_CASE(39)
		UnOrderedCReverseNode_Previous_CASE(40)
		UnOrderedCReverseNode_Previous_CASE(41)
		UnOrderedCReverseNode_Previous_CASE(42)
		UnOrderedCReverseNode_Previous_CASE(43)
		UnOrderedCReverseNode_Previous_CASE(44)
		UnOrderedCReverseNode_Previous_CASE(45)
		UnOrderedCReverseNode_Previous_CASE(46)
		UnOrderedCReverseNode_Previous_CASE(47)
		UnOrderedCReverseNode_Previous_CASE(48)
		UnOrderedCReverseNode_Previous_CASE(49)
		UnOrderedCReverseNode_Previous_CASE(50)
		UnOrderedCReverseNode_Previous_CASE(51)
		UnOrderedCReverseNode_Previous_CASE(52)
		UnOrderedCReverseNode_Previous_CASE(53)
		UnOrderedCReverseNode_Previous_CASE(54)
		UnOrderedCReverseNode_Previous_CASE(55)
		UnOrderedCReverseNode_Previous_CASE(56)
		UnOrderedCReverseNode_Previous_CASE(57)
		UnOrderedCReverseNode_Previous_CASE(58)
		UnOrderedCReverseNode_Previous_CASE(59)
		UnOrderedCReverseNode_Previous_CASE(60)
		UnOrderedCReverseNode_Previous_CASE(61)
		UnOrderedCReverseNode_Previous_CASE(62)
		UnOrderedCReverseNode_Previous_CASE(63)
		UnOrderedCReverseNode_Previous_CASE(64)
		UnOrderedCReverseNode_Previous_CASE(65)
		UnOrderedCReverseNode_Previous_CASE(66)
		UnOrderedCReverseNode_Previous_CASE(67)
		UnOrderedCReverseNode_Previous_CASE(68)
		UnOrderedCReverseNode_Previous_CASE(69)
		UnOrderedCReverseNode_Previous_CASE(70)
		UnOrderedCReverseNode_Previous_CASE(71)
		UnOrderedCReverseNode_Previous_CASE(72)
		UnOrderedCReverseNode_Previous_CASE(73)
		UnOrderedCReverseNode_Previous_CASE(74)
		UnOrderedCReverseNode_Previous_CASE(75)
		UnOrderedCReverseNode_Previous_CASE(76)
		UnOrderedCReverseNode_Previous_CASE(77)
		UnOrderedCReverseNode_Previous_CASE(78)
		UnOrderedCReverseNode_Previous_CASE(79)
		UnOrderedCReverseNode_Previous_CASE(80)
		UnOrderedCReverseNode_Previous_CASE(81)
		UnOrderedCReverseNode_Previous_CASE(82)
		UnOrderedCReverseNode_Previous_CASE(83)
		UnOrderedCReverseNode_Previous_CASE(84)
		UnOrderedCReverseNode_Previous_CASE(85)
		UnOrderedCReverseNode_Previous_CASE(86)
		UnOrderedCReverseNode_Previous_CASE(87)
		UnOrderedCReverseNode_Previous_CASE(88)
		UnOrderedCReverseNode_Previous_CASE(89)
		UnOrderedCReverseNode_Previous_CASE(90)
		UnOrderedCReverseNode_Previous_CASE(91)
		UnOrderedCReverseNode_Previous_CASE(92)
		UnOrderedCReverseNode_Previous_CASE(93)
		UnOrderedCReverseNode_Previous_CASE(94)
		UnOrderedCReverseNode_Previous_CASE(95)
		UnOrderedCReverseNode_Previous_CASE(96)
		UnOrderedCReverseNode_Previous_CASE(97)
		UnOrderedCReverseNode_Previous_CASE(98)
		UnOrderedCReverseNode_Previous_CASE(99)
		UnOrderedCReverseNode_Previous_CASE(100)
		UnOrderedCReverseNode_Previous_CASE(101)
		UnOrderedCReverseNode_Previous_CASE(102)
		UnOrderedCReverseNode_Previous_CASE(103)
		UnOrderedCReverseNode_Previous_CASE(104)
		UnOrderedCReverseNode_Previous_CASE(105)
		UnOrderedCReverseNode_Previous_CASE(106)
		UnOrderedCReverseNode_Previous_CASE(107)
		UnOrderedCReverseNode_Previous_CASE(108)
		UnOrderedCReverseNode_Previous_CASE(109)
		UnOrderedCReverseNode_Previous_CASE(110)
		UnOrderedCReverseNode_Previous_CASE(111)
		UnOrderedCReverseNode_Previous_CASE(112)
		UnOrderedCReverseNode_Previous_CASE(113)
		UnOrderedCReverseNode_Previous_CASE(114)
		UnOrderedCReverseNode_Previous_CASE(115)
		UnOrderedCReverseNode_Previous_CASE(116)
		UnOrderedCReverseNode_Previous_CASE(117)
		UnOrderedCReverseNode_Previous_CASE(118)
		UnOrderedCReverseNode_Previous_CASE(119)
		UnOrderedCReverseNode_Previous_CASE(120)
		UnOrderedCReverseNode_Previous_CASE(121)
		UnOrderedCReverseNode_Previous_CASE(122)
		UnOrderedCReverseNode_Previous_CASE(123)
		UnOrderedCReverseNode_Previous_CASE(124)
		UnOrderedCReverseNode_Previous_CASE(125)
		UnOrderedCReverseNode_Previous_CASE(126)
		UnOrderedCReverseNode_Previous_CASE(127)
		UnOrderedCReverseNode_Previous_CASE(128)
		UnOrderedCReverseNode_Previous_CASE(129)
		UnOrderedCReverseNode_Previous_CASE(130)
		UnOrderedCReverseNode_Previous_CASE(131)
		UnOrderedCReverseNode_Previous_CASE(132)
		UnOrderedCReverseNode_Previous_CASE(133)
		UnOrderedCReverseNode_Previous_CASE(134)
		UnOrderedCReverseNode_Previous_CASE(135)
		UnOrderedCReverseNode_Previous_CASE(136)
		UnOrderedCReverseNode_Previous_CASE(137)
		UnOrderedCReverseNode_Previous_CASE(138)
		UnOrderedCReverseNode_Previous_CASE(139)
		UnOrderedCReverseNode_Previous_CASE(140)
		UnOrderedCReverseNode_Previous_CASE(141)
		UnOrderedCReverseNode_Previous_CASE(142)
		UnOrderedCReverseNode_Previous_CASE(143)
		UnOrderedCReverseNode_Previous_CASE(144)
		UnOrderedCReverseNode_Previous_CASE(145)
		UnOrderedCReverseNode_Previous_CASE(146)
		UnOrderedCReverseNode_Previous_CASE(147)
		UnOrderedCReverseNode_Previous_CASE(148)
		UnOrderedCReverseNode_Previous_CASE(149)
		UnOrderedCReverseNode_Previous_CASE(150)
		UnOrderedCReverseNode_Previous_CASE(151)
		UnOrderedCReverseNode_Previous_CASE(152)
		UnOrderedCReverseNode_Previous_CASE(153)
		UnOrderedCReverseNode_Previous_CASE(154)
		UnOrderedCReverseNode_Previous_CASE(155)
		UnOrderedCReverseNode_Previous_CASE(156)
		UnOrderedCReverseNode_Previous_CASE(157)
		UnOrderedCReverseNode_Previous_CASE(158)
		UnOrderedCReverseNode_Previous_CASE(159)
		UnOrderedCReverseNode_Previous_CASE(160)
		UnOrderedCReverseNode_Previous_CASE(161)
		UnOrderedCReverseNode_Previous_CASE(162)
		UnOrderedCReverseNode_Previous_CASE(163)
		UnOrderedCReverseNode_Previous_CASE(164)
		UnOrderedCReverseNode_Previous_CASE(165)
		UnOrderedCReverseNode_Previous_CASE(166)
		UnOrderedCReverseNode_Previous_CASE(167)
		UnOrderedCReverseNode_Previous_CASE(168)
		UnOrderedCReverseNode_Previous_CASE(169)
		UnOrderedCReverseNode_Previous_CASE(170)
		UnOrderedCReverseNode_Previous_CASE(171)
		UnOrderedCReverseNode_Previous_CASE(172)
		UnOrderedCReverseNode_Previous_CASE(173)
		UnOrderedCReverseNode_Previous_CASE(174)
		UnOrderedCReverseNode_Previous_CASE(175)
		UnOrderedCReverseNode_Previous_CASE(176)
		UnOrderedCReverseNode_Previous_CASE(177)
		UnOrderedCReverseNode_Previous_CASE(178)
		UnOrderedCReverseNode_Previous_CASE(179)
		UnOrderedCReverseNode_Previous_CASE(180)
		UnOrderedCReverseNode_Previous_CASE(181)
		UnOrderedCReverseNode_Previous_CASE(182)
		UnOrderedCReverseNode_Previous_CASE(183)
		UnOrderedCReverseNode_Previous_CASE(184)
		UnOrderedCReverseNode_Previous_CASE(185)
		UnOrderedCReverseNode_Previous_CASE(186)
		UnOrderedCReverseNode_Previous_CASE(187)
		UnOrderedCReverseNode_Previous_CASE(188)
		UnOrderedCReverseNode_Previous_CASE(189)
		UnOrderedCReverseNode_Previous_CASE(190)
		UnOrderedCReverseNode_Previous_CASE(191)
		UnOrderedCReverseNode_Previous_CASE(192)
		UnOrderedCReverseNode_Previous_CASE(193)
		UnOrderedCReverseNode_Previous_CASE(194)
		UnOrderedCReverseNode_Previous_CASE(195)
		UnOrderedCReverseNode_Previous_CASE(196)
	}
}

#define UnOrderedCReverseNode_Compare_Equals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->creverseNodeUnion->CPPcreversenode##NUM) == *(other->creverseNodeUnion->CPPcreversenode##NUM));

generic<typename Key, typename Value>
bool UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::operator==(const CShorpUnOrderedCReverseNode<Key, Value>^ thisObj, const CShorpUnOrderedCReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(thisObj), const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(other))) return true;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return false;
	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
		UnOrderedCReverseNode_Compare_Equals_CASE(1)
		UnOrderedCReverseNode_Compare_Equals_CASE(2)
		UnOrderedCReverseNode_Compare_Equals_CASE(3)
		UnOrderedCReverseNode_Compare_Equals_CASE(4)
		UnOrderedCReverseNode_Compare_Equals_CASE(5)
		UnOrderedCReverseNode_Compare_Equals_CASE(6)
		UnOrderedCReverseNode_Compare_Equals_CASE(7)
		UnOrderedCReverseNode_Compare_Equals_CASE(8)
		UnOrderedCReverseNode_Compare_Equals_CASE(9)
		UnOrderedCReverseNode_Compare_Equals_CASE(10)
		UnOrderedCReverseNode_Compare_Equals_CASE(11)
		UnOrderedCReverseNode_Compare_Equals_CASE(12)
		UnOrderedCReverseNode_Compare_Equals_CASE(13)
		UnOrderedCReverseNode_Compare_Equals_CASE(14)
		UnOrderedCReverseNode_Compare_Equals_CASE(15)
		UnOrderedCReverseNode_Compare_Equals_CASE(16)
		UnOrderedCReverseNode_Compare_Equals_CASE(17)
		UnOrderedCReverseNode_Compare_Equals_CASE(18)
		UnOrderedCReverseNode_Compare_Equals_CASE(19)
		UnOrderedCReverseNode_Compare_Equals_CASE(20)
		UnOrderedCReverseNode_Compare_Equals_CASE(21)
		UnOrderedCReverseNode_Compare_Equals_CASE(22)
		UnOrderedCReverseNode_Compare_Equals_CASE(23)
		UnOrderedCReverseNode_Compare_Equals_CASE(24)
		UnOrderedCReverseNode_Compare_Equals_CASE(25)
		UnOrderedCReverseNode_Compare_Equals_CASE(26)
		UnOrderedCReverseNode_Compare_Equals_CASE(27)
		UnOrderedCReverseNode_Compare_Equals_CASE(28)
		UnOrderedCReverseNode_Compare_Equals_CASE(29)
		UnOrderedCReverseNode_Compare_Equals_CASE(30)
		UnOrderedCReverseNode_Compare_Equals_CASE(31)
		UnOrderedCReverseNode_Compare_Equals_CASE(32)
		UnOrderedCReverseNode_Compare_Equals_CASE(33)
		UnOrderedCReverseNode_Compare_Equals_CASE(34)
		UnOrderedCReverseNode_Compare_Equals_CASE(35)
		UnOrderedCReverseNode_Compare_Equals_CASE(36)
		UnOrderedCReverseNode_Compare_Equals_CASE(37)
		UnOrderedCReverseNode_Compare_Equals_CASE(38)
		UnOrderedCReverseNode_Compare_Equals_CASE(39)
		UnOrderedCReverseNode_Compare_Equals_CASE(40)
		UnOrderedCReverseNode_Compare_Equals_CASE(41)
		UnOrderedCReverseNode_Compare_Equals_CASE(42)
		UnOrderedCReverseNode_Compare_Equals_CASE(43)
		UnOrderedCReverseNode_Compare_Equals_CASE(44)
		UnOrderedCReverseNode_Compare_Equals_CASE(45)
		UnOrderedCReverseNode_Compare_Equals_CASE(46)
		UnOrderedCReverseNode_Compare_Equals_CASE(47)
		UnOrderedCReverseNode_Compare_Equals_CASE(48)
		UnOrderedCReverseNode_Compare_Equals_CASE(49)
		UnOrderedCReverseNode_Compare_Equals_CASE(50)
		UnOrderedCReverseNode_Compare_Equals_CASE(51)
		UnOrderedCReverseNode_Compare_Equals_CASE(52)
		UnOrderedCReverseNode_Compare_Equals_CASE(53)
		UnOrderedCReverseNode_Compare_Equals_CASE(54)
		UnOrderedCReverseNode_Compare_Equals_CASE(55)
		UnOrderedCReverseNode_Compare_Equals_CASE(56)
		UnOrderedCReverseNode_Compare_Equals_CASE(57)
		UnOrderedCReverseNode_Compare_Equals_CASE(58)
		UnOrderedCReverseNode_Compare_Equals_CASE(59)
		UnOrderedCReverseNode_Compare_Equals_CASE(60)
		UnOrderedCReverseNode_Compare_Equals_CASE(61)
		UnOrderedCReverseNode_Compare_Equals_CASE(62)
		UnOrderedCReverseNode_Compare_Equals_CASE(63)
		UnOrderedCReverseNode_Compare_Equals_CASE(64)
		UnOrderedCReverseNode_Compare_Equals_CASE(65)
		UnOrderedCReverseNode_Compare_Equals_CASE(66)
		UnOrderedCReverseNode_Compare_Equals_CASE(67)
		UnOrderedCReverseNode_Compare_Equals_CASE(68)
		UnOrderedCReverseNode_Compare_Equals_CASE(69)
		UnOrderedCReverseNode_Compare_Equals_CASE(70)
		UnOrderedCReverseNode_Compare_Equals_CASE(71)
		UnOrderedCReverseNode_Compare_Equals_CASE(72)
		UnOrderedCReverseNode_Compare_Equals_CASE(73)
		UnOrderedCReverseNode_Compare_Equals_CASE(74)
		UnOrderedCReverseNode_Compare_Equals_CASE(75)
		UnOrderedCReverseNode_Compare_Equals_CASE(76)
		UnOrderedCReverseNode_Compare_Equals_CASE(77)
		UnOrderedCReverseNode_Compare_Equals_CASE(78)
		UnOrderedCReverseNode_Compare_Equals_CASE(79)
		UnOrderedCReverseNode_Compare_Equals_CASE(80)
		UnOrderedCReverseNode_Compare_Equals_CASE(81)
		UnOrderedCReverseNode_Compare_Equals_CASE(82)
		UnOrderedCReverseNode_Compare_Equals_CASE(83)
		UnOrderedCReverseNode_Compare_Equals_CASE(84)
		UnOrderedCReverseNode_Compare_Equals_CASE(85)
		UnOrderedCReverseNode_Compare_Equals_CASE(86)
		UnOrderedCReverseNode_Compare_Equals_CASE(87)
		UnOrderedCReverseNode_Compare_Equals_CASE(88)
		UnOrderedCReverseNode_Compare_Equals_CASE(89)
		UnOrderedCReverseNode_Compare_Equals_CASE(90)
		UnOrderedCReverseNode_Compare_Equals_CASE(91)
		UnOrderedCReverseNode_Compare_Equals_CASE(92)
		UnOrderedCReverseNode_Compare_Equals_CASE(93)
		UnOrderedCReverseNode_Compare_Equals_CASE(94)
		UnOrderedCReverseNode_Compare_Equals_CASE(95)
		UnOrderedCReverseNode_Compare_Equals_CASE(96)
		UnOrderedCReverseNode_Compare_Equals_CASE(97)
		UnOrderedCReverseNode_Compare_Equals_CASE(98)
		UnOrderedCReverseNode_Compare_Equals_CASE(99)
		UnOrderedCReverseNode_Compare_Equals_CASE(100)
		UnOrderedCReverseNode_Compare_Equals_CASE(101)
		UnOrderedCReverseNode_Compare_Equals_CASE(102)
		UnOrderedCReverseNode_Compare_Equals_CASE(103)
		UnOrderedCReverseNode_Compare_Equals_CASE(104)
		UnOrderedCReverseNode_Compare_Equals_CASE(105)
		UnOrderedCReverseNode_Compare_Equals_CASE(106)
		UnOrderedCReverseNode_Compare_Equals_CASE(107)
		UnOrderedCReverseNode_Compare_Equals_CASE(108)
		UnOrderedCReverseNode_Compare_Equals_CASE(109)
		UnOrderedCReverseNode_Compare_Equals_CASE(110)
		UnOrderedCReverseNode_Compare_Equals_CASE(111)
		UnOrderedCReverseNode_Compare_Equals_CASE(112)
		UnOrderedCReverseNode_Compare_Equals_CASE(113)
		UnOrderedCReverseNode_Compare_Equals_CASE(114)
		UnOrderedCReverseNode_Compare_Equals_CASE(115)
		UnOrderedCReverseNode_Compare_Equals_CASE(116)
		UnOrderedCReverseNode_Compare_Equals_CASE(117)
		UnOrderedCReverseNode_Compare_Equals_CASE(118)
		UnOrderedCReverseNode_Compare_Equals_CASE(119)
		UnOrderedCReverseNode_Compare_Equals_CASE(120)
		UnOrderedCReverseNode_Compare_Equals_CASE(121)
		UnOrderedCReverseNode_Compare_Equals_CASE(122)
		UnOrderedCReverseNode_Compare_Equals_CASE(123)
		UnOrderedCReverseNode_Compare_Equals_CASE(124)
		UnOrderedCReverseNode_Compare_Equals_CASE(125)
		UnOrderedCReverseNode_Compare_Equals_CASE(126)
		UnOrderedCReverseNode_Compare_Equals_CASE(127)
		UnOrderedCReverseNode_Compare_Equals_CASE(128)
		UnOrderedCReverseNode_Compare_Equals_CASE(129)
		UnOrderedCReverseNode_Compare_Equals_CASE(130)
		UnOrderedCReverseNode_Compare_Equals_CASE(131)
		UnOrderedCReverseNode_Compare_Equals_CASE(132)
		UnOrderedCReverseNode_Compare_Equals_CASE(133)
		UnOrderedCReverseNode_Compare_Equals_CASE(134)
		UnOrderedCReverseNode_Compare_Equals_CASE(135)
		UnOrderedCReverseNode_Compare_Equals_CASE(136)
		UnOrderedCReverseNode_Compare_Equals_CASE(137)
		UnOrderedCReverseNode_Compare_Equals_CASE(138)
		UnOrderedCReverseNode_Compare_Equals_CASE(139)
		UnOrderedCReverseNode_Compare_Equals_CASE(140)
		UnOrderedCReverseNode_Compare_Equals_CASE(141)
		UnOrderedCReverseNode_Compare_Equals_CASE(142)
		UnOrderedCReverseNode_Compare_Equals_CASE(143)
		UnOrderedCReverseNode_Compare_Equals_CASE(144)
		UnOrderedCReverseNode_Compare_Equals_CASE(145)
		UnOrderedCReverseNode_Compare_Equals_CASE(146)
		UnOrderedCReverseNode_Compare_Equals_CASE(147)
		UnOrderedCReverseNode_Compare_Equals_CASE(148)
		UnOrderedCReverseNode_Compare_Equals_CASE(149)
		UnOrderedCReverseNode_Compare_Equals_CASE(150)
		UnOrderedCReverseNode_Compare_Equals_CASE(151)
		UnOrderedCReverseNode_Compare_Equals_CASE(152)
		UnOrderedCReverseNode_Compare_Equals_CASE(153)
		UnOrderedCReverseNode_Compare_Equals_CASE(154)
		UnOrderedCReverseNode_Compare_Equals_CASE(155)
		UnOrderedCReverseNode_Compare_Equals_CASE(156)
		UnOrderedCReverseNode_Compare_Equals_CASE(157)
		UnOrderedCReverseNode_Compare_Equals_CASE(158)
		UnOrderedCReverseNode_Compare_Equals_CASE(159)
		UnOrderedCReverseNode_Compare_Equals_CASE(160)
		UnOrderedCReverseNode_Compare_Equals_CASE(161)
		UnOrderedCReverseNode_Compare_Equals_CASE(162)
		UnOrderedCReverseNode_Compare_Equals_CASE(163)
		UnOrderedCReverseNode_Compare_Equals_CASE(164)
		UnOrderedCReverseNode_Compare_Equals_CASE(165)
		UnOrderedCReverseNode_Compare_Equals_CASE(166)
		UnOrderedCReverseNode_Compare_Equals_CASE(167)
		UnOrderedCReverseNode_Compare_Equals_CASE(168)
		UnOrderedCReverseNode_Compare_Equals_CASE(169)
		UnOrderedCReverseNode_Compare_Equals_CASE(170)
		UnOrderedCReverseNode_Compare_Equals_CASE(171)
		UnOrderedCReverseNode_Compare_Equals_CASE(172)
		UnOrderedCReverseNode_Compare_Equals_CASE(173)
		UnOrderedCReverseNode_Compare_Equals_CASE(174)
		UnOrderedCReverseNode_Compare_Equals_CASE(175)
		UnOrderedCReverseNode_Compare_Equals_CASE(176)
		UnOrderedCReverseNode_Compare_Equals_CASE(177)
		UnOrderedCReverseNode_Compare_Equals_CASE(178)
		UnOrderedCReverseNode_Compare_Equals_CASE(179)
		UnOrderedCReverseNode_Compare_Equals_CASE(180)
		UnOrderedCReverseNode_Compare_Equals_CASE(181)
		UnOrderedCReverseNode_Compare_Equals_CASE(182)
		UnOrderedCReverseNode_Compare_Equals_CASE(183)
		UnOrderedCReverseNode_Compare_Equals_CASE(184)
		UnOrderedCReverseNode_Compare_Equals_CASE(185)
		UnOrderedCReverseNode_Compare_Equals_CASE(186)
		UnOrderedCReverseNode_Compare_Equals_CASE(187)
		UnOrderedCReverseNode_Compare_Equals_CASE(188)
		UnOrderedCReverseNode_Compare_Equals_CASE(189)
		UnOrderedCReverseNode_Compare_Equals_CASE(190)
		UnOrderedCReverseNode_Compare_Equals_CASE(191)
		UnOrderedCReverseNode_Compare_Equals_CASE(192)
		UnOrderedCReverseNode_Compare_Equals_CASE(193)
		UnOrderedCReverseNode_Compare_Equals_CASE(194)
		UnOrderedCReverseNode_Compare_Equals_CASE(195)
		UnOrderedCReverseNode_Compare_Equals_CASE(196)
	}
	return false;
}

#define UnOrderedCReverseNode_Compare_NotEquals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->creverseNodeUnion->CPPcreversenode##NUM) != *(other->creverseNodeUnion->CPPcreversenode##NUM));

generic<typename Key, typename Value>
bool UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::operator!=(const CShorpUnOrderedCReverseNode<Key, Value>^ thisObj, const CShorpUnOrderedCReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(thisObj), const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(other))) return false;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return true;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
		UnOrderedCReverseNode_Compare_NotEquals_CASE(1)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(2)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(3)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(4)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(5)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(6)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(7)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(8)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(9)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(10)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(11)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(12)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(13)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(14)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(15)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(16)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(17)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(18)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(19)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(20)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(21)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(22)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(23)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(24)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(25)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(26)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(27)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(28)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(29)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(30)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(31)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(32)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(33)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(34)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(35)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(36)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(37)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(38)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(39)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(40)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(41)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(42)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(43)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(44)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(45)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(46)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(47)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(48)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(49)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(50)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(51)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(52)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(53)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(54)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(55)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(56)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(57)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(58)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(59)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(60)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(61)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(62)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(63)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(64)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(65)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(66)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(67)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(68)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(69)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(70)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(71)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(72)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(73)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(74)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(75)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(76)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(77)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(78)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(79)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(80)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(81)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(82)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(83)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(84)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(85)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(86)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(87)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(88)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(89)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(90)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(91)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(92)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(93)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(94)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(95)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(96)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(97)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(98)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(99)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(100)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(101)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(102)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(103)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(104)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(105)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(106)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(107)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(108)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(109)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(110)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(111)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(112)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(113)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(114)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(115)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(116)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(117)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(118)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(119)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(120)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(121)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(122)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(123)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(124)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(125)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(126)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(127)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(128)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(129)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(130)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(131)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(132)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(133)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(134)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(135)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(136)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(137)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(138)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(139)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(140)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(141)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(142)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(143)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(144)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(145)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(146)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(147)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(148)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(149)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(150)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(151)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(152)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(153)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(154)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(155)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(156)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(157)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(158)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(159)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(160)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(161)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(162)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(163)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(164)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(165)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(166)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(167)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(168)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(169)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(170)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(171)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(172)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(173)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(174)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(175)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(176)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(177)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(178)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(179)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(180)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(181)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(182)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(183)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(184)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(185)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(186)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(187)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(188)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(189)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(190)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(191)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(192)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(193)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(194)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(195)
		UnOrderedCReverseNode_Compare_NotEquals_CASE(196)
	}
	return false;
}

#define UnOrderedCReverseNode_Copy_CASE(NUM) \
	case NUM: \
		(*(thisObj->creverseNodeUnion->CPPcreversenode##NUM) = *(other->creverseNodeUnion->CPPcreversenode##NUM)); \
		break;

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::operator%(CShorpUnOrderedCReverseNode<Key, Value>^ thisObj, CShorpUnOrderedCReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(thisObj), nullptr)) return nullptr;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(other), nullptr)) return thisObj;
	if (other->isInitialized == 0) return thisObj;
	thisObj->isInitialized = other->isInitialized;

	if (thisObj->nKeyValueType != other->nKeyValueType) return thisObj;
	if (other->gIntKeyClassDictionary) thisObj->gIntKeyClassDictionary = other->gIntKeyClassDictionary;
	if (other->gValueClassDictionary) thisObj->gValueClassDictionary = other->gValueClassDictionary;
	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		break;
		UnOrderedCReverseNode_Copy_CASE(1)
		UnOrderedCReverseNode_Copy_CASE(2)
		UnOrderedCReverseNode_Copy_CASE(3)
		UnOrderedCReverseNode_Copy_CASE(4)
		UnOrderedCReverseNode_Copy_CASE(5)
		UnOrderedCReverseNode_Copy_CASE(6)
		UnOrderedCReverseNode_Copy_CASE(7)
		UnOrderedCReverseNode_Copy_CASE(8)
		UnOrderedCReverseNode_Copy_CASE(9)
		UnOrderedCReverseNode_Copy_CASE(10)
		UnOrderedCReverseNode_Copy_CASE(11)
		UnOrderedCReverseNode_Copy_CASE(12)
		UnOrderedCReverseNode_Copy_CASE(13)
		UnOrderedCReverseNode_Copy_CASE(14)
		UnOrderedCReverseNode_Copy_CASE(15)
		UnOrderedCReverseNode_Copy_CASE(16)
		UnOrderedCReverseNode_Copy_CASE(17)
		UnOrderedCReverseNode_Copy_CASE(18)
		UnOrderedCReverseNode_Copy_CASE(19)
		UnOrderedCReverseNode_Copy_CASE(20)
		UnOrderedCReverseNode_Copy_CASE(21)
		UnOrderedCReverseNode_Copy_CASE(22)
		UnOrderedCReverseNode_Copy_CASE(23)
		UnOrderedCReverseNode_Copy_CASE(24)
		UnOrderedCReverseNode_Copy_CASE(25)
		UnOrderedCReverseNode_Copy_CASE(26)
		UnOrderedCReverseNode_Copy_CASE(27)
		UnOrderedCReverseNode_Copy_CASE(28)
		UnOrderedCReverseNode_Copy_CASE(29)
		UnOrderedCReverseNode_Copy_CASE(30)
		UnOrderedCReverseNode_Copy_CASE(31)
		UnOrderedCReverseNode_Copy_CASE(32)
		UnOrderedCReverseNode_Copy_CASE(33)
		UnOrderedCReverseNode_Copy_CASE(34)
		UnOrderedCReverseNode_Copy_CASE(35)
		UnOrderedCReverseNode_Copy_CASE(36)
		UnOrderedCReverseNode_Copy_CASE(37)
		UnOrderedCReverseNode_Copy_CASE(38)
		UnOrderedCReverseNode_Copy_CASE(39)
		UnOrderedCReverseNode_Copy_CASE(40)
		UnOrderedCReverseNode_Copy_CASE(41)
		UnOrderedCReverseNode_Copy_CASE(42)
		UnOrderedCReverseNode_Copy_CASE(43)
		UnOrderedCReverseNode_Copy_CASE(44)
		UnOrderedCReverseNode_Copy_CASE(45)
		UnOrderedCReverseNode_Copy_CASE(46)
		UnOrderedCReverseNode_Copy_CASE(47)
		UnOrderedCReverseNode_Copy_CASE(48)
		UnOrderedCReverseNode_Copy_CASE(49)
		UnOrderedCReverseNode_Copy_CASE(50)
		UnOrderedCReverseNode_Copy_CASE(51)
		UnOrderedCReverseNode_Copy_CASE(52)
		UnOrderedCReverseNode_Copy_CASE(53)
		UnOrderedCReverseNode_Copy_CASE(54)
		UnOrderedCReverseNode_Copy_CASE(55)
		UnOrderedCReverseNode_Copy_CASE(56)
		UnOrderedCReverseNode_Copy_CASE(57)
		UnOrderedCReverseNode_Copy_CASE(58)
		UnOrderedCReverseNode_Copy_CASE(59)
		UnOrderedCReverseNode_Copy_CASE(60)
		UnOrderedCReverseNode_Copy_CASE(61)
		UnOrderedCReverseNode_Copy_CASE(62)
		UnOrderedCReverseNode_Copy_CASE(63)
		UnOrderedCReverseNode_Copy_CASE(64)
		UnOrderedCReverseNode_Copy_CASE(65)
		UnOrderedCReverseNode_Copy_CASE(66)
		UnOrderedCReverseNode_Copy_CASE(67)
		UnOrderedCReverseNode_Copy_CASE(68)
		UnOrderedCReverseNode_Copy_CASE(69)
		UnOrderedCReverseNode_Copy_CASE(70)
		UnOrderedCReverseNode_Copy_CASE(71)
		UnOrderedCReverseNode_Copy_CASE(72)
		UnOrderedCReverseNode_Copy_CASE(73)
		UnOrderedCReverseNode_Copy_CASE(74)
		UnOrderedCReverseNode_Copy_CASE(75)
		UnOrderedCReverseNode_Copy_CASE(76)
		UnOrderedCReverseNode_Copy_CASE(77)
		UnOrderedCReverseNode_Copy_CASE(78)
		UnOrderedCReverseNode_Copy_CASE(79)
		UnOrderedCReverseNode_Copy_CASE(80)
		UnOrderedCReverseNode_Copy_CASE(81)
		UnOrderedCReverseNode_Copy_CASE(82)
		UnOrderedCReverseNode_Copy_CASE(83)
		UnOrderedCReverseNode_Copy_CASE(84)
		UnOrderedCReverseNode_Copy_CASE(85)
		UnOrderedCReverseNode_Copy_CASE(86)
		UnOrderedCReverseNode_Copy_CASE(87)
		UnOrderedCReverseNode_Copy_CASE(88)
		UnOrderedCReverseNode_Copy_CASE(89)
		UnOrderedCReverseNode_Copy_CASE(90)
		UnOrderedCReverseNode_Copy_CASE(91)
		UnOrderedCReverseNode_Copy_CASE(92)
		UnOrderedCReverseNode_Copy_CASE(93)
		UnOrderedCReverseNode_Copy_CASE(94)
		UnOrderedCReverseNode_Copy_CASE(95)
		UnOrderedCReverseNode_Copy_CASE(96)
		UnOrderedCReverseNode_Copy_CASE(97)
		UnOrderedCReverseNode_Copy_CASE(98)
		UnOrderedCReverseNode_Copy_CASE(99)
		UnOrderedCReverseNode_Copy_CASE(100)
		UnOrderedCReverseNode_Copy_CASE(101)
		UnOrderedCReverseNode_Copy_CASE(102)
		UnOrderedCReverseNode_Copy_CASE(103)
		UnOrderedCReverseNode_Copy_CASE(104)
		UnOrderedCReverseNode_Copy_CASE(105)
		UnOrderedCReverseNode_Copy_CASE(106)
		UnOrderedCReverseNode_Copy_CASE(107)
		UnOrderedCReverseNode_Copy_CASE(108)
		UnOrderedCReverseNode_Copy_CASE(109)
		UnOrderedCReverseNode_Copy_CASE(110)
		UnOrderedCReverseNode_Copy_CASE(111)
		UnOrderedCReverseNode_Copy_CASE(112)
		UnOrderedCReverseNode_Copy_CASE(113)
		UnOrderedCReverseNode_Copy_CASE(114)
		UnOrderedCReverseNode_Copy_CASE(115)
		UnOrderedCReverseNode_Copy_CASE(116)
		UnOrderedCReverseNode_Copy_CASE(117)
		UnOrderedCReverseNode_Copy_CASE(118)
		UnOrderedCReverseNode_Copy_CASE(119)
		UnOrderedCReverseNode_Copy_CASE(120)
		UnOrderedCReverseNode_Copy_CASE(121)
		UnOrderedCReverseNode_Copy_CASE(122)
		UnOrderedCReverseNode_Copy_CASE(123)
		UnOrderedCReverseNode_Copy_CASE(124)
		UnOrderedCReverseNode_Copy_CASE(125)
		UnOrderedCReverseNode_Copy_CASE(126)
		UnOrderedCReverseNode_Copy_CASE(127)
		UnOrderedCReverseNode_Copy_CASE(128)
		UnOrderedCReverseNode_Copy_CASE(129)
		UnOrderedCReverseNode_Copy_CASE(130)
		UnOrderedCReverseNode_Copy_CASE(131)
		UnOrderedCReverseNode_Copy_CASE(132)
		UnOrderedCReverseNode_Copy_CASE(133)
		UnOrderedCReverseNode_Copy_CASE(134)
		UnOrderedCReverseNode_Copy_CASE(135)
		UnOrderedCReverseNode_Copy_CASE(136)
		UnOrderedCReverseNode_Copy_CASE(137)
		UnOrderedCReverseNode_Copy_CASE(138)
		UnOrderedCReverseNode_Copy_CASE(139)
		UnOrderedCReverseNode_Copy_CASE(140)
		UnOrderedCReverseNode_Copy_CASE(141)
		UnOrderedCReverseNode_Copy_CASE(142)
		UnOrderedCReverseNode_Copy_CASE(143)
		UnOrderedCReverseNode_Copy_CASE(144)
		UnOrderedCReverseNode_Copy_CASE(145)
		UnOrderedCReverseNode_Copy_CASE(146)
		UnOrderedCReverseNode_Copy_CASE(147)
		UnOrderedCReverseNode_Copy_CASE(148)
		UnOrderedCReverseNode_Copy_CASE(149)
		UnOrderedCReverseNode_Copy_CASE(150)
		UnOrderedCReverseNode_Copy_CASE(151)
		UnOrderedCReverseNode_Copy_CASE(152)
		UnOrderedCReverseNode_Copy_CASE(153)
		UnOrderedCReverseNode_Copy_CASE(154)
		UnOrderedCReverseNode_Copy_CASE(155)
		UnOrderedCReverseNode_Copy_CASE(156)
		UnOrderedCReverseNode_Copy_CASE(157)
		UnOrderedCReverseNode_Copy_CASE(158)
		UnOrderedCReverseNode_Copy_CASE(159)
		UnOrderedCReverseNode_Copy_CASE(160)
		UnOrderedCReverseNode_Copy_CASE(161)
		UnOrderedCReverseNode_Copy_CASE(162)
		UnOrderedCReverseNode_Copy_CASE(163)
		UnOrderedCReverseNode_Copy_CASE(164)
		UnOrderedCReverseNode_Copy_CASE(165)
		UnOrderedCReverseNode_Copy_CASE(166)
		UnOrderedCReverseNode_Copy_CASE(167)
		UnOrderedCReverseNode_Copy_CASE(168)
		UnOrderedCReverseNode_Copy_CASE(169)
		UnOrderedCReverseNode_Copy_CASE(170)
		UnOrderedCReverseNode_Copy_CASE(171)
		UnOrderedCReverseNode_Copy_CASE(172)
		UnOrderedCReverseNode_Copy_CASE(173)
		UnOrderedCReverseNode_Copy_CASE(174)
		UnOrderedCReverseNode_Copy_CASE(175)
		UnOrderedCReverseNode_Copy_CASE(176)
		UnOrderedCReverseNode_Copy_CASE(177)
		UnOrderedCReverseNode_Copy_CASE(178)
		UnOrderedCReverseNode_Copy_CASE(179)
		UnOrderedCReverseNode_Copy_CASE(180)
		UnOrderedCReverseNode_Copy_CASE(181)
		UnOrderedCReverseNode_Copy_CASE(182)
		UnOrderedCReverseNode_Copy_CASE(183)
		UnOrderedCReverseNode_Copy_CASE(184)
		UnOrderedCReverseNode_Copy_CASE(185)
		UnOrderedCReverseNode_Copy_CASE(186)
		UnOrderedCReverseNode_Copy_CASE(187)
		UnOrderedCReverseNode_Copy_CASE(188)
		UnOrderedCReverseNode_Copy_CASE(189)
		UnOrderedCReverseNode_Copy_CASE(190)
		UnOrderedCReverseNode_Copy_CASE(191)
		UnOrderedCReverseNode_Copy_CASE(192)
		UnOrderedCReverseNode_Copy_CASE(193)
		UnOrderedCReverseNode_Copy_CASE(194)
		UnOrderedCReverseNode_Copy_CASE(195)
		UnOrderedCReverseNode_Copy_CASE(196)
	}
	return thisObj;
}

generic<typename Key, typename Value>
Value UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::GetValue()
{
	if (this == nullptr) return Value();
	if (isInitialized == 0) return Value();
	System::Object^ managedValue;
	Value objtarget;
	switch (nKeyValueType)
	{
	case 0: default:
		return Value();
	case 1:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode1->GetValue());
		return safe_cast<Value>(managedValue);
	case 2:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode2->GetValue());
		return safe_cast<Value>(managedValue);
	case 3:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode3->GetValue());
		return safe_cast<Value>(managedValue);
	case 4:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode4->GetValue());
		return safe_cast<Value>(managedValue);
	case 5:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode5->GetValue());
		return safe_cast<Value>(managedValue);
	case 6:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode6->GetValue());
		return safe_cast<Value>(managedValue);
	case 7:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode7->GetValue());
		return safe_cast<Value>(managedValue);
	case 8:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode8->GetValue());
		return safe_cast<Value>(managedValue);
	case 9:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode9->GetValue());
		return safe_cast<Value>(managedValue);
	case 10:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode10->GetValue());
		return safe_cast<Value>(managedValue);
	case 11:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode11->GetValue());
		return safe_cast<Value>(managedValue);
	case 12:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode12->GetValue());
		return safe_cast<Value>(managedValue);
	case 13:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode13->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 15:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode15->GetValue());
		return safe_cast<Value>(managedValue);
	case 16:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode16->GetValue());
		return safe_cast<Value>(managedValue);
	case 17:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode17->GetValue());
		return safe_cast<Value>(managedValue);
	case 18:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode18->GetValue());
		return safe_cast<Value>(managedValue);
	case 19:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode19->GetValue());
		return safe_cast<Value>(managedValue);
	case 20:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode20->GetValue());
		return safe_cast<Value>(managedValue);
	case 21:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode21->GetValue());
		return safe_cast<Value>(managedValue);
	case 22:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode22->GetValue());
		return safe_cast<Value>(managedValue);
	case 23:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode23->GetValue());
		return safe_cast<Value>(managedValue);
	case 24:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode24->GetValue());
		return safe_cast<Value>(managedValue);
	case 25:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode25->GetValue());
		return safe_cast<Value>(managedValue);
	case 26:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode26->GetValue());
		return safe_cast<Value>(managedValue);
	case 27:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode27->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 29:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode29->GetValue());
		return safe_cast<Value>(managedValue);
	case 30:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode30->GetValue());
		return safe_cast<Value>(managedValue);
	case 31:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode31->GetValue());
		return safe_cast<Value>(managedValue);
	case 32:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode32->GetValue());
		return safe_cast<Value>(managedValue);
	case 33:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode33->GetValue());
		return safe_cast<Value>(managedValue);
	case 34:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode34->GetValue());
		return safe_cast<Value>(managedValue);
	case 35:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode35->GetValue());
		return safe_cast<Value>(managedValue);
	case 36:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode36->GetValue());
		return safe_cast<Value>(managedValue);
	case 37:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode37->GetValue());
		return safe_cast<Value>(managedValue);
	case 38:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode38->GetValue());
		return safe_cast<Value>(managedValue);
	case 39:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode39->GetValue());
		return safe_cast<Value>(managedValue);
	case 40:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode40->GetValue());
		return safe_cast<Value>(managedValue);
	case 41:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode41->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 43:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode43->GetValue());
		return safe_cast<Value>(managedValue);
	case 44:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode44->GetValue());
		return safe_cast<Value>(managedValue);
	case 45:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode45->GetValue());
		return safe_cast<Value>(managedValue);
	case 46:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode46->GetValue());
		return safe_cast<Value>(managedValue);
	case 47:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode47->GetValue());
		return safe_cast<Value>(managedValue);
	case 48:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode48->GetValue());
		return safe_cast<Value>(managedValue);
	case 49:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode49->GetValue());
		return safe_cast<Value>(managedValue);
	case 50:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode50->GetValue());
		return safe_cast<Value>(managedValue);
	case 51:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode51->GetValue());
		return safe_cast<Value>(managedValue);
	case 52:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode52->GetValue());
		return safe_cast<Value>(managedValue);
	case 53:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode53->GetValue());
		return safe_cast<Value>(managedValue);
	case 54:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode54->GetValue());
		return safe_cast<Value>(managedValue);
	case 55:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode55->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 57:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode57->GetValue());
		return safe_cast<Value>(managedValue);
	case 58:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode58->GetValue());
		return safe_cast<Value>(managedValue);
	case 59:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode59->GetValue());
		return safe_cast<Value>(managedValue);
	case 60:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode60->GetValue());
		return safe_cast<Value>(managedValue);
	case 61:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode61->GetValue());
		return safe_cast<Value>(managedValue);
	case 62:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode62->GetValue());
		return safe_cast<Value>(managedValue);
	case 63:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode63->GetValue());
		return safe_cast<Value>(managedValue);
	case 64:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode64->GetValue());
		return safe_cast<Value>(managedValue);
	case 65:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode65->GetValue());
		return safe_cast<Value>(managedValue);
	case 66:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode66->GetValue());
		return safe_cast<Value>(managedValue);
	case 67:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode67->GetValue());
		return safe_cast<Value>(managedValue);
	case 68:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode68->GetValue());
		return safe_cast<Value>(managedValue);
	case 69:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode69->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 71:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode71->GetValue());
		return safe_cast<Value>(managedValue);
	case 72:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode72->GetValue());
		return safe_cast<Value>(managedValue);
	case 73:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode73->GetValue());
		return safe_cast<Value>(managedValue);
	case 74:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode74->GetValue());
		return safe_cast<Value>(managedValue);
	case 75:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode75->GetValue());
		return safe_cast<Value>(managedValue);
	case 76:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode76->GetValue());
		return safe_cast<Value>(managedValue);
	case 77:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode77->GetValue());
		return safe_cast<Value>(managedValue);
	case 78:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode78->GetValue());
		return safe_cast<Value>(managedValue);
	case 79:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode79->GetValue());
		return safe_cast<Value>(managedValue);
	case 80:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode80->GetValue());
		return safe_cast<Value>(managedValue);
	case 81:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode81->GetValue());
		return safe_cast<Value>(managedValue);
	case 82:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode82->GetValue());
		return safe_cast<Value>(managedValue);
	case 83:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode83->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 85:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode85->GetValue());
		return safe_cast<Value>(managedValue);
	case 86:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode86->GetValue());
		return safe_cast<Value>(managedValue);
	case 87:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode87->GetValue());
		return safe_cast<Value>(managedValue);
	case 88:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode88->GetValue());
		return safe_cast<Value>(managedValue);
	case 89:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode89->GetValue());
		return safe_cast<Value>(managedValue);
	case 90:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode90->GetValue());
		return safe_cast<Value>(managedValue);
	case 91:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode91->GetValue());
		return safe_cast<Value>(managedValue);
	case 92:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode92->GetValue());
		return safe_cast<Value>(managedValue);
	case 93:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode93->GetValue());
		return safe_cast<Value>(managedValue);
	case 94:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode94->GetValue());
		return safe_cast<Value>(managedValue);
	case 95:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode95->GetValue());
		return safe_cast<Value>(managedValue);
	case 96:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode96->GetValue());
		return safe_cast<Value>(managedValue);
	case 97:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode97->GetValue().c_str());
		return safe_cast<Value>(managedValue);

	case 99:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode99->GetValue());
		return safe_cast<Value>(managedValue);
	case 100:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode100->GetValue());
		return safe_cast<Value>(managedValue);
	case 101:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode101->GetValue());
		return safe_cast<Value>(managedValue);
	case 102:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode102->GetValue());
		return safe_cast<Value>(managedValue);
	case 103:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode103->GetValue());
		return safe_cast<Value>(managedValue);
	case 104:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode104->GetValue());
		return safe_cast<Value>(managedValue);
	case 105:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode105->GetValue());
		return safe_cast<Value>(managedValue);
	case 106:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode106->GetValue());
		return safe_cast<Value>(managedValue);
	case 107:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode107->GetValue());
		return safe_cast<Value>(managedValue);
	case 108:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode108->GetValue());
		return safe_cast<Value>(managedValue);
	case 109:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode109->GetValue());
		return safe_cast<Value>(managedValue);
	case 110:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode110->GetValue());
		return safe_cast<Value>(managedValue);
	case 111:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode111->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 113:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode113->GetValue());
		return safe_cast<Value>(managedValue);
	case 114:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode114->GetValue());
		return safe_cast<Value>(managedValue);
	case 115:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode115->GetValue());
		return safe_cast<Value>(managedValue);
	case 116:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode116->GetValue());
		return safe_cast<Value>(managedValue);
	case 117:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode117->GetValue());
		return safe_cast<Value>(managedValue);
	case 118:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode118->GetValue());
		return safe_cast<Value>(managedValue);
	case 119:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode119->GetValue());
		return safe_cast<Value>(managedValue);
	case 120:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode120->GetValue());
		return safe_cast<Value>(managedValue);
	case 121:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode121->GetValue());
		return safe_cast<Value>(managedValue);
	case 122:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode122->GetValue());
		return safe_cast<Value>(managedValue);
	case 123:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode123->GetValue());
		return safe_cast<Value>(managedValue);
	case 124:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode124->GetValue());
		return safe_cast<Value>(managedValue);
	case 125:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode125->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 127:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode127->GetValue());
		return safe_cast<Value>(managedValue);
	case 128:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode128->GetValue());
		return safe_cast<Value>(managedValue);
	case 129:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode129->GetValue());
		return safe_cast<Value>(managedValue);
	case 130:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode130->GetValue());
		return safe_cast<Value>(managedValue);
	case 131:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode131->GetValue());
		return safe_cast<Value>(managedValue);
	case 132:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode132->GetValue());
		return safe_cast<Value>(managedValue);
	case 133:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode133->GetValue());
		return safe_cast<Value>(managedValue);
	case 134:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode134->GetValue());
		return safe_cast<Value>(managedValue);
	case 135:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode135->GetValue());
		return safe_cast<Value>(managedValue);
	case 136:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode136->GetValue());
		return safe_cast<Value>(managedValue);
	case 137:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode137->GetValue());
		return safe_cast<Value>(managedValue);
	case 138:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode138->GetValue());
		return safe_cast<Value>(managedValue);
	case 139:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode139->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 141:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode141->GetValue());
		return safe_cast<Value>(managedValue);
	case 142:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode142->GetValue());
		return safe_cast<Value>(managedValue);
	case 143:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode143->GetValue());
		return safe_cast<Value>(managedValue);
	case 144:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode144->GetValue());
		return safe_cast<Value>(managedValue);
	case 145:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode145->GetValue());
		return safe_cast<Value>(managedValue);
	case 146:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode146->GetValue());
		return safe_cast<Value>(managedValue);
	case 147:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode147->GetValue());
		return safe_cast<Value>(managedValue);
	case 148:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode148->GetValue());
		return safe_cast<Value>(managedValue);
	case 149:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode149->GetValue());
		return safe_cast<Value>(managedValue);
	case 150:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode150->GetValue());
		return safe_cast<Value>(managedValue);
	case 151:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode151->GetValue());
		return safe_cast<Value>(managedValue);
	case 152:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode152->GetValue());
		return safe_cast<Value>(managedValue);
	case 153:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode153->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 155:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode155->GetValue());
		return safe_cast<Value>(managedValue);
	case 156:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode156->GetValue());
		return safe_cast<Value>(managedValue);
	case 157:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode157->GetValue());
		return safe_cast<Value>(managedValue);
	case 158:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode158->GetValue());
		return safe_cast<Value>(managedValue);
	case 159:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode159->GetValue());
		return safe_cast<Value>(managedValue);
	case 160:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode160->GetValue());
		return safe_cast<Value>(managedValue);
	case 161:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode161->GetValue());
		return safe_cast<Value>(managedValue);
	case 162:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode162->GetValue());
		return safe_cast<Value>(managedValue);
	case 163:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode163->GetValue());
		return safe_cast<Value>(managedValue);
	case 164:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode164->GetValue());
		return safe_cast<Value>(managedValue);
	case 165:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode165->GetValue());
		return safe_cast<Value>(managedValue);
	case 166:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode166->GetValue());
		return safe_cast<Value>(managedValue);
	case 167:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode167->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 169:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode169->GetValue());
		return safe_cast<Value>(managedValue);
	case 170:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode170->GetValue());
		return safe_cast<Value>(managedValue);
	case 171:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode171->GetValue());
		return safe_cast<Value>(managedValue);
	case 172:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode172->GetValue());
		return safe_cast<Value>(managedValue);
	case 173:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode173->GetValue());
		return safe_cast<Value>(managedValue);
	case 174:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode174->GetValue());
		return safe_cast<Value>(managedValue);
	case 175:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode175->GetValue());
		return safe_cast<Value>(managedValue);
	case 176:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode176->GetValue());
		return safe_cast<Value>(managedValue);
	case 177:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode177->GetValue());
		return safe_cast<Value>(managedValue);
	case 178:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode178->GetValue());
		return safe_cast<Value>(managedValue);
	case 179:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode179->GetValue());
		return safe_cast<Value>(managedValue);
	case 180:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode180->GetValue());
		return safe_cast<Value>(managedValue);
	case 181:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode181->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 183:
		managedValue = gcnew System::Byte(creverseNodeUnion->CPPcreversenode183->GetValue());
		return safe_cast<Value>(managedValue);
	case 184:
		managedValue = gcnew System::SByte(creverseNodeUnion->CPPcreversenode184->GetValue());
		return safe_cast<Value>(managedValue);
	case 185:
		managedValue = gcnew System::Int16(creverseNodeUnion->CPPcreversenode185->GetValue());
		return safe_cast<Value>(managedValue);
	case 186:
		managedValue = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode186->GetValue());
		return safe_cast<Value>(managedValue);
	case 187:
		managedValue = gcnew System::Int32(creverseNodeUnion->CPPcreversenode187->GetValue());
		return safe_cast<Value>(managedValue);
	case 188:
		managedValue = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode188->GetValue());
		return safe_cast<Value>(managedValue);
	case 189:
		managedValue = gcnew System::Int64(creverseNodeUnion->CPPcreversenode189->GetValue());
		return safe_cast<Value>(managedValue);
	case 190:
		managedValue = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode190->GetValue());
		return safe_cast<Value>(managedValue);
	case 191:
		managedValue = gcnew System::Single(creverseNodeUnion->CPPcreversenode191->GetValue());
		return safe_cast<Value>(managedValue);
	case 192:
		managedValue = gcnew System::Double(creverseNodeUnion->CPPcreversenode192->GetValue());
		return safe_cast<Value>(managedValue);
	case 193:
		managedValue = gcnew System::Char(creverseNodeUnion->CPPcreversenode193->GetValue());
		return safe_cast<Value>(managedValue);
	case 194:
		managedValue = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode194->GetValue());
		return safe_cast<Value>(managedValue);
	case 195:
		managedValue = gcnew String(creverseNodeUnion->CPPcreversenode195->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 14:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode14->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 28:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode28->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 42:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode42->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 56:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode56->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 70:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode70->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 84:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode84->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 98:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode98->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 112:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode112->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 126:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode126->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 140:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode140->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 154:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode154->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 168:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode168->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 182:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode182->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode196->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Value();
}

generic<typename Key, typename Value>
Key UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::GetKey()
{
	if (Object::ReferenceEquals(this, nullptr)) return Key();
	if (isInitialized == 0) return Key();
	const System::Object^ managedKey;
	Key objtarget;
	switch (nKeyValueType)
	{
	case 0: default:
		return Key();
	case 1:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode1->GetKey());
		return safe_cast<Key>(managedKey);
	case 2:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode2->GetKey());
		return safe_cast<Key>(managedKey);
	case 3:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode3->GetKey());
		return safe_cast<Key>(managedKey);
	case 4:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode4->GetKey());
		return safe_cast<Key>(managedKey);
	case 5:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode5->GetKey());
		return safe_cast<Key>(managedKey);
	case 6:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode6->GetKey());
		return safe_cast<Key>(managedKey);
	case 7:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode7->GetKey());
		return safe_cast<Key>(managedKey);
	case 8:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode8->GetKey());
		return safe_cast<Key>(managedKey);
	case 9:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode9->GetKey());
		return safe_cast<Key>(managedKey);
	case 10:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode10->GetKey());
		return safe_cast<Key>(managedKey);
	case 11:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode11->GetKey());
		return safe_cast<Key>(managedKey);
	case 12:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode12->GetKey());
		return safe_cast<Key>(managedKey);
	case 13:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode13->GetKey());
		return safe_cast<Key>(managedKey);
	case 14:
		managedKey = gcnew System::Byte(creverseNodeUnion->CPPcreversenode14->GetKey());
		return safe_cast<Key>(managedKey);
	case 15:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode15->GetKey());
		return safe_cast<Key>(managedKey);
	case 16:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode16->GetKey());
		return safe_cast<Key>(managedKey);
	case 17:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode17->GetKey());
		return safe_cast<Key>(managedKey);
	case 18:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode18->GetKey());
		return safe_cast<Key>(managedKey);
	case 19:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode19->GetKey());
		return safe_cast<Key>(managedKey);
	case 20:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode20->GetKey());
		return safe_cast<Key>(managedKey);
	case 21:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode21->GetKey());
		return safe_cast<Key>(managedKey);
	case 22:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode22->GetKey());
		return safe_cast<Key>(managedKey);
	case 23:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode23->GetKey());
		return safe_cast<Key>(managedKey);
	case 24:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode24->GetKey());
		return safe_cast<Key>(managedKey);
	case 25:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode25->GetKey());
		return safe_cast<Key>(managedKey);
	case 26:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode26->GetKey());
		return safe_cast<Key>(managedKey);
	case 27:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode27->GetKey());
		return safe_cast<Key>(managedKey);
	case 28:
		managedKey = gcnew System::SByte(creverseNodeUnion->CPPcreversenode28->GetKey());
		return safe_cast<Key>(managedKey);
	case 29:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode29->GetKey());
		return safe_cast<Key>(managedKey);
	case 30:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode30->GetKey());
		return safe_cast<Key>(managedKey);
	case 31:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode31->GetKey());
		return safe_cast<Key>(managedKey);
	case 32:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode32->GetKey());
		return safe_cast<Key>(managedKey);
	case 33:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode33->GetKey());
		return safe_cast<Key>(managedKey);
	case 34:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode34->GetKey());
		return safe_cast<Key>(managedKey);
	case 35:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode35->GetKey());
		return safe_cast<Key>(managedKey);
	case 36:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode36->GetKey());
		return safe_cast<Key>(managedKey);
	case 37:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode37->GetKey());
		return safe_cast<Key>(managedKey);
	case 38:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode38->GetKey());
		return safe_cast<Key>(managedKey);
	case 39:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode39->GetKey());
		return safe_cast<Key>(managedKey);
	case 40:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode40->GetKey());
		return safe_cast<Key>(managedKey);
	case 41:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode41->GetKey());
		return safe_cast<Key>(managedKey);
	case 42:
		managedKey = gcnew System::Int16(creverseNodeUnion->CPPcreversenode42->GetKey());
		return safe_cast<Key>(managedKey);
	case 43:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode43->GetKey());
		return safe_cast<Key>(managedKey);
	case 44:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode44->GetKey());
		return safe_cast<Key>(managedKey);
	case 45:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode45->GetKey());
		return safe_cast<Key>(managedKey);
	case 46:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode46->GetKey());
		return safe_cast<Key>(managedKey);
	case 47:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode47->GetKey());
		return safe_cast<Key>(managedKey);
	case 48:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode48->GetKey());
		return safe_cast<Key>(managedKey);
	case 49:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode49->GetKey());
		return safe_cast<Key>(managedKey);
	case 50:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode50->GetKey());
		return safe_cast<Key>(managedKey);
	case 51:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode51->GetKey());
		return safe_cast<Key>(managedKey);
	case 52:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode52->GetKey());
		return safe_cast<Key>(managedKey);
	case 53:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode53->GetKey());
		return safe_cast<Key>(managedKey);
	case 54:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode54->GetKey());
		return safe_cast<Key>(managedKey);
	case 55:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode55->GetKey());
		return safe_cast<Key>(managedKey);
	case 56:
		managedKey = gcnew System::UInt16(creverseNodeUnion->CPPcreversenode56->GetKey());
		return safe_cast<Key>(managedKey);
	case 57:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode57->GetKey());
		return safe_cast<Key>(managedKey);
	case 58:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode58->GetKey());
		return safe_cast<Key>(managedKey);
	case 59:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode59->GetKey());
		return safe_cast<Key>(managedKey);
	case 60:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode60->GetKey());
		return safe_cast<Key>(managedKey);
	case 61:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode61->GetKey());
		return safe_cast<Key>(managedKey);
	case 62:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode62->GetKey());
		return safe_cast<Key>(managedKey);
	case 63:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode63->GetKey());
		return safe_cast<Key>(managedKey);
	case 64:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode64->GetKey());
		return safe_cast<Key>(managedKey);
	case 65:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode65->GetKey());
		return safe_cast<Key>(managedKey);
	case 66:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode66->GetKey());
		return safe_cast<Key>(managedKey);
	case 67:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode67->GetKey());
		return safe_cast<Key>(managedKey);
	case 68:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode68->GetKey());
		return safe_cast<Key>(managedKey);
	case 69:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode69->GetKey());
		return safe_cast<Key>(managedKey);
	case 70:
		managedKey = gcnew System::Int32(creverseNodeUnion->CPPcreversenode70->GetKey());
		return safe_cast<Key>(managedKey);
	case 71:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode71->GetKey());
		return safe_cast<Key>(managedKey);
	case 72:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode72->GetKey());
		return safe_cast<Key>(managedKey);
	case 73:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode73->GetKey());
		return safe_cast<Key>(managedKey);
	case 74:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode74->GetKey());
		return safe_cast<Key>(managedKey);
	case 75:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode75->GetKey());
		return safe_cast<Key>(managedKey);
	case 76:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode76->GetKey());
		return safe_cast<Key>(managedKey);
	case 77:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode77->GetKey());
		return safe_cast<Key>(managedKey);
	case 78:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode78->GetKey());
		return safe_cast<Key>(managedKey);
	case 79:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode79->GetKey());
		return safe_cast<Key>(managedKey);
	case 80:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode80->GetKey());
		return safe_cast<Key>(managedKey);
	case 81:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode81->GetKey());
		return safe_cast<Key>(managedKey);
	case 82:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode82->GetKey());
		return safe_cast<Key>(managedKey);
	case 83:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode83->GetKey());
		return safe_cast<Key>(managedKey);
	case 84:
		managedKey = gcnew System::UInt32(creverseNodeUnion->CPPcreversenode84->GetKey());
		return safe_cast<Key>(managedKey);
	case 85:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode85->GetKey());
		return safe_cast<Key>(managedKey);
	case 86:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode86->GetKey());
		return safe_cast<Key>(managedKey);
	case 87:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode87->GetKey());
		return safe_cast<Key>(managedKey);
	case 88:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode88->GetKey());
		return safe_cast<Key>(managedKey);
	case 89:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode89->GetKey());
		return safe_cast<Key>(managedKey);
	case 90:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode90->GetKey());
		return safe_cast<Key>(managedKey);
	case 91:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode91->GetKey());
		return safe_cast<Key>(managedKey);
	case 92:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode92->GetKey());
		return safe_cast<Key>(managedKey);
	case 93:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode93->GetKey());
		return safe_cast<Key>(managedKey);
	case 94:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode94->GetKey());
		return safe_cast<Key>(managedKey);
	case 95:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode95->GetKey());
		return safe_cast<Key>(managedKey);
	case 96:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode96->GetKey());
		return safe_cast<Key>(managedKey);
	case 97:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode97->GetKey());
		return safe_cast<Key>(managedKey);
	case 98:
		managedKey = gcnew System::Int64(creverseNodeUnion->CPPcreversenode98->GetKey());
		return safe_cast<Key>(managedKey);
	case 99:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode99->GetKey());
		return safe_cast<Key>(managedKey);
	case 100:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode100->GetKey());
		return safe_cast<Key>(managedKey);
	case 101:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode101->GetKey());
		return safe_cast<Key>(managedKey);
	case 102:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode102->GetKey());
		return safe_cast<Key>(managedKey);
	case 103:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode103->GetKey());
		return safe_cast<Key>(managedKey);
	case 104:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode104->GetKey());
		return safe_cast<Key>(managedKey);
	case 105:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode105->GetKey());
		return safe_cast<Key>(managedKey);
	case 106:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode106->GetKey());
		return safe_cast<Key>(managedKey);
	case 107:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode107->GetKey());
		return safe_cast<Key>(managedKey);
	case 108:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode108->GetKey());
		return safe_cast<Key>(managedKey);
	case 109:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode109->GetKey());
		return safe_cast<Key>(managedKey);
	case 110:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode110->GetKey());
		return safe_cast<Key>(managedKey);
	case 111:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode111->GetKey());
		return safe_cast<Key>(managedKey);
	case 112:
		managedKey = gcnew System::UInt64(creverseNodeUnion->CPPcreversenode112->GetKey());
		return safe_cast<Key>(managedKey);
	case 113:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode113->GetKey());
		return safe_cast<Key>(managedKey);
	case 114:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode114->GetKey());
		return safe_cast<Key>(managedKey);
	case 115:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode115->GetKey());
		return safe_cast<Key>(managedKey);
	case 116:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode116->GetKey());
		return safe_cast<Key>(managedKey);
	case 117:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode117->GetKey());
		return safe_cast<Key>(managedKey);
	case 118:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode118->GetKey());
		return safe_cast<Key>(managedKey);
	case 119:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode119->GetKey());
		return safe_cast<Key>(managedKey);
	case 120:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode120->GetKey());
		return safe_cast<Key>(managedKey);
	case 121:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode121->GetKey());
		return safe_cast<Key>(managedKey);
	case 122:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode122->GetKey());
		return safe_cast<Key>(managedKey);
	case 123:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode123->GetKey());
		return safe_cast<Key>(managedKey);
	case 124:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode124->GetKey());
		return safe_cast<Key>(managedKey);
	case 125:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode125->GetKey());
		return safe_cast<Key>(managedKey);
	case 126:
		managedKey = gcnew System::Single(creverseNodeUnion->CPPcreversenode126->GetKey());
		return safe_cast<Key>(managedKey);
	case 127:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode127->GetKey());
		return safe_cast<Key>(managedKey);
	case 128:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode128->GetKey());
		return safe_cast<Key>(managedKey);
	case 129:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode129->GetKey());
		return safe_cast<Key>(managedKey);
	case 130:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode130->GetKey());
		return safe_cast<Key>(managedKey);
	case 131:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode131->GetKey());
		return safe_cast<Key>(managedKey);
	case 132:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode132->GetKey());
		return safe_cast<Key>(managedKey);
	case 133:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode133->GetKey());
		return safe_cast<Key>(managedKey);
	case 134:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode134->GetKey());
		return safe_cast<Key>(managedKey);
	case 135:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode135->GetKey());
		return safe_cast<Key>(managedKey);
	case 136:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode136->GetKey());
		return safe_cast<Key>(managedKey);
	case 137:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode137->GetKey());
		return safe_cast<Key>(managedKey);
	case 138:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode138->GetKey());
		return safe_cast<Key>(managedKey);
	case 139:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode139->GetKey());
		return safe_cast<Key>(managedKey);
	case 140:
		managedKey = gcnew System::Double(creverseNodeUnion->CPPcreversenode140->GetKey());
		return safe_cast<Key>(managedKey);
	case 141:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode141->GetKey());
		return safe_cast<Key>(managedKey);
	case 142:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode142->GetKey());
		return safe_cast<Key>(managedKey);
	case 143:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode143->GetKey());
		return safe_cast<Key>(managedKey);
	case 144:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode144->GetKey());
		return safe_cast<Key>(managedKey);
	case 145:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode145->GetKey());
		return safe_cast<Key>(managedKey);
	case 146:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode146->GetKey());
		return safe_cast<Key>(managedKey);
	case 147:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode147->GetKey());
		return safe_cast<Key>(managedKey);
	case 148:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode148->GetKey());
		return safe_cast<Key>(managedKey);
	case 149:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode149->GetKey());
		return safe_cast<Key>(managedKey);
	case 150:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode150->GetKey());
		return safe_cast<Key>(managedKey);
	case 151:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode151->GetKey());
		return safe_cast<Key>(managedKey);
	case 152:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode152->GetKey());
		return safe_cast<Key>(managedKey);
	case 153:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode153->GetKey());
		return safe_cast<Key>(managedKey);
	case 154:
		managedKey = gcnew System::Char(creverseNodeUnion->CPPcreversenode154->GetKey());
		return safe_cast<Key>(managedKey);
	case 155:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode155->GetKey());
		return safe_cast<Key>(managedKey);
	case 156:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode156->GetKey());
		return safe_cast<Key>(managedKey);
	case 157:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode157->GetKey());
		return safe_cast<Key>(managedKey);
	case 158:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode158->GetKey());
		return safe_cast<Key>(managedKey);
	case 159:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode159->GetKey());
		return safe_cast<Key>(managedKey);
	case 160:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode160->GetKey());
		return safe_cast<Key>(managedKey);
	case 161:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode161->GetKey());
		return safe_cast<Key>(managedKey);
	case 162:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode162->GetKey());
		return safe_cast<Key>(managedKey);
	case 163:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode163->GetKey());
		return safe_cast<Key>(managedKey);
	case 164:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode164->GetKey());
		return safe_cast<Key>(managedKey);
	case 165:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode165->GetKey());
		return safe_cast<Key>(managedKey);
	case 166:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode166->GetKey());
		return safe_cast<Key>(managedKey);
	case 167:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode167->GetKey());
		return safe_cast<Key>(managedKey);
	case 168:
		managedKey = gcnew System::Boolean(creverseNodeUnion->CPPcreversenode168->GetKey());
		return safe_cast<Key>(managedKey);
	case 169:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode169->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 170:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode170->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 171:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode171->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 172:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode172->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 173:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode173->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 174:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode174->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 175:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode175->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 176:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode176->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 177:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode177->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 178:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode178->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 179:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode179->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 180:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode180->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 181:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode181->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 182:
		managedKey = gcnew String(creverseNodeUnion->CPPcreversenode182->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 183:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode183->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 184:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode184->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 185:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode185->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 186:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode186->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 187:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode187->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 188:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode188->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 189:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode189->GetKey(), objtarget))
		{
			return objtarget;
		}
	case 190:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode190->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 191:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode191->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 192:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode192->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 193:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode193->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 194:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode194->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 195:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode195->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(creverseNodeUnion->CPPcreversenode196->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Key();
}


generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::operator++(CShorpUnOrderedCReverseNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Next();
	return thisObj;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::operator--(CShorpUnOrderedCReverseNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Previous();
	return thisObj;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary)
{
	if (ClassDictionary == nullptr) return;
	gIntKeyClassDictionary = ClassDictionary;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary)
{
	if (gValueClassDictionary == nullptr) return;
	gValueClassDictionary = ClassDictionary;
}

//
//generic<typename Key, typename Value>
//MultiMapWapper::CShorpCReverseNode<Key, Value>^ MultiMapWapper::CShorpCReverseNode<Key, Value>::operator++()
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == 0) return this;
//	Next();
//	return this;
//}
//
//generic<typename Key, typename Value>
//MultiMapWapper::CShorpCReverseNode<Key, Value>^ MultiMapWapper::CShorpCReverseNode<Key, Value>::operator++(int)
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == 0) return this;
//	Next();
//	return this;
//}