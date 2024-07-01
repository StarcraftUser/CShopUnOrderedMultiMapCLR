#include "pch.h"

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::CShorpUnOrderedCReverseNode()
{
	gIntKeyClassDictionary = nullptr;
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

generic<typename Key, typename Value>
inline void UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::Next()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		(*(creverseNodeUnion->CPPcreversenode1))++;
		return;
	case 2:
		(*(creverseNodeUnion->CPPcreversenode2))++;
		return;
	case 3:
		(*(creverseNodeUnion->CPPcreversenode3))++;
		return;
	case 4:
		(*(creverseNodeUnion->CPPcreversenode4))++;
		return;
	case 5:
		(*(creverseNodeUnion->CPPcreversenode5))++;
		return;
	case 6:
		(*(creverseNodeUnion->CPPcreversenode6))++;
		return;
	case 7:
		(*(creverseNodeUnion->CPPcreversenode7))++;
		return;
	case 8:
		(*(creverseNodeUnion->CPPcreversenode8))++;
		return;
	case 9:
		(*(creverseNodeUnion->CPPcreversenode9))++;
		return;
	case 10:
		(*(creverseNodeUnion->CPPcreversenode10))++;
		return;
	case 11:
		(*(creverseNodeUnion->CPPcreversenode11))++;
		return;
	case 12:
		(*(creverseNodeUnion->CPPcreversenode12))++;
		return;
	case 13:
		(*(creverseNodeUnion->CPPcreversenode13))++;
		return;
	case 14:
		(*(creverseNodeUnion->CPPcreversenode14))++;
		return;
	case 15:
		(*(creverseNodeUnion->CPPcreversenode15))++;
		return;
	case 16:
		(*(creverseNodeUnion->CPPcreversenode16))++;
		return;
	case 17:
		(*(creverseNodeUnion->CPPcreversenode17))++;
		return;
	case 18:
		(*(creverseNodeUnion->CPPcreversenode18))++;
		return;
	case 19:
		(*(creverseNodeUnion->CPPcreversenode19))++;
		return;
	case 20:
		(*(creverseNodeUnion->CPPcreversenode20))++;
		return;
	case 21:
		(*(creverseNodeUnion->CPPcreversenode21))++;
		return;
	case 22:
		(*(creverseNodeUnion->CPPcreversenode22))++;
		return;
	case 23:
		(*(creverseNodeUnion->CPPcreversenode23))++;
		return;
	case 24:
		(*(creverseNodeUnion->CPPcreversenode24))++;
		return;
	case 25:
		(*(creverseNodeUnion->CPPcreversenode25))++;
		return;
	case 26:
		(*(creverseNodeUnion->CPPcreversenode26))++;
		return;
	case 27:
		(*(creverseNodeUnion->CPPcreversenode27))++;
		return;
	case 28:
		(*(creverseNodeUnion->CPPcreversenode28))++;
		return;
	case 29:
		(*(creverseNodeUnion->CPPcreversenode29))++;
		return;
	case 30:
		(*(creverseNodeUnion->CPPcreversenode30))++;
		return;
	case 31:
		(*(creverseNodeUnion->CPPcreversenode31))++;
		return;
	case 32:
		(*(creverseNodeUnion->CPPcreversenode32))++;
		return;
	case 33:
		(*(creverseNodeUnion->CPPcreversenode33))++;
		return;
	case 34:
		(*(creverseNodeUnion->CPPcreversenode34))++;
		return;
	case 35:
		(*(creverseNodeUnion->CPPcreversenode35))++;
		return;
	case 36:
		(*(creverseNodeUnion->CPPcreversenode36))++;
		return;
	case 37:
		(*(creverseNodeUnion->CPPcreversenode37))++;
		return;
	case 38:
		(*(creverseNodeUnion->CPPcreversenode38))++;
		return;
	case 39:
		(*(creverseNodeUnion->CPPcreversenode39))++;
		return;
	case 40:
		(*(creverseNodeUnion->CPPcreversenode40))++;
		return;
	case 41:
		(*(creverseNodeUnion->CPPcreversenode41))++;
		return;
	case 42:
		(*(creverseNodeUnion->CPPcreversenode42))++;
		return;
	case 43:
		(*(creverseNodeUnion->CPPcreversenode43))++;
		return;
	case 44:
		(*(creverseNodeUnion->CPPcreversenode44))++;
		return;
	case 45:
		(*(creverseNodeUnion->CPPcreversenode45))++;
		return;
	case 46:
		(*(creverseNodeUnion->CPPcreversenode46))++;
		return;
	case 47:
		(*(creverseNodeUnion->CPPcreversenode47))++;
		return;
	case 48:
		(*(creverseNodeUnion->CPPcreversenode48))++;
		return;
	case 49:
		(*(creverseNodeUnion->CPPcreversenode49))++;
		return;
	case 50:
		(*(creverseNodeUnion->CPPcreversenode50))++;
		return;
	case 51:
		(*(creverseNodeUnion->CPPcreversenode51))++;
		return;
	case 52:
		(*(creverseNodeUnion->CPPcreversenode52))++;
		return;
	case 53:
		(*(creverseNodeUnion->CPPcreversenode53))++;
		return;
	case 54:
		(*(creverseNodeUnion->CPPcreversenode54))++;
		return;
	case 55:
		(*(creverseNodeUnion->CPPcreversenode55))++;
		return;
	case 56:
		(*(creverseNodeUnion->CPPcreversenode56))++;
		return;
	case 57:
		(*(creverseNodeUnion->CPPcreversenode57))++;
		return;
	case 58:
		(*(creverseNodeUnion->CPPcreversenode58))++;
		return;
	case 59:
		(*(creverseNodeUnion->CPPcreversenode59))++;
		return;
	case 60:
		(*(creverseNodeUnion->CPPcreversenode60))++;
		return;
	case 61:
		(*(creverseNodeUnion->CPPcreversenode61))++;
		return;
	case 62:
		(*(creverseNodeUnion->CPPcreversenode62))++;
		return;
	case 63:
		(*(creverseNodeUnion->CPPcreversenode63))++;
		return;
	case 64:
		(*(creverseNodeUnion->CPPcreversenode64))++;
		return;
	case 65:
		(*(creverseNodeUnion->CPPcreversenode65))++;
		return;
	case 66:
		(*(creverseNodeUnion->CPPcreversenode66))++;
		return;
	case 67:
		(*(creverseNodeUnion->CPPcreversenode67))++;
		return;
	case 68:
		(*(creverseNodeUnion->CPPcreversenode68))++;
		return;
	case 69:
		(*(creverseNodeUnion->CPPcreversenode69))++;
		return;
	case 70:
		(*(creverseNodeUnion->CPPcreversenode70))++;
		return;
	case 71:
		(*(creverseNodeUnion->CPPcreversenode71))++;
		return;
	case 72:
		(*(creverseNodeUnion->CPPcreversenode72))++;
		return;
	case 73:
		(*(creverseNodeUnion->CPPcreversenode73))++;
		return;
	case 74:
		(*(creverseNodeUnion->CPPcreversenode74))++;
		return;
	case 75:
		(*(creverseNodeUnion->CPPcreversenode75))++;
		return;
	case 76:
		(*(creverseNodeUnion->CPPcreversenode76))++;
		return;
	case 77:
		(*(creverseNodeUnion->CPPcreversenode77))++;
		return;
	case 78:
		(*(creverseNodeUnion->CPPcreversenode78))++;
		return;
	case 79:
		(*(creverseNodeUnion->CPPcreversenode79))++;
		return;
	case 80:
		(*(creverseNodeUnion->CPPcreversenode80))++;
		return;
	case 81:
		(*(creverseNodeUnion->CPPcreversenode81))++;
		return;
	case 82:
		(*(creverseNodeUnion->CPPcreversenode82))++;
		return;
	case 83:
		(*(creverseNodeUnion->CPPcreversenode83))++;
		return;
	case 84:
		(*(creverseNodeUnion->CPPcreversenode84))++;
		return;
	case 85:
		(*(creverseNodeUnion->CPPcreversenode85))++;
		return;
	case 86:
		(*(creverseNodeUnion->CPPcreversenode86))++;
		return;
	case 87:
		(*(creverseNodeUnion->CPPcreversenode87))++;
		return;
	case 88:
		(*(creverseNodeUnion->CPPcreversenode88))++;
		return;
	case 89:
		(*(creverseNodeUnion->CPPcreversenode89))++;
		return;
	case 90:
		(*(creverseNodeUnion->CPPcreversenode90))++;
		return;
	case 91:
		(*(creverseNodeUnion->CPPcreversenode91))++;
		return;
	case 92:
		(*(creverseNodeUnion->CPPcreversenode92))++;
		return;
	case 93:
		(*(creverseNodeUnion->CPPcreversenode93))++;
		return;
	case 94:
		(*(creverseNodeUnion->CPPcreversenode94))++;
		return;
	case 95:
		(*(creverseNodeUnion->CPPcreversenode95))++;
		return;
	case 96:
		(*(creverseNodeUnion->CPPcreversenode96))++;
		return;
	case 97:
		(*(creverseNodeUnion->CPPcreversenode97))++;
		return;
	case 98:
		(*(creverseNodeUnion->CPPcreversenode98))++;
		return;
	case 99:
		(*(creverseNodeUnion->CPPcreversenode99))++;
		return;
	case 100:
		(*(creverseNodeUnion->CPPcreversenode100))++;
		return;
	case 101:
		(*(creverseNodeUnion->CPPcreversenode101))++;
		return;
	case 102:
		(*(creverseNodeUnion->CPPcreversenode102))++;
		return;
	case 103:
		(*(creverseNodeUnion->CPPcreversenode103))++;
		return;
	case 104:
		(*(creverseNodeUnion->CPPcreversenode104))++;
		return;
	case 105:
		(*(creverseNodeUnion->CPPcreversenode105))++;
		return;
	case 106:
		(*(creverseNodeUnion->CPPcreversenode106))++;
		return;
	case 107:
		(*(creverseNodeUnion->CPPcreversenode107))++;
		return;
	case 108:
		(*(creverseNodeUnion->CPPcreversenode108))++;
		return;
	case 109:
		(*(creverseNodeUnion->CPPcreversenode109))++;
		return;
	case 110:
		(*(creverseNodeUnion->CPPcreversenode110))++;
		return;
	case 111:
		(*(creverseNodeUnion->CPPcreversenode111))++;
		return;
	case 112:
		(*(creverseNodeUnion->CPPcreversenode112))++;
		return;
	case 113:
		(*(creverseNodeUnion->CPPcreversenode113))++;
		return;
	case 114:
		(*(creverseNodeUnion->CPPcreversenode114))++;
		return;
	case 115:
		(*(creverseNodeUnion->CPPcreversenode115))++;
		return;
	case 116:
		(*(creverseNodeUnion->CPPcreversenode116))++;
		return;
	case 117:
		(*(creverseNodeUnion->CPPcreversenode117))++;
		return;
	case 118:
		(*(creverseNodeUnion->CPPcreversenode118))++;
		return;
	case 119:
		(*(creverseNodeUnion->CPPcreversenode119))++;
		return;
	case 120:
		(*(creverseNodeUnion->CPPcreversenode120))++;
		return;
	case 121:
		(*(creverseNodeUnion->CPPcreversenode121))++;
		return;
	case 122:
		(*(creverseNodeUnion->CPPcreversenode122))++;
		return;
	case 123:
		(*(creverseNodeUnion->CPPcreversenode123))++;
		return;
	case 124:
		(*(creverseNodeUnion->CPPcreversenode124))++;
		return;
	case 125:
		(*(creverseNodeUnion->CPPcreversenode125))++;
		return;
	case 126:
		(*(creverseNodeUnion->CPPcreversenode126))++;
		return;
	case 127:
		(*(creverseNodeUnion->CPPcreversenode127))++;
		return;
	case 128:
		(*(creverseNodeUnion->CPPcreversenode128))++;
		return;
	case 129:
		(*(creverseNodeUnion->CPPcreversenode129))++;
		return;
	case 130:
		(*(creverseNodeUnion->CPPcreversenode130))++;
		return;
	case 131:
		(*(creverseNodeUnion->CPPcreversenode131))++;
		return;
	case 132:
		(*(creverseNodeUnion->CPPcreversenode132))++;
		return;
	case 133:
		(*(creverseNodeUnion->CPPcreversenode133))++;
		return;
	case 134:
		(*(creverseNodeUnion->CPPcreversenode134))++;
		return;
	case 135:
		(*(creverseNodeUnion->CPPcreversenode135))++;
		return;
	case 136:
		(*(creverseNodeUnion->CPPcreversenode136))++;
		return;
	case 137:
		(*(creverseNodeUnion->CPPcreversenode137))++;
		return;
	case 138:
		(*(creverseNodeUnion->CPPcreversenode138))++;
		return;
	case 139:
		(*(creverseNodeUnion->CPPcreversenode139))++;
		return;
	case 140:
		(*(creverseNodeUnion->CPPcreversenode140))++;
		return;
	case 141:
		(*(creverseNodeUnion->CPPcreversenode141))++;
		return;
	case 142:
		(*(creverseNodeUnion->CPPcreversenode142))++;
		return;
	case 143:
		(*(creverseNodeUnion->CPPcreversenode143))++;
		return;
	case 144:
		(*(creverseNodeUnion->CPPcreversenode144))++;
		return;
	case 145:
		(*(creverseNodeUnion->CPPcreversenode145))++;
		return;
	case 146:
		(*(creverseNodeUnion->CPPcreversenode146))++;
		return;
	case 147:
		(*(creverseNodeUnion->CPPcreversenode147))++;
		return;
	case 148:
		(*(creverseNodeUnion->CPPcreversenode148))++;
		return;
	case 149:
		(*(creverseNodeUnion->CPPcreversenode149))++;
		return;
	case 150:
		(*(creverseNodeUnion->CPPcreversenode150))++;
		return;
	case 151:
		(*(creverseNodeUnion->CPPcreversenode151))++;
		return;
	case 152:
		(*(creverseNodeUnion->CPPcreversenode152))++;
		return;
	case 153:
		(*(creverseNodeUnion->CPPcreversenode153))++;
		return;
	case 154:
		(*(creverseNodeUnion->CPPcreversenode154))++;
		return;
	case 155:
		(*(creverseNodeUnion->CPPcreversenode155))++;
		return;
	case 156:
		(*(creverseNodeUnion->CPPcreversenode156))++;
		return;
	case 157:
		(*(creverseNodeUnion->CPPcreversenode157))++;
		return;
	case 158:
		(*(creverseNodeUnion->CPPcreversenode158))++;
		return;
	case 159:
		(*(creverseNodeUnion->CPPcreversenode159))++;
		return;
	case 160:
		(*(creverseNodeUnion->CPPcreversenode160))++;
		return;
	case 161:
		(*(creverseNodeUnion->CPPcreversenode161))++;
		return;
	case 162:
		(*(creverseNodeUnion->CPPcreversenode162))++;
		return;
	case 163:
		(*(creverseNodeUnion->CPPcreversenode163))++;
		return;
	case 164:
		(*(creverseNodeUnion->CPPcreversenode164))++;
		return;
	case 165:
		(*(creverseNodeUnion->CPPcreversenode165))++;
		return;
	case 166:
		(*(creverseNodeUnion->CPPcreversenode166))++;
		return;
	case 167:
		(*(creverseNodeUnion->CPPcreversenode167))++;
		return;
	case 168:
		(*(creverseNodeUnion->CPPcreversenode168))++;
		return;
	case 169:
		(*(creverseNodeUnion->CPPcreversenode169))++;
		return;
	case 170:
		(*(creverseNodeUnion->CPPcreversenode170))++;
		return;
	case 171:
		(*(creverseNodeUnion->CPPcreversenode171))++;
		return;
	case 172:
		(*(creverseNodeUnion->CPPcreversenode172))++;
		return;
	case 173:
		(*(creverseNodeUnion->CPPcreversenode173))++;
		return;
	case 174:
		(*(creverseNodeUnion->CPPcreversenode174))++;
		return;
	case 175:
		(*(creverseNodeUnion->CPPcreversenode175))++;
		return;
	case 176:
		(*(creverseNodeUnion->CPPcreversenode176))++;
		return;
	case 177:
		(*(creverseNodeUnion->CPPcreversenode177))++;
		return;
	case 178:
		(*(creverseNodeUnion->CPPcreversenode178))++;
		return;
	case 179:
		(*(creverseNodeUnion->CPPcreversenode179))++;
		return;
	case 180:
		(*(creverseNodeUnion->CPPcreversenode180))++;
		return;
	case 181:
		(*(creverseNodeUnion->CPPcreversenode181))++;
		return;
	case 182:
		(*(creverseNodeUnion->CPPcreversenode182))++;
		return;
	case 183:
		(*(creverseNodeUnion->CPPcreversenode183))++;
		return;
	case 184:
		(*(creverseNodeUnion->CPPcreversenode184))++;
		return;
	case 185:
		(*(creverseNodeUnion->CPPcreversenode185))++;
		return;
	case 186:
		(*(creverseNodeUnion->CPPcreversenode186))++;
		return;
	case 187:
		(*(creverseNodeUnion->CPPcreversenode187))++;
		return;
	case 188:
		(*(creverseNodeUnion->CPPcreversenode188))++;
		return;
	case 189:
		(*(creverseNodeUnion->CPPcreversenode189))++;
		return;
	case 190:
		(*(creverseNodeUnion->CPPcreversenode190))++;
		return;
	case 191:
		(*(creverseNodeUnion->CPPcreversenode191))++;
		return;
	case 192:
		(*(creverseNodeUnion->CPPcreversenode192))++;
		return;
	case 193:
		(*(creverseNodeUnion->CPPcreversenode193))++;
		return;
	case 194:
		(*(creverseNodeUnion->CPPcreversenode194))++;
		return;
	case 195:
		(*(creverseNodeUnion->CPPcreversenode195))++;
		return;
	case 196:
		(*(creverseNodeUnion->CPPcreversenode196))++;
		return;
	}
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::Previous()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		(*(creverseNodeUnion->CPPcreversenode1))--;
		return;
	case 2:
		(*(creverseNodeUnion->CPPcreversenode2))--;
		return;
	case 3:
		(*(creverseNodeUnion->CPPcreversenode3))--;
		return;
	case 4:
		(*(creverseNodeUnion->CPPcreversenode4))--;
		return;
	case 5:
		(*(creverseNodeUnion->CPPcreversenode5))--;
		return;
	case 6:
		(*(creverseNodeUnion->CPPcreversenode6))--;
		return;
	case 7:
		(*(creverseNodeUnion->CPPcreversenode7))--;
		return;
	case 8:
		(*(creverseNodeUnion->CPPcreversenode8))--;
		return;
	case 9:
		(*(creverseNodeUnion->CPPcreversenode9))--;
		return;
	case 10:
		(*(creverseNodeUnion->CPPcreversenode10))--;
		return;
	case 11:
		(*(creverseNodeUnion->CPPcreversenode11))--;
		return;
	case 12:
		(*(creverseNodeUnion->CPPcreversenode12))--;
		return;
	case 13:
		(*(creverseNodeUnion->CPPcreversenode13))--;
		return;
	case 14:
		(*(creverseNodeUnion->CPPcreversenode14))--;
		return;
	case 15:
		(*(creverseNodeUnion->CPPcreversenode15))--;
		return;
	case 16:
		(*(creverseNodeUnion->CPPcreversenode16))--;
		return;
	case 17:
		(*(creverseNodeUnion->CPPcreversenode17))--;
		return;
	case 18:
		(*(creverseNodeUnion->CPPcreversenode18))--;
		return;
	case 19:
		(*(creverseNodeUnion->CPPcreversenode19))--;
		return;
	case 20:
		(*(creverseNodeUnion->CPPcreversenode20))--;
		return;
	case 21:
		(*(creverseNodeUnion->CPPcreversenode21))--;
		return;
	case 22:
		(*(creverseNodeUnion->CPPcreversenode22))--;
		return;
	case 23:
		(*(creverseNodeUnion->CPPcreversenode23))--;
		return;
	case 24:
		(*(creverseNodeUnion->CPPcreversenode24))--;
		return;
	case 25:
		(*(creverseNodeUnion->CPPcreversenode25))--;
		return;
	case 26:
		(*(creverseNodeUnion->CPPcreversenode26))--;
		return;
	case 27:
		(*(creverseNodeUnion->CPPcreversenode27))--;
		return;
	case 28:
		(*(creverseNodeUnion->CPPcreversenode28))--;
		return;
	case 29:
		(*(creverseNodeUnion->CPPcreversenode29))--;
		return;
	case 30:
		(*(creverseNodeUnion->CPPcreversenode30))--;
		return;
	case 31:
		(*(creverseNodeUnion->CPPcreversenode31))--;
		return;
	case 32:
		(*(creverseNodeUnion->CPPcreversenode32))--;
		return;
	case 33:
		(*(creverseNodeUnion->CPPcreversenode33))--;
		return;
	case 34:
		(*(creverseNodeUnion->CPPcreversenode34))--;
		return;
	case 35:
		(*(creverseNodeUnion->CPPcreversenode35))--;
		return;
	case 36:
		(*(creverseNodeUnion->CPPcreversenode36))--;
		return;
	case 37:
		(*(creverseNodeUnion->CPPcreversenode37))--;
		return;
	case 38:
		(*(creverseNodeUnion->CPPcreversenode38))--;
		return;
	case 39:
		(*(creverseNodeUnion->CPPcreversenode39))--;
		return;
	case 40:
		(*(creverseNodeUnion->CPPcreversenode40))--;
		return;
	case 41:
		(*(creverseNodeUnion->CPPcreversenode41))--;
		return;
	case 42:
		(*(creverseNodeUnion->CPPcreversenode42))--;
		return;
	case 43:
		(*(creverseNodeUnion->CPPcreversenode43))--;
		return;
	case 44:
		(*(creverseNodeUnion->CPPcreversenode44))--;
		return;
	case 45:
		(*(creverseNodeUnion->CPPcreversenode45))--;
		return;
	case 46:
		(*(creverseNodeUnion->CPPcreversenode46))--;
		return;
	case 47:
		(*(creverseNodeUnion->CPPcreversenode47))--;
		return;
	case 48:
		(*(creverseNodeUnion->CPPcreversenode48))--;
		return;
	case 49:
		(*(creverseNodeUnion->CPPcreversenode49))--;
		return;
	case 50:
		(*(creverseNodeUnion->CPPcreversenode50))--;
		return;
	case 51:
		(*(creverseNodeUnion->CPPcreversenode51))--;
		return;
	case 52:
		(*(creverseNodeUnion->CPPcreversenode52))--;
		return;
	case 53:
		(*(creverseNodeUnion->CPPcreversenode53))--;
		return;
	case 54:
		(*(creverseNodeUnion->CPPcreversenode54))--;
		return;
	case 55:
		(*(creverseNodeUnion->CPPcreversenode55))--;
		return;
	case 56:
		(*(creverseNodeUnion->CPPcreversenode56))--;
		return;
	case 57:
		(*(creverseNodeUnion->CPPcreversenode57))--;
		return;
	case 58:
		(*(creverseNodeUnion->CPPcreversenode58))--;
		return;
	case 59:
		(*(creverseNodeUnion->CPPcreversenode59))--;
		return;
	case 60:
		(*(creverseNodeUnion->CPPcreversenode60))--;
		return;
	case 61:
		(*(creverseNodeUnion->CPPcreversenode61))--;
		return;
	case 62:
		(*(creverseNodeUnion->CPPcreversenode62))--;
		return;
	case 63:
		(*(creverseNodeUnion->CPPcreversenode63))--;
		return;
	case 64:
		(*(creverseNodeUnion->CPPcreversenode64))--;
		return;
	case 65:
		(*(creverseNodeUnion->CPPcreversenode65))--;
		return;
	case 66:
		(*(creverseNodeUnion->CPPcreversenode66))--;
		return;
	case 67:
		(*(creverseNodeUnion->CPPcreversenode67))--;
		return;
	case 68:
		(*(creverseNodeUnion->CPPcreversenode68))--;
		return;
	case 69:
		(*(creverseNodeUnion->CPPcreversenode69))--;
		return;
	case 70:
		(*(creverseNodeUnion->CPPcreversenode70))--;
		return;
	case 71:
		(*(creverseNodeUnion->CPPcreversenode71))--;
		return;
	case 72:
		(*(creverseNodeUnion->CPPcreversenode72))--;
		return;
	case 73:
		(*(creverseNodeUnion->CPPcreversenode73))--;
		return;
	case 74:
		(*(creverseNodeUnion->CPPcreversenode74))--;
		return;
	case 75:
		(*(creverseNodeUnion->CPPcreversenode75))--;
		return;
	case 76:
		(*(creverseNodeUnion->CPPcreversenode76))--;
		return;
	case 77:
		(*(creverseNodeUnion->CPPcreversenode77))--;
		return;
	case 78:
		(*(creverseNodeUnion->CPPcreversenode78))--;
		return;
	case 79:
		(*(creverseNodeUnion->CPPcreversenode79))--;
		return;
	case 80:
		(*(creverseNodeUnion->CPPcreversenode80))--;
		return;
	case 81:
		(*(creverseNodeUnion->CPPcreversenode81))--;
		return;
	case 82:
		(*(creverseNodeUnion->CPPcreversenode82))--;
		return;
	case 83:
		(*(creverseNodeUnion->CPPcreversenode83))--;
		return;
	case 84:
		(*(creverseNodeUnion->CPPcreversenode84))--;
		return;
	case 85:
		(*(creverseNodeUnion->CPPcreversenode85))--;
		return;
	case 86:
		(*(creverseNodeUnion->CPPcreversenode86))--;
		return;
	case 87:
		(*(creverseNodeUnion->CPPcreversenode87))--;
		return;
	case 88:
		(*(creverseNodeUnion->CPPcreversenode88))--;
		return;
	case 89:
		(*(creverseNodeUnion->CPPcreversenode89))--;
		return;
	case 90:
		(*(creverseNodeUnion->CPPcreversenode90))--;
		return;
	case 91:
		(*(creverseNodeUnion->CPPcreversenode91))--;
		return;
	case 92:
		(*(creverseNodeUnion->CPPcreversenode92))--;
		return;
	case 93:
		(*(creverseNodeUnion->CPPcreversenode93))--;
		return;
	case 94:
		(*(creverseNodeUnion->CPPcreversenode94))--;
		return;
	case 95:
		(*(creverseNodeUnion->CPPcreversenode95))--;
		return;
	case 96:
		(*(creverseNodeUnion->CPPcreversenode96))--;
		return;
	case 97:
		(*(creverseNodeUnion->CPPcreversenode97))--;
		return;
	case 98:
		(*(creverseNodeUnion->CPPcreversenode98))--;
		return;
	case 99:
		(*(creverseNodeUnion->CPPcreversenode99))--;
		return;
	case 100:
		(*(creverseNodeUnion->CPPcreversenode100))--;
		return;
	case 101:
		(*(creverseNodeUnion->CPPcreversenode101))--;
		return;
	case 102:
		(*(creverseNodeUnion->CPPcreversenode102))--;
		return;
	case 103:
		(*(creverseNodeUnion->CPPcreversenode103))--;
		return;
	case 104:
		(*(creverseNodeUnion->CPPcreversenode104))--;
		return;
	case 105:
		(*(creverseNodeUnion->CPPcreversenode105))--;
		return;
	case 106:
		(*(creverseNodeUnion->CPPcreversenode106))--;
		return;
	case 107:
		(*(creverseNodeUnion->CPPcreversenode107))--;
		return;
	case 108:
		(*(creverseNodeUnion->CPPcreversenode108))--;
		return;
	case 109:
		(*(creverseNodeUnion->CPPcreversenode109))--;
		return;
	case 110:
		(*(creverseNodeUnion->CPPcreversenode110))--;
		return;
	case 111:
		(*(creverseNodeUnion->CPPcreversenode111))--;
		return;
	case 112:
		(*(creverseNodeUnion->CPPcreversenode112))--;
		return;
	case 113:
		(*(creverseNodeUnion->CPPcreversenode113))--;
		return;
	case 114:
		(*(creverseNodeUnion->CPPcreversenode114))--;
		return;
	case 115:
		(*(creverseNodeUnion->CPPcreversenode115))--;
		return;
	case 116:
		(*(creverseNodeUnion->CPPcreversenode116))--;
		return;
	case 117:
		(*(creverseNodeUnion->CPPcreversenode117))--;
		return;
	case 118:
		(*(creverseNodeUnion->CPPcreversenode118))--;
		return;
	case 119:
		(*(creverseNodeUnion->CPPcreversenode119))--;
		return;
	case 120:
		(*(creverseNodeUnion->CPPcreversenode120))--;
		return;
	case 121:
		(*(creverseNodeUnion->CPPcreversenode121))--;
		return;
	case 122:
		(*(creverseNodeUnion->CPPcreversenode122))--;
		return;
	case 123:
		(*(creverseNodeUnion->CPPcreversenode123))--;
		return;
	case 124:
		(*(creverseNodeUnion->CPPcreversenode124))--;
		return;
	case 125:
		(*(creverseNodeUnion->CPPcreversenode125))--;
		return;
	case 126:
		(*(creverseNodeUnion->CPPcreversenode126))--;
		return;
	case 127:
		(*(creverseNodeUnion->CPPcreversenode127))--;
		return;
	case 128:
		(*(creverseNodeUnion->CPPcreversenode128))--;
		return;
	case 129:
		(*(creverseNodeUnion->CPPcreversenode129))--;
		return;
	case 130:
		(*(creverseNodeUnion->CPPcreversenode130))--;
		return;
	case 131:
		(*(creverseNodeUnion->CPPcreversenode131))--;
		return;
	case 132:
		(*(creverseNodeUnion->CPPcreversenode132))--;
		return;
	case 133:
		(*(creverseNodeUnion->CPPcreversenode133))--;
		return;
	case 134:
		(*(creverseNodeUnion->CPPcreversenode134))--;
		return;
	case 135:
		(*(creverseNodeUnion->CPPcreversenode135))--;
		return;
	case 136:
		(*(creverseNodeUnion->CPPcreversenode136))--;
		return;
	case 137:
		(*(creverseNodeUnion->CPPcreversenode137))--;
		return;
	case 138:
		(*(creverseNodeUnion->CPPcreversenode138))--;
		return;
	case 139:
		(*(creverseNodeUnion->CPPcreversenode139))--;
		return;
	case 140:
		(*(creverseNodeUnion->CPPcreversenode140))--;
		return;
	case 141:
		(*(creverseNodeUnion->CPPcreversenode141))--;
		return;
	case 142:
		(*(creverseNodeUnion->CPPcreversenode142))--;
		return;
	case 143:
		(*(creverseNodeUnion->CPPcreversenode143))--;
		return;
	case 144:
		(*(creverseNodeUnion->CPPcreversenode144))--;
		return;
	case 145:
		(*(creverseNodeUnion->CPPcreversenode145))--;
		return;
	case 146:
		(*(creverseNodeUnion->CPPcreversenode146))--;
		return;
	case 147:
		(*(creverseNodeUnion->CPPcreversenode147))--;
		return;
	case 148:
		(*(creverseNodeUnion->CPPcreversenode148))--;
		return;
	case 149:
		(*(creverseNodeUnion->CPPcreversenode149))--;
		return;
	case 150:
		(*(creverseNodeUnion->CPPcreversenode150))--;
		return;
	case 151:
		(*(creverseNodeUnion->CPPcreversenode151))--;
		return;
	case 152:
		(*(creverseNodeUnion->CPPcreversenode152))--;
		return;
	case 153:
		(*(creverseNodeUnion->CPPcreversenode153))--;
		return;
	case 154:
		(*(creverseNodeUnion->CPPcreversenode154))--;
		return;
	case 155:
		(*(creverseNodeUnion->CPPcreversenode155))--;
		return;
	case 156:
		(*(creverseNodeUnion->CPPcreversenode156))--;
		return;
	case 157:
		(*(creverseNodeUnion->CPPcreversenode157))--;
		return;
	case 158:
		(*(creverseNodeUnion->CPPcreversenode158))--;
		return;
	case 159:
		(*(creverseNodeUnion->CPPcreversenode159))--;
		return;
	case 160:
		(*(creverseNodeUnion->CPPcreversenode160))--;
		return;
	case 161:
		(*(creverseNodeUnion->CPPcreversenode161))--;
		return;
	case 162:
		(*(creverseNodeUnion->CPPcreversenode162))--;
		return;
	case 163:
		(*(creverseNodeUnion->CPPcreversenode163))--;
		return;
	case 164:
		(*(creverseNodeUnion->CPPcreversenode164))--;
		return;
	case 165:
		(*(creverseNodeUnion->CPPcreversenode165))--;
		return;
	case 166:
		(*(creverseNodeUnion->CPPcreversenode166))--;
		return;
	case 167:
		(*(creverseNodeUnion->CPPcreversenode167))--;
		return;
	case 168:
		(*(creverseNodeUnion->CPPcreversenode168))--;
		return;
	case 169:
		(*(creverseNodeUnion->CPPcreversenode169))--;
		return;
	case 170:
		(*(creverseNodeUnion->CPPcreversenode170))--;
		return;
	case 171:
		(*(creverseNodeUnion->CPPcreversenode171))--;
		return;
	case 172:
		(*(creverseNodeUnion->CPPcreversenode172))--;
		return;
	case 173:
		(*(creverseNodeUnion->CPPcreversenode173))--;
		return;
	case 174:
		(*(creverseNodeUnion->CPPcreversenode174))--;
		return;
	case 175:
		(*(creverseNodeUnion->CPPcreversenode175))--;
		return;
	case 176:
		(*(creverseNodeUnion->CPPcreversenode176))--;
		return;
	case 177:
		(*(creverseNodeUnion->CPPcreversenode177))--;
		return;
	case 178:
		(*(creverseNodeUnion->CPPcreversenode178))--;
		return;
	case 179:
		(*(creverseNodeUnion->CPPcreversenode179))--;
		return;
	case 180:
		(*(creverseNodeUnion->CPPcreversenode180))--;
		return;
	case 181:
		(*(creverseNodeUnion->CPPcreversenode181))--;
		return;
	case 182:
		(*(creverseNodeUnion->CPPcreversenode182))--;
		return;
	case 183:
		(*(creverseNodeUnion->CPPcreversenode183))--;
		return;
	case 184:
		(*(creverseNodeUnion->CPPcreversenode184))--;
		return;
	case 185:
		(*(creverseNodeUnion->CPPcreversenode185))--;
		return;
	case 186:
		(*(creverseNodeUnion->CPPcreversenode186))--;
		return;
	case 187:
		(*(creverseNodeUnion->CPPcreversenode187))--;
		return;
	case 188:
		(*(creverseNodeUnion->CPPcreversenode188))--;
		return;
	case 189:
		(*(creverseNodeUnion->CPPcreversenode189))--;
		return;
	case 190:
		(*(creverseNodeUnion->CPPcreversenode190))--;
		return;
	case 191:
		(*(creverseNodeUnion->CPPcreversenode191))--;
		return;
	case 192:
		(*(creverseNodeUnion->CPPcreversenode192))--;
		return;
	case 193:
		(*(creverseNodeUnion->CPPcreversenode193))--;
		return;
	case 194:
		(*(creverseNodeUnion->CPPcreversenode194))--;
		return;
	case 195:
		(*(creverseNodeUnion->CPPcreversenode195))--;
		return;
	case 196:
		(*(creverseNodeUnion->CPPcreversenode196))--;
		return;
	}
}

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
	case 1:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode1) == *(other->creverseNodeUnion->CPPcreversenode1));
	case 2:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode2) == *(other->creverseNodeUnion->CPPcreversenode2));
	case 3:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode3) == *(other->creverseNodeUnion->CPPcreversenode3));
	case 4:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode4) == *(other->creverseNodeUnion->CPPcreversenode4));
	case 5:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode5) == *(other->creverseNodeUnion->CPPcreversenode5));
	case 6:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode6) == *(other->creverseNodeUnion->CPPcreversenode6));
	case 7:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode7) == *(other->creverseNodeUnion->CPPcreversenode7));
	case 8:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode8) == *(other->creverseNodeUnion->CPPcreversenode8));
	case 9:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode9) == *(other->creverseNodeUnion->CPPcreversenode9));
	case 10:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode10) == *(other->creverseNodeUnion->CPPcreversenode10));
	case 11:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode11) == *(other->creverseNodeUnion->CPPcreversenode11));
	case 12:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode12) == *(other->creverseNodeUnion->CPPcreversenode12));
	case 13:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode13) == *(other->creverseNodeUnion->CPPcreversenode13));
	case 14:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode14) == *(other->creverseNodeUnion->CPPcreversenode14));
	case 15:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode15) == *(other->creverseNodeUnion->CPPcreversenode15));
	case 16:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode16) == *(other->creverseNodeUnion->CPPcreversenode16));
	case 17:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode17) == *(other->creverseNodeUnion->CPPcreversenode17));
	case 18:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode18) == *(other->creverseNodeUnion->CPPcreversenode18));
	case 19:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode19) == *(other->creverseNodeUnion->CPPcreversenode19));
	case 20:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode20) == *(other->creverseNodeUnion->CPPcreversenode20));
	case 21:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode21) == *(other->creverseNodeUnion->CPPcreversenode21));
	case 22:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode22) == *(other->creverseNodeUnion->CPPcreversenode22));
	case 23:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode23) == *(other->creverseNodeUnion->CPPcreversenode23));
	case 24:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode24) == *(other->creverseNodeUnion->CPPcreversenode24));
	case 25:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode25) == *(other->creverseNodeUnion->CPPcreversenode25));
	case 26:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode26) == *(other->creverseNodeUnion->CPPcreversenode26));
	case 27:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode27) == *(other->creverseNodeUnion->CPPcreversenode27));
	case 28:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode28) == *(other->creverseNodeUnion->CPPcreversenode28));
	case 29:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode29) == *(other->creverseNodeUnion->CPPcreversenode29));
	case 30:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode30) == *(other->creverseNodeUnion->CPPcreversenode30));
	case 31:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode31) == *(other->creverseNodeUnion->CPPcreversenode31));
	case 32:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode32) == *(other->creverseNodeUnion->CPPcreversenode32));
	case 33:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode33) == *(other->creverseNodeUnion->CPPcreversenode33));
	case 34:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode34) == *(other->creverseNodeUnion->CPPcreversenode34));
	case 35:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode35) == *(other->creverseNodeUnion->CPPcreversenode35));
	case 36:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode36) == *(other->creverseNodeUnion->CPPcreversenode36));
	case 37:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode37) == *(other->creverseNodeUnion->CPPcreversenode37));
	case 38:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode38) == *(other->creverseNodeUnion->CPPcreversenode38));
	case 39:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode39) == *(other->creverseNodeUnion->CPPcreversenode39));
	case 40:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode40) == *(other->creverseNodeUnion->CPPcreversenode40));
	case 41:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode41) == *(other->creverseNodeUnion->CPPcreversenode41));
	case 42:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode42) == *(other->creverseNodeUnion->CPPcreversenode42));
	case 43:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode43) == *(other->creverseNodeUnion->CPPcreversenode43));
	case 44:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode44) == *(other->creverseNodeUnion->CPPcreversenode44));
	case 45:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode45) == *(other->creverseNodeUnion->CPPcreversenode45));
	case 46:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode46) == *(other->creverseNodeUnion->CPPcreversenode46));
	case 47:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode47) == *(other->creverseNodeUnion->CPPcreversenode47));
	case 48:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode48) == *(other->creverseNodeUnion->CPPcreversenode48));
	case 49:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode49) == *(other->creverseNodeUnion->CPPcreversenode49));
	case 50:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode50) == *(other->creverseNodeUnion->CPPcreversenode50));
	case 51:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode51) == *(other->creverseNodeUnion->CPPcreversenode51));
	case 52:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode52) == *(other->creverseNodeUnion->CPPcreversenode52));
	case 53:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode53) == *(other->creverseNodeUnion->CPPcreversenode53));
	case 54:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode54) == *(other->creverseNodeUnion->CPPcreversenode54));
	case 55:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode55) == *(other->creverseNodeUnion->CPPcreversenode55));
	case 56:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode56) == *(other->creverseNodeUnion->CPPcreversenode56));
	case 57:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode57) == *(other->creverseNodeUnion->CPPcreversenode57));
	case 58:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode58) == *(other->creverseNodeUnion->CPPcreversenode58));
	case 59:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode59) == *(other->creverseNodeUnion->CPPcreversenode59));
	case 60:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode60) == *(other->creverseNodeUnion->CPPcreversenode60));
	case 61:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode61) == *(other->creverseNodeUnion->CPPcreversenode61));
	case 62:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode62) == *(other->creverseNodeUnion->CPPcreversenode62));
	case 63:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode63) == *(other->creverseNodeUnion->CPPcreversenode63));
	case 64:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode64) == *(other->creverseNodeUnion->CPPcreversenode64));
	case 65:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode65) == *(other->creverseNodeUnion->CPPcreversenode65));
	case 66:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode66) == *(other->creverseNodeUnion->CPPcreversenode66));
	case 67:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode67) == *(other->creverseNodeUnion->CPPcreversenode67));
	case 68:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode68) == *(other->creverseNodeUnion->CPPcreversenode68));
	case 69:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode69) == *(other->creverseNodeUnion->CPPcreversenode69));
	case 70:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode70) == *(other->creverseNodeUnion->CPPcreversenode70));
	case 71:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode71) == *(other->creverseNodeUnion->CPPcreversenode71));
	case 72:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode72) == *(other->creverseNodeUnion->CPPcreversenode72));
	case 73:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode73) == *(other->creverseNodeUnion->CPPcreversenode73));
	case 74:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode74) == *(other->creverseNodeUnion->CPPcreversenode74));
	case 75:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode75) == *(other->creverseNodeUnion->CPPcreversenode75));
	case 76:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode76) == *(other->creverseNodeUnion->CPPcreversenode76));
	case 77:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode77) == *(other->creverseNodeUnion->CPPcreversenode77));
	case 78:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode78) == *(other->creverseNodeUnion->CPPcreversenode78));
	case 79:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode79) == *(other->creverseNodeUnion->CPPcreversenode79));
	case 80:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode80) == *(other->creverseNodeUnion->CPPcreversenode80));
	case 81:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode81) == *(other->creverseNodeUnion->CPPcreversenode81));
	case 82:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode82) == *(other->creverseNodeUnion->CPPcreversenode82));
	case 83:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode83) == *(other->creverseNodeUnion->CPPcreversenode83));
	case 84:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode84) == *(other->creverseNodeUnion->CPPcreversenode84));
	case 85:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode85) == *(other->creverseNodeUnion->CPPcreversenode85));
	case 86:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode86) == *(other->creverseNodeUnion->CPPcreversenode86));
	case 87:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode87) == *(other->creverseNodeUnion->CPPcreversenode87));
	case 88:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode88) == *(other->creverseNodeUnion->CPPcreversenode88));
	case 89:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode89) == *(other->creverseNodeUnion->CPPcreversenode89));
	case 90:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode90) == *(other->creverseNodeUnion->CPPcreversenode90));
	case 91:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode91) == *(other->creverseNodeUnion->CPPcreversenode91));
	case 92:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode92) == *(other->creverseNodeUnion->CPPcreversenode92));
	case 93:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode93) == *(other->creverseNodeUnion->CPPcreversenode93));
	case 94:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode94) == *(other->creverseNodeUnion->CPPcreversenode94));
	case 95:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode95) == *(other->creverseNodeUnion->CPPcreversenode95));
	case 96:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode96) == *(other->creverseNodeUnion->CPPcreversenode96));
	case 97:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode97) == *(other->creverseNodeUnion->CPPcreversenode97));
	case 98:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode98) == *(other->creverseNodeUnion->CPPcreversenode98));
	case 99:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode99) == *(other->creverseNodeUnion->CPPcreversenode99));
	case 100:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode100) == *(other->creverseNodeUnion->CPPcreversenode100));
	case 101:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode101) == *(other->creverseNodeUnion->CPPcreversenode101));
	case 102:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode102) == *(other->creverseNodeUnion->CPPcreversenode102));
	case 103:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode103) == *(other->creverseNodeUnion->CPPcreversenode103));
	case 104:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode104) == *(other->creverseNodeUnion->CPPcreversenode104));
	case 105:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode105) == *(other->creverseNodeUnion->CPPcreversenode105));
	case 106:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode106) == *(other->creverseNodeUnion->CPPcreversenode106));
	case 107:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode107) == *(other->creverseNodeUnion->CPPcreversenode107));
	case 108:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode108) == *(other->creverseNodeUnion->CPPcreversenode108));
	case 109:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode109) == *(other->creverseNodeUnion->CPPcreversenode109));
	case 110:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode110) == *(other->creverseNodeUnion->CPPcreversenode110));
	case 111:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode111) == *(other->creverseNodeUnion->CPPcreversenode111));
	case 112:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode112) == *(other->creverseNodeUnion->CPPcreversenode112));
	case 113:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode113) == *(other->creverseNodeUnion->CPPcreversenode113));
	case 114:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode114) == *(other->creverseNodeUnion->CPPcreversenode114));
	case 115:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode115) == *(other->creverseNodeUnion->CPPcreversenode115));
	case 116:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode116) == *(other->creverseNodeUnion->CPPcreversenode116));
	case 117:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode117) == *(other->creverseNodeUnion->CPPcreversenode117));
	case 118:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode118) == *(other->creverseNodeUnion->CPPcreversenode118));
	case 119:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode119) == *(other->creverseNodeUnion->CPPcreversenode119));
	case 120:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode120) == *(other->creverseNodeUnion->CPPcreversenode120));
	case 121:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode121) == *(other->creverseNodeUnion->CPPcreversenode121));
	case 122:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode122) == *(other->creverseNodeUnion->CPPcreversenode122));
	case 123:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode123) == *(other->creverseNodeUnion->CPPcreversenode123));
	case 124:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode124) == *(other->creverseNodeUnion->CPPcreversenode124));
	case 125:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode125) == *(other->creverseNodeUnion->CPPcreversenode125));
	case 126:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode126) == *(other->creverseNodeUnion->CPPcreversenode126));
	case 127:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode127) == *(other->creverseNodeUnion->CPPcreversenode127));
	case 128:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode128) == *(other->creverseNodeUnion->CPPcreversenode128));
	case 129:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode129) == *(other->creverseNodeUnion->CPPcreversenode129));
	case 130:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode130) == *(other->creverseNodeUnion->CPPcreversenode130));
	case 131:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode131) == *(other->creverseNodeUnion->CPPcreversenode131));
	case 132:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode132) == *(other->creverseNodeUnion->CPPcreversenode132));
	case 133:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode133) == *(other->creverseNodeUnion->CPPcreversenode133));
	case 134:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode134) == *(other->creverseNodeUnion->CPPcreversenode134));
	case 135:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode135) == *(other->creverseNodeUnion->CPPcreversenode135));
	case 136:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode136) == *(other->creverseNodeUnion->CPPcreversenode136));
	case 137:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode137) == *(other->creverseNodeUnion->CPPcreversenode137));
	case 138:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode138) == *(other->creverseNodeUnion->CPPcreversenode138));
	case 139:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode139) == *(other->creverseNodeUnion->CPPcreversenode139));
	case 140:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode140) == *(other->creverseNodeUnion->CPPcreversenode140));
	case 141:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode141) == *(other->creverseNodeUnion->CPPcreversenode141));
	case 142:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode142) == *(other->creverseNodeUnion->CPPcreversenode142));
	case 143:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode143) == *(other->creverseNodeUnion->CPPcreversenode143));
	case 144:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode144) == *(other->creverseNodeUnion->CPPcreversenode144));
	case 145:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode145) == *(other->creverseNodeUnion->CPPcreversenode145));
	case 146:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode146) == *(other->creverseNodeUnion->CPPcreversenode146));
	case 147:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode147) == *(other->creverseNodeUnion->CPPcreversenode147));
	case 148:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode148) == *(other->creverseNodeUnion->CPPcreversenode148));
	case 149:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode149) == *(other->creverseNodeUnion->CPPcreversenode149));
	case 150:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode150) == *(other->creverseNodeUnion->CPPcreversenode150));
	case 151:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode151) == *(other->creverseNodeUnion->CPPcreversenode151));
	case 152:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode152) == *(other->creverseNodeUnion->CPPcreversenode152));
	case 153:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode153) == *(other->creverseNodeUnion->CPPcreversenode153));
	case 154:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode154) == *(other->creverseNodeUnion->CPPcreversenode154));
	case 155:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode155) == *(other->creverseNodeUnion->CPPcreversenode155));
	case 156:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode156) == *(other->creverseNodeUnion->CPPcreversenode156));
	case 157:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode157) == *(other->creverseNodeUnion->CPPcreversenode157));
	case 158:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode158) == *(other->creverseNodeUnion->CPPcreversenode158));
	case 159:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode159) == *(other->creverseNodeUnion->CPPcreversenode159));
	case 160:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode160) == *(other->creverseNodeUnion->CPPcreversenode160));
	case 161:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode161) == *(other->creverseNodeUnion->CPPcreversenode161));
	case 162:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode162) == *(other->creverseNodeUnion->CPPcreversenode162));
	case 163:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode163) == *(other->creverseNodeUnion->CPPcreversenode163));
	case 164:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode164) == *(other->creverseNodeUnion->CPPcreversenode164));
	case 165:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode165) == *(other->creverseNodeUnion->CPPcreversenode165));
	case 166:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode166) == *(other->creverseNodeUnion->CPPcreversenode166));
	case 167:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode167) == *(other->creverseNodeUnion->CPPcreversenode167));
	case 168:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode168) == *(other->creverseNodeUnion->CPPcreversenode168));
	case 169:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode169) == *(other->creverseNodeUnion->CPPcreversenode169));
	case 170:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode170) == *(other->creverseNodeUnion->CPPcreversenode170));
	case 171:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode171) == *(other->creverseNodeUnion->CPPcreversenode171));
	case 172:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode172) == *(other->creverseNodeUnion->CPPcreversenode172));
	case 173:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode173) == *(other->creverseNodeUnion->CPPcreversenode173));
	case 174:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode174) == *(other->creverseNodeUnion->CPPcreversenode174));
	case 175:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode175) == *(other->creverseNodeUnion->CPPcreversenode175));
	case 176:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode176) == *(other->creverseNodeUnion->CPPcreversenode176));
	case 177:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode177) == *(other->creverseNodeUnion->CPPcreversenode177));
	case 178:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode178) == *(other->creverseNodeUnion->CPPcreversenode178));
	case 179:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode179) == *(other->creverseNodeUnion->CPPcreversenode179));
	case 180:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode180) == *(other->creverseNodeUnion->CPPcreversenode180));
	case 181:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode181) == *(other->creverseNodeUnion->CPPcreversenode181));
	case 182:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode182) == *(other->creverseNodeUnion->CPPcreversenode182));
	case 183:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode183) == *(other->creverseNodeUnion->CPPcreversenode183));
	case 184:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode184) == *(other->creverseNodeUnion->CPPcreversenode184));
	case 185:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode185) == *(other->creverseNodeUnion->CPPcreversenode185));
	case 186:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode186) == *(other->creverseNodeUnion->CPPcreversenode186));
	case 187:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode187) == *(other->creverseNodeUnion->CPPcreversenode187));
	case 188:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode188) == *(other->creverseNodeUnion->CPPcreversenode188));
	case 189:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode189) == *(other->creverseNodeUnion->CPPcreversenode189));
	case 190:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode190) == *(other->creverseNodeUnion->CPPcreversenode190));
	case 191:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode191) == *(other->creverseNodeUnion->CPPcreversenode191));
	case 192:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode192) == *(other->creverseNodeUnion->CPPcreversenode192));
	case 193:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode193) == *(other->creverseNodeUnion->CPPcreversenode193));
	case 194:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode194) == *(other->creverseNodeUnion->CPPcreversenode194));
	case 195:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode195) == *(other->creverseNodeUnion->CPPcreversenode195));
	case 196:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode196) == *(other->creverseNodeUnion->CPPcreversenode196));
	}
	return false;
}

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
	case 1:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode1) != *(other->creverseNodeUnion->CPPcreversenode1));
	case 2:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode2) != *(other->creverseNodeUnion->CPPcreversenode2));
	case 3:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode3) != *(other->creverseNodeUnion->CPPcreversenode3));
	case 4:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode4) != *(other->creverseNodeUnion->CPPcreversenode4));
	case 5:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode5) != *(other->creverseNodeUnion->CPPcreversenode5));
	case 6:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode6) != *(other->creverseNodeUnion->CPPcreversenode6));
	case 7:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode7) != *(other->creverseNodeUnion->CPPcreversenode7));
	case 8:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode8) != *(other->creverseNodeUnion->CPPcreversenode8));
	case 9:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode9) != *(other->creverseNodeUnion->CPPcreversenode9));
	case 10:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode10) != *(other->creverseNodeUnion->CPPcreversenode10));
	case 11:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode11) != *(other->creverseNodeUnion->CPPcreversenode11));
	case 12:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode12) != *(other->creverseNodeUnion->CPPcreversenode12));
	case 13:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode13) != *(other->creverseNodeUnion->CPPcreversenode13));
	case 14:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode14) != *(other->creverseNodeUnion->CPPcreversenode14));
	case 15:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode15) != *(other->creverseNodeUnion->CPPcreversenode15));
	case 16:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode16) != *(other->creverseNodeUnion->CPPcreversenode16));
	case 17:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode17) != *(other->creverseNodeUnion->CPPcreversenode17));
	case 18:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode18) != *(other->creverseNodeUnion->CPPcreversenode18));
	case 19:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode19) != *(other->creverseNodeUnion->CPPcreversenode19));
	case 20:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode20) != *(other->creverseNodeUnion->CPPcreversenode20));
	case 21:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode21) != *(other->creverseNodeUnion->CPPcreversenode21));
	case 22:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode22) != *(other->creverseNodeUnion->CPPcreversenode22));
	case 23:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode23) != *(other->creverseNodeUnion->CPPcreversenode23));
	case 24:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode24) != *(other->creverseNodeUnion->CPPcreversenode24));
	case 25:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode25) != *(other->creverseNodeUnion->CPPcreversenode25));
	case 26:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode26) != *(other->creverseNodeUnion->CPPcreversenode26));
	case 27:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode27) != *(other->creverseNodeUnion->CPPcreversenode27));
	case 28:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode28) != *(other->creverseNodeUnion->CPPcreversenode28));
	case 29:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode29) != *(other->creverseNodeUnion->CPPcreversenode29));
	case 30:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode30) != *(other->creverseNodeUnion->CPPcreversenode30));
	case 31:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode31) != *(other->creverseNodeUnion->CPPcreversenode31));
	case 32:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode32) != *(other->creverseNodeUnion->CPPcreversenode32));
	case 33:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode33) != *(other->creverseNodeUnion->CPPcreversenode33));
	case 34:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode34) != *(other->creverseNodeUnion->CPPcreversenode34));
	case 35:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode35) != *(other->creverseNodeUnion->CPPcreversenode35));
	case 36:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode36) != *(other->creverseNodeUnion->CPPcreversenode36));
	case 37:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode37) != *(other->creverseNodeUnion->CPPcreversenode37));
	case 38:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode38) != *(other->creverseNodeUnion->CPPcreversenode38));
	case 39:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode39) != *(other->creverseNodeUnion->CPPcreversenode39));
	case 40:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode40) != *(other->creverseNodeUnion->CPPcreversenode40));
	case 41:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode41) != *(other->creverseNodeUnion->CPPcreversenode41));
	case 42:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode42) != *(other->creverseNodeUnion->CPPcreversenode42));
	case 43:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode43) != *(other->creverseNodeUnion->CPPcreversenode43));
	case 44:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode44) != *(other->creverseNodeUnion->CPPcreversenode44));
	case 45:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode45) != *(other->creverseNodeUnion->CPPcreversenode45));
	case 46:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode46) != *(other->creverseNodeUnion->CPPcreversenode46));
	case 47:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode47) != *(other->creverseNodeUnion->CPPcreversenode47));
	case 48:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode48) != *(other->creverseNodeUnion->CPPcreversenode48));
	case 49:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode49) != *(other->creverseNodeUnion->CPPcreversenode49));
	case 50:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode50) != *(other->creverseNodeUnion->CPPcreversenode50));
	case 51:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode51) != *(other->creverseNodeUnion->CPPcreversenode51));
	case 52:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode52) != *(other->creverseNodeUnion->CPPcreversenode52));
	case 53:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode53) != *(other->creverseNodeUnion->CPPcreversenode53));
	case 54:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode54) != *(other->creverseNodeUnion->CPPcreversenode54));
	case 55:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode55) != *(other->creverseNodeUnion->CPPcreversenode55));
	case 56:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode56) != *(other->creverseNodeUnion->CPPcreversenode56));
	case 57:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode57) != *(other->creverseNodeUnion->CPPcreversenode57));
	case 58:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode58) != *(other->creverseNodeUnion->CPPcreversenode58));
	case 59:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode59) != *(other->creverseNodeUnion->CPPcreversenode59));
	case 60:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode60) != *(other->creverseNodeUnion->CPPcreversenode60));
	case 61:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode61) != *(other->creverseNodeUnion->CPPcreversenode61));
	case 62:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode62) != *(other->creverseNodeUnion->CPPcreversenode62));
	case 63:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode63) != *(other->creverseNodeUnion->CPPcreversenode63));
	case 64:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode64) != *(other->creverseNodeUnion->CPPcreversenode64));
	case 65:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode65) != *(other->creverseNodeUnion->CPPcreversenode65));
	case 66:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode66) != *(other->creverseNodeUnion->CPPcreversenode66));
	case 67:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode67) != *(other->creverseNodeUnion->CPPcreversenode67));
	case 68:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode68) != *(other->creverseNodeUnion->CPPcreversenode68));
	case 69:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode69) != *(other->creverseNodeUnion->CPPcreversenode69));
	case 70:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode70) != *(other->creverseNodeUnion->CPPcreversenode70));
	case 71:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode71) != *(other->creverseNodeUnion->CPPcreversenode71));
	case 72:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode72) != *(other->creverseNodeUnion->CPPcreversenode72));
	case 73:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode73) != *(other->creverseNodeUnion->CPPcreversenode73));
	case 74:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode74) != *(other->creverseNodeUnion->CPPcreversenode74));
	case 75:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode75) != *(other->creverseNodeUnion->CPPcreversenode75));
	case 76:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode76) != *(other->creverseNodeUnion->CPPcreversenode76));
	case 77:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode77) != *(other->creverseNodeUnion->CPPcreversenode77));
	case 78:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode78) != *(other->creverseNodeUnion->CPPcreversenode78));
	case 79:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode79) != *(other->creverseNodeUnion->CPPcreversenode79));
	case 80:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode80) != *(other->creverseNodeUnion->CPPcreversenode80));
	case 81:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode81) != *(other->creverseNodeUnion->CPPcreversenode81));
	case 82:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode82) != *(other->creverseNodeUnion->CPPcreversenode82));
	case 83:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode83) != *(other->creverseNodeUnion->CPPcreversenode83));
	case 84:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode84) != *(other->creverseNodeUnion->CPPcreversenode84));
	case 85:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode85) != *(other->creverseNodeUnion->CPPcreversenode85));
	case 86:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode86) != *(other->creverseNodeUnion->CPPcreversenode86));
	case 87:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode87) != *(other->creverseNodeUnion->CPPcreversenode87));
	case 88:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode88) != *(other->creverseNodeUnion->CPPcreversenode88));
	case 89:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode89) != *(other->creverseNodeUnion->CPPcreversenode89));
	case 90:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode90) != *(other->creverseNodeUnion->CPPcreversenode90));
	case 91:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode91) != *(other->creverseNodeUnion->CPPcreversenode91));
	case 92:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode92) != *(other->creverseNodeUnion->CPPcreversenode92));
	case 93:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode93) != *(other->creverseNodeUnion->CPPcreversenode93));
	case 94:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode94) != *(other->creverseNodeUnion->CPPcreversenode94));
	case 95:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode95) != *(other->creverseNodeUnion->CPPcreversenode95));
	case 96:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode96) != *(other->creverseNodeUnion->CPPcreversenode96));
	case 97:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode97) != *(other->creverseNodeUnion->CPPcreversenode97));
	case 98:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode98) != *(other->creverseNodeUnion->CPPcreversenode98));
	case 99:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode99) != *(other->creverseNodeUnion->CPPcreversenode99));
	case 100:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode100) != *(other->creverseNodeUnion->CPPcreversenode100));
	case 101:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode101) != *(other->creverseNodeUnion->CPPcreversenode101));
	case 102:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode102) != *(other->creverseNodeUnion->CPPcreversenode102));
	case 103:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode103) != *(other->creverseNodeUnion->CPPcreversenode103));
	case 104:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode104) != *(other->creverseNodeUnion->CPPcreversenode104));
	case 105:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode105) != *(other->creverseNodeUnion->CPPcreversenode105));
	case 106:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode106) != *(other->creverseNodeUnion->CPPcreversenode106));
	case 107:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode107) != *(other->creverseNodeUnion->CPPcreversenode107));
	case 108:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode108) != *(other->creverseNodeUnion->CPPcreversenode108));
	case 109:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode109) != *(other->creverseNodeUnion->CPPcreversenode109));
	case 110:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode110) != *(other->creverseNodeUnion->CPPcreversenode110));
	case 111:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode111) != *(other->creverseNodeUnion->CPPcreversenode111));
	case 112:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode112) != *(other->creverseNodeUnion->CPPcreversenode112));
	case 113:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode113) != *(other->creverseNodeUnion->CPPcreversenode113));
	case 114:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode114) != *(other->creverseNodeUnion->CPPcreversenode114));
	case 115:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode115) != *(other->creverseNodeUnion->CPPcreversenode115));
	case 116:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode116) != *(other->creverseNodeUnion->CPPcreversenode116));
	case 117:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode117) != *(other->creverseNodeUnion->CPPcreversenode117));
	case 118:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode118) != *(other->creverseNodeUnion->CPPcreversenode118));
	case 119:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode119) != *(other->creverseNodeUnion->CPPcreversenode119));
	case 120:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode120) != *(other->creverseNodeUnion->CPPcreversenode120));
	case 121:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode121) != *(other->creverseNodeUnion->CPPcreversenode121));
	case 122:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode122) != *(other->creverseNodeUnion->CPPcreversenode122));
	case 123:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode123) != *(other->creverseNodeUnion->CPPcreversenode123));
	case 124:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode124) != *(other->creverseNodeUnion->CPPcreversenode124));
	case 125:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode125) != *(other->creverseNodeUnion->CPPcreversenode125));
	case 126:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode126) != *(other->creverseNodeUnion->CPPcreversenode126));
	case 127:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode127) != *(other->creverseNodeUnion->CPPcreversenode127));
	case 128:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode128) != *(other->creverseNodeUnion->CPPcreversenode128));
	case 129:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode129) != *(other->creverseNodeUnion->CPPcreversenode129));
	case 130:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode130) != *(other->creverseNodeUnion->CPPcreversenode130));
	case 131:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode131) != *(other->creverseNodeUnion->CPPcreversenode131));
	case 132:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode132) != *(other->creverseNodeUnion->CPPcreversenode132));
	case 133:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode133) != *(other->creverseNodeUnion->CPPcreversenode133));
	case 134:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode134) != *(other->creverseNodeUnion->CPPcreversenode134));
	case 135:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode135) != *(other->creverseNodeUnion->CPPcreversenode135));
	case 136:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode136) != *(other->creverseNodeUnion->CPPcreversenode136));
	case 137:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode137) != *(other->creverseNodeUnion->CPPcreversenode137));
	case 138:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode138) != *(other->creverseNodeUnion->CPPcreversenode138));
	case 139:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode139) != *(other->creverseNodeUnion->CPPcreversenode139));
	case 140:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode140) != *(other->creverseNodeUnion->CPPcreversenode140));
	case 141:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode141) != *(other->creverseNodeUnion->CPPcreversenode141));
	case 142:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode142) != *(other->creverseNodeUnion->CPPcreversenode142));
	case 143:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode143) != *(other->creverseNodeUnion->CPPcreversenode143));
	case 144:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode144) != *(other->creverseNodeUnion->CPPcreversenode144));
	case 145:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode145) != *(other->creverseNodeUnion->CPPcreversenode145));
	case 146:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode146) != *(other->creverseNodeUnion->CPPcreversenode146));
	case 147:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode147) != *(other->creverseNodeUnion->CPPcreversenode147));
	case 148:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode148) != *(other->creverseNodeUnion->CPPcreversenode148));
	case 149:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode149) != *(other->creverseNodeUnion->CPPcreversenode149));
	case 150:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode150) != *(other->creverseNodeUnion->CPPcreversenode150));
	case 151:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode151) != *(other->creverseNodeUnion->CPPcreversenode151));
	case 152:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode152) != *(other->creverseNodeUnion->CPPcreversenode152));
	case 153:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode153) != *(other->creverseNodeUnion->CPPcreversenode153));
	case 154:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode154) != *(other->creverseNodeUnion->CPPcreversenode154));
	case 155:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode155) != *(other->creverseNodeUnion->CPPcreversenode155));
	case 156:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode156) != *(other->creverseNodeUnion->CPPcreversenode156));
	case 157:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode157) != *(other->creverseNodeUnion->CPPcreversenode157));
	case 158:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode158) != *(other->creverseNodeUnion->CPPcreversenode158));
	case 159:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode159) != *(other->creverseNodeUnion->CPPcreversenode159));
	case 160:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode160) != *(other->creverseNodeUnion->CPPcreversenode160));
	case 161:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode161) != *(other->creverseNodeUnion->CPPcreversenode161));
	case 162:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode162) != *(other->creverseNodeUnion->CPPcreversenode162));
	case 163:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode163) != *(other->creverseNodeUnion->CPPcreversenode163));
	case 164:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode164) != *(other->creverseNodeUnion->CPPcreversenode164));
	case 165:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode165) != *(other->creverseNodeUnion->CPPcreversenode165));
	case 166:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode166) != *(other->creverseNodeUnion->CPPcreversenode166));
	case 167:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode167) != *(other->creverseNodeUnion->CPPcreversenode167));
	case 168:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode168) != *(other->creverseNodeUnion->CPPcreversenode168));
	case 169:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode169) != *(other->creverseNodeUnion->CPPcreversenode169));
	case 170:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode170) != *(other->creverseNodeUnion->CPPcreversenode170));
	case 171:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode171) != *(other->creverseNodeUnion->CPPcreversenode171));
	case 172:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode172) != *(other->creverseNodeUnion->CPPcreversenode172));
	case 173:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode173) != *(other->creverseNodeUnion->CPPcreversenode173));
	case 174:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode174) != *(other->creverseNodeUnion->CPPcreversenode174));
	case 175:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode175) != *(other->creverseNodeUnion->CPPcreversenode175));
	case 176:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode176) != *(other->creverseNodeUnion->CPPcreversenode176));
	case 177:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode177) != *(other->creverseNodeUnion->CPPcreversenode177));
	case 178:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode178) != *(other->creverseNodeUnion->CPPcreversenode178));
	case 179:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode179) != *(other->creverseNodeUnion->CPPcreversenode179));
	case 180:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode180) != *(other->creverseNodeUnion->CPPcreversenode180));
	case 181:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode181) != *(other->creverseNodeUnion->CPPcreversenode181));
	case 182:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode182) != *(other->creverseNodeUnion->CPPcreversenode182));
	case 183:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode183) != *(other->creverseNodeUnion->CPPcreversenode183));
	case 184:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode184) != *(other->creverseNodeUnion->CPPcreversenode184));
	case 185:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode185) != *(other->creverseNodeUnion->CPPcreversenode185));
	case 186:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode186) != *(other->creverseNodeUnion->CPPcreversenode186));
	case 187:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode187) != *(other->creverseNodeUnion->CPPcreversenode187));
	case 188:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode188) != *(other->creverseNodeUnion->CPPcreversenode188));
	case 189:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode189) != *(other->creverseNodeUnion->CPPcreversenode189));
	case 190:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode190) != *(other->creverseNodeUnion->CPPcreversenode190));
	case 191:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode191) != *(other->creverseNodeUnion->CPPcreversenode191));
	case 192:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode192) != *(other->creverseNodeUnion->CPPcreversenode192));
	case 193:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode193) != *(other->creverseNodeUnion->CPPcreversenode193));
	case 194:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode194) != *(other->creverseNodeUnion->CPPcreversenode194));
	case 195:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode195) != *(other->creverseNodeUnion->CPPcreversenode195));
	case 196:
		return (*(thisObj->creverseNodeUnion->CPPcreversenode196) != *(other->creverseNodeUnion->CPPcreversenode196));
	}
	return false;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>::operator%(CShorpUnOrderedCReverseNode<Key, Value>^ thisObj, CShorpUnOrderedCReverseNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(thisObj), nullptr)) return nullptr;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedCReverseNode<Key, Value>^>(other), nullptr)) return thisObj;
	if (other->isInitialized == 0) return thisObj;
	thisObj->isInitialized = other->isInitialized;

	if (thisObj->nKeyValueType != other->nKeyValueType) return thisObj;
	if (other->gIntKeyClassDictionary) thisObj->gIntKeyClassDictionary = other->gIntKeyClassDictionary;
	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		break;
	case 1:
		(*(thisObj->creverseNodeUnion->CPPcreversenode1) = *(other->creverseNodeUnion->CPPcreversenode1)); break;
	case 2:
		(*(thisObj->creverseNodeUnion->CPPcreversenode2) = *(other->creverseNodeUnion->CPPcreversenode2)); break;
	case 3:
		(*(thisObj->creverseNodeUnion->CPPcreversenode3) = *(other->creverseNodeUnion->CPPcreversenode3)); break;
	case 4:
		(*(thisObj->creverseNodeUnion->CPPcreversenode4) = *(other->creverseNodeUnion->CPPcreversenode4)); break;
	case 5:
		(*(thisObj->creverseNodeUnion->CPPcreversenode5) = *(other->creverseNodeUnion->CPPcreversenode5)); break;
	case 6:
		(*(thisObj->creverseNodeUnion->CPPcreversenode6) = *(other->creverseNodeUnion->CPPcreversenode6)); break;
	case 7:
		(*(thisObj->creverseNodeUnion->CPPcreversenode7) = *(other->creverseNodeUnion->CPPcreversenode7)); break;
	case 8:
		(*(thisObj->creverseNodeUnion->CPPcreversenode8) = *(other->creverseNodeUnion->CPPcreversenode8)); break;
	case 9:
		(*(thisObj->creverseNodeUnion->CPPcreversenode9) = *(other->creverseNodeUnion->CPPcreversenode9)); break;
	case 10:
		(*(thisObj->creverseNodeUnion->CPPcreversenode10) = *(other->creverseNodeUnion->CPPcreversenode10)); break;
	case 11:
		(*(thisObj->creverseNodeUnion->CPPcreversenode11) = *(other->creverseNodeUnion->CPPcreversenode11)); break;
	case 12:
		(*(thisObj->creverseNodeUnion->CPPcreversenode12) = *(other->creverseNodeUnion->CPPcreversenode12)); break;
	case 13:
		(*(thisObj->creverseNodeUnion->CPPcreversenode13) = *(other->creverseNodeUnion->CPPcreversenode13)); break;
	case 14:
		(*(thisObj->creverseNodeUnion->CPPcreversenode14) = *(other->creverseNodeUnion->CPPcreversenode14)); break;
	case 15:
		(*(thisObj->creverseNodeUnion->CPPcreversenode15) = *(other->creverseNodeUnion->CPPcreversenode15)); break;
	case 16:
		(*(thisObj->creverseNodeUnion->CPPcreversenode16) = *(other->creverseNodeUnion->CPPcreversenode16)); break;
	case 17:
		(*(thisObj->creverseNodeUnion->CPPcreversenode17) = *(other->creverseNodeUnion->CPPcreversenode17)); break;
	case 18:
		(*(thisObj->creverseNodeUnion->CPPcreversenode18) = *(other->creverseNodeUnion->CPPcreversenode18)); break;
	case 19:
		(*(thisObj->creverseNodeUnion->CPPcreversenode19) = *(other->creverseNodeUnion->CPPcreversenode19)); break;
	case 20:
		(*(thisObj->creverseNodeUnion->CPPcreversenode20) = *(other->creverseNodeUnion->CPPcreversenode20)); break;
	case 21:
		(*(thisObj->creverseNodeUnion->CPPcreversenode21) = *(other->creverseNodeUnion->CPPcreversenode21)); break;
	case 22:
		(*(thisObj->creverseNodeUnion->CPPcreversenode22) = *(other->creverseNodeUnion->CPPcreversenode22)); break;
	case 23:
		(*(thisObj->creverseNodeUnion->CPPcreversenode23) = *(other->creverseNodeUnion->CPPcreversenode23)); break;
	case 24:
		(*(thisObj->creverseNodeUnion->CPPcreversenode24) = *(other->creverseNodeUnion->CPPcreversenode24)); break;
	case 25:
		(*(thisObj->creverseNodeUnion->CPPcreversenode25) = *(other->creverseNodeUnion->CPPcreversenode25)); break;
	case 26:
		(*(thisObj->creverseNodeUnion->CPPcreversenode26) = *(other->creverseNodeUnion->CPPcreversenode26)); break;
	case 27:
		(*(thisObj->creverseNodeUnion->CPPcreversenode27) = *(other->creverseNodeUnion->CPPcreversenode27)); break;
	case 28:
		(*(thisObj->creverseNodeUnion->CPPcreversenode28) = *(other->creverseNodeUnion->CPPcreversenode28)); break;
	case 29:
		(*(thisObj->creverseNodeUnion->CPPcreversenode29) = *(other->creverseNodeUnion->CPPcreversenode29)); break;
	case 30:
		(*(thisObj->creverseNodeUnion->CPPcreversenode30) = *(other->creverseNodeUnion->CPPcreversenode30)); break;
	case 31:
		(*(thisObj->creverseNodeUnion->CPPcreversenode31) = *(other->creverseNodeUnion->CPPcreversenode31)); break;
	case 32:
		(*(thisObj->creverseNodeUnion->CPPcreversenode32) = *(other->creverseNodeUnion->CPPcreversenode32)); break;
	case 33:
		(*(thisObj->creverseNodeUnion->CPPcreversenode33) = *(other->creverseNodeUnion->CPPcreversenode33)); break;
	case 34:
		(*(thisObj->creverseNodeUnion->CPPcreversenode34) = *(other->creverseNodeUnion->CPPcreversenode34)); break;
	case 35:
		(*(thisObj->creverseNodeUnion->CPPcreversenode35) = *(other->creverseNodeUnion->CPPcreversenode35)); break;
	case 36:
		(*(thisObj->creverseNodeUnion->CPPcreversenode36) = *(other->creverseNodeUnion->CPPcreversenode36)); break;
	case 37:
		(*(thisObj->creverseNodeUnion->CPPcreversenode37) = *(other->creverseNodeUnion->CPPcreversenode37)); break;
	case 38:
		(*(thisObj->creverseNodeUnion->CPPcreversenode38) = *(other->creverseNodeUnion->CPPcreversenode38)); break;
	case 39:
		(*(thisObj->creverseNodeUnion->CPPcreversenode39) = *(other->creverseNodeUnion->CPPcreversenode39)); break;
	case 40:
		(*(thisObj->creverseNodeUnion->CPPcreversenode40) = *(other->creverseNodeUnion->CPPcreversenode40)); break;
	case 41:
		(*(thisObj->creverseNodeUnion->CPPcreversenode41) = *(other->creverseNodeUnion->CPPcreversenode41)); break;
	case 42:
		(*(thisObj->creverseNodeUnion->CPPcreversenode42) = *(other->creverseNodeUnion->CPPcreversenode42)); break;
	case 43:
		(*(thisObj->creverseNodeUnion->CPPcreversenode43) = *(other->creverseNodeUnion->CPPcreversenode43)); break;
	case 44:
		(*(thisObj->creverseNodeUnion->CPPcreversenode44) = *(other->creverseNodeUnion->CPPcreversenode44)); break;
	case 45:
		(*(thisObj->creverseNodeUnion->CPPcreversenode45) = *(other->creverseNodeUnion->CPPcreversenode45)); break;
	case 46:
		(*(thisObj->creverseNodeUnion->CPPcreversenode46) = *(other->creverseNodeUnion->CPPcreversenode46)); break;
	case 47:
		(*(thisObj->creverseNodeUnion->CPPcreversenode47) = *(other->creverseNodeUnion->CPPcreversenode47)); break;
	case 48:
		(*(thisObj->creverseNodeUnion->CPPcreversenode48) = *(other->creverseNodeUnion->CPPcreversenode48)); break;
	case 49:
		(*(thisObj->creverseNodeUnion->CPPcreversenode49) = *(other->creverseNodeUnion->CPPcreversenode49)); break;
	case 50:
		(*(thisObj->creverseNodeUnion->CPPcreversenode50) = *(other->creverseNodeUnion->CPPcreversenode50)); break;
	case 51:
		(*(thisObj->creverseNodeUnion->CPPcreversenode51) = *(other->creverseNodeUnion->CPPcreversenode51)); break;
	case 52:
		(*(thisObj->creverseNodeUnion->CPPcreversenode52) = *(other->creverseNodeUnion->CPPcreversenode52)); break;
	case 53:
		(*(thisObj->creverseNodeUnion->CPPcreversenode53) = *(other->creverseNodeUnion->CPPcreversenode53)); break;
	case 54:
		(*(thisObj->creverseNodeUnion->CPPcreversenode54) = *(other->creverseNodeUnion->CPPcreversenode54)); break;
	case 55:
		(*(thisObj->creverseNodeUnion->CPPcreversenode55) = *(other->creverseNodeUnion->CPPcreversenode55)); break;
	case 56:
		(*(thisObj->creverseNodeUnion->CPPcreversenode56) = *(other->creverseNodeUnion->CPPcreversenode56)); break;
	case 57:
		(*(thisObj->creverseNodeUnion->CPPcreversenode57) = *(other->creverseNodeUnion->CPPcreversenode57)); break;
	case 58:
		(*(thisObj->creverseNodeUnion->CPPcreversenode58) = *(other->creverseNodeUnion->CPPcreversenode58)); break;
	case 59:
		(*(thisObj->creverseNodeUnion->CPPcreversenode59) = *(other->creverseNodeUnion->CPPcreversenode59)); break;
	case 60:
		(*(thisObj->creverseNodeUnion->CPPcreversenode60) = *(other->creverseNodeUnion->CPPcreversenode60)); break;
	case 61:
		(*(thisObj->creverseNodeUnion->CPPcreversenode61) = *(other->creverseNodeUnion->CPPcreversenode61)); break;
	case 62:
		(*(thisObj->creverseNodeUnion->CPPcreversenode62) = *(other->creverseNodeUnion->CPPcreversenode62)); break;
	case 63:
		(*(thisObj->creverseNodeUnion->CPPcreversenode63) = *(other->creverseNodeUnion->CPPcreversenode63)); break;
	case 64:
		(*(thisObj->creverseNodeUnion->CPPcreversenode64) = *(other->creverseNodeUnion->CPPcreversenode64)); break;
	case 65:
		(*(thisObj->creverseNodeUnion->CPPcreversenode65) = *(other->creverseNodeUnion->CPPcreversenode65)); break;
	case 66:
		(*(thisObj->creverseNodeUnion->CPPcreversenode66) = *(other->creverseNodeUnion->CPPcreversenode66)); break;
	case 67:
		(*(thisObj->creverseNodeUnion->CPPcreversenode67) = *(other->creverseNodeUnion->CPPcreversenode67)); break;
	case 68:
		(*(thisObj->creverseNodeUnion->CPPcreversenode68) = *(other->creverseNodeUnion->CPPcreversenode68)); break;
	case 69:
		(*(thisObj->creverseNodeUnion->CPPcreversenode69) = *(other->creverseNodeUnion->CPPcreversenode69)); break;
	case 70:
		(*(thisObj->creverseNodeUnion->CPPcreversenode70) = *(other->creverseNodeUnion->CPPcreversenode70)); break;
	case 71:
		(*(thisObj->creverseNodeUnion->CPPcreversenode71) = *(other->creverseNodeUnion->CPPcreversenode71)); break;
	case 72:
		(*(thisObj->creverseNodeUnion->CPPcreversenode72) = *(other->creverseNodeUnion->CPPcreversenode72)); break;
	case 73:
		(*(thisObj->creverseNodeUnion->CPPcreversenode73) = *(other->creverseNodeUnion->CPPcreversenode73)); break;
	case 74:
		(*(thisObj->creverseNodeUnion->CPPcreversenode74) = *(other->creverseNodeUnion->CPPcreversenode74)); break;
	case 75:
		(*(thisObj->creverseNodeUnion->CPPcreversenode75) = *(other->creverseNodeUnion->CPPcreversenode75)); break;
	case 76:
		(*(thisObj->creverseNodeUnion->CPPcreversenode76) = *(other->creverseNodeUnion->CPPcreversenode76)); break;
	case 77:
		(*(thisObj->creverseNodeUnion->CPPcreversenode77) = *(other->creverseNodeUnion->CPPcreversenode77)); break;
	case 78:
		(*(thisObj->creverseNodeUnion->CPPcreversenode78) = *(other->creverseNodeUnion->CPPcreversenode78)); break;
	case 79:
		(*(thisObj->creverseNodeUnion->CPPcreversenode79) = *(other->creverseNodeUnion->CPPcreversenode79)); break;
	case 80:
		(*(thisObj->creverseNodeUnion->CPPcreversenode80) = *(other->creverseNodeUnion->CPPcreversenode80)); break;
	case 81:
		(*(thisObj->creverseNodeUnion->CPPcreversenode81) = *(other->creverseNodeUnion->CPPcreversenode81)); break;
	case 82:
		(*(thisObj->creverseNodeUnion->CPPcreversenode82) = *(other->creverseNodeUnion->CPPcreversenode82)); break;
	case 83:
		(*(thisObj->creverseNodeUnion->CPPcreversenode83) = *(other->creverseNodeUnion->CPPcreversenode83)); break;
	case 84:
		(*(thisObj->creverseNodeUnion->CPPcreversenode84) = *(other->creverseNodeUnion->CPPcreversenode84)); break;
	case 85:
		(*(thisObj->creverseNodeUnion->CPPcreversenode85) = *(other->creverseNodeUnion->CPPcreversenode85)); break;
	case 86:
		(*(thisObj->creverseNodeUnion->CPPcreversenode86) = *(other->creverseNodeUnion->CPPcreversenode86)); break;
	case 87:
		(*(thisObj->creverseNodeUnion->CPPcreversenode87) = *(other->creverseNodeUnion->CPPcreversenode87)); break;
	case 88:
		(*(thisObj->creverseNodeUnion->CPPcreversenode88) = *(other->creverseNodeUnion->CPPcreversenode88)); break;
	case 89:
		(*(thisObj->creverseNodeUnion->CPPcreversenode89) = *(other->creverseNodeUnion->CPPcreversenode89)); break;
	case 90:
		(*(thisObj->creverseNodeUnion->CPPcreversenode90) = *(other->creverseNodeUnion->CPPcreversenode90)); break;
	case 91:
		(*(thisObj->creverseNodeUnion->CPPcreversenode91) = *(other->creverseNodeUnion->CPPcreversenode91)); break;
	case 92:
		(*(thisObj->creverseNodeUnion->CPPcreversenode92) = *(other->creverseNodeUnion->CPPcreversenode92)); break;
	case 93:
		(*(thisObj->creverseNodeUnion->CPPcreversenode93) = *(other->creverseNodeUnion->CPPcreversenode93)); break;
	case 94:
		(*(thisObj->creverseNodeUnion->CPPcreversenode94) = *(other->creverseNodeUnion->CPPcreversenode94)); break;
	case 95:
		(*(thisObj->creverseNodeUnion->CPPcreversenode95) = *(other->creverseNodeUnion->CPPcreversenode95)); break;
	case 96:
		(*(thisObj->creverseNodeUnion->CPPcreversenode96) = *(other->creverseNodeUnion->CPPcreversenode96)); break;
	case 97:
		(*(thisObj->creverseNodeUnion->CPPcreversenode97) = *(other->creverseNodeUnion->CPPcreversenode97)); break;
	case 98:
		(*(thisObj->creverseNodeUnion->CPPcreversenode98) = *(other->creverseNodeUnion->CPPcreversenode98)); break;
	case 99:
		(*(thisObj->creverseNodeUnion->CPPcreversenode99) = *(other->creverseNodeUnion->CPPcreversenode99)); break;
	case 100:
		(*(thisObj->creverseNodeUnion->CPPcreversenode100) = *(other->creverseNodeUnion->CPPcreversenode100)); break;
	case 101:
		(*(thisObj->creverseNodeUnion->CPPcreversenode101) = *(other->creverseNodeUnion->CPPcreversenode101)); break;
	case 102:
		(*(thisObj->creverseNodeUnion->CPPcreversenode102) = *(other->creverseNodeUnion->CPPcreversenode102)); break;
	case 103:
		(*(thisObj->creverseNodeUnion->CPPcreversenode103) = *(other->creverseNodeUnion->CPPcreversenode103)); break;
	case 104:
		(*(thisObj->creverseNodeUnion->CPPcreversenode104) = *(other->creverseNodeUnion->CPPcreversenode104)); break;
	case 105:
		(*(thisObj->creverseNodeUnion->CPPcreversenode105) = *(other->creverseNodeUnion->CPPcreversenode105)); break;
	case 106:
		(*(thisObj->creverseNodeUnion->CPPcreversenode106) = *(other->creverseNodeUnion->CPPcreversenode106)); break;
	case 107:
		(*(thisObj->creverseNodeUnion->CPPcreversenode107) = *(other->creverseNodeUnion->CPPcreversenode107)); break;
	case 108:
		(*(thisObj->creverseNodeUnion->CPPcreversenode108) = *(other->creverseNodeUnion->CPPcreversenode108)); break;
	case 109:
		(*(thisObj->creverseNodeUnion->CPPcreversenode109) = *(other->creverseNodeUnion->CPPcreversenode109)); break;
	case 110:
		(*(thisObj->creverseNodeUnion->CPPcreversenode110) = *(other->creverseNodeUnion->CPPcreversenode110)); break;
	case 111:
		(*(thisObj->creverseNodeUnion->CPPcreversenode111) = *(other->creverseNodeUnion->CPPcreversenode111)); break;
	case 112:
		(*(thisObj->creverseNodeUnion->CPPcreversenode112) = *(other->creverseNodeUnion->CPPcreversenode112)); break;
	case 113:
		(*(thisObj->creverseNodeUnion->CPPcreversenode113) = *(other->creverseNodeUnion->CPPcreversenode113)); break;
	case 114:
		(*(thisObj->creverseNodeUnion->CPPcreversenode114) = *(other->creverseNodeUnion->CPPcreversenode114)); break;
	case 115:
		(*(thisObj->creverseNodeUnion->CPPcreversenode115) = *(other->creverseNodeUnion->CPPcreversenode115)); break;
	case 116:
		(*(thisObj->creverseNodeUnion->CPPcreversenode116) = *(other->creverseNodeUnion->CPPcreversenode116)); break;
	case 117:
		(*(thisObj->creverseNodeUnion->CPPcreversenode117) = *(other->creverseNodeUnion->CPPcreversenode117)); break;
	case 118:
		(*(thisObj->creverseNodeUnion->CPPcreversenode118) = *(other->creverseNodeUnion->CPPcreversenode118)); break;
	case 119:
		(*(thisObj->creverseNodeUnion->CPPcreversenode119) = *(other->creverseNodeUnion->CPPcreversenode119)); break;
	case 120:
		(*(thisObj->creverseNodeUnion->CPPcreversenode120) = *(other->creverseNodeUnion->CPPcreversenode120)); break;
	case 121:
		(*(thisObj->creverseNodeUnion->CPPcreversenode121) = *(other->creverseNodeUnion->CPPcreversenode121)); break;
	case 122:
		(*(thisObj->creverseNodeUnion->CPPcreversenode122) = *(other->creverseNodeUnion->CPPcreversenode122)); break;
	case 123:
		(*(thisObj->creverseNodeUnion->CPPcreversenode123) = *(other->creverseNodeUnion->CPPcreversenode123)); break;
	case 124:
		(*(thisObj->creverseNodeUnion->CPPcreversenode124) = *(other->creverseNodeUnion->CPPcreversenode124)); break;
	case 125:
		(*(thisObj->creverseNodeUnion->CPPcreversenode125) = *(other->creverseNodeUnion->CPPcreversenode125)); break;
	case 126:
		(*(thisObj->creverseNodeUnion->CPPcreversenode126) = *(other->creverseNodeUnion->CPPcreversenode126)); break;
	case 127:
		(*(thisObj->creverseNodeUnion->CPPcreversenode127) = *(other->creverseNodeUnion->CPPcreversenode127)); break;
	case 128:
		(*(thisObj->creverseNodeUnion->CPPcreversenode128) = *(other->creverseNodeUnion->CPPcreversenode128)); break;
	case 129:
		(*(thisObj->creverseNodeUnion->CPPcreversenode129) = *(other->creverseNodeUnion->CPPcreversenode129)); break;
	case 130:
		(*(thisObj->creverseNodeUnion->CPPcreversenode130) = *(other->creverseNodeUnion->CPPcreversenode130)); break;
	case 131:
		(*(thisObj->creverseNodeUnion->CPPcreversenode131) = *(other->creverseNodeUnion->CPPcreversenode131)); break;
	case 132:
		(*(thisObj->creverseNodeUnion->CPPcreversenode132) = *(other->creverseNodeUnion->CPPcreversenode132)); break;
	case 133:
		(*(thisObj->creverseNodeUnion->CPPcreversenode133) = *(other->creverseNodeUnion->CPPcreversenode133)); break;
	case 134:
		(*(thisObj->creverseNodeUnion->CPPcreversenode134) = *(other->creverseNodeUnion->CPPcreversenode134)); break;
	case 135:
		(*(thisObj->creverseNodeUnion->CPPcreversenode135) = *(other->creverseNodeUnion->CPPcreversenode135)); break;
	case 136:
		(*(thisObj->creverseNodeUnion->CPPcreversenode136) = *(other->creverseNodeUnion->CPPcreversenode136)); break;
	case 137:
		(*(thisObj->creverseNodeUnion->CPPcreversenode137) = *(other->creverseNodeUnion->CPPcreversenode137)); break;
	case 138:
		(*(thisObj->creverseNodeUnion->CPPcreversenode138) = *(other->creverseNodeUnion->CPPcreversenode138)); break;
	case 139:
		(*(thisObj->creverseNodeUnion->CPPcreversenode139) = *(other->creverseNodeUnion->CPPcreversenode139)); break;
	case 140:
		(*(thisObj->creverseNodeUnion->CPPcreversenode140) = *(other->creverseNodeUnion->CPPcreversenode140)); break;
	case 141:
		(*(thisObj->creverseNodeUnion->CPPcreversenode141) = *(other->creverseNodeUnion->CPPcreversenode141)); break;
	case 142:
		(*(thisObj->creverseNodeUnion->CPPcreversenode142) = *(other->creverseNodeUnion->CPPcreversenode142)); break;
	case 143:
		(*(thisObj->creverseNodeUnion->CPPcreversenode143) = *(other->creverseNodeUnion->CPPcreversenode143)); break;
	case 144:
		(*(thisObj->creverseNodeUnion->CPPcreversenode144) = *(other->creverseNodeUnion->CPPcreversenode144)); break;
	case 145:
		(*(thisObj->creverseNodeUnion->CPPcreversenode145) = *(other->creverseNodeUnion->CPPcreversenode145)); break;
	case 146:
		(*(thisObj->creverseNodeUnion->CPPcreversenode146) = *(other->creverseNodeUnion->CPPcreversenode146)); break;
	case 147:
		(*(thisObj->creverseNodeUnion->CPPcreversenode147) = *(other->creverseNodeUnion->CPPcreversenode147)); break;
	case 148:
		(*(thisObj->creverseNodeUnion->CPPcreversenode148) = *(other->creverseNodeUnion->CPPcreversenode148)); break;
	case 149:
		(*(thisObj->creverseNodeUnion->CPPcreversenode149) = *(other->creverseNodeUnion->CPPcreversenode149)); break;
	case 150:
		(*(thisObj->creverseNodeUnion->CPPcreversenode150) = *(other->creverseNodeUnion->CPPcreversenode150)); break;
	case 151:
		(*(thisObj->creverseNodeUnion->CPPcreversenode151) = *(other->creverseNodeUnion->CPPcreversenode151)); break;
	case 152:
		(*(thisObj->creverseNodeUnion->CPPcreversenode152) = *(other->creverseNodeUnion->CPPcreversenode152)); break;
	case 153:
		(*(thisObj->creverseNodeUnion->CPPcreversenode153) = *(other->creverseNodeUnion->CPPcreversenode153)); break;
	case 154:
		(*(thisObj->creverseNodeUnion->CPPcreversenode154) = *(other->creverseNodeUnion->CPPcreversenode154)); break;
	case 155:
		(*(thisObj->creverseNodeUnion->CPPcreversenode155) = *(other->creverseNodeUnion->CPPcreversenode155)); break;
	case 156:
		(*(thisObj->creverseNodeUnion->CPPcreversenode156) = *(other->creverseNodeUnion->CPPcreversenode156)); break;
	case 157:
		(*(thisObj->creverseNodeUnion->CPPcreversenode157) = *(other->creverseNodeUnion->CPPcreversenode157)); break;
	case 158:
		(*(thisObj->creverseNodeUnion->CPPcreversenode158) = *(other->creverseNodeUnion->CPPcreversenode158)); break;
	case 159:
		(*(thisObj->creverseNodeUnion->CPPcreversenode159) = *(other->creverseNodeUnion->CPPcreversenode159)); break;
	case 160:
		(*(thisObj->creverseNodeUnion->CPPcreversenode160) = *(other->creverseNodeUnion->CPPcreversenode160)); break;
	case 161:
		(*(thisObj->creverseNodeUnion->CPPcreversenode161) = *(other->creverseNodeUnion->CPPcreversenode161)); break;
	case 162:
		(*(thisObj->creverseNodeUnion->CPPcreversenode162) = *(other->creverseNodeUnion->CPPcreversenode162)); break;
	case 163:
		(*(thisObj->creverseNodeUnion->CPPcreversenode163) = *(other->creverseNodeUnion->CPPcreversenode163)); break;
	case 164:
		(*(thisObj->creverseNodeUnion->CPPcreversenode164) = *(other->creverseNodeUnion->CPPcreversenode164)); break;
	case 165:
		(*(thisObj->creverseNodeUnion->CPPcreversenode165) = *(other->creverseNodeUnion->CPPcreversenode165)); break;
	case 166:
		(*(thisObj->creverseNodeUnion->CPPcreversenode166) = *(other->creverseNodeUnion->CPPcreversenode166)); break;
	case 167:
		(*(thisObj->creverseNodeUnion->CPPcreversenode167) = *(other->creverseNodeUnion->CPPcreversenode167)); break;
	case 168:
		(*(thisObj->creverseNodeUnion->CPPcreversenode168) = *(other->creverseNodeUnion->CPPcreversenode168)); break;
	case 169:
		(*(thisObj->creverseNodeUnion->CPPcreversenode169) = *(other->creverseNodeUnion->CPPcreversenode169)); break;
	case 170:
		(*(thisObj->creverseNodeUnion->CPPcreversenode170) = *(other->creverseNodeUnion->CPPcreversenode170)); break;
	case 171:
		(*(thisObj->creverseNodeUnion->CPPcreversenode171) = *(other->creverseNodeUnion->CPPcreversenode171)); break;
	case 172:
		(*(thisObj->creverseNodeUnion->CPPcreversenode172) = *(other->creverseNodeUnion->CPPcreversenode172)); break;
	case 173:
		(*(thisObj->creverseNodeUnion->CPPcreversenode173) = *(other->creverseNodeUnion->CPPcreversenode173)); break;
	case 174:
		(*(thisObj->creverseNodeUnion->CPPcreversenode174) = *(other->creverseNodeUnion->CPPcreversenode174)); break;
	case 175:
		(*(thisObj->creverseNodeUnion->CPPcreversenode175) = *(other->creverseNodeUnion->CPPcreversenode175)); break;
	case 176:
		(*(thisObj->creverseNodeUnion->CPPcreversenode176) = *(other->creverseNodeUnion->CPPcreversenode176)); break;
	case 177:
		(*(thisObj->creverseNodeUnion->CPPcreversenode177) = *(other->creverseNodeUnion->CPPcreversenode177)); break;
	case 178:
		(*(thisObj->creverseNodeUnion->CPPcreversenode178) = *(other->creverseNodeUnion->CPPcreversenode178)); break;
	case 179:
		(*(thisObj->creverseNodeUnion->CPPcreversenode179) = *(other->creverseNodeUnion->CPPcreversenode179)); break;
	case 180:
		(*(thisObj->creverseNodeUnion->CPPcreversenode180) = *(other->creverseNodeUnion->CPPcreversenode180)); break;
	case 181:
		(*(thisObj->creverseNodeUnion->CPPcreversenode181) = *(other->creverseNodeUnion->CPPcreversenode181)); break;
	case 182:
		(*(thisObj->creverseNodeUnion->CPPcreversenode182) = *(other->creverseNodeUnion->CPPcreversenode182)); break;
	case 183:
		(*(thisObj->creverseNodeUnion->CPPcreversenode183) = *(other->creverseNodeUnion->CPPcreversenode183)); break;
	case 184:
		(*(thisObj->creverseNodeUnion->CPPcreversenode184) = *(other->creverseNodeUnion->CPPcreversenode184)); break;
	case 185:
		(*(thisObj->creverseNodeUnion->CPPcreversenode185) = *(other->creverseNodeUnion->CPPcreversenode185)); break;
	case 186:
		(*(thisObj->creverseNodeUnion->CPPcreversenode186) = *(other->creverseNodeUnion->CPPcreversenode186)); break;
	case 187:
		(*(thisObj->creverseNodeUnion->CPPcreversenode187) = *(other->creverseNodeUnion->CPPcreversenode187)); break;
	case 188:
		(*(thisObj->creverseNodeUnion->CPPcreversenode188) = *(other->creverseNodeUnion->CPPcreversenode188)); break;
	case 189:
		(*(thisObj->creverseNodeUnion->CPPcreversenode189) = *(other->creverseNodeUnion->CPPcreversenode189)); break;
	case 190:
		(*(thisObj->creverseNodeUnion->CPPcreversenode190) = *(other->creverseNodeUnion->CPPcreversenode190)); break;
	case 191:
		(*(thisObj->creverseNodeUnion->CPPcreversenode191) = *(other->creverseNodeUnion->CPPcreversenode191)); break;
	case 192:
		(*(thisObj->creverseNodeUnion->CPPcreversenode192) = *(other->creverseNodeUnion->CPPcreversenode192)); break;
	case 193:
		(*(thisObj->creverseNodeUnion->CPPcreversenode193) = *(other->creverseNodeUnion->CPPcreversenode193)); break;
	case 194:
		(*(thisObj->creverseNodeUnion->CPPcreversenode194) = *(other->creverseNodeUnion->CPPcreversenode194)); break;
	case 195:
		(*(thisObj->creverseNodeUnion->CPPcreversenode195) = *(other->creverseNodeUnion->CPPcreversenode195)); break;
	case 196:
		(*(thisObj->creverseNodeUnion->CPPcreversenode196) = *(other->creverseNodeUnion->CPPcreversenode196)); break;
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
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode14->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 28:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode28->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 42:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode42->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 56:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode56->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 70:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode70->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 84:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode84->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 98:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode98->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 112:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode112->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 126:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode126->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 140:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode140->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 154:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode154->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 168:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode168->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 182:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode182->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(creverseNodeUnion->CPPcreversenode196->GetValue(), objtarget))
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