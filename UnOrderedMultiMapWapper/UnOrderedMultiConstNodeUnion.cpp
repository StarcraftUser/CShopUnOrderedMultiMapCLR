#include "pch.h"

generic<typename Key, typename Value>
inline UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::CShorpUnOrderedMultiConstNode()
{
	gIntKeyClassDictionary = nullptr;
	multiConstNodeUnion = new Utilities::UnOrderedMultiConstNodeUnion();
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
		multiConstNodeUnion->ptrToDelete = nullptr;
		break;
	case 1:
		multiConstNodeUnion->CPPmulticonstnode1 = new UnOrderedMultiConstNode<unsigned char, unsigned char>();
		break;
	case 2:
		multiConstNodeUnion->CPPmulticonstnode2 = new UnOrderedMultiConstNode<unsigned char, char>();
		break;
	case 3:
		multiConstNodeUnion->CPPmulticonstnode3 = new UnOrderedMultiConstNode<unsigned char, short>();
		break;
	case 4:
		multiConstNodeUnion->CPPmulticonstnode4 = new UnOrderedMultiConstNode<unsigned char, unsigned short>();
		break;
	case 5:
		multiConstNodeUnion->CPPmulticonstnode5 = new UnOrderedMultiConstNode<unsigned char, int>();
		break;
	case 6:
		multiConstNodeUnion->CPPmulticonstnode6 = new UnOrderedMultiConstNode<unsigned char, unsigned int>();
		break;
	case 7:
		multiConstNodeUnion->CPPmulticonstnode7 = new UnOrderedMultiConstNode<unsigned char, long long>();
		break;
	case 8:
		multiConstNodeUnion->CPPmulticonstnode8 = new UnOrderedMultiConstNode<unsigned char, unsigned long long>();
		break;
	case 9:
		multiConstNodeUnion->CPPmulticonstnode9 = new UnOrderedMultiConstNode<unsigned char, float>();
		break;
	case 10:
		multiConstNodeUnion->CPPmulticonstnode10 = new UnOrderedMultiConstNode<unsigned char, double>();
		break;
	case 11:
		multiConstNodeUnion->CPPmulticonstnode11 = new UnOrderedMultiConstNode<unsigned char, wchar_t>();
		break;
	case 12:
		multiConstNodeUnion->CPPmulticonstnode12 = new UnOrderedMultiConstNode<unsigned char, bool>();
		break;
	case 13:
		multiConstNodeUnion->CPPmulticonstnode13 = new UnOrderedMultiConstNode<unsigned char, std::wstring>();
		break;
	case 14:
		multiConstNodeUnion->CPPmulticonstnode14 = new UnOrderedMultiConstNode<unsigned char, __int64>();
		break;
	case 15:
		multiConstNodeUnion->CPPmulticonstnode15 = new UnOrderedMultiConstNode<char, unsigned char>();
		break;
	case 16:
		multiConstNodeUnion->CPPmulticonstnode16 = new UnOrderedMultiConstNode<char, char>();
		break;
	case 17:
		multiConstNodeUnion->CPPmulticonstnode17 = new UnOrderedMultiConstNode<char, short>();
		break;
	case 18:
		multiConstNodeUnion->CPPmulticonstnode18 = new UnOrderedMultiConstNode<char, unsigned short>();
		break;
	case 19:
		multiConstNodeUnion->CPPmulticonstnode19 = new UnOrderedMultiConstNode<char, int>();
		break;
	case 20:
		multiConstNodeUnion->CPPmulticonstnode20 = new UnOrderedMultiConstNode<char, unsigned int>();
		break;
	case 21:
		multiConstNodeUnion->CPPmulticonstnode21 = new UnOrderedMultiConstNode<char, long long>();
		break;
	case 22:
		multiConstNodeUnion->CPPmulticonstnode22 = new UnOrderedMultiConstNode<char, unsigned long long>();
		break;
	case 23:
		multiConstNodeUnion->CPPmulticonstnode23 = new UnOrderedMultiConstNode<char, float>();
		break;
	case 24:
		multiConstNodeUnion->CPPmulticonstnode24 = new UnOrderedMultiConstNode<char, double>();
		break;
	case 25:
		multiConstNodeUnion->CPPmulticonstnode25 = new UnOrderedMultiConstNode<char, wchar_t>();
		break;
	case 26:
		multiConstNodeUnion->CPPmulticonstnode26 = new UnOrderedMultiConstNode<char, bool>();
		break;
	case 27:
		multiConstNodeUnion->CPPmulticonstnode27 = new UnOrderedMultiConstNode<char, std::wstring>();
		break;
	case 28:
		multiConstNodeUnion->CPPmulticonstnode28 = new UnOrderedMultiConstNode<char, __int64>();
		break;
	case 29:
		multiConstNodeUnion->CPPmulticonstnode29 = new UnOrderedMultiConstNode<short, unsigned char>();
		break;
	case 30:
		multiConstNodeUnion->CPPmulticonstnode30 = new UnOrderedMultiConstNode<short, char>();
		break;
	case 31:
		multiConstNodeUnion->CPPmulticonstnode31 = new UnOrderedMultiConstNode<short, short>();
		break;
	case 32:
		multiConstNodeUnion->CPPmulticonstnode32 = new UnOrderedMultiConstNode<short, unsigned short>();
		break;
	case 33:
		multiConstNodeUnion->CPPmulticonstnode33 = new UnOrderedMultiConstNode<short, int>();
		break;
	case 34:
		multiConstNodeUnion->CPPmulticonstnode34 = new UnOrderedMultiConstNode<short, unsigned int>();
		break;
	case 35:
		multiConstNodeUnion->CPPmulticonstnode35 = new UnOrderedMultiConstNode<short, long long>();
		break;
	case 36:
		multiConstNodeUnion->CPPmulticonstnode36 = new UnOrderedMultiConstNode<short, unsigned long long>();
		break;
	case 37:
		multiConstNodeUnion->CPPmulticonstnode37 = new UnOrderedMultiConstNode<short, float>();
		break;
	case 38:
		multiConstNodeUnion->CPPmulticonstnode38 = new UnOrderedMultiConstNode<short, double>();
		break;
	case 39:
		multiConstNodeUnion->CPPmulticonstnode39 = new UnOrderedMultiConstNode<short, wchar_t>();
		break;
	case 40:
		multiConstNodeUnion->CPPmulticonstnode40 = new UnOrderedMultiConstNode<short, bool>();
		break;
	case 41:
		multiConstNodeUnion->CPPmulticonstnode41 = new UnOrderedMultiConstNode<short, std::wstring>();
		break;
	case 42:
		multiConstNodeUnion->CPPmulticonstnode42 = new UnOrderedMultiConstNode<short, __int64>();
		break;
	case 43:
		multiConstNodeUnion->CPPmulticonstnode43 = new UnOrderedMultiConstNode<unsigned short, unsigned char>();
		break;
	case 44:
		multiConstNodeUnion->CPPmulticonstnode44 = new UnOrderedMultiConstNode<unsigned short, char>();
		break;
	case 45:
		multiConstNodeUnion->CPPmulticonstnode45 = new UnOrderedMultiConstNode<unsigned short, short>();
		break;
	case 46:
		multiConstNodeUnion->CPPmulticonstnode46 = new UnOrderedMultiConstNode<unsigned short, unsigned short>();
		break;
	case 47:
		multiConstNodeUnion->CPPmulticonstnode47 = new UnOrderedMultiConstNode<unsigned short, int>();
		break;
	case 48:
		multiConstNodeUnion->CPPmulticonstnode48 = new UnOrderedMultiConstNode<unsigned short, unsigned int>();
		break;
	case 49:
		multiConstNodeUnion->CPPmulticonstnode49 = new UnOrderedMultiConstNode<unsigned short, long long>();
		break;
	case 50:
		multiConstNodeUnion->CPPmulticonstnode50 = new UnOrderedMultiConstNode<unsigned short, unsigned long long>();
		break;
	case 51:
		multiConstNodeUnion->CPPmulticonstnode51 = new UnOrderedMultiConstNode<unsigned short, float>();
		break;
	case 52:
		multiConstNodeUnion->CPPmulticonstnode52 = new UnOrderedMultiConstNode<unsigned short, double>();
		break;
	case 53:
		multiConstNodeUnion->CPPmulticonstnode53 = new UnOrderedMultiConstNode<unsigned short, wchar_t>();
		break;
	case 54:
		multiConstNodeUnion->CPPmulticonstnode54 = new UnOrderedMultiConstNode<unsigned short, bool>();
		break;
	case 55:
		multiConstNodeUnion->CPPmulticonstnode55 = new UnOrderedMultiConstNode<unsigned short, std::wstring>();
		break;
	case 56:
		multiConstNodeUnion->CPPmulticonstnode56 = new UnOrderedMultiConstNode<unsigned short, __int64>();
		break;
	case 57:
		multiConstNodeUnion->CPPmulticonstnode57 = new UnOrderedMultiConstNode<int, unsigned char>();
		break;
	case 58:
		multiConstNodeUnion->CPPmulticonstnode58 = new UnOrderedMultiConstNode<int, char>();
		break;
	case 59:
		multiConstNodeUnion->CPPmulticonstnode59 = new UnOrderedMultiConstNode<int, short>();
		break;
	case 60:
		multiConstNodeUnion->CPPmulticonstnode60 = new UnOrderedMultiConstNode<int, unsigned short>();
		break;
	case 61:
		multiConstNodeUnion->CPPmulticonstnode61 = new UnOrderedMultiConstNode<int, int>();
		break;
	case 62:
		multiConstNodeUnion->CPPmulticonstnode62 = new UnOrderedMultiConstNode<int, unsigned int>();
		break;
	case 63:
		multiConstNodeUnion->CPPmulticonstnode63 = new UnOrderedMultiConstNode<int, long long>();
		break;
	case 64:
		multiConstNodeUnion->CPPmulticonstnode64 = new UnOrderedMultiConstNode<int, unsigned long long>();
		break;
	case 65:
		multiConstNodeUnion->CPPmulticonstnode65 = new UnOrderedMultiConstNode<int, float>();
		break;
	case 66:
		multiConstNodeUnion->CPPmulticonstnode66 = new UnOrderedMultiConstNode<int, double>();
		break;
	case 67:
		multiConstNodeUnion->CPPmulticonstnode67 = new UnOrderedMultiConstNode<int, wchar_t>();
		break;
	case 68:
		multiConstNodeUnion->CPPmulticonstnode68 = new UnOrderedMultiConstNode<int, bool>();
		break;
	case 69:
		multiConstNodeUnion->CPPmulticonstnode69 = new UnOrderedMultiConstNode<int, std::wstring>();
		break;
	case 70:
		multiConstNodeUnion->CPPmulticonstnode70 = new UnOrderedMultiConstNode<int, __int64>();
		break;
	case 71:
		multiConstNodeUnion->CPPmulticonstnode71 = new UnOrderedMultiConstNode<unsigned int, unsigned char>();
		break;
	case 72:
		multiConstNodeUnion->CPPmulticonstnode72 = new UnOrderedMultiConstNode<unsigned int, char>();
		break;
	case 73:
		multiConstNodeUnion->CPPmulticonstnode73 = new UnOrderedMultiConstNode<unsigned int, short>();
		break;
	case 74:
		multiConstNodeUnion->CPPmulticonstnode74 = new UnOrderedMultiConstNode<unsigned int, unsigned short>();
		break;
	case 75:
		multiConstNodeUnion->CPPmulticonstnode75 = new UnOrderedMultiConstNode<unsigned int, int>();
		break;
	case 76:
		multiConstNodeUnion->CPPmulticonstnode76 = new UnOrderedMultiConstNode<unsigned int, unsigned int>();
		break;
	case 77:
		multiConstNodeUnion->CPPmulticonstnode77 = new UnOrderedMultiConstNode<unsigned int, long long>();
		break;
	case 78:
		multiConstNodeUnion->CPPmulticonstnode78 = new UnOrderedMultiConstNode<unsigned int, unsigned long long>();
		break;
	case 79:
		multiConstNodeUnion->CPPmulticonstnode79 = new UnOrderedMultiConstNode<unsigned int, float>();
		break;
	case 80:
		multiConstNodeUnion->CPPmulticonstnode80 = new UnOrderedMultiConstNode<unsigned int, double>();
		break;
	case 81:
		multiConstNodeUnion->CPPmulticonstnode81 = new UnOrderedMultiConstNode<unsigned int, wchar_t>();
		break;
	case 82:
		multiConstNodeUnion->CPPmulticonstnode82 = new UnOrderedMultiConstNode<unsigned int, bool>();
		break;
	case 83:
		multiConstNodeUnion->CPPmulticonstnode83 = new UnOrderedMultiConstNode<unsigned int, std::wstring>();
		break;
	case 84:
		multiConstNodeUnion->CPPmulticonstnode84 = new UnOrderedMultiConstNode<unsigned int, __int64>();
		break;
	case 85:
		multiConstNodeUnion->CPPmulticonstnode85 = new UnOrderedMultiConstNode<long long, unsigned char>();
		break;
	case 86:
		multiConstNodeUnion->CPPmulticonstnode86 = new UnOrderedMultiConstNode<long long, char>();
		break;
	case 87:
		multiConstNodeUnion->CPPmulticonstnode87 = new UnOrderedMultiConstNode<long long, short>();
		break;
	case 88:
		multiConstNodeUnion->CPPmulticonstnode88 = new UnOrderedMultiConstNode<long long, unsigned short>();
		break;
	case 89:
		multiConstNodeUnion->CPPmulticonstnode89 = new UnOrderedMultiConstNode<long long, int>();
		break;
	case 90:
		multiConstNodeUnion->CPPmulticonstnode90 = new UnOrderedMultiConstNode<long long, unsigned int>();
		break;
	case 91:
		multiConstNodeUnion->CPPmulticonstnode91 = new UnOrderedMultiConstNode<long long, long long>();
		break;
	case 92:
		multiConstNodeUnion->CPPmulticonstnode92 = new UnOrderedMultiConstNode<long long, unsigned long long>();
		break;
	case 93:
		multiConstNodeUnion->CPPmulticonstnode93 = new UnOrderedMultiConstNode<long long, float>();
		break;
	case 94:
		multiConstNodeUnion->CPPmulticonstnode94 = new UnOrderedMultiConstNode<long long, double>();
		break;
	case 95:
		multiConstNodeUnion->CPPmulticonstnode95 = new UnOrderedMultiConstNode<long long, wchar_t>();
		break;
	case 96:
		multiConstNodeUnion->CPPmulticonstnode96 = new UnOrderedMultiConstNode<long long, bool>();
		break;
	case 97:
		multiConstNodeUnion->CPPmulticonstnode97 = new UnOrderedMultiConstNode<long long, std::wstring>();
		break;
	case 98:
		multiConstNodeUnion->CPPmulticonstnode98 = new UnOrderedMultiConstNode<long long, __int64>();
		break;
	case 99:
		multiConstNodeUnion->CPPmulticonstnode99 = new UnOrderedMultiConstNode<unsigned long long, unsigned char>();
		break;
	case 100:
		multiConstNodeUnion->CPPmulticonstnode100 = new UnOrderedMultiConstNode<unsigned long long, char>();
		break;
	case 101:
		multiConstNodeUnion->CPPmulticonstnode101 = new UnOrderedMultiConstNode<unsigned long long, short>();
		break;
	case 102:
		multiConstNodeUnion->CPPmulticonstnode102 = new UnOrderedMultiConstNode<unsigned long long, unsigned short>();
		break;
	case 103:
		multiConstNodeUnion->CPPmulticonstnode103 = new UnOrderedMultiConstNode<unsigned long long, int>();
		break;
	case 104:
		multiConstNodeUnion->CPPmulticonstnode104 = new UnOrderedMultiConstNode<unsigned long long, unsigned int>();
		break;
	case 105:
		multiConstNodeUnion->CPPmulticonstnode105 = new UnOrderedMultiConstNode<unsigned long long, long long>();
		break;
	case 106:
		multiConstNodeUnion->CPPmulticonstnode106 = new UnOrderedMultiConstNode<unsigned long long, unsigned long long>();
		break;
	case 107:
		multiConstNodeUnion->CPPmulticonstnode107 = new UnOrderedMultiConstNode<unsigned long long, float>();
		break;
	case 108:
		multiConstNodeUnion->CPPmulticonstnode108 = new UnOrderedMultiConstNode<unsigned long long, double>();
		break;
	case 109:
		multiConstNodeUnion->CPPmulticonstnode109 = new UnOrderedMultiConstNode<unsigned long long, wchar_t>();
		break;
	case 110:
		multiConstNodeUnion->CPPmulticonstnode110 = new UnOrderedMultiConstNode<unsigned long long, bool>();
		break;
	case 111:
		multiConstNodeUnion->CPPmulticonstnode111 = new UnOrderedMultiConstNode<unsigned long long, std::wstring>();
		break;
	case 112:
		multiConstNodeUnion->CPPmulticonstnode112 = new UnOrderedMultiConstNode<unsigned long long, __int64>();
		break;
	case 113:
		multiConstNodeUnion->CPPmulticonstnode113 = new UnOrderedMultiConstNode<float, unsigned char>();
		break;
	case 114:
		multiConstNodeUnion->CPPmulticonstnode114 = new UnOrderedMultiConstNode<float, char>();
		break;
	case 115:
		multiConstNodeUnion->CPPmulticonstnode115 = new UnOrderedMultiConstNode<float, short>();
		break;
	case 116:
		multiConstNodeUnion->CPPmulticonstnode116 = new UnOrderedMultiConstNode<float, unsigned short>();
		break;
	case 117:
		multiConstNodeUnion->CPPmulticonstnode117 = new UnOrderedMultiConstNode<float, int>();
		break;
	case 118:
		multiConstNodeUnion->CPPmulticonstnode118 = new UnOrderedMultiConstNode<float, unsigned int>();
		break;
	case 119:
		multiConstNodeUnion->CPPmulticonstnode119 = new UnOrderedMultiConstNode<float, long long>();
		break;
	case 120:
		multiConstNodeUnion->CPPmulticonstnode120 = new UnOrderedMultiConstNode<float, unsigned long long>();
		break;
	case 121:
		multiConstNodeUnion->CPPmulticonstnode121 = new UnOrderedMultiConstNode<float, float>();
		break;
	case 122:
		multiConstNodeUnion->CPPmulticonstnode122 = new UnOrderedMultiConstNode<float, double>();
		break;
	case 123:
		multiConstNodeUnion->CPPmulticonstnode123 = new UnOrderedMultiConstNode<float, wchar_t>();
		break;
	case 124:
		multiConstNodeUnion->CPPmulticonstnode124 = new UnOrderedMultiConstNode<float, bool>();
		break;
	case 125:
		multiConstNodeUnion->CPPmulticonstnode125 = new UnOrderedMultiConstNode<float, std::wstring>();
		break;
	case 126:
		multiConstNodeUnion->CPPmulticonstnode126 = new UnOrderedMultiConstNode<float, __int64>();
		break;
	case 127:
		multiConstNodeUnion->CPPmulticonstnode127 = new UnOrderedMultiConstNode<double, unsigned char>();
		break;
	case 128:
		multiConstNodeUnion->CPPmulticonstnode128 = new UnOrderedMultiConstNode<double, char>();
		break;
	case 129:
		multiConstNodeUnion->CPPmulticonstnode129 = new UnOrderedMultiConstNode<double, short>();
		break;
	case 130:
		multiConstNodeUnion->CPPmulticonstnode130 = new UnOrderedMultiConstNode<double, unsigned short>();
		break;
	case 131:
		multiConstNodeUnion->CPPmulticonstnode131 = new UnOrderedMultiConstNode<double, int>();
		break;
	case 132:
		multiConstNodeUnion->CPPmulticonstnode132 = new UnOrderedMultiConstNode<double, unsigned int>();
		break;
	case 133:
		multiConstNodeUnion->CPPmulticonstnode133 = new UnOrderedMultiConstNode<double, long long>();
		break;
	case 134:
		multiConstNodeUnion->CPPmulticonstnode134 = new UnOrderedMultiConstNode<double, unsigned long long>();
		break;
	case 135:
		multiConstNodeUnion->CPPmulticonstnode135 = new UnOrderedMultiConstNode<double, float>();
		break;
	case 136:
		multiConstNodeUnion->CPPmulticonstnode136 = new UnOrderedMultiConstNode<double, double>();
		break;
	case 137:
		multiConstNodeUnion->CPPmulticonstnode137 = new UnOrderedMultiConstNode<double, wchar_t>();
		break;
	case 138:
		multiConstNodeUnion->CPPmulticonstnode138 = new UnOrderedMultiConstNode<double, bool>();
		break;
	case 139:
		multiConstNodeUnion->CPPmulticonstnode139 = new UnOrderedMultiConstNode<double, std::wstring>();
		break;
	case 140:
		multiConstNodeUnion->CPPmulticonstnode140 = new UnOrderedMultiConstNode<double, __int64>();
		break;
	case 141:
		multiConstNodeUnion->CPPmulticonstnode141 = new UnOrderedMultiConstNode<wchar_t, unsigned char>();
		break;
	case 142:
		multiConstNodeUnion->CPPmulticonstnode142 = new UnOrderedMultiConstNode<wchar_t, char>();
		break;
	case 143:
		multiConstNodeUnion->CPPmulticonstnode143 = new UnOrderedMultiConstNode<wchar_t, short>();
		break;
	case 144:
		multiConstNodeUnion->CPPmulticonstnode144 = new UnOrderedMultiConstNode<wchar_t, unsigned short>();
		break;
	case 145:
		multiConstNodeUnion->CPPmulticonstnode145 = new UnOrderedMultiConstNode<wchar_t, int>();
		break;
	case 146:
		multiConstNodeUnion->CPPmulticonstnode146 = new UnOrderedMultiConstNode<wchar_t, unsigned int>();
		break;
	case 147:
		multiConstNodeUnion->CPPmulticonstnode147 = new UnOrderedMultiConstNode<wchar_t, long long>();
		break;
	case 148:
		multiConstNodeUnion->CPPmulticonstnode148 = new UnOrderedMultiConstNode<wchar_t, unsigned long long>();
		break;
	case 149:
		multiConstNodeUnion->CPPmulticonstnode149 = new UnOrderedMultiConstNode<wchar_t, float>();
		break;
	case 150:
		multiConstNodeUnion->CPPmulticonstnode150 = new UnOrderedMultiConstNode<wchar_t, double>();
		break;
	case 151:
		multiConstNodeUnion->CPPmulticonstnode151 = new UnOrderedMultiConstNode<wchar_t, wchar_t>();
		break;
	case 152:
		multiConstNodeUnion->CPPmulticonstnode152 = new UnOrderedMultiConstNode<wchar_t, bool>();
		break;
	case 153:
		multiConstNodeUnion->CPPmulticonstnode153 = new UnOrderedMultiConstNode<wchar_t, std::wstring>();
		break;
	case 154:
		multiConstNodeUnion->CPPmulticonstnode154 = new UnOrderedMultiConstNode<wchar_t, __int64>();
		break;
	case 155:
		multiConstNodeUnion->CPPmulticonstnode155 = new UnOrderedMultiConstNode<bool, unsigned char>();
		break;
	case 156:
		multiConstNodeUnion->CPPmulticonstnode156 = new UnOrderedMultiConstNode<bool, char>();
		break;
	case 157:
		multiConstNodeUnion->CPPmulticonstnode157 = new UnOrderedMultiConstNode<bool, short>();
		break;
	case 158:
		multiConstNodeUnion->CPPmulticonstnode158 = new UnOrderedMultiConstNode<bool, unsigned short>();
		break;
	case 159:
		multiConstNodeUnion->CPPmulticonstnode159 = new UnOrderedMultiConstNode<bool, int>();
		break;
	case 160:
		multiConstNodeUnion->CPPmulticonstnode160 = new UnOrderedMultiConstNode<bool, unsigned int>();
		break;
	case 161:
		multiConstNodeUnion->CPPmulticonstnode161 = new UnOrderedMultiConstNode<bool, long long>();
		break;
	case 162:
		multiConstNodeUnion->CPPmulticonstnode162 = new UnOrderedMultiConstNode<bool, unsigned long long>();
		break;
	case 163:
		multiConstNodeUnion->CPPmulticonstnode163 = new UnOrderedMultiConstNode<bool, float>();
		break;
	case 164:
		multiConstNodeUnion->CPPmulticonstnode164 = new UnOrderedMultiConstNode<bool, double>();
		break;
	case 165:
		multiConstNodeUnion->CPPmulticonstnode165 = new UnOrderedMultiConstNode<bool, wchar_t>();
		break;
	case 166:
		multiConstNodeUnion->CPPmulticonstnode166 = new UnOrderedMultiConstNode<bool, bool>();
		break;
	case 167:
		multiConstNodeUnion->CPPmulticonstnode167 = new UnOrderedMultiConstNode<bool, std::wstring>();
		break;
	case 168:
		multiConstNodeUnion->CPPmulticonstnode168 = new UnOrderedMultiConstNode<bool, __int64>();
		break;
	case 169:
		multiConstNodeUnion->CPPmulticonstnode169 = new UnOrderedMultiConstNode<std::wstring, unsigned char>();
		break;
	case 170:
		multiConstNodeUnion->CPPmulticonstnode170 = new UnOrderedMultiConstNode<std::wstring, char>();
		break;
	case 171:
		multiConstNodeUnion->CPPmulticonstnode171 = new UnOrderedMultiConstNode<std::wstring, short>();
		break;
	case 172:
		multiConstNodeUnion->CPPmulticonstnode172 = new UnOrderedMultiConstNode<std::wstring, unsigned short>();
		break;
	case 173:
		multiConstNodeUnion->CPPmulticonstnode173 = new UnOrderedMultiConstNode<std::wstring, int>();
		break;
	case 174:
		multiConstNodeUnion->CPPmulticonstnode174 = new UnOrderedMultiConstNode<std::wstring, unsigned int>();
		break;
	case 175:
		multiConstNodeUnion->CPPmulticonstnode175 = new UnOrderedMultiConstNode<std::wstring, long long>();
		break;
	case 176:
		multiConstNodeUnion->CPPmulticonstnode176 = new UnOrderedMultiConstNode<std::wstring, unsigned long long>();
		break;
	case 177:
		multiConstNodeUnion->CPPmulticonstnode177 = new UnOrderedMultiConstNode<std::wstring, float>();
		break;
	case 178:
		multiConstNodeUnion->CPPmulticonstnode178 = new UnOrderedMultiConstNode<std::wstring, double>();
		break;
	case 179:
		multiConstNodeUnion->CPPmulticonstnode179 = new UnOrderedMultiConstNode<std::wstring, wchar_t>();
		break;
	case 180:
		multiConstNodeUnion->CPPmulticonstnode180 = new UnOrderedMultiConstNode<std::wstring, bool>();
		break;
	case 181:
		multiConstNodeUnion->CPPmulticonstnode181 = new UnOrderedMultiConstNode<std::wstring, std::wstring>();
		break;
	case 182:
		multiConstNodeUnion->CPPmulticonstnode182 = new UnOrderedMultiConstNode<std::wstring, __int64>();
		break;
	case 183:
		multiConstNodeUnion->CPPmulticonstnode183 = new UnOrderedMultiConstNode<__int64, unsigned char>();
		break;
	case 184:
		multiConstNodeUnion->CPPmulticonstnode184 = new UnOrderedMultiConstNode<__int64, char>();
		break;
	case 185:
		multiConstNodeUnion->CPPmulticonstnode185 = new UnOrderedMultiConstNode<__int64, short>();
		break;
	case 186:
		multiConstNodeUnion->CPPmulticonstnode186 = new UnOrderedMultiConstNode<__int64, unsigned short>();
		break;
	case 187:
		multiConstNodeUnion->CPPmulticonstnode187 = new UnOrderedMultiConstNode<__int64, int>();
		break;
	case 188:
		multiConstNodeUnion->CPPmulticonstnode188 = new UnOrderedMultiConstNode<__int64, unsigned int>();
		break;
	case 189:
		multiConstNodeUnion->CPPmulticonstnode189 = new UnOrderedMultiConstNode<__int64, long long>();
		break;
	case 190:
		multiConstNodeUnion->CPPmulticonstnode190 = new UnOrderedMultiConstNode<__int64, unsigned long long>();
		break;
	case 191:
		multiConstNodeUnion->CPPmulticonstnode191 = new UnOrderedMultiConstNode<__int64, float>();
		break;
	case 192:
		multiConstNodeUnion->CPPmulticonstnode192 = new UnOrderedMultiConstNode<__int64, double>();
		break;
	case 193:
		multiConstNodeUnion->CPPmulticonstnode193 = new UnOrderedMultiConstNode<__int64, wchar_t>();
		break;
	case 194:
		multiConstNodeUnion->CPPmulticonstnode194 = new UnOrderedMultiConstNode<__int64, bool>();
		break;
	case 195:
		multiConstNodeUnion->CPPmulticonstnode195 = new UnOrderedMultiConstNode<__int64, std::wstring>();
		break;
	case 196:
		multiConstNodeUnion->CPPmulticonstnode196 = new UnOrderedMultiConstNode<__int64, __int64>();
		break;
	}

}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::~CShorpUnOrderedMultiConstNode()
{
	if (multiConstNodeUnion->ptrToDelete)
		delete multiConstNodeUnion->ptrToDelete;
	delete multiConstNodeUnion;
}


generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::Next()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		(*(multiConstNodeUnion->CPPmulticonstnode1))++;
		return;
	case 2:
		(*(multiConstNodeUnion->CPPmulticonstnode2))++;
		return;
	case 3:
		(*(multiConstNodeUnion->CPPmulticonstnode3))++;
		return;
	case 4:
		(*(multiConstNodeUnion->CPPmulticonstnode4))++;
		return;
	case 5:
		(*(multiConstNodeUnion->CPPmulticonstnode5))++;
		return;
	case 6:
		(*(multiConstNodeUnion->CPPmulticonstnode6))++;
		return;
	case 7:
		(*(multiConstNodeUnion->CPPmulticonstnode7))++;
		return;
	case 8:
		(*(multiConstNodeUnion->CPPmulticonstnode8))++;
		return;
	case 9:
		(*(multiConstNodeUnion->CPPmulticonstnode9))++;
		return;
	case 10:
		(*(multiConstNodeUnion->CPPmulticonstnode10))++;
		return;
	case 11:
		(*(multiConstNodeUnion->CPPmulticonstnode11))++;
		return;
	case 12:
		(*(multiConstNodeUnion->CPPmulticonstnode12))++;
		return;
	case 13:
		(*(multiConstNodeUnion->CPPmulticonstnode13))++;
		return;
	case 14:
		(*(multiConstNodeUnion->CPPmulticonstnode14))++;
		return;
	case 15:
		(*(multiConstNodeUnion->CPPmulticonstnode15))++;
		return;
	case 16:
		(*(multiConstNodeUnion->CPPmulticonstnode16))++;
		return;
	case 17:
		(*(multiConstNodeUnion->CPPmulticonstnode17))++;
		return;
	case 18:
		(*(multiConstNodeUnion->CPPmulticonstnode18))++;
		return;
	case 19:
		(*(multiConstNodeUnion->CPPmulticonstnode19))++;
		return;
	case 20:
		(*(multiConstNodeUnion->CPPmulticonstnode20))++;
		return;
	case 21:
		(*(multiConstNodeUnion->CPPmulticonstnode21))++;
		return;
	case 22:
		(*(multiConstNodeUnion->CPPmulticonstnode22))++;
		return;
	case 23:
		(*(multiConstNodeUnion->CPPmulticonstnode23))++;
		return;
	case 24:
		(*(multiConstNodeUnion->CPPmulticonstnode24))++;
		return;
	case 25:
		(*(multiConstNodeUnion->CPPmulticonstnode25))++;
		return;
	case 26:
		(*(multiConstNodeUnion->CPPmulticonstnode26))++;
		return;
	case 27:
		(*(multiConstNodeUnion->CPPmulticonstnode27))++;
		return;
	case 28:
		(*(multiConstNodeUnion->CPPmulticonstnode28))++;
		return;
	case 29:
		(*(multiConstNodeUnion->CPPmulticonstnode29))++;
		return;
	case 30:
		(*(multiConstNodeUnion->CPPmulticonstnode30))++;
		return;
	case 31:
		(*(multiConstNodeUnion->CPPmulticonstnode31))++;
		return;
	case 32:
		(*(multiConstNodeUnion->CPPmulticonstnode32))++;
		return;
	case 33:
		(*(multiConstNodeUnion->CPPmulticonstnode33))++;
		return;
	case 34:
		(*(multiConstNodeUnion->CPPmulticonstnode34))++;
		return;
	case 35:
		(*(multiConstNodeUnion->CPPmulticonstnode35))++;
		return;
	case 36:
		(*(multiConstNodeUnion->CPPmulticonstnode36))++;
		return;
	case 37:
		(*(multiConstNodeUnion->CPPmulticonstnode37))++;
		return;
	case 38:
		(*(multiConstNodeUnion->CPPmulticonstnode38))++;
		return;
	case 39:
		(*(multiConstNodeUnion->CPPmulticonstnode39))++;
		return;
	case 40:
		(*(multiConstNodeUnion->CPPmulticonstnode40))++;
		return;
	case 41:
		(*(multiConstNodeUnion->CPPmulticonstnode41))++;
		return;
	case 42:
		(*(multiConstNodeUnion->CPPmulticonstnode42))++;
		return;
	case 43:
		(*(multiConstNodeUnion->CPPmulticonstnode43))++;
		return;
	case 44:
		(*(multiConstNodeUnion->CPPmulticonstnode44))++;
		return;
	case 45:
		(*(multiConstNodeUnion->CPPmulticonstnode45))++;
		return;
	case 46:
		(*(multiConstNodeUnion->CPPmulticonstnode46))++;
		return;
	case 47:
		(*(multiConstNodeUnion->CPPmulticonstnode47))++;
		return;
	case 48:
		(*(multiConstNodeUnion->CPPmulticonstnode48))++;
		return;
	case 49:
		(*(multiConstNodeUnion->CPPmulticonstnode49))++;
		return;
	case 50:
		(*(multiConstNodeUnion->CPPmulticonstnode50))++;
		return;
	case 51:
		(*(multiConstNodeUnion->CPPmulticonstnode51))++;
		return;
	case 52:
		(*(multiConstNodeUnion->CPPmulticonstnode52))++;
		return;
	case 53:
		(*(multiConstNodeUnion->CPPmulticonstnode53))++;
		return;
	case 54:
		(*(multiConstNodeUnion->CPPmulticonstnode54))++;
		return;
	case 55:
		(*(multiConstNodeUnion->CPPmulticonstnode55))++;
		return;
	case 56:
		(*(multiConstNodeUnion->CPPmulticonstnode56))++;
		return;
	case 57:
		(*(multiConstNodeUnion->CPPmulticonstnode57))++;
		return;
	case 58:
		(*(multiConstNodeUnion->CPPmulticonstnode58))++;
		return;
	case 59:
		(*(multiConstNodeUnion->CPPmulticonstnode59))++;
		return;
	case 60:
		(*(multiConstNodeUnion->CPPmulticonstnode60))++;
		return;
	case 61:
		(*(multiConstNodeUnion->CPPmulticonstnode61))++;
		return;
	case 62:
		(*(multiConstNodeUnion->CPPmulticonstnode62))++;
		return;
	case 63:
		(*(multiConstNodeUnion->CPPmulticonstnode63))++;
		return;
	case 64:
		(*(multiConstNodeUnion->CPPmulticonstnode64))++;
		return;
	case 65:
		(*(multiConstNodeUnion->CPPmulticonstnode65))++;
		return;
	case 66:
		(*(multiConstNodeUnion->CPPmulticonstnode66))++;
		return;
	case 67:
		(*(multiConstNodeUnion->CPPmulticonstnode67))++;
		return;
	case 68:
		(*(multiConstNodeUnion->CPPmulticonstnode68))++;
		return;
	case 69:
		(*(multiConstNodeUnion->CPPmulticonstnode69))++;
		return;
	case 70:
		(*(multiConstNodeUnion->CPPmulticonstnode70))++;
		return;
	case 71:
		(*(multiConstNodeUnion->CPPmulticonstnode71))++;
		return;
	case 72:
		(*(multiConstNodeUnion->CPPmulticonstnode72))++;
		return;
	case 73:
		(*(multiConstNodeUnion->CPPmulticonstnode73))++;
		return;
	case 74:
		(*(multiConstNodeUnion->CPPmulticonstnode74))++;
		return;
	case 75:
		(*(multiConstNodeUnion->CPPmulticonstnode75))++;
		return;
	case 76:
		(*(multiConstNodeUnion->CPPmulticonstnode76))++;
		return;
	case 77:
		(*(multiConstNodeUnion->CPPmulticonstnode77))++;
		return;
	case 78:
		(*(multiConstNodeUnion->CPPmulticonstnode78))++;
		return;
	case 79:
		(*(multiConstNodeUnion->CPPmulticonstnode79))++;
		return;
	case 80:
		(*(multiConstNodeUnion->CPPmulticonstnode80))++;
		return;
	case 81:
		(*(multiConstNodeUnion->CPPmulticonstnode81))++;
		return;
	case 82:
		(*(multiConstNodeUnion->CPPmulticonstnode82))++;
		return;
	case 83:
		(*(multiConstNodeUnion->CPPmulticonstnode83))++;
		return;
	case 84:
		(*(multiConstNodeUnion->CPPmulticonstnode84))++;
		return;
	case 85:
		(*(multiConstNodeUnion->CPPmulticonstnode85))++;
		return;
	case 86:
		(*(multiConstNodeUnion->CPPmulticonstnode86))++;
		return;
	case 87:
		(*(multiConstNodeUnion->CPPmulticonstnode87))++;
		return;
	case 88:
		(*(multiConstNodeUnion->CPPmulticonstnode88))++;
		return;
	case 89:
		(*(multiConstNodeUnion->CPPmulticonstnode89))++;
		return;
	case 90:
		(*(multiConstNodeUnion->CPPmulticonstnode90))++;
		return;
	case 91:
		(*(multiConstNodeUnion->CPPmulticonstnode91))++;
		return;
	case 92:
		(*(multiConstNodeUnion->CPPmulticonstnode92))++;
		return;
	case 93:
		(*(multiConstNodeUnion->CPPmulticonstnode93))++;
		return;
	case 94:
		(*(multiConstNodeUnion->CPPmulticonstnode94))++;
		return;
	case 95:
		(*(multiConstNodeUnion->CPPmulticonstnode95))++;
		return;
	case 96:
		(*(multiConstNodeUnion->CPPmulticonstnode96))++;
		return;
	case 97:
		(*(multiConstNodeUnion->CPPmulticonstnode97))++;
		return;
	case 98:
		(*(multiConstNodeUnion->CPPmulticonstnode98))++;
		return;
	case 99:
		(*(multiConstNodeUnion->CPPmulticonstnode99))++;
		return;
	case 100:
		(*(multiConstNodeUnion->CPPmulticonstnode100))++;
		return;
	case 101:
		(*(multiConstNodeUnion->CPPmulticonstnode101))++;
		return;
	case 102:
		(*(multiConstNodeUnion->CPPmulticonstnode102))++;
		return;
	case 103:
		(*(multiConstNodeUnion->CPPmulticonstnode103))++;
		return;
	case 104:
		(*(multiConstNodeUnion->CPPmulticonstnode104))++;
		return;
	case 105:
		(*(multiConstNodeUnion->CPPmulticonstnode105))++;
		return;
	case 106:
		(*(multiConstNodeUnion->CPPmulticonstnode106))++;
		return;
	case 107:
		(*(multiConstNodeUnion->CPPmulticonstnode107))++;
		return;
	case 108:
		(*(multiConstNodeUnion->CPPmulticonstnode108))++;
		return;
	case 109:
		(*(multiConstNodeUnion->CPPmulticonstnode109))++;
		return;
	case 110:
		(*(multiConstNodeUnion->CPPmulticonstnode110))++;
		return;
	case 111:
		(*(multiConstNodeUnion->CPPmulticonstnode111))++;
		return;
	case 112:
		(*(multiConstNodeUnion->CPPmulticonstnode112))++;
		return;
	case 113:
		(*(multiConstNodeUnion->CPPmulticonstnode113))++;
		return;
	case 114:
		(*(multiConstNodeUnion->CPPmulticonstnode114))++;
		return;
	case 115:
		(*(multiConstNodeUnion->CPPmulticonstnode115))++;
		return;
	case 116:
		(*(multiConstNodeUnion->CPPmulticonstnode116))++;
		return;
	case 117:
		(*(multiConstNodeUnion->CPPmulticonstnode117))++;
		return;
	case 118:
		(*(multiConstNodeUnion->CPPmulticonstnode118))++;
		return;
	case 119:
		(*(multiConstNodeUnion->CPPmulticonstnode119))++;
		return;
	case 120:
		(*(multiConstNodeUnion->CPPmulticonstnode120))++;
		return;
	case 121:
		(*(multiConstNodeUnion->CPPmulticonstnode121))++;
		return;
	case 122:
		(*(multiConstNodeUnion->CPPmulticonstnode122))++;
		return;
	case 123:
		(*(multiConstNodeUnion->CPPmulticonstnode123))++;
		return;
	case 124:
		(*(multiConstNodeUnion->CPPmulticonstnode124))++;
		return;
	case 125:
		(*(multiConstNodeUnion->CPPmulticonstnode125))++;
		return;
	case 126:
		(*(multiConstNodeUnion->CPPmulticonstnode126))++;
		return;
	case 127:
		(*(multiConstNodeUnion->CPPmulticonstnode127))++;
		return;
	case 128:
		(*(multiConstNodeUnion->CPPmulticonstnode128))++;
		return;
	case 129:
		(*(multiConstNodeUnion->CPPmulticonstnode129))++;
		return;
	case 130:
		(*(multiConstNodeUnion->CPPmulticonstnode130))++;
		return;
	case 131:
		(*(multiConstNodeUnion->CPPmulticonstnode131))++;
		return;
	case 132:
		(*(multiConstNodeUnion->CPPmulticonstnode132))++;
		return;
	case 133:
		(*(multiConstNodeUnion->CPPmulticonstnode133))++;
		return;
	case 134:
		(*(multiConstNodeUnion->CPPmulticonstnode134))++;
		return;
	case 135:
		(*(multiConstNodeUnion->CPPmulticonstnode135))++;
		return;
	case 136:
		(*(multiConstNodeUnion->CPPmulticonstnode136))++;
		return;
	case 137:
		(*(multiConstNodeUnion->CPPmulticonstnode137))++;
		return;
	case 138:
		(*(multiConstNodeUnion->CPPmulticonstnode138))++;
		return;
	case 139:
		(*(multiConstNodeUnion->CPPmulticonstnode139))++;
		return;
	case 140:
		(*(multiConstNodeUnion->CPPmulticonstnode140))++;
		return;
	case 141:
		(*(multiConstNodeUnion->CPPmulticonstnode141))++;
		return;
	case 142:
		(*(multiConstNodeUnion->CPPmulticonstnode142))++;
		return;
	case 143:
		(*(multiConstNodeUnion->CPPmulticonstnode143))++;
		return;
	case 144:
		(*(multiConstNodeUnion->CPPmulticonstnode144))++;
		return;
	case 145:
		(*(multiConstNodeUnion->CPPmulticonstnode145))++;
		return;
	case 146:
		(*(multiConstNodeUnion->CPPmulticonstnode146))++;
		return;
	case 147:
		(*(multiConstNodeUnion->CPPmulticonstnode147))++;
		return;
	case 148:
		(*(multiConstNodeUnion->CPPmulticonstnode148))++;
		return;
	case 149:
		(*(multiConstNodeUnion->CPPmulticonstnode149))++;
		return;
	case 150:
		(*(multiConstNodeUnion->CPPmulticonstnode150))++;
		return;
	case 151:
		(*(multiConstNodeUnion->CPPmulticonstnode151))++;
		return;
	case 152:
		(*(multiConstNodeUnion->CPPmulticonstnode152))++;
		return;
	case 153:
		(*(multiConstNodeUnion->CPPmulticonstnode153))++;
		return;
	case 154:
		(*(multiConstNodeUnion->CPPmulticonstnode154))++;
		return;
	case 155:
		(*(multiConstNodeUnion->CPPmulticonstnode155))++;
		return;
	case 156:
		(*(multiConstNodeUnion->CPPmulticonstnode156))++;
		return;
	case 157:
		(*(multiConstNodeUnion->CPPmulticonstnode157))++;
		return;
	case 158:
		(*(multiConstNodeUnion->CPPmulticonstnode158))++;
		return;
	case 159:
		(*(multiConstNodeUnion->CPPmulticonstnode159))++;
		return;
	case 160:
		(*(multiConstNodeUnion->CPPmulticonstnode160))++;
		return;
	case 161:
		(*(multiConstNodeUnion->CPPmulticonstnode161))++;
		return;
	case 162:
		(*(multiConstNodeUnion->CPPmulticonstnode162))++;
		return;
	case 163:
		(*(multiConstNodeUnion->CPPmulticonstnode163))++;
		return;
	case 164:
		(*(multiConstNodeUnion->CPPmulticonstnode164))++;
		return;
	case 165:
		(*(multiConstNodeUnion->CPPmulticonstnode165))++;
		return;
	case 166:
		(*(multiConstNodeUnion->CPPmulticonstnode166))++;
		return;
	case 167:
		(*(multiConstNodeUnion->CPPmulticonstnode167))++;
		return;
	case 168:
		(*(multiConstNodeUnion->CPPmulticonstnode168))++;
		return;
	case 169:
		(*(multiConstNodeUnion->CPPmulticonstnode169))++;
		return;
	case 170:
		(*(multiConstNodeUnion->CPPmulticonstnode170))++;
		return;
	case 171:
		(*(multiConstNodeUnion->CPPmulticonstnode171))++;
		return;
	case 172:
		(*(multiConstNodeUnion->CPPmulticonstnode172))++;
		return;
	case 173:
		(*(multiConstNodeUnion->CPPmulticonstnode173))++;
		return;
	case 174:
		(*(multiConstNodeUnion->CPPmulticonstnode174))++;
		return;
	case 175:
		(*(multiConstNodeUnion->CPPmulticonstnode175))++;
		return;
	case 176:
		(*(multiConstNodeUnion->CPPmulticonstnode176))++;
		return;
	case 177:
		(*(multiConstNodeUnion->CPPmulticonstnode177))++;
		return;
	case 178:
		(*(multiConstNodeUnion->CPPmulticonstnode178))++;
		return;
	case 179:
		(*(multiConstNodeUnion->CPPmulticonstnode179))++;
		return;
	case 180:
		(*(multiConstNodeUnion->CPPmulticonstnode180))++;
		return;
	case 181:
		(*(multiConstNodeUnion->CPPmulticonstnode181))++;
		return;
	case 182:
		(*(multiConstNodeUnion->CPPmulticonstnode182))++;
		return;
	case 183:
		(*(multiConstNodeUnion->CPPmulticonstnode183))++;
		return;
	case 184:
		(*(multiConstNodeUnion->CPPmulticonstnode184))++;
		return;
	case 185:
		(*(multiConstNodeUnion->CPPmulticonstnode185))++;
		return;
	case 186:
		(*(multiConstNodeUnion->CPPmulticonstnode186))++;
		return;
	case 187:
		(*(multiConstNodeUnion->CPPmulticonstnode187))++;
		return;
	case 188:
		(*(multiConstNodeUnion->CPPmulticonstnode188))++;
		return;
	case 189:
		(*(multiConstNodeUnion->CPPmulticonstnode189))++;
		return;
	case 190:
		(*(multiConstNodeUnion->CPPmulticonstnode190))++;
		return;
	case 191:
		(*(multiConstNodeUnion->CPPmulticonstnode191))++;
		return;
	case 192:
		(*(multiConstNodeUnion->CPPmulticonstnode192))++;
		return;
	case 193:
		(*(multiConstNodeUnion->CPPmulticonstnode193))++;
		return;
	case 194:
		(*(multiConstNodeUnion->CPPmulticonstnode194))++;
		return;
	case 195:
		(*(multiConstNodeUnion->CPPmulticonstnode195))++;
		return;
	case 196:
		(*(multiConstNodeUnion->CPPmulticonstnode196))++;
		return;
	}
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::Previous()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
	case 1:
		(*(multiConstNodeUnion->CPPmulticonstnode1))--;
		return;
	case 2:
		(*(multiConstNodeUnion->CPPmulticonstnode2))--;
		return;
	case 3:
		(*(multiConstNodeUnion->CPPmulticonstnode3))--;
		return;
	case 4:
		(*(multiConstNodeUnion->CPPmulticonstnode4))--;
		return;
	case 5:
		(*(multiConstNodeUnion->CPPmulticonstnode5))--;
		return;
	case 6:
		(*(multiConstNodeUnion->CPPmulticonstnode6))--;
		return;
	case 7:
		(*(multiConstNodeUnion->CPPmulticonstnode7))--;
		return;
	case 8:
		(*(multiConstNodeUnion->CPPmulticonstnode8))--;
		return;
	case 9:
		(*(multiConstNodeUnion->CPPmulticonstnode9))--;
		return;
	case 10:
		(*(multiConstNodeUnion->CPPmulticonstnode10))--;
		return;
	case 11:
		(*(multiConstNodeUnion->CPPmulticonstnode11))--;
		return;
	case 12:
		(*(multiConstNodeUnion->CPPmulticonstnode12))--;
		return;
	case 13:
		(*(multiConstNodeUnion->CPPmulticonstnode13))--;
		return;
	case 14:
		(*(multiConstNodeUnion->CPPmulticonstnode14))--;
		return;
	case 15:
		(*(multiConstNodeUnion->CPPmulticonstnode15))--;
		return;
	case 16:
		(*(multiConstNodeUnion->CPPmulticonstnode16))--;
		return;
	case 17:
		(*(multiConstNodeUnion->CPPmulticonstnode17))--;
		return;
	case 18:
		(*(multiConstNodeUnion->CPPmulticonstnode18))--;
		return;
	case 19:
		(*(multiConstNodeUnion->CPPmulticonstnode19))--;
		return;
	case 20:
		(*(multiConstNodeUnion->CPPmulticonstnode20))--;
		return;
	case 21:
		(*(multiConstNodeUnion->CPPmulticonstnode21))--;
		return;
	case 22:
		(*(multiConstNodeUnion->CPPmulticonstnode22))--;
		return;
	case 23:
		(*(multiConstNodeUnion->CPPmulticonstnode23))--;
		return;
	case 24:
		(*(multiConstNodeUnion->CPPmulticonstnode24))--;
		return;
	case 25:
		(*(multiConstNodeUnion->CPPmulticonstnode25))--;
		return;
	case 26:
		(*(multiConstNodeUnion->CPPmulticonstnode26))--;
		return;
	case 27:
		(*(multiConstNodeUnion->CPPmulticonstnode27))--;
		return;
	case 28:
		(*(multiConstNodeUnion->CPPmulticonstnode28))--;
		return;
	case 29:
		(*(multiConstNodeUnion->CPPmulticonstnode29))--;
		return;
	case 30:
		(*(multiConstNodeUnion->CPPmulticonstnode30))--;
		return;
	case 31:
		(*(multiConstNodeUnion->CPPmulticonstnode31))--;
		return;
	case 32:
		(*(multiConstNodeUnion->CPPmulticonstnode32))--;
		return;
	case 33:
		(*(multiConstNodeUnion->CPPmulticonstnode33))--;
		return;
	case 34:
		(*(multiConstNodeUnion->CPPmulticonstnode34))--;
		return;
	case 35:
		(*(multiConstNodeUnion->CPPmulticonstnode35))--;
		return;
	case 36:
		(*(multiConstNodeUnion->CPPmulticonstnode36))--;
		return;
	case 37:
		(*(multiConstNodeUnion->CPPmulticonstnode37))--;
		return;
	case 38:
		(*(multiConstNodeUnion->CPPmulticonstnode38))--;
		return;
	case 39:
		(*(multiConstNodeUnion->CPPmulticonstnode39))--;
		return;
	case 40:
		(*(multiConstNodeUnion->CPPmulticonstnode40))--;
		return;
	case 41:
		(*(multiConstNodeUnion->CPPmulticonstnode41))--;
		return;
	case 42:
		(*(multiConstNodeUnion->CPPmulticonstnode42))--;
		return;
	case 43:
		(*(multiConstNodeUnion->CPPmulticonstnode43))--;
		return;
	case 44:
		(*(multiConstNodeUnion->CPPmulticonstnode44))--;
		return;
	case 45:
		(*(multiConstNodeUnion->CPPmulticonstnode45))--;
		return;
	case 46:
		(*(multiConstNodeUnion->CPPmulticonstnode46))--;
		return;
	case 47:
		(*(multiConstNodeUnion->CPPmulticonstnode47))--;
		return;
	case 48:
		(*(multiConstNodeUnion->CPPmulticonstnode48))--;
		return;
	case 49:
		(*(multiConstNodeUnion->CPPmulticonstnode49))--;
		return;
	case 50:
		(*(multiConstNodeUnion->CPPmulticonstnode50))--;
		return;
	case 51:
		(*(multiConstNodeUnion->CPPmulticonstnode51))--;
		return;
	case 52:
		(*(multiConstNodeUnion->CPPmulticonstnode52))--;
		return;
	case 53:
		(*(multiConstNodeUnion->CPPmulticonstnode53))--;
		return;
	case 54:
		(*(multiConstNodeUnion->CPPmulticonstnode54))--;
		return;
	case 55:
		(*(multiConstNodeUnion->CPPmulticonstnode55))--;
		return;
	case 56:
		(*(multiConstNodeUnion->CPPmulticonstnode56))--;
		return;
	case 57:
		(*(multiConstNodeUnion->CPPmulticonstnode57))--;
		return;
	case 58:
		(*(multiConstNodeUnion->CPPmulticonstnode58))--;
		return;
	case 59:
		(*(multiConstNodeUnion->CPPmulticonstnode59))--;
		return;
	case 60:
		(*(multiConstNodeUnion->CPPmulticonstnode60))--;
		return;
	case 61:
		(*(multiConstNodeUnion->CPPmulticonstnode61))--;
		return;
	case 62:
		(*(multiConstNodeUnion->CPPmulticonstnode62))--;
		return;
	case 63:
		(*(multiConstNodeUnion->CPPmulticonstnode63))--;
		return;
	case 64:
		(*(multiConstNodeUnion->CPPmulticonstnode64))--;
		return;
	case 65:
		(*(multiConstNodeUnion->CPPmulticonstnode65))--;
		return;
	case 66:
		(*(multiConstNodeUnion->CPPmulticonstnode66))--;
		return;
	case 67:
		(*(multiConstNodeUnion->CPPmulticonstnode67))--;
		return;
	case 68:
		(*(multiConstNodeUnion->CPPmulticonstnode68))--;
		return;
	case 69:
		(*(multiConstNodeUnion->CPPmulticonstnode69))--;
		return;
	case 70:
		(*(multiConstNodeUnion->CPPmulticonstnode70))--;
		return;
	case 71:
		(*(multiConstNodeUnion->CPPmulticonstnode71))--;
		return;
	case 72:
		(*(multiConstNodeUnion->CPPmulticonstnode72))--;
		return;
	case 73:
		(*(multiConstNodeUnion->CPPmulticonstnode73))--;
		return;
	case 74:
		(*(multiConstNodeUnion->CPPmulticonstnode74))--;
		return;
	case 75:
		(*(multiConstNodeUnion->CPPmulticonstnode75))--;
		return;
	case 76:
		(*(multiConstNodeUnion->CPPmulticonstnode76))--;
		return;
	case 77:
		(*(multiConstNodeUnion->CPPmulticonstnode77))--;
		return;
	case 78:
		(*(multiConstNodeUnion->CPPmulticonstnode78))--;
		return;
	case 79:
		(*(multiConstNodeUnion->CPPmulticonstnode79))--;
		return;
	case 80:
		(*(multiConstNodeUnion->CPPmulticonstnode80))--;
		return;
	case 81:
		(*(multiConstNodeUnion->CPPmulticonstnode81))--;
		return;
	case 82:
		(*(multiConstNodeUnion->CPPmulticonstnode82))--;
		return;
	case 83:
		(*(multiConstNodeUnion->CPPmulticonstnode83))--;
		return;
	case 84:
		(*(multiConstNodeUnion->CPPmulticonstnode84))--;
		return;
	case 85:
		(*(multiConstNodeUnion->CPPmulticonstnode85))--;
		return;
	case 86:
		(*(multiConstNodeUnion->CPPmulticonstnode86))--;
		return;
	case 87:
		(*(multiConstNodeUnion->CPPmulticonstnode87))--;
		return;
	case 88:
		(*(multiConstNodeUnion->CPPmulticonstnode88))--;
		return;
	case 89:
		(*(multiConstNodeUnion->CPPmulticonstnode89))--;
		return;
	case 90:
		(*(multiConstNodeUnion->CPPmulticonstnode90))--;
		return;
	case 91:
		(*(multiConstNodeUnion->CPPmulticonstnode91))--;
		return;
	case 92:
		(*(multiConstNodeUnion->CPPmulticonstnode92))--;
		return;
	case 93:
		(*(multiConstNodeUnion->CPPmulticonstnode93))--;
		return;
	case 94:
		(*(multiConstNodeUnion->CPPmulticonstnode94))--;
		return;
	case 95:
		(*(multiConstNodeUnion->CPPmulticonstnode95))--;
		return;
	case 96:
		(*(multiConstNodeUnion->CPPmulticonstnode96))--;
		return;
	case 97:
		(*(multiConstNodeUnion->CPPmulticonstnode97))--;
		return;
	case 98:
		(*(multiConstNodeUnion->CPPmulticonstnode98))--;
		return;
	case 99:
		(*(multiConstNodeUnion->CPPmulticonstnode99))--;
		return;
	case 100:
		(*(multiConstNodeUnion->CPPmulticonstnode100))--;
		return;
	case 101:
		(*(multiConstNodeUnion->CPPmulticonstnode101))--;
		return;
	case 102:
		(*(multiConstNodeUnion->CPPmulticonstnode102))--;
		return;
	case 103:
		(*(multiConstNodeUnion->CPPmulticonstnode103))--;
		return;
	case 104:
		(*(multiConstNodeUnion->CPPmulticonstnode104))--;
		return;
	case 105:
		(*(multiConstNodeUnion->CPPmulticonstnode105))--;
		return;
	case 106:
		(*(multiConstNodeUnion->CPPmulticonstnode106))--;
		return;
	case 107:
		(*(multiConstNodeUnion->CPPmulticonstnode107))--;
		return;
	case 108:
		(*(multiConstNodeUnion->CPPmulticonstnode108))--;
		return;
	case 109:
		(*(multiConstNodeUnion->CPPmulticonstnode109))--;
		return;
	case 110:
		(*(multiConstNodeUnion->CPPmulticonstnode110))--;
		return;
	case 111:
		(*(multiConstNodeUnion->CPPmulticonstnode111))--;
		return;
	case 112:
		(*(multiConstNodeUnion->CPPmulticonstnode112))--;
		return;
	case 113:
		(*(multiConstNodeUnion->CPPmulticonstnode113))--;
		return;
	case 114:
		(*(multiConstNodeUnion->CPPmulticonstnode114))--;
		return;
	case 115:
		(*(multiConstNodeUnion->CPPmulticonstnode115))--;
		return;
	case 116:
		(*(multiConstNodeUnion->CPPmulticonstnode116))--;
		return;
	case 117:
		(*(multiConstNodeUnion->CPPmulticonstnode117))--;
		return;
	case 118:
		(*(multiConstNodeUnion->CPPmulticonstnode118))--;
		return;
	case 119:
		(*(multiConstNodeUnion->CPPmulticonstnode119))--;
		return;
	case 120:
		(*(multiConstNodeUnion->CPPmulticonstnode120))--;
		return;
	case 121:
		(*(multiConstNodeUnion->CPPmulticonstnode121))--;
		return;
	case 122:
		(*(multiConstNodeUnion->CPPmulticonstnode122))--;
		return;
	case 123:
		(*(multiConstNodeUnion->CPPmulticonstnode123))--;
		return;
	case 124:
		(*(multiConstNodeUnion->CPPmulticonstnode124))--;
		return;
	case 125:
		(*(multiConstNodeUnion->CPPmulticonstnode125))--;
		return;
	case 126:
		(*(multiConstNodeUnion->CPPmulticonstnode126))--;
		return;
	case 127:
		(*(multiConstNodeUnion->CPPmulticonstnode127))--;
		return;
	case 128:
		(*(multiConstNodeUnion->CPPmulticonstnode128))--;
		return;
	case 129:
		(*(multiConstNodeUnion->CPPmulticonstnode129))--;
		return;
	case 130:
		(*(multiConstNodeUnion->CPPmulticonstnode130))--;
		return;
	case 131:
		(*(multiConstNodeUnion->CPPmulticonstnode131))--;
		return;
	case 132:
		(*(multiConstNodeUnion->CPPmulticonstnode132))--;
		return;
	case 133:
		(*(multiConstNodeUnion->CPPmulticonstnode133))--;
		return;
	case 134:
		(*(multiConstNodeUnion->CPPmulticonstnode134))--;
		return;
	case 135:
		(*(multiConstNodeUnion->CPPmulticonstnode135))--;
		return;
	case 136:
		(*(multiConstNodeUnion->CPPmulticonstnode136))--;
		return;
	case 137:
		(*(multiConstNodeUnion->CPPmulticonstnode137))--;
		return;
	case 138:
		(*(multiConstNodeUnion->CPPmulticonstnode138))--;
		return;
	case 139:
		(*(multiConstNodeUnion->CPPmulticonstnode139))--;
		return;
	case 140:
		(*(multiConstNodeUnion->CPPmulticonstnode140))--;
		return;
	case 141:
		(*(multiConstNodeUnion->CPPmulticonstnode141))--;
		return;
	case 142:
		(*(multiConstNodeUnion->CPPmulticonstnode142))--;
		return;
	case 143:
		(*(multiConstNodeUnion->CPPmulticonstnode143))--;
		return;
	case 144:
		(*(multiConstNodeUnion->CPPmulticonstnode144))--;
		return;
	case 145:
		(*(multiConstNodeUnion->CPPmulticonstnode145))--;
		return;
	case 146:
		(*(multiConstNodeUnion->CPPmulticonstnode146))--;
		return;
	case 147:
		(*(multiConstNodeUnion->CPPmulticonstnode147))--;
		return;
	case 148:
		(*(multiConstNodeUnion->CPPmulticonstnode148))--;
		return;
	case 149:
		(*(multiConstNodeUnion->CPPmulticonstnode149))--;
		return;
	case 150:
		(*(multiConstNodeUnion->CPPmulticonstnode150))--;
		return;
	case 151:
		(*(multiConstNodeUnion->CPPmulticonstnode151))--;
		return;
	case 152:
		(*(multiConstNodeUnion->CPPmulticonstnode152))--;
		return;
	case 153:
		(*(multiConstNodeUnion->CPPmulticonstnode153))--;
		return;
	case 154:
		(*(multiConstNodeUnion->CPPmulticonstnode154))--;
		return;
	case 155:
		(*(multiConstNodeUnion->CPPmulticonstnode155))--;
		return;
	case 156:
		(*(multiConstNodeUnion->CPPmulticonstnode156))--;
		return;
	case 157:
		(*(multiConstNodeUnion->CPPmulticonstnode157))--;
		return;
	case 158:
		(*(multiConstNodeUnion->CPPmulticonstnode158))--;
		return;
	case 159:
		(*(multiConstNodeUnion->CPPmulticonstnode159))--;
		return;
	case 160:
		(*(multiConstNodeUnion->CPPmulticonstnode160))--;
		return;
	case 161:
		(*(multiConstNodeUnion->CPPmulticonstnode161))--;
		return;
	case 162:
		(*(multiConstNodeUnion->CPPmulticonstnode162))--;
		return;
	case 163:
		(*(multiConstNodeUnion->CPPmulticonstnode163))--;
		return;
	case 164:
		(*(multiConstNodeUnion->CPPmulticonstnode164))--;
		return;
	case 165:
		(*(multiConstNodeUnion->CPPmulticonstnode165))--;
		return;
	case 166:
		(*(multiConstNodeUnion->CPPmulticonstnode166))--;
		return;
	case 167:
		(*(multiConstNodeUnion->CPPmulticonstnode167))--;
		return;
	case 168:
		(*(multiConstNodeUnion->CPPmulticonstnode168))--;
		return;
	case 169:
		(*(multiConstNodeUnion->CPPmulticonstnode169))--;
		return;
	case 170:
		(*(multiConstNodeUnion->CPPmulticonstnode170))--;
		return;
	case 171:
		(*(multiConstNodeUnion->CPPmulticonstnode171))--;
		return;
	case 172:
		(*(multiConstNodeUnion->CPPmulticonstnode172))--;
		return;
	case 173:
		(*(multiConstNodeUnion->CPPmulticonstnode173))--;
		return;
	case 174:
		(*(multiConstNodeUnion->CPPmulticonstnode174))--;
		return;
	case 175:
		(*(multiConstNodeUnion->CPPmulticonstnode175))--;
		return;
	case 176:
		(*(multiConstNodeUnion->CPPmulticonstnode176))--;
		return;
	case 177:
		(*(multiConstNodeUnion->CPPmulticonstnode177))--;
		return;
	case 178:
		(*(multiConstNodeUnion->CPPmulticonstnode178))--;
		return;
	case 179:
		(*(multiConstNodeUnion->CPPmulticonstnode179))--;
		return;
	case 180:
		(*(multiConstNodeUnion->CPPmulticonstnode180))--;
		return;
	case 181:
		(*(multiConstNodeUnion->CPPmulticonstnode181))--;
		return;
	case 182:
		(*(multiConstNodeUnion->CPPmulticonstnode182))--;
		return;
	case 183:
		(*(multiConstNodeUnion->CPPmulticonstnode183))--;
		return;
	case 184:
		(*(multiConstNodeUnion->CPPmulticonstnode184))--;
		return;
	case 185:
		(*(multiConstNodeUnion->CPPmulticonstnode185))--;
		return;
	case 186:
		(*(multiConstNodeUnion->CPPmulticonstnode186))--;
		return;
	case 187:
		(*(multiConstNodeUnion->CPPmulticonstnode187))--;
		return;
	case 188:
		(*(multiConstNodeUnion->CPPmulticonstnode188))--;
		return;
	case 189:
		(*(multiConstNodeUnion->CPPmulticonstnode189))--;
		return;
	case 190:
		(*(multiConstNodeUnion->CPPmulticonstnode190))--;
		return;
	case 191:
		(*(multiConstNodeUnion->CPPmulticonstnode191))--;
		return;
	case 192:
		(*(multiConstNodeUnion->CPPmulticonstnode192))--;
		return;
	case 193:
		(*(multiConstNodeUnion->CPPmulticonstnode193))--;
		return;
	case 194:
		(*(multiConstNodeUnion->CPPmulticonstnode194))--;
		return;
	case 195:
		(*(multiConstNodeUnion->CPPmulticonstnode195))--;
		return;
	case 196:
		(*(multiConstNodeUnion->CPPmulticonstnode196))--;
		return;
	}
}


generic<typename Key, typename Value>
Value UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::GetValue()
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
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode1->GetValue());
		return safe_cast<Value>(managedValue);
	case 2:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode2->GetValue());
		return safe_cast<Value>(managedValue);
	case 3:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode3->GetValue());
		return safe_cast<Value>(managedValue);
	case 4:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode4->GetValue());
		return safe_cast<Value>(managedValue);
	case 5:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode5->GetValue());
		return safe_cast<Value>(managedValue);
	case 6:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode6->GetValue());
		return safe_cast<Value>(managedValue);
	case 7:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode7->GetValue());
		return safe_cast<Value>(managedValue);
	case 8:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode8->GetValue());
		return safe_cast<Value>(managedValue);
	case 9:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode9->GetValue());
		return safe_cast<Value>(managedValue);
	case 10:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode10->GetValue());
		return safe_cast<Value>(managedValue);
	case 11:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode11->GetValue());
		return safe_cast<Value>(managedValue);
	case 12:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode12->GetValue());
		return safe_cast<Value>(managedValue);
	case 13:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode13->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 15:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode15->GetValue());
		return safe_cast<Value>(managedValue);
	case 16:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode16->GetValue());
		return safe_cast<Value>(managedValue);
	case 17:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode17->GetValue());
		return safe_cast<Value>(managedValue);
	case 18:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode18->GetValue());
		return safe_cast<Value>(managedValue);
	case 19:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode19->GetValue());
		return safe_cast<Value>(managedValue);
	case 20:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode20->GetValue());
		return safe_cast<Value>(managedValue);
	case 21:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode21->GetValue());
		return safe_cast<Value>(managedValue);
	case 22:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode22->GetValue());
		return safe_cast<Value>(managedValue);
	case 23:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode23->GetValue());
		return safe_cast<Value>(managedValue);
	case 24:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode24->GetValue());
		return safe_cast<Value>(managedValue);
	case 25:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode25->GetValue());
		return safe_cast<Value>(managedValue);
	case 26:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode26->GetValue());
		return safe_cast<Value>(managedValue);
	case 27:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode27->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 29:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode29->GetValue());
		return safe_cast<Value>(managedValue);
	case 30:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode30->GetValue());
		return safe_cast<Value>(managedValue);
	case 31:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode31->GetValue());
		return safe_cast<Value>(managedValue);
	case 32:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode32->GetValue());
		return safe_cast<Value>(managedValue);
	case 33:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode33->GetValue());
		return safe_cast<Value>(managedValue);
	case 34:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode34->GetValue());
		return safe_cast<Value>(managedValue);
	case 35:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode35->GetValue());
		return safe_cast<Value>(managedValue);
	case 36:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode36->GetValue());
		return safe_cast<Value>(managedValue);
	case 37:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode37->GetValue());
		return safe_cast<Value>(managedValue);
	case 38:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode38->GetValue());
		return safe_cast<Value>(managedValue);
	case 39:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode39->GetValue());
		return safe_cast<Value>(managedValue);
	case 40:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode40->GetValue());
		return safe_cast<Value>(managedValue);
	case 41:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode41->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 43:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode43->GetValue());
		return safe_cast<Value>(managedValue);
	case 44:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode44->GetValue());
		return safe_cast<Value>(managedValue);
	case 45:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode45->GetValue());
		return safe_cast<Value>(managedValue);
	case 46:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode46->GetValue());
		return safe_cast<Value>(managedValue);
	case 47:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode47->GetValue());
		return safe_cast<Value>(managedValue);
	case 48:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode48->GetValue());
		return safe_cast<Value>(managedValue);
	case 49:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode49->GetValue());
		return safe_cast<Value>(managedValue);
	case 50:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode50->GetValue());
		return safe_cast<Value>(managedValue);
	case 51:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode51->GetValue());
		return safe_cast<Value>(managedValue);
	case 52:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode52->GetValue());
		return safe_cast<Value>(managedValue);
	case 53:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode53->GetValue());
		return safe_cast<Value>(managedValue);
	case 54:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode54->GetValue());
		return safe_cast<Value>(managedValue);
	case 55:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode55->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 57:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode57->GetValue());
		return safe_cast<Value>(managedValue);
	case 58:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode58->GetValue());
		return safe_cast<Value>(managedValue);
	case 59:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode59->GetValue());
		return safe_cast<Value>(managedValue);
	case 60:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode60->GetValue());
		return safe_cast<Value>(managedValue);
	case 61:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode61->GetValue());
		return safe_cast<Value>(managedValue);
	case 62:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode62->GetValue());
		return safe_cast<Value>(managedValue);
	case 63:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode63->GetValue());
		return safe_cast<Value>(managedValue);
	case 64:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode64->GetValue());
		return safe_cast<Value>(managedValue);
	case 65:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode65->GetValue());
		return safe_cast<Value>(managedValue);
	case 66:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode66->GetValue());
		return safe_cast<Value>(managedValue);
	case 67:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode67->GetValue());
		return safe_cast<Value>(managedValue);
	case 68:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode68->GetValue());
		return safe_cast<Value>(managedValue);
	case 69:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode69->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 71:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode71->GetValue());
		return safe_cast<Value>(managedValue);
	case 72:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode72->GetValue());
		return safe_cast<Value>(managedValue);
	case 73:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode73->GetValue());
		return safe_cast<Value>(managedValue);
	case 74:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode74->GetValue());
		return safe_cast<Value>(managedValue);
	case 75:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode75->GetValue());
		return safe_cast<Value>(managedValue);
	case 76:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode76->GetValue());
		return safe_cast<Value>(managedValue);
	case 77:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode77->GetValue());
		return safe_cast<Value>(managedValue);
	case 78:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode78->GetValue());
		return safe_cast<Value>(managedValue);
	case 79:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode79->GetValue());
		return safe_cast<Value>(managedValue);
	case 80:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode80->GetValue());
		return safe_cast<Value>(managedValue);
	case 81:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode81->GetValue());
		return safe_cast<Value>(managedValue);
	case 82:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode82->GetValue());
		return safe_cast<Value>(managedValue);
	case 83:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode83->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 85:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode85->GetValue());
		return safe_cast<Value>(managedValue);
	case 86:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode86->GetValue());
		return safe_cast<Value>(managedValue);
	case 87:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode87->GetValue());
		return safe_cast<Value>(managedValue);
	case 88:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode88->GetValue());
		return safe_cast<Value>(managedValue);
	case 89:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode89->GetValue());
		return safe_cast<Value>(managedValue);
	case 90:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode90->GetValue());
		return safe_cast<Value>(managedValue);
	case 91:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode91->GetValue());
		return safe_cast<Value>(managedValue);
	case 92:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode92->GetValue());
		return safe_cast<Value>(managedValue);
	case 93:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode93->GetValue());
		return safe_cast<Value>(managedValue);
	case 94:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode94->GetValue());
		return safe_cast<Value>(managedValue);
	case 95:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode95->GetValue());
		return safe_cast<Value>(managedValue);
	case 96:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode96->GetValue());
		return safe_cast<Value>(managedValue);
	case 97:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode97->GetValue().c_str());
		return safe_cast<Value>(managedValue);

	case 99:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode99->GetValue());
		return safe_cast<Value>(managedValue);
	case 100:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode100->GetValue());
		return safe_cast<Value>(managedValue);
	case 101:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode101->GetValue());
		return safe_cast<Value>(managedValue);
	case 102:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode102->GetValue());
		return safe_cast<Value>(managedValue);
	case 103:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode103->GetValue());
		return safe_cast<Value>(managedValue);
	case 104:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode104->GetValue());
		return safe_cast<Value>(managedValue);
	case 105:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode105->GetValue());
		return safe_cast<Value>(managedValue);
	case 106:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode106->GetValue());
		return safe_cast<Value>(managedValue);
	case 107:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode107->GetValue());
		return safe_cast<Value>(managedValue);
	case 108:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode108->GetValue());
		return safe_cast<Value>(managedValue);
	case 109:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode109->GetValue());
		return safe_cast<Value>(managedValue);
	case 110:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode110->GetValue());
		return safe_cast<Value>(managedValue);
	case 111:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode111->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 113:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode113->GetValue());
		return safe_cast<Value>(managedValue);
	case 114:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode114->GetValue());
		return safe_cast<Value>(managedValue);
	case 115:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode115->GetValue());
		return safe_cast<Value>(managedValue);
	case 116:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode116->GetValue());
		return safe_cast<Value>(managedValue);
	case 117:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode117->GetValue());
		return safe_cast<Value>(managedValue);
	case 118:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode118->GetValue());
		return safe_cast<Value>(managedValue);
	case 119:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode119->GetValue());
		return safe_cast<Value>(managedValue);
	case 120:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode120->GetValue());
		return safe_cast<Value>(managedValue);
	case 121:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode121->GetValue());
		return safe_cast<Value>(managedValue);
	case 122:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode122->GetValue());
		return safe_cast<Value>(managedValue);
	case 123:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode123->GetValue());
		return safe_cast<Value>(managedValue);
	case 124:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode124->GetValue());
		return safe_cast<Value>(managedValue);
	case 125:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode125->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 127:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode127->GetValue());
		return safe_cast<Value>(managedValue);
	case 128:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode128->GetValue());
		return safe_cast<Value>(managedValue);
	case 129:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode129->GetValue());
		return safe_cast<Value>(managedValue);
	case 130:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode130->GetValue());
		return safe_cast<Value>(managedValue);
	case 131:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode131->GetValue());
		return safe_cast<Value>(managedValue);
	case 132:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode132->GetValue());
		return safe_cast<Value>(managedValue);
	case 133:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode133->GetValue());
		return safe_cast<Value>(managedValue);
	case 134:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode134->GetValue());
		return safe_cast<Value>(managedValue);
	case 135:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode135->GetValue());
		return safe_cast<Value>(managedValue);
	case 136:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode136->GetValue());
		return safe_cast<Value>(managedValue);
	case 137:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode137->GetValue());
		return safe_cast<Value>(managedValue);
	case 138:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode138->GetValue());
		return safe_cast<Value>(managedValue);
	case 139:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode139->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 141:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode141->GetValue());
		return safe_cast<Value>(managedValue);
	case 142:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode142->GetValue());
		return safe_cast<Value>(managedValue);
	case 143:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode143->GetValue());
		return safe_cast<Value>(managedValue);
	case 144:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode144->GetValue());
		return safe_cast<Value>(managedValue);
	case 145:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode145->GetValue());
		return safe_cast<Value>(managedValue);
	case 146:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode146->GetValue());
		return safe_cast<Value>(managedValue);
	case 147:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode147->GetValue());
		return safe_cast<Value>(managedValue);
	case 148:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode148->GetValue());
		return safe_cast<Value>(managedValue);
	case 149:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode149->GetValue());
		return safe_cast<Value>(managedValue);
	case 150:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode150->GetValue());
		return safe_cast<Value>(managedValue);
	case 151:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode151->GetValue());
		return safe_cast<Value>(managedValue);
	case 152:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode152->GetValue());
		return safe_cast<Value>(managedValue);
	case 153:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode153->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 155:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode155->GetValue());
		return safe_cast<Value>(managedValue);
	case 156:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode156->GetValue());
		return safe_cast<Value>(managedValue);
	case 157:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode157->GetValue());
		return safe_cast<Value>(managedValue);
	case 158:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode158->GetValue());
		return safe_cast<Value>(managedValue);
	case 159:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode159->GetValue());
		return safe_cast<Value>(managedValue);
	case 160:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode160->GetValue());
		return safe_cast<Value>(managedValue);
	case 161:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode161->GetValue());
		return safe_cast<Value>(managedValue);
	case 162:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode162->GetValue());
		return safe_cast<Value>(managedValue);
	case 163:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode163->GetValue());
		return safe_cast<Value>(managedValue);
	case 164:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode164->GetValue());
		return safe_cast<Value>(managedValue);
	case 165:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode165->GetValue());
		return safe_cast<Value>(managedValue);
	case 166:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode166->GetValue());
		return safe_cast<Value>(managedValue);
	case 167:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode167->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 169:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode169->GetValue());
		return safe_cast<Value>(managedValue);
	case 170:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode170->GetValue());
		return safe_cast<Value>(managedValue);
	case 171:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode171->GetValue());
		return safe_cast<Value>(managedValue);
	case 172:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode172->GetValue());
		return safe_cast<Value>(managedValue);
	case 173:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode173->GetValue());
		return safe_cast<Value>(managedValue);
	case 174:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode174->GetValue());
		return safe_cast<Value>(managedValue);
	case 175:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode175->GetValue());
		return safe_cast<Value>(managedValue);
	case 176:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode176->GetValue());
		return safe_cast<Value>(managedValue);
	case 177:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode177->GetValue());
		return safe_cast<Value>(managedValue);
	case 178:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode178->GetValue());
		return safe_cast<Value>(managedValue);
	case 179:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode179->GetValue());
		return safe_cast<Value>(managedValue);
	case 180:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode180->GetValue());
		return safe_cast<Value>(managedValue);
	case 181:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode181->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 183:
		managedValue = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode183->GetValue());
		return safe_cast<Value>(managedValue);
	case 184:
		managedValue = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode184->GetValue());
		return safe_cast<Value>(managedValue);
	case 185:
		managedValue = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode185->GetValue());
		return safe_cast<Value>(managedValue);
	case 186:
		managedValue = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode186->GetValue());
		return safe_cast<Value>(managedValue);
	case 187:
		managedValue = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode187->GetValue());
		return safe_cast<Value>(managedValue);
	case 188:
		managedValue = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode188->GetValue());
		return safe_cast<Value>(managedValue);
	case 189:
		managedValue = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode189->GetValue());
		return safe_cast<Value>(managedValue);
	case 190:
		managedValue = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode190->GetValue());
		return safe_cast<Value>(managedValue);
	case 191:
		managedValue = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode191->GetValue());
		return safe_cast<Value>(managedValue);
	case 192:
		managedValue = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode192->GetValue());
		return safe_cast<Value>(managedValue);
	case 193:
		managedValue = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode193->GetValue());
		return safe_cast<Value>(managedValue);
	case 194:
		managedValue = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode194->GetValue());
		return safe_cast<Value>(managedValue);
	case 195:
		managedValue = gcnew String(multiConstNodeUnion->CPPmulticonstnode195->GetValue().c_str());
		return safe_cast<Value>(managedValue);
	case 14:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode14->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 28:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode28->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 42:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode42->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 56:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode56->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 70:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode70->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 84:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode84->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 98:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode98->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 112:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode112->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 126:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode126->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 140:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode140->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 154:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode154->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 168:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode168->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 182:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode182->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->TryGetValue(multiConstNodeUnion->CPPmulticonstnode196->GetValue(), objtarget))
		{
			return objtarget;
			UnOrderedMultiMapWapper::CSharpUnOrderedMultiMap<Key, Value>::ValueClassDictionary()->Count;
		}
		else break;
	}
	return Value();
}

generic<typename Key, typename Value>
Key UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::GetKey()
{
	if (Object::ReferenceEquals(this, nullptr)) return Key();
	if (isInitialized == 0) return Key();
	System::Object^ managedKey;
	Key objtarget;
	switch (nKeyValueType)
	{
	case 0: default:
		return Key();
	case 1:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode1->GetKey());
		return safe_cast<Key>(managedKey);
	case 2:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode2->GetKey());
		return safe_cast<Key>(managedKey);
	case 3:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode3->GetKey());
		return safe_cast<Key>(managedKey);
	case 4:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode4->GetKey());
		return safe_cast<Key>(managedKey);
	case 5:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode5->GetKey());
		return safe_cast<Key>(managedKey);
	case 6:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode6->GetKey());
		return safe_cast<Key>(managedKey);
	case 7:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode7->GetKey());
		return safe_cast<Key>(managedKey);
	case 8:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode8->GetKey());
		return safe_cast<Key>(managedKey);
	case 9:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode9->GetKey());
		return safe_cast<Key>(managedKey);
	case 10:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode10->GetKey());
		return safe_cast<Key>(managedKey);
	case 11:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode11->GetKey());
		return safe_cast<Key>(managedKey);
	case 12:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode12->GetKey());
		return safe_cast<Key>(managedKey);
	case 13:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode13->GetKey());
		return safe_cast<Key>(managedKey);
	case 14:
		managedKey = gcnew System::Byte(multiConstNodeUnion->CPPmulticonstnode14->GetKey());
		return safe_cast<Key>(managedKey);
	case 15:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode15->GetKey());
		return safe_cast<Key>(managedKey);
	case 16:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode16->GetKey());
		return safe_cast<Key>(managedKey);
	case 17:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode17->GetKey());
		return safe_cast<Key>(managedKey);
	case 18:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode18->GetKey());
		return safe_cast<Key>(managedKey);
	case 19:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode19->GetKey());
		return safe_cast<Key>(managedKey);
	case 20:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode20->GetKey());
		return safe_cast<Key>(managedKey);
	case 21:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode21->GetKey());
		return safe_cast<Key>(managedKey);
	case 22:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode22->GetKey());
		return safe_cast<Key>(managedKey);
	case 23:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode23->GetKey());
		return safe_cast<Key>(managedKey);
	case 24:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode24->GetKey());
		return safe_cast<Key>(managedKey);
	case 25:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode25->GetKey());
		return safe_cast<Key>(managedKey);
	case 26:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode26->GetKey());
		return safe_cast<Key>(managedKey);
	case 27:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode27->GetKey());
		return safe_cast<Key>(managedKey);
	case 28:
		managedKey = gcnew System::SByte(multiConstNodeUnion->CPPmulticonstnode28->GetKey());
		return safe_cast<Key>(managedKey);
	case 29:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode29->GetKey());
		return safe_cast<Key>(managedKey);
	case 30:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode30->GetKey());
		return safe_cast<Key>(managedKey);
	case 31:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode31->GetKey());
		return safe_cast<Key>(managedKey);
	case 32:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode32->GetKey());
		return safe_cast<Key>(managedKey);
	case 33:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode33->GetKey());
		return safe_cast<Key>(managedKey);
	case 34:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode34->GetKey());
		return safe_cast<Key>(managedKey);
	case 35:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode35->GetKey());
		return safe_cast<Key>(managedKey);
	case 36:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode36->GetKey());
		return safe_cast<Key>(managedKey);
	case 37:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode37->GetKey());
		return safe_cast<Key>(managedKey);
	case 38:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode38->GetKey());
		return safe_cast<Key>(managedKey);
	case 39:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode39->GetKey());
		return safe_cast<Key>(managedKey);
	case 40:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode40->GetKey());
		return safe_cast<Key>(managedKey);
	case 41:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode41->GetKey());
		return safe_cast<Key>(managedKey);
	case 42:
		managedKey = gcnew System::Int16(multiConstNodeUnion->CPPmulticonstnode42->GetKey());
		return safe_cast<Key>(managedKey);
	case 43:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode43->GetKey());
		return safe_cast<Key>(managedKey);
	case 44:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode44->GetKey());
		return safe_cast<Key>(managedKey);
	case 45:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode45->GetKey());
		return safe_cast<Key>(managedKey);
	case 46:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode46->GetKey());
		return safe_cast<Key>(managedKey);
	case 47:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode47->GetKey());
		return safe_cast<Key>(managedKey);
	case 48:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode48->GetKey());
		return safe_cast<Key>(managedKey);
	case 49:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode49->GetKey());
		return safe_cast<Key>(managedKey);
	case 50:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode50->GetKey());
		return safe_cast<Key>(managedKey);
	case 51:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode51->GetKey());
		return safe_cast<Key>(managedKey);
	case 52:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode52->GetKey());
		return safe_cast<Key>(managedKey);
	case 53:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode53->GetKey());
		return safe_cast<Key>(managedKey);
	case 54:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode54->GetKey());
		return safe_cast<Key>(managedKey);
	case 55:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode55->GetKey());
		return safe_cast<Key>(managedKey);
	case 56:
		managedKey = gcnew System::UInt16(multiConstNodeUnion->CPPmulticonstnode56->GetKey());
		return safe_cast<Key>(managedKey);
	case 57:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode57->GetKey());
		return safe_cast<Key>(managedKey);
	case 58:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode58->GetKey());
		return safe_cast<Key>(managedKey);
	case 59:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode59->GetKey());
		return safe_cast<Key>(managedKey);
	case 60:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode60->GetKey());
		return safe_cast<Key>(managedKey);
	case 61:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode61->GetKey());
		return safe_cast<Key>(managedKey);
	case 62:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode62->GetKey());
		return safe_cast<Key>(managedKey);
	case 63:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode63->GetKey());
		return safe_cast<Key>(managedKey);
	case 64:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode64->GetKey());
		return safe_cast<Key>(managedKey);
	case 65:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode65->GetKey());
		return safe_cast<Key>(managedKey);
	case 66:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode66->GetKey());
		return safe_cast<Key>(managedKey);
	case 67:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode67->GetKey());
		return safe_cast<Key>(managedKey);
	case 68:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode68->GetKey());
		return safe_cast<Key>(managedKey);
	case 69:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode69->GetKey());
		return safe_cast<Key>(managedKey);
	case 70:
		managedKey = gcnew System::Int32(multiConstNodeUnion->CPPmulticonstnode70->GetKey());
		return safe_cast<Key>(managedKey);
	case 71:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode71->GetKey());
		return safe_cast<Key>(managedKey);
	case 72:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode72->GetKey());
		return safe_cast<Key>(managedKey);
	case 73:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode73->GetKey());
		return safe_cast<Key>(managedKey);
	case 74:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode74->GetKey());
		return safe_cast<Key>(managedKey);
	case 75:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode75->GetKey());
		return safe_cast<Key>(managedKey);
	case 76:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode76->GetKey());
		return safe_cast<Key>(managedKey);
	case 77:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode77->GetKey());
		return safe_cast<Key>(managedKey);
	case 78:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode78->GetKey());
		return safe_cast<Key>(managedKey);
	case 79:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode79->GetKey());
		return safe_cast<Key>(managedKey);
	case 80:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode80->GetKey());
		return safe_cast<Key>(managedKey);
	case 81:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode81->GetKey());
		return safe_cast<Key>(managedKey);
	case 82:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode82->GetKey());
		return safe_cast<Key>(managedKey);
	case 83:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode83->GetKey());
		return safe_cast<Key>(managedKey);
	case 84:
		managedKey = gcnew System::UInt32(multiConstNodeUnion->CPPmulticonstnode84->GetKey());
		return safe_cast<Key>(managedKey);
	case 85:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode85->GetKey());
		return safe_cast<Key>(managedKey);
	case 86:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode86->GetKey());
		return safe_cast<Key>(managedKey);
	case 87:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode87->GetKey());
		return safe_cast<Key>(managedKey);
	case 88:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode88->GetKey());
		return safe_cast<Key>(managedKey);
	case 89:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode89->GetKey());
		return safe_cast<Key>(managedKey);
	case 90:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode90->GetKey());
		return safe_cast<Key>(managedKey);
	case 91:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode91->GetKey());
		return safe_cast<Key>(managedKey);
	case 92:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode92->GetKey());
		return safe_cast<Key>(managedKey);
	case 93:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode93->GetKey());
		return safe_cast<Key>(managedKey);
	case 94:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode94->GetKey());
		return safe_cast<Key>(managedKey);
	case 95:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode95->GetKey());
		return safe_cast<Key>(managedKey);
	case 96:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode96->GetKey());
		return safe_cast<Key>(managedKey);
	case 97:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode97->GetKey());
		return safe_cast<Key>(managedKey);
	case 98:
		managedKey = gcnew System::Int64(multiConstNodeUnion->CPPmulticonstnode98->GetKey());
		return safe_cast<Key>(managedKey);
	case 99:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode99->GetKey());
		return safe_cast<Key>(managedKey);
	case 100:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode100->GetKey());
		return safe_cast<Key>(managedKey);
	case 101:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode101->GetKey());
		return safe_cast<Key>(managedKey);
	case 102:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode102->GetKey());
		return safe_cast<Key>(managedKey);
	case 103:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode103->GetKey());
		return safe_cast<Key>(managedKey);
	case 104:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode104->GetKey());
		return safe_cast<Key>(managedKey);
	case 105:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode105->GetKey());
		return safe_cast<Key>(managedKey);
	case 106:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode106->GetKey());
		return safe_cast<Key>(managedKey);
	case 107:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode107->GetKey());
		return safe_cast<Key>(managedKey);
	case 108:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode108->GetKey());
		return safe_cast<Key>(managedKey);
	case 109:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode109->GetKey());
		return safe_cast<Key>(managedKey);
	case 110:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode110->GetKey());
		return safe_cast<Key>(managedKey);
	case 111:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode111->GetKey());
		return safe_cast<Key>(managedKey);
	case 112:
		managedKey = gcnew System::UInt64(multiConstNodeUnion->CPPmulticonstnode112->GetKey());
		return safe_cast<Key>(managedKey);
	case 113:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode113->GetKey());
		return safe_cast<Key>(managedKey);
	case 114:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode114->GetKey());
		return safe_cast<Key>(managedKey);
	case 115:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode115->GetKey());
		return safe_cast<Key>(managedKey);
	case 116:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode116->GetKey());
		return safe_cast<Key>(managedKey);
	case 117:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode117->GetKey());
		return safe_cast<Key>(managedKey);
	case 118:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode118->GetKey());
		return safe_cast<Key>(managedKey);
	case 119:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode119->GetKey());
		return safe_cast<Key>(managedKey);
	case 120:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode120->GetKey());
		return safe_cast<Key>(managedKey);
	case 121:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode121->GetKey());
		return safe_cast<Key>(managedKey);
	case 122:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode122->GetKey());
		return safe_cast<Key>(managedKey);
	case 123:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode123->GetKey());
		return safe_cast<Key>(managedKey);
	case 124:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode124->GetKey());
		return safe_cast<Key>(managedKey);
	case 125:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode125->GetKey());
		return safe_cast<Key>(managedKey);
	case 126:
		managedKey = gcnew System::Single(multiConstNodeUnion->CPPmulticonstnode126->GetKey());
		return safe_cast<Key>(managedKey);
	case 127:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode127->GetKey());
		return safe_cast<Key>(managedKey);
	case 128:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode128->GetKey());
		return safe_cast<Key>(managedKey);
	case 129:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode129->GetKey());
		return safe_cast<Key>(managedKey);
	case 130:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode130->GetKey());
		return safe_cast<Key>(managedKey);
	case 131:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode131->GetKey());
		return safe_cast<Key>(managedKey);
	case 132:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode132->GetKey());
		return safe_cast<Key>(managedKey);
	case 133:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode133->GetKey());
		return safe_cast<Key>(managedKey);
	case 134:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode134->GetKey());
		return safe_cast<Key>(managedKey);
	case 135:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode135->GetKey());
		return safe_cast<Key>(managedKey);
	case 136:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode136->GetKey());
		return safe_cast<Key>(managedKey);
	case 137:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode137->GetKey());
		return safe_cast<Key>(managedKey);
	case 138:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode138->GetKey());
		return safe_cast<Key>(managedKey);
	case 139:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode139->GetKey());
		return safe_cast<Key>(managedKey);
	case 140:
		managedKey = gcnew System::Double(multiConstNodeUnion->CPPmulticonstnode140->GetKey());
		return safe_cast<Key>(managedKey);
	case 141:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode141->GetKey());
		return safe_cast<Key>(managedKey);
	case 142:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode142->GetKey());
		return safe_cast<Key>(managedKey);
	case 143:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode143->GetKey());
		return safe_cast<Key>(managedKey);
	case 144:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode144->GetKey());
		return safe_cast<Key>(managedKey);
	case 145:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode145->GetKey());
		return safe_cast<Key>(managedKey);
	case 146:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode146->GetKey());
		return safe_cast<Key>(managedKey);
	case 147:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode147->GetKey());
		return safe_cast<Key>(managedKey);
	case 148:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode148->GetKey());
		return safe_cast<Key>(managedKey);
	case 149:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode149->GetKey());
		return safe_cast<Key>(managedKey);
	case 150:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode150->GetKey());
		return safe_cast<Key>(managedKey);
	case 151:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode151->GetKey());
		return safe_cast<Key>(managedKey);
	case 152:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode152->GetKey());
		return safe_cast<Key>(managedKey);
	case 153:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode153->GetKey());
		return safe_cast<Key>(managedKey);
	case 154:
		managedKey = gcnew System::Char(multiConstNodeUnion->CPPmulticonstnode154->GetKey());
		return safe_cast<Key>(managedKey);
	case 155:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode155->GetKey());
		return safe_cast<Key>(managedKey);
	case 156:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode156->GetKey());
		return safe_cast<Key>(managedKey);
	case 157:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode157->GetKey());
		return safe_cast<Key>(managedKey);
	case 158:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode158->GetKey());
		return safe_cast<Key>(managedKey);
	case 159:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode159->GetKey());
		return safe_cast<Key>(managedKey);
	case 160:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode160->GetKey());
		return safe_cast<Key>(managedKey);
	case 161:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode161->GetKey());
		return safe_cast<Key>(managedKey);
	case 162:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode162->GetKey());
		return safe_cast<Key>(managedKey);
	case 163:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode163->GetKey());
		return safe_cast<Key>(managedKey);
	case 164:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode164->GetKey());
		return safe_cast<Key>(managedKey);
	case 165:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode165->GetKey());
		return safe_cast<Key>(managedKey);
	case 166:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode166->GetKey());
		return safe_cast<Key>(managedKey);
	case 167:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode167->GetKey());
		return safe_cast<Key>(managedKey);
	case 168:
		managedKey = gcnew System::Boolean(multiConstNodeUnion->CPPmulticonstnode168->GetKey());
		return safe_cast<Key>(managedKey);
	case 169:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode169->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 170:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode170->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 171:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode171->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 172:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode172->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 173:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode173->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 174:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode174->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 175:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode175->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 176:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode176->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 177:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode177->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 178:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode178->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 179:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode179->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 180:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode180->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 181:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode181->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 182:
		managedKey = gcnew String(multiConstNodeUnion->CPPmulticonstnode182->GetKey().c_str());
		return safe_cast<Key>(managedKey);
	case 183:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode183->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 184:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode184->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 185:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode185->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 186:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode186->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 187:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode187->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 188:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode188->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 189:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode189->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 190:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode190->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 191:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode191->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 192:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode192->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 193:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode193->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 194:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode194->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 195:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode195->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gIntKeyClassDictionary != nullptr && gIntKeyClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode196->GetKey(), objtarget))
		{
			return objtarget;
		}
		else break;
	}
	return Key();
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::DeepCopy()
{
	CShorpUnOrderedMultiConstNode<Key, Value>^ newCopy = gcnew CShorpUnOrderedMultiConstNode<Key, Value>();
	newCopy->nKeyValueType = this->nKeyValueType;
	newCopy->isInitialized = this->isInitialized;
	newCopy %= this;
	return newCopy;
}

generic<typename Key, typename Value>
bool UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::operator==(const CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj, const CShorpUnOrderedMultiConstNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(thisObj), const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(other))) return true;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return false;
	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
	case 1:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode1) == *(other->multiConstNodeUnion->CPPmulticonstnode1));
	case 2:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode2) == *(other->multiConstNodeUnion->CPPmulticonstnode2));
	case 3:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode3) == *(other->multiConstNodeUnion->CPPmulticonstnode3));
	case 4:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode4) == *(other->multiConstNodeUnion->CPPmulticonstnode4));
	case 5:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode5) == *(other->multiConstNodeUnion->CPPmulticonstnode5));
	case 6:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode6) == *(other->multiConstNodeUnion->CPPmulticonstnode6));
	case 7:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode7) == *(other->multiConstNodeUnion->CPPmulticonstnode7));
	case 8:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode8) == *(other->multiConstNodeUnion->CPPmulticonstnode8));
	case 9:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode9) == *(other->multiConstNodeUnion->CPPmulticonstnode9));
	case 10:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode10) == *(other->multiConstNodeUnion->CPPmulticonstnode10));
	case 11:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode11) == *(other->multiConstNodeUnion->CPPmulticonstnode11));
	case 12:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode12) == *(other->multiConstNodeUnion->CPPmulticonstnode12));
	case 13:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode13) == *(other->multiConstNodeUnion->CPPmulticonstnode13));
	case 14:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode14) == *(other->multiConstNodeUnion->CPPmulticonstnode14));
	case 15:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode15) == *(other->multiConstNodeUnion->CPPmulticonstnode15));
	case 16:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode16) == *(other->multiConstNodeUnion->CPPmulticonstnode16));
	case 17:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode17) == *(other->multiConstNodeUnion->CPPmulticonstnode17));
	case 18:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode18) == *(other->multiConstNodeUnion->CPPmulticonstnode18));
	case 19:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode19) == *(other->multiConstNodeUnion->CPPmulticonstnode19));
	case 20:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode20) == *(other->multiConstNodeUnion->CPPmulticonstnode20));
	case 21:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode21) == *(other->multiConstNodeUnion->CPPmulticonstnode21));
	case 22:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode22) == *(other->multiConstNodeUnion->CPPmulticonstnode22));
	case 23:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode23) == *(other->multiConstNodeUnion->CPPmulticonstnode23));
	case 24:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode24) == *(other->multiConstNodeUnion->CPPmulticonstnode24));
	case 25:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode25) == *(other->multiConstNodeUnion->CPPmulticonstnode25));
	case 26:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode26) == *(other->multiConstNodeUnion->CPPmulticonstnode26));
	case 27:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode27) == *(other->multiConstNodeUnion->CPPmulticonstnode27));
	case 28:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode28) == *(other->multiConstNodeUnion->CPPmulticonstnode28));
	case 29:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode29) == *(other->multiConstNodeUnion->CPPmulticonstnode29));
	case 30:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode30) == *(other->multiConstNodeUnion->CPPmulticonstnode30));
	case 31:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode31) == *(other->multiConstNodeUnion->CPPmulticonstnode31));
	case 32:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode32) == *(other->multiConstNodeUnion->CPPmulticonstnode32));
	case 33:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode33) == *(other->multiConstNodeUnion->CPPmulticonstnode33));
	case 34:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode34) == *(other->multiConstNodeUnion->CPPmulticonstnode34));
	case 35:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode35) == *(other->multiConstNodeUnion->CPPmulticonstnode35));
	case 36:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode36) == *(other->multiConstNodeUnion->CPPmulticonstnode36));
	case 37:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode37) == *(other->multiConstNodeUnion->CPPmulticonstnode37));
	case 38:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode38) == *(other->multiConstNodeUnion->CPPmulticonstnode38));
	case 39:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode39) == *(other->multiConstNodeUnion->CPPmulticonstnode39));
	case 40:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode40) == *(other->multiConstNodeUnion->CPPmulticonstnode40));
	case 41:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode41) == *(other->multiConstNodeUnion->CPPmulticonstnode41));
	case 42:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode42) == *(other->multiConstNodeUnion->CPPmulticonstnode42));
	case 43:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode43) == *(other->multiConstNodeUnion->CPPmulticonstnode43));
	case 44:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode44) == *(other->multiConstNodeUnion->CPPmulticonstnode44));
	case 45:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode45) == *(other->multiConstNodeUnion->CPPmulticonstnode45));
	case 46:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode46) == *(other->multiConstNodeUnion->CPPmulticonstnode46));
	case 47:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode47) == *(other->multiConstNodeUnion->CPPmulticonstnode47));
	case 48:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode48) == *(other->multiConstNodeUnion->CPPmulticonstnode48));
	case 49:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode49) == *(other->multiConstNodeUnion->CPPmulticonstnode49));
	case 50:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode50) == *(other->multiConstNodeUnion->CPPmulticonstnode50));
	case 51:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode51) == *(other->multiConstNodeUnion->CPPmulticonstnode51));
	case 52:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode52) == *(other->multiConstNodeUnion->CPPmulticonstnode52));
	case 53:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode53) == *(other->multiConstNodeUnion->CPPmulticonstnode53));
	case 54:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode54) == *(other->multiConstNodeUnion->CPPmulticonstnode54));
	case 55:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode55) == *(other->multiConstNodeUnion->CPPmulticonstnode55));
	case 56:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode56) == *(other->multiConstNodeUnion->CPPmulticonstnode56));
	case 57:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode57) == *(other->multiConstNodeUnion->CPPmulticonstnode57));
	case 58:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode58) == *(other->multiConstNodeUnion->CPPmulticonstnode58));
	case 59:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode59) == *(other->multiConstNodeUnion->CPPmulticonstnode59));
	case 60:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode60) == *(other->multiConstNodeUnion->CPPmulticonstnode60));
	case 61:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode61) == *(other->multiConstNodeUnion->CPPmulticonstnode61));
	case 62:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode62) == *(other->multiConstNodeUnion->CPPmulticonstnode62));
	case 63:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode63) == *(other->multiConstNodeUnion->CPPmulticonstnode63));
	case 64:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode64) == *(other->multiConstNodeUnion->CPPmulticonstnode64));
	case 65:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode65) == *(other->multiConstNodeUnion->CPPmulticonstnode65));
	case 66:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode66) == *(other->multiConstNodeUnion->CPPmulticonstnode66));
	case 67:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode67) == *(other->multiConstNodeUnion->CPPmulticonstnode67));
	case 68:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode68) == *(other->multiConstNodeUnion->CPPmulticonstnode68));
	case 69:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode69) == *(other->multiConstNodeUnion->CPPmulticonstnode69));
	case 70:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode70) == *(other->multiConstNodeUnion->CPPmulticonstnode70));
	case 71:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode71) == *(other->multiConstNodeUnion->CPPmulticonstnode71));
	case 72:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode72) == *(other->multiConstNodeUnion->CPPmulticonstnode72));
	case 73:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode73) == *(other->multiConstNodeUnion->CPPmulticonstnode73));
	case 74:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode74) == *(other->multiConstNodeUnion->CPPmulticonstnode74));
	case 75:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode75) == *(other->multiConstNodeUnion->CPPmulticonstnode75));
	case 76:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode76) == *(other->multiConstNodeUnion->CPPmulticonstnode76));
	case 77:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode77) == *(other->multiConstNodeUnion->CPPmulticonstnode77));
	case 78:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode78) == *(other->multiConstNodeUnion->CPPmulticonstnode78));
	case 79:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode79) == *(other->multiConstNodeUnion->CPPmulticonstnode79));
	case 80:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode80) == *(other->multiConstNodeUnion->CPPmulticonstnode80));
	case 81:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode81) == *(other->multiConstNodeUnion->CPPmulticonstnode81));
	case 82:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode82) == *(other->multiConstNodeUnion->CPPmulticonstnode82));
	case 83:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode83) == *(other->multiConstNodeUnion->CPPmulticonstnode83));
	case 84:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode84) == *(other->multiConstNodeUnion->CPPmulticonstnode84));
	case 85:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode85) == *(other->multiConstNodeUnion->CPPmulticonstnode85));
	case 86:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode86) == *(other->multiConstNodeUnion->CPPmulticonstnode86));
	case 87:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode87) == *(other->multiConstNodeUnion->CPPmulticonstnode87));
	case 88:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode88) == *(other->multiConstNodeUnion->CPPmulticonstnode88));
	case 89:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode89) == *(other->multiConstNodeUnion->CPPmulticonstnode89));
	case 90:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode90) == *(other->multiConstNodeUnion->CPPmulticonstnode90));
	case 91:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode91) == *(other->multiConstNodeUnion->CPPmulticonstnode91));
	case 92:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode92) == *(other->multiConstNodeUnion->CPPmulticonstnode92));
	case 93:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode93) == *(other->multiConstNodeUnion->CPPmulticonstnode93));
	case 94:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode94) == *(other->multiConstNodeUnion->CPPmulticonstnode94));
	case 95:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode95) == *(other->multiConstNodeUnion->CPPmulticonstnode95));
	case 96:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode96) == *(other->multiConstNodeUnion->CPPmulticonstnode96));
	case 97:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode97) == *(other->multiConstNodeUnion->CPPmulticonstnode97));
	case 98:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode98) == *(other->multiConstNodeUnion->CPPmulticonstnode98));
	case 99:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode99) == *(other->multiConstNodeUnion->CPPmulticonstnode99));
	case 100:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode100) == *(other->multiConstNodeUnion->CPPmulticonstnode100));
	case 101:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode101) == *(other->multiConstNodeUnion->CPPmulticonstnode101));
	case 102:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode102) == *(other->multiConstNodeUnion->CPPmulticonstnode102));
	case 103:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode103) == *(other->multiConstNodeUnion->CPPmulticonstnode103));
	case 104:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode104) == *(other->multiConstNodeUnion->CPPmulticonstnode104));
	case 105:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode105) == *(other->multiConstNodeUnion->CPPmulticonstnode105));
	case 106:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode106) == *(other->multiConstNodeUnion->CPPmulticonstnode106));
	case 107:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode107) == *(other->multiConstNodeUnion->CPPmulticonstnode107));
	case 108:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode108) == *(other->multiConstNodeUnion->CPPmulticonstnode108));
	case 109:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode109) == *(other->multiConstNodeUnion->CPPmulticonstnode109));
	case 110:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode110) == *(other->multiConstNodeUnion->CPPmulticonstnode110));
	case 111:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode111) == *(other->multiConstNodeUnion->CPPmulticonstnode111));
	case 112:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode112) == *(other->multiConstNodeUnion->CPPmulticonstnode112));
	case 113:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode113) == *(other->multiConstNodeUnion->CPPmulticonstnode113));
	case 114:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode114) == *(other->multiConstNodeUnion->CPPmulticonstnode114));
	case 115:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode115) == *(other->multiConstNodeUnion->CPPmulticonstnode115));
	case 116:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode116) == *(other->multiConstNodeUnion->CPPmulticonstnode116));
	case 117:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode117) == *(other->multiConstNodeUnion->CPPmulticonstnode117));
	case 118:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode118) == *(other->multiConstNodeUnion->CPPmulticonstnode118));
	case 119:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode119) == *(other->multiConstNodeUnion->CPPmulticonstnode119));
	case 120:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode120) == *(other->multiConstNodeUnion->CPPmulticonstnode120));
	case 121:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode121) == *(other->multiConstNodeUnion->CPPmulticonstnode121));
	case 122:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode122) == *(other->multiConstNodeUnion->CPPmulticonstnode122));
	case 123:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode123) == *(other->multiConstNodeUnion->CPPmulticonstnode123));
	case 124:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode124) == *(other->multiConstNodeUnion->CPPmulticonstnode124));
	case 125:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode125) == *(other->multiConstNodeUnion->CPPmulticonstnode125));
	case 126:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode126) == *(other->multiConstNodeUnion->CPPmulticonstnode126));
	case 127:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode127) == *(other->multiConstNodeUnion->CPPmulticonstnode127));
	case 128:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode128) == *(other->multiConstNodeUnion->CPPmulticonstnode128));
	case 129:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode129) == *(other->multiConstNodeUnion->CPPmulticonstnode129));
	case 130:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode130) == *(other->multiConstNodeUnion->CPPmulticonstnode130));
	case 131:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode131) == *(other->multiConstNodeUnion->CPPmulticonstnode131));
	case 132:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode132) == *(other->multiConstNodeUnion->CPPmulticonstnode132));
	case 133:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode133) == *(other->multiConstNodeUnion->CPPmulticonstnode133));
	case 134:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode134) == *(other->multiConstNodeUnion->CPPmulticonstnode134));
	case 135:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode135) == *(other->multiConstNodeUnion->CPPmulticonstnode135));
	case 136:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode136) == *(other->multiConstNodeUnion->CPPmulticonstnode136));
	case 137:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode137) == *(other->multiConstNodeUnion->CPPmulticonstnode137));
	case 138:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode138) == *(other->multiConstNodeUnion->CPPmulticonstnode138));
	case 139:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode139) == *(other->multiConstNodeUnion->CPPmulticonstnode139));
	case 140:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode140) == *(other->multiConstNodeUnion->CPPmulticonstnode140));
	case 141:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode141) == *(other->multiConstNodeUnion->CPPmulticonstnode141));
	case 142:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode142) == *(other->multiConstNodeUnion->CPPmulticonstnode142));
	case 143:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode143) == *(other->multiConstNodeUnion->CPPmulticonstnode143));
	case 144:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode144) == *(other->multiConstNodeUnion->CPPmulticonstnode144));
	case 145:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode145) == *(other->multiConstNodeUnion->CPPmulticonstnode145));
	case 146:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode146) == *(other->multiConstNodeUnion->CPPmulticonstnode146));
	case 147:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode147) == *(other->multiConstNodeUnion->CPPmulticonstnode147));
	case 148:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode148) == *(other->multiConstNodeUnion->CPPmulticonstnode148));
	case 149:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode149) == *(other->multiConstNodeUnion->CPPmulticonstnode149));
	case 150:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode150) == *(other->multiConstNodeUnion->CPPmulticonstnode150));
	case 151:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode151) == *(other->multiConstNodeUnion->CPPmulticonstnode151));
	case 152:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode152) == *(other->multiConstNodeUnion->CPPmulticonstnode152));
	case 153:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode153) == *(other->multiConstNodeUnion->CPPmulticonstnode153));
	case 154:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode154) == *(other->multiConstNodeUnion->CPPmulticonstnode154));
	case 155:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode155) == *(other->multiConstNodeUnion->CPPmulticonstnode155));
	case 156:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode156) == *(other->multiConstNodeUnion->CPPmulticonstnode156));
	case 157:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode157) == *(other->multiConstNodeUnion->CPPmulticonstnode157));
	case 158:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode158) == *(other->multiConstNodeUnion->CPPmulticonstnode158));
	case 159:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode159) == *(other->multiConstNodeUnion->CPPmulticonstnode159));
	case 160:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode160) == *(other->multiConstNodeUnion->CPPmulticonstnode160));
	case 161:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode161) == *(other->multiConstNodeUnion->CPPmulticonstnode161));
	case 162:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode162) == *(other->multiConstNodeUnion->CPPmulticonstnode162));
	case 163:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode163) == *(other->multiConstNodeUnion->CPPmulticonstnode163));
	case 164:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode164) == *(other->multiConstNodeUnion->CPPmulticonstnode164));
	case 165:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode165) == *(other->multiConstNodeUnion->CPPmulticonstnode165));
	case 166:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode166) == *(other->multiConstNodeUnion->CPPmulticonstnode166));
	case 167:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode167) == *(other->multiConstNodeUnion->CPPmulticonstnode167));
	case 168:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode168) == *(other->multiConstNodeUnion->CPPmulticonstnode168));
	case 169:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode169) == *(other->multiConstNodeUnion->CPPmulticonstnode169));
	case 170:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode170) == *(other->multiConstNodeUnion->CPPmulticonstnode170));
	case 171:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode171) == *(other->multiConstNodeUnion->CPPmulticonstnode171));
	case 172:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode172) == *(other->multiConstNodeUnion->CPPmulticonstnode172));
	case 173:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode173) == *(other->multiConstNodeUnion->CPPmulticonstnode173));
	case 174:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode174) == *(other->multiConstNodeUnion->CPPmulticonstnode174));
	case 175:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode175) == *(other->multiConstNodeUnion->CPPmulticonstnode175));
	case 176:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode176) == *(other->multiConstNodeUnion->CPPmulticonstnode176));
	case 177:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode177) == *(other->multiConstNodeUnion->CPPmulticonstnode177));
	case 178:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode178) == *(other->multiConstNodeUnion->CPPmulticonstnode178));
	case 179:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode179) == *(other->multiConstNodeUnion->CPPmulticonstnode179));
	case 180:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode180) == *(other->multiConstNodeUnion->CPPmulticonstnode180));
	case 181:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode181) == *(other->multiConstNodeUnion->CPPmulticonstnode181));
	case 182:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode182) == *(other->multiConstNodeUnion->CPPmulticonstnode182));
	case 183:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode183) == *(other->multiConstNodeUnion->CPPmulticonstnode183));
	case 184:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode184) == *(other->multiConstNodeUnion->CPPmulticonstnode184));
	case 185:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode185) == *(other->multiConstNodeUnion->CPPmulticonstnode185));
	case 186:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode186) == *(other->multiConstNodeUnion->CPPmulticonstnode186));
	case 187:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode187) == *(other->multiConstNodeUnion->CPPmulticonstnode187));
	case 188:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode188) == *(other->multiConstNodeUnion->CPPmulticonstnode188));
	case 189:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode189) == *(other->multiConstNodeUnion->CPPmulticonstnode189));
	case 190:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode190) == *(other->multiConstNodeUnion->CPPmulticonstnode190));
	case 191:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode191) == *(other->multiConstNodeUnion->CPPmulticonstnode191));
	case 192:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode192) == *(other->multiConstNodeUnion->CPPmulticonstnode192));
	case 193:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode193) == *(other->multiConstNodeUnion->CPPmulticonstnode193));
	case 194:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode194) == *(other->multiConstNodeUnion->CPPmulticonstnode194));
	case 195:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode195) == *(other->multiConstNodeUnion->CPPmulticonstnode195));
	case 196:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode196) == *(other->multiConstNodeUnion->CPPmulticonstnode196));
	}
	return false;
}

generic<typename Key, typename Value>
bool UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::operator!=(const CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj, const CShorpUnOrderedMultiConstNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(thisObj), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(other), nullptr)) return false;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(thisObj), const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(other))) return false;
	if (thisObj->isInitialized == 0 || other->isInitialized == 0) return false;

	if (thisObj->nKeyValueType != other->nKeyValueType) return true;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		return false;
	case 1:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode1) != *(other->multiConstNodeUnion->CPPmulticonstnode1));
	case 2:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode2) != *(other->multiConstNodeUnion->CPPmulticonstnode2));
	case 3:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode3) != *(other->multiConstNodeUnion->CPPmulticonstnode3));
	case 4:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode4) != *(other->multiConstNodeUnion->CPPmulticonstnode4));
	case 5:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode5) != *(other->multiConstNodeUnion->CPPmulticonstnode5));
	case 6:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode6) != *(other->multiConstNodeUnion->CPPmulticonstnode6));
	case 7:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode7) != *(other->multiConstNodeUnion->CPPmulticonstnode7));
	case 8:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode8) != *(other->multiConstNodeUnion->CPPmulticonstnode8));
	case 9:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode9) != *(other->multiConstNodeUnion->CPPmulticonstnode9));
	case 10:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode10) != *(other->multiConstNodeUnion->CPPmulticonstnode10));
	case 11:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode11) != *(other->multiConstNodeUnion->CPPmulticonstnode11));
	case 12:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode12) != *(other->multiConstNodeUnion->CPPmulticonstnode12));
	case 13:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode13) != *(other->multiConstNodeUnion->CPPmulticonstnode13));
	case 14:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode14) != *(other->multiConstNodeUnion->CPPmulticonstnode14));
	case 15:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode15) != *(other->multiConstNodeUnion->CPPmulticonstnode15));
	case 16:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode16) != *(other->multiConstNodeUnion->CPPmulticonstnode16));
	case 17:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode17) != *(other->multiConstNodeUnion->CPPmulticonstnode17));
	case 18:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode18) != *(other->multiConstNodeUnion->CPPmulticonstnode18));
	case 19:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode19) != *(other->multiConstNodeUnion->CPPmulticonstnode19));
	case 20:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode20) != *(other->multiConstNodeUnion->CPPmulticonstnode20));
	case 21:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode21) != *(other->multiConstNodeUnion->CPPmulticonstnode21));
	case 22:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode22) != *(other->multiConstNodeUnion->CPPmulticonstnode22));
	case 23:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode23) != *(other->multiConstNodeUnion->CPPmulticonstnode23));
	case 24:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode24) != *(other->multiConstNodeUnion->CPPmulticonstnode24));
	case 25:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode25) != *(other->multiConstNodeUnion->CPPmulticonstnode25));
	case 26:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode26) != *(other->multiConstNodeUnion->CPPmulticonstnode26));
	case 27:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode27) != *(other->multiConstNodeUnion->CPPmulticonstnode27));
	case 28:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode28) != *(other->multiConstNodeUnion->CPPmulticonstnode28));
	case 29:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode29) != *(other->multiConstNodeUnion->CPPmulticonstnode29));
	case 30:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode30) != *(other->multiConstNodeUnion->CPPmulticonstnode30));
	case 31:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode31) != *(other->multiConstNodeUnion->CPPmulticonstnode31));
	case 32:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode32) != *(other->multiConstNodeUnion->CPPmulticonstnode32));
	case 33:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode33) != *(other->multiConstNodeUnion->CPPmulticonstnode33));
	case 34:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode34) != *(other->multiConstNodeUnion->CPPmulticonstnode34));
	case 35:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode35) != *(other->multiConstNodeUnion->CPPmulticonstnode35));
	case 36:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode36) != *(other->multiConstNodeUnion->CPPmulticonstnode36));
	case 37:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode37) != *(other->multiConstNodeUnion->CPPmulticonstnode37));
	case 38:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode38) != *(other->multiConstNodeUnion->CPPmulticonstnode38));
	case 39:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode39) != *(other->multiConstNodeUnion->CPPmulticonstnode39));
	case 40:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode40) != *(other->multiConstNodeUnion->CPPmulticonstnode40));
	case 41:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode41) != *(other->multiConstNodeUnion->CPPmulticonstnode41));
	case 42:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode42) != *(other->multiConstNodeUnion->CPPmulticonstnode42));
	case 43:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode43) != *(other->multiConstNodeUnion->CPPmulticonstnode43));
	case 44:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode44) != *(other->multiConstNodeUnion->CPPmulticonstnode44));
	case 45:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode45) != *(other->multiConstNodeUnion->CPPmulticonstnode45));
	case 46:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode46) != *(other->multiConstNodeUnion->CPPmulticonstnode46));
	case 47:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode47) != *(other->multiConstNodeUnion->CPPmulticonstnode47));
	case 48:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode48) != *(other->multiConstNodeUnion->CPPmulticonstnode48));
	case 49:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode49) != *(other->multiConstNodeUnion->CPPmulticonstnode49));
	case 50:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode50) != *(other->multiConstNodeUnion->CPPmulticonstnode50));
	case 51:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode51) != *(other->multiConstNodeUnion->CPPmulticonstnode51));
	case 52:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode52) != *(other->multiConstNodeUnion->CPPmulticonstnode52));
	case 53:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode53) != *(other->multiConstNodeUnion->CPPmulticonstnode53));
	case 54:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode54) != *(other->multiConstNodeUnion->CPPmulticonstnode54));
	case 55:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode55) != *(other->multiConstNodeUnion->CPPmulticonstnode55));
	case 56:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode56) != *(other->multiConstNodeUnion->CPPmulticonstnode56));
	case 57:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode57) != *(other->multiConstNodeUnion->CPPmulticonstnode57));
	case 58:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode58) != *(other->multiConstNodeUnion->CPPmulticonstnode58));
	case 59:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode59) != *(other->multiConstNodeUnion->CPPmulticonstnode59));
	case 60:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode60) != *(other->multiConstNodeUnion->CPPmulticonstnode60));
	case 61:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode61) != *(other->multiConstNodeUnion->CPPmulticonstnode61));
	case 62:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode62) != *(other->multiConstNodeUnion->CPPmulticonstnode62));
	case 63:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode63) != *(other->multiConstNodeUnion->CPPmulticonstnode63));
	case 64:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode64) != *(other->multiConstNodeUnion->CPPmulticonstnode64));
	case 65:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode65) != *(other->multiConstNodeUnion->CPPmulticonstnode65));
	case 66:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode66) != *(other->multiConstNodeUnion->CPPmulticonstnode66));
	case 67:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode67) != *(other->multiConstNodeUnion->CPPmulticonstnode67));
	case 68:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode68) != *(other->multiConstNodeUnion->CPPmulticonstnode68));
	case 69:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode69) != *(other->multiConstNodeUnion->CPPmulticonstnode69));
	case 70:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode70) != *(other->multiConstNodeUnion->CPPmulticonstnode70));
	case 71:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode71) != *(other->multiConstNodeUnion->CPPmulticonstnode71));
	case 72:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode72) != *(other->multiConstNodeUnion->CPPmulticonstnode72));
	case 73:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode73) != *(other->multiConstNodeUnion->CPPmulticonstnode73));
	case 74:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode74) != *(other->multiConstNodeUnion->CPPmulticonstnode74));
	case 75:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode75) != *(other->multiConstNodeUnion->CPPmulticonstnode75));
	case 76:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode76) != *(other->multiConstNodeUnion->CPPmulticonstnode76));
	case 77:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode77) != *(other->multiConstNodeUnion->CPPmulticonstnode77));
	case 78:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode78) != *(other->multiConstNodeUnion->CPPmulticonstnode78));
	case 79:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode79) != *(other->multiConstNodeUnion->CPPmulticonstnode79));
	case 80:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode80) != *(other->multiConstNodeUnion->CPPmulticonstnode80));
	case 81:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode81) != *(other->multiConstNodeUnion->CPPmulticonstnode81));
	case 82:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode82) != *(other->multiConstNodeUnion->CPPmulticonstnode82));
	case 83:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode83) != *(other->multiConstNodeUnion->CPPmulticonstnode83));
	case 84:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode84) != *(other->multiConstNodeUnion->CPPmulticonstnode84));
	case 85:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode85) != *(other->multiConstNodeUnion->CPPmulticonstnode85));
	case 86:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode86) != *(other->multiConstNodeUnion->CPPmulticonstnode86));
	case 87:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode87) != *(other->multiConstNodeUnion->CPPmulticonstnode87));
	case 88:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode88) != *(other->multiConstNodeUnion->CPPmulticonstnode88));
	case 89:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode89) != *(other->multiConstNodeUnion->CPPmulticonstnode89));
	case 90:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode90) != *(other->multiConstNodeUnion->CPPmulticonstnode90));
	case 91:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode91) != *(other->multiConstNodeUnion->CPPmulticonstnode91));
	case 92:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode92) != *(other->multiConstNodeUnion->CPPmulticonstnode92));
	case 93:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode93) != *(other->multiConstNodeUnion->CPPmulticonstnode93));
	case 94:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode94) != *(other->multiConstNodeUnion->CPPmulticonstnode94));
	case 95:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode95) != *(other->multiConstNodeUnion->CPPmulticonstnode95));
	case 96:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode96) != *(other->multiConstNodeUnion->CPPmulticonstnode96));
	case 97:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode97) != *(other->multiConstNodeUnion->CPPmulticonstnode97));
	case 98:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode98) != *(other->multiConstNodeUnion->CPPmulticonstnode98));
	case 99:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode99) != *(other->multiConstNodeUnion->CPPmulticonstnode99));
	case 100:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode100) != *(other->multiConstNodeUnion->CPPmulticonstnode100));
	case 101:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode101) != *(other->multiConstNodeUnion->CPPmulticonstnode101));
	case 102:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode102) != *(other->multiConstNodeUnion->CPPmulticonstnode102));
	case 103:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode103) != *(other->multiConstNodeUnion->CPPmulticonstnode103));
	case 104:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode104) != *(other->multiConstNodeUnion->CPPmulticonstnode104));
	case 105:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode105) != *(other->multiConstNodeUnion->CPPmulticonstnode105));
	case 106:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode106) != *(other->multiConstNodeUnion->CPPmulticonstnode106));
	case 107:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode107) != *(other->multiConstNodeUnion->CPPmulticonstnode107));
	case 108:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode108) != *(other->multiConstNodeUnion->CPPmulticonstnode108));
	case 109:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode109) != *(other->multiConstNodeUnion->CPPmulticonstnode109));
	case 110:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode110) != *(other->multiConstNodeUnion->CPPmulticonstnode110));
	case 111:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode111) != *(other->multiConstNodeUnion->CPPmulticonstnode111));
	case 112:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode112) != *(other->multiConstNodeUnion->CPPmulticonstnode112));
	case 113:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode113) != *(other->multiConstNodeUnion->CPPmulticonstnode113));
	case 114:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode114) != *(other->multiConstNodeUnion->CPPmulticonstnode114));
	case 115:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode115) != *(other->multiConstNodeUnion->CPPmulticonstnode115));
	case 116:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode116) != *(other->multiConstNodeUnion->CPPmulticonstnode116));
	case 117:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode117) != *(other->multiConstNodeUnion->CPPmulticonstnode117));
	case 118:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode118) != *(other->multiConstNodeUnion->CPPmulticonstnode118));
	case 119:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode119) != *(other->multiConstNodeUnion->CPPmulticonstnode119));
	case 120:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode120) != *(other->multiConstNodeUnion->CPPmulticonstnode120));
	case 121:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode121) != *(other->multiConstNodeUnion->CPPmulticonstnode121));
	case 122:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode122) != *(other->multiConstNodeUnion->CPPmulticonstnode122));
	case 123:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode123) != *(other->multiConstNodeUnion->CPPmulticonstnode123));
	case 124:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode124) != *(other->multiConstNodeUnion->CPPmulticonstnode124));
	case 125:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode125) != *(other->multiConstNodeUnion->CPPmulticonstnode125));
	case 126:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode126) != *(other->multiConstNodeUnion->CPPmulticonstnode126));
	case 127:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode127) != *(other->multiConstNodeUnion->CPPmulticonstnode127));
	case 128:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode128) != *(other->multiConstNodeUnion->CPPmulticonstnode128));
	case 129:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode129) != *(other->multiConstNodeUnion->CPPmulticonstnode129));
	case 130:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode130) != *(other->multiConstNodeUnion->CPPmulticonstnode130));
	case 131:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode131) != *(other->multiConstNodeUnion->CPPmulticonstnode131));
	case 132:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode132) != *(other->multiConstNodeUnion->CPPmulticonstnode132));
	case 133:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode133) != *(other->multiConstNodeUnion->CPPmulticonstnode133));
	case 134:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode134) != *(other->multiConstNodeUnion->CPPmulticonstnode134));
	case 135:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode135) != *(other->multiConstNodeUnion->CPPmulticonstnode135));
	case 136:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode136) != *(other->multiConstNodeUnion->CPPmulticonstnode136));
	case 137:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode137) != *(other->multiConstNodeUnion->CPPmulticonstnode137));
	case 138:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode138) != *(other->multiConstNodeUnion->CPPmulticonstnode138));
	case 139:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode139) != *(other->multiConstNodeUnion->CPPmulticonstnode139));
	case 140:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode140) != *(other->multiConstNodeUnion->CPPmulticonstnode140));
	case 141:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode141) != *(other->multiConstNodeUnion->CPPmulticonstnode141));
	case 142:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode142) != *(other->multiConstNodeUnion->CPPmulticonstnode142));
	case 143:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode143) != *(other->multiConstNodeUnion->CPPmulticonstnode143));
	case 144:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode144) != *(other->multiConstNodeUnion->CPPmulticonstnode144));
	case 145:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode145) != *(other->multiConstNodeUnion->CPPmulticonstnode145));
	case 146:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode146) != *(other->multiConstNodeUnion->CPPmulticonstnode146));
	case 147:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode147) != *(other->multiConstNodeUnion->CPPmulticonstnode147));
	case 148:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode148) != *(other->multiConstNodeUnion->CPPmulticonstnode148));
	case 149:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode149) != *(other->multiConstNodeUnion->CPPmulticonstnode149));
	case 150:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode150) != *(other->multiConstNodeUnion->CPPmulticonstnode150));
	case 151:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode151) != *(other->multiConstNodeUnion->CPPmulticonstnode151));
	case 152:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode152) != *(other->multiConstNodeUnion->CPPmulticonstnode152));
	case 153:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode153) != *(other->multiConstNodeUnion->CPPmulticonstnode153));
	case 154:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode154) != *(other->multiConstNodeUnion->CPPmulticonstnode154));
	case 155:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode155) != *(other->multiConstNodeUnion->CPPmulticonstnode155));
	case 156:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode156) != *(other->multiConstNodeUnion->CPPmulticonstnode156));
	case 157:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode157) != *(other->multiConstNodeUnion->CPPmulticonstnode157));
	case 158:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode158) != *(other->multiConstNodeUnion->CPPmulticonstnode158));
	case 159:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode159) != *(other->multiConstNodeUnion->CPPmulticonstnode159));
	case 160:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode160) != *(other->multiConstNodeUnion->CPPmulticonstnode160));
	case 161:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode161) != *(other->multiConstNodeUnion->CPPmulticonstnode161));
	case 162:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode162) != *(other->multiConstNodeUnion->CPPmulticonstnode162));
	case 163:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode163) != *(other->multiConstNodeUnion->CPPmulticonstnode163));
	case 164:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode164) != *(other->multiConstNodeUnion->CPPmulticonstnode164));
	case 165:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode165) != *(other->multiConstNodeUnion->CPPmulticonstnode165));
	case 166:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode166) != *(other->multiConstNodeUnion->CPPmulticonstnode166));
	case 167:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode167) != *(other->multiConstNodeUnion->CPPmulticonstnode167));
	case 168:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode168) != *(other->multiConstNodeUnion->CPPmulticonstnode168));
	case 169:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode169) != *(other->multiConstNodeUnion->CPPmulticonstnode169));
	case 170:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode170) != *(other->multiConstNodeUnion->CPPmulticonstnode170));
	case 171:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode171) != *(other->multiConstNodeUnion->CPPmulticonstnode171));
	case 172:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode172) != *(other->multiConstNodeUnion->CPPmulticonstnode172));
	case 173:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode173) != *(other->multiConstNodeUnion->CPPmulticonstnode173));
	case 174:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode174) != *(other->multiConstNodeUnion->CPPmulticonstnode174));
	case 175:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode175) != *(other->multiConstNodeUnion->CPPmulticonstnode175));
	case 176:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode176) != *(other->multiConstNodeUnion->CPPmulticonstnode176));
	case 177:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode177) != *(other->multiConstNodeUnion->CPPmulticonstnode177));
	case 178:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode178) != *(other->multiConstNodeUnion->CPPmulticonstnode178));
	case 179:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode179) != *(other->multiConstNodeUnion->CPPmulticonstnode179));
	case 180:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode180) != *(other->multiConstNodeUnion->CPPmulticonstnode180));
	case 181:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode181) != *(other->multiConstNodeUnion->CPPmulticonstnode181));
	case 182:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode182) != *(other->multiConstNodeUnion->CPPmulticonstnode182));
	case 183:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode183) != *(other->multiConstNodeUnion->CPPmulticonstnode183));
	case 184:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode184) != *(other->multiConstNodeUnion->CPPmulticonstnode184));
	case 185:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode185) != *(other->multiConstNodeUnion->CPPmulticonstnode185));
	case 186:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode186) != *(other->multiConstNodeUnion->CPPmulticonstnode186));
	case 187:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode187) != *(other->multiConstNodeUnion->CPPmulticonstnode187));
	case 188:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode188) != *(other->multiConstNodeUnion->CPPmulticonstnode188));
	case 189:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode189) != *(other->multiConstNodeUnion->CPPmulticonstnode189));
	case 190:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode190) != *(other->multiConstNodeUnion->CPPmulticonstnode190));
	case 191:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode191) != *(other->multiConstNodeUnion->CPPmulticonstnode191));
	case 192:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode192) != *(other->multiConstNodeUnion->CPPmulticonstnode192));
	case 193:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode193) != *(other->multiConstNodeUnion->CPPmulticonstnode193));
	case 194:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode194) != *(other->multiConstNodeUnion->CPPmulticonstnode194));
	case 195:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode195) != *(other->multiConstNodeUnion->CPPmulticonstnode195));
	case 196:
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode196) != *(other->multiConstNodeUnion->CPPmulticonstnode196));
	}
	return false;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::operator%(CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj, CShorpUnOrderedMultiConstNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(thisObj), nullptr)) return nullptr;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(other), nullptr)) return thisObj;
	if (other->isInitialized == 0) return thisObj;
	thisObj->isInitialized = other->isInitialized;

	if (thisObj->nKeyValueType != other->nKeyValueType) return thisObj;

	if (other->gIntKeyClassDictionary) thisObj->gIntKeyClassDictionary = other->gIntKeyClassDictionary;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		break;
	case 1:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode1) = *(other->multiConstNodeUnion->CPPmulticonstnode1)); break;
	case 2:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode2) = *(other->multiConstNodeUnion->CPPmulticonstnode2)); break;
	case 3:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode3) = *(other->multiConstNodeUnion->CPPmulticonstnode3)); break;
	case 4:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode4) = *(other->multiConstNodeUnion->CPPmulticonstnode4)); break;
	case 5:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode5) = *(other->multiConstNodeUnion->CPPmulticonstnode5)); break;
	case 6:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode6) = *(other->multiConstNodeUnion->CPPmulticonstnode6)); break;
	case 7:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode7) = *(other->multiConstNodeUnion->CPPmulticonstnode7)); break;
	case 8:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode8) = *(other->multiConstNodeUnion->CPPmulticonstnode8)); break;
	case 9:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode9) = *(other->multiConstNodeUnion->CPPmulticonstnode9)); break;
	case 10:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode10) = *(other->multiConstNodeUnion->CPPmulticonstnode10)); break;
	case 11:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode11) = *(other->multiConstNodeUnion->CPPmulticonstnode11)); break;
	case 12:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode12) = *(other->multiConstNodeUnion->CPPmulticonstnode12)); break;
	case 13:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode13) = *(other->multiConstNodeUnion->CPPmulticonstnode13)); break;
	case 14:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode14) = *(other->multiConstNodeUnion->CPPmulticonstnode14)); break;
	case 15:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode15) = *(other->multiConstNodeUnion->CPPmulticonstnode15)); break;
	case 16:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode16) = *(other->multiConstNodeUnion->CPPmulticonstnode16)); break;
	case 17:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode17) = *(other->multiConstNodeUnion->CPPmulticonstnode17)); break;
	case 18:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode18) = *(other->multiConstNodeUnion->CPPmulticonstnode18)); break;
	case 19:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode19) = *(other->multiConstNodeUnion->CPPmulticonstnode19)); break;
	case 20:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode20) = *(other->multiConstNodeUnion->CPPmulticonstnode20)); break;
	case 21:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode21) = *(other->multiConstNodeUnion->CPPmulticonstnode21)); break;
	case 22:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode22) = *(other->multiConstNodeUnion->CPPmulticonstnode22)); break;
	case 23:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode23) = *(other->multiConstNodeUnion->CPPmulticonstnode23)); break;
	case 24:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode24) = *(other->multiConstNodeUnion->CPPmulticonstnode24)); break;
	case 25:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode25) = *(other->multiConstNodeUnion->CPPmulticonstnode25)); break;
	case 26:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode26) = *(other->multiConstNodeUnion->CPPmulticonstnode26)); break;
	case 27:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode27) = *(other->multiConstNodeUnion->CPPmulticonstnode27)); break;
	case 28:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode28) = *(other->multiConstNodeUnion->CPPmulticonstnode28)); break;
	case 29:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode29) = *(other->multiConstNodeUnion->CPPmulticonstnode29)); break;
	case 30:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode30) = *(other->multiConstNodeUnion->CPPmulticonstnode30)); break;
	case 31:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode31) = *(other->multiConstNodeUnion->CPPmulticonstnode31)); break;
	case 32:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode32) = *(other->multiConstNodeUnion->CPPmulticonstnode32)); break;
	case 33:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode33) = *(other->multiConstNodeUnion->CPPmulticonstnode33)); break;
	case 34:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode34) = *(other->multiConstNodeUnion->CPPmulticonstnode34)); break;
	case 35:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode35) = *(other->multiConstNodeUnion->CPPmulticonstnode35)); break;
	case 36:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode36) = *(other->multiConstNodeUnion->CPPmulticonstnode36)); break;
	case 37:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode37) = *(other->multiConstNodeUnion->CPPmulticonstnode37)); break;
	case 38:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode38) = *(other->multiConstNodeUnion->CPPmulticonstnode38)); break;
	case 39:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode39) = *(other->multiConstNodeUnion->CPPmulticonstnode39)); break;
	case 40:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode40) = *(other->multiConstNodeUnion->CPPmulticonstnode40)); break;
	case 41:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode41) = *(other->multiConstNodeUnion->CPPmulticonstnode41)); break;
	case 42:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode42) = *(other->multiConstNodeUnion->CPPmulticonstnode42)); break;
	case 43:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode43) = *(other->multiConstNodeUnion->CPPmulticonstnode43)); break;
	case 44:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode44) = *(other->multiConstNodeUnion->CPPmulticonstnode44)); break;
	case 45:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode45) = *(other->multiConstNodeUnion->CPPmulticonstnode45)); break;
	case 46:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode46) = *(other->multiConstNodeUnion->CPPmulticonstnode46)); break;
	case 47:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode47) = *(other->multiConstNodeUnion->CPPmulticonstnode47)); break;
	case 48:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode48) = *(other->multiConstNodeUnion->CPPmulticonstnode48)); break;
	case 49:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode49) = *(other->multiConstNodeUnion->CPPmulticonstnode49)); break;
	case 50:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode50) = *(other->multiConstNodeUnion->CPPmulticonstnode50)); break;
	case 51:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode51) = *(other->multiConstNodeUnion->CPPmulticonstnode51)); break;
	case 52:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode52) = *(other->multiConstNodeUnion->CPPmulticonstnode52)); break;
	case 53:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode53) = *(other->multiConstNodeUnion->CPPmulticonstnode53)); break;
	case 54:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode54) = *(other->multiConstNodeUnion->CPPmulticonstnode54)); break;
	case 55:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode55) = *(other->multiConstNodeUnion->CPPmulticonstnode55)); break;
	case 56:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode56) = *(other->multiConstNodeUnion->CPPmulticonstnode56)); break;
	case 57:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode57) = *(other->multiConstNodeUnion->CPPmulticonstnode57)); break;
	case 58:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode58) = *(other->multiConstNodeUnion->CPPmulticonstnode58)); break;
	case 59:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode59) = *(other->multiConstNodeUnion->CPPmulticonstnode59)); break;
	case 60:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode60) = *(other->multiConstNodeUnion->CPPmulticonstnode60)); break;
	case 61:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode61) = *(other->multiConstNodeUnion->CPPmulticonstnode61)); break;
	case 62:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode62) = *(other->multiConstNodeUnion->CPPmulticonstnode62)); break;
	case 63:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode63) = *(other->multiConstNodeUnion->CPPmulticonstnode63)); break;
	case 64:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode64) = *(other->multiConstNodeUnion->CPPmulticonstnode64)); break;
	case 65:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode65) = *(other->multiConstNodeUnion->CPPmulticonstnode65)); break;
	case 66:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode66) = *(other->multiConstNodeUnion->CPPmulticonstnode66)); break;
	case 67:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode67) = *(other->multiConstNodeUnion->CPPmulticonstnode67)); break;
	case 68:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode68) = *(other->multiConstNodeUnion->CPPmulticonstnode68)); break;
	case 69:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode69) = *(other->multiConstNodeUnion->CPPmulticonstnode69)); break;
	case 70:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode70) = *(other->multiConstNodeUnion->CPPmulticonstnode70)); break;
	case 71:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode71) = *(other->multiConstNodeUnion->CPPmulticonstnode71)); break;
	case 72:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode72) = *(other->multiConstNodeUnion->CPPmulticonstnode72)); break;
	case 73:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode73) = *(other->multiConstNodeUnion->CPPmulticonstnode73)); break;
	case 74:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode74) = *(other->multiConstNodeUnion->CPPmulticonstnode74)); break;
	case 75:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode75) = *(other->multiConstNodeUnion->CPPmulticonstnode75)); break;
	case 76:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode76) = *(other->multiConstNodeUnion->CPPmulticonstnode76)); break;
	case 77:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode77) = *(other->multiConstNodeUnion->CPPmulticonstnode77)); break;
	case 78:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode78) = *(other->multiConstNodeUnion->CPPmulticonstnode78)); break;
	case 79:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode79) = *(other->multiConstNodeUnion->CPPmulticonstnode79)); break;
	case 80:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode80) = *(other->multiConstNodeUnion->CPPmulticonstnode80)); break;
	case 81:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode81) = *(other->multiConstNodeUnion->CPPmulticonstnode81)); break;
	case 82:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode82) = *(other->multiConstNodeUnion->CPPmulticonstnode82)); break;
	case 83:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode83) = *(other->multiConstNodeUnion->CPPmulticonstnode83)); break;
	case 84:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode84) = *(other->multiConstNodeUnion->CPPmulticonstnode84)); break;
	case 85:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode85) = *(other->multiConstNodeUnion->CPPmulticonstnode85)); break;
	case 86:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode86) = *(other->multiConstNodeUnion->CPPmulticonstnode86)); break;
	case 87:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode87) = *(other->multiConstNodeUnion->CPPmulticonstnode87)); break;
	case 88:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode88) = *(other->multiConstNodeUnion->CPPmulticonstnode88)); break;
	case 89:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode89) = *(other->multiConstNodeUnion->CPPmulticonstnode89)); break;
	case 90:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode90) = *(other->multiConstNodeUnion->CPPmulticonstnode90)); break;
	case 91:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode91) = *(other->multiConstNodeUnion->CPPmulticonstnode91)); break;
	case 92:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode92) = *(other->multiConstNodeUnion->CPPmulticonstnode92)); break;
	case 93:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode93) = *(other->multiConstNodeUnion->CPPmulticonstnode93)); break;
	case 94:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode94) = *(other->multiConstNodeUnion->CPPmulticonstnode94)); break;
	case 95:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode95) = *(other->multiConstNodeUnion->CPPmulticonstnode95)); break;
	case 96:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode96) = *(other->multiConstNodeUnion->CPPmulticonstnode96)); break;
	case 97:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode97) = *(other->multiConstNodeUnion->CPPmulticonstnode97)); break;
	case 98:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode98) = *(other->multiConstNodeUnion->CPPmulticonstnode98)); break;
	case 99:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode99) = *(other->multiConstNodeUnion->CPPmulticonstnode99)); break;
	case 100:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode100) = *(other->multiConstNodeUnion->CPPmulticonstnode100)); break;
	case 101:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode101) = *(other->multiConstNodeUnion->CPPmulticonstnode101)); break;
	case 102:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode102) = *(other->multiConstNodeUnion->CPPmulticonstnode102)); break;
	case 103:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode103) = *(other->multiConstNodeUnion->CPPmulticonstnode103)); break;
	case 104:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode104) = *(other->multiConstNodeUnion->CPPmulticonstnode104)); break;
	case 105:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode105) = *(other->multiConstNodeUnion->CPPmulticonstnode105)); break;
	case 106:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode106) = *(other->multiConstNodeUnion->CPPmulticonstnode106)); break;
	case 107:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode107) = *(other->multiConstNodeUnion->CPPmulticonstnode107)); break;
	case 108:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode108) = *(other->multiConstNodeUnion->CPPmulticonstnode108)); break;
	case 109:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode109) = *(other->multiConstNodeUnion->CPPmulticonstnode109)); break;
	case 110:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode110) = *(other->multiConstNodeUnion->CPPmulticonstnode110)); break;
	case 111:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode111) = *(other->multiConstNodeUnion->CPPmulticonstnode111)); break;
	case 112:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode112) = *(other->multiConstNodeUnion->CPPmulticonstnode112)); break;
	case 113:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode113) = *(other->multiConstNodeUnion->CPPmulticonstnode113)); break;
	case 114:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode114) = *(other->multiConstNodeUnion->CPPmulticonstnode114)); break;
	case 115:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode115) = *(other->multiConstNodeUnion->CPPmulticonstnode115)); break;
	case 116:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode116) = *(other->multiConstNodeUnion->CPPmulticonstnode116)); break;
	case 117:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode117) = *(other->multiConstNodeUnion->CPPmulticonstnode117)); break;
	case 118:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode118) = *(other->multiConstNodeUnion->CPPmulticonstnode118)); break;
	case 119:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode119) = *(other->multiConstNodeUnion->CPPmulticonstnode119)); break;
	case 120:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode120) = *(other->multiConstNodeUnion->CPPmulticonstnode120)); break;
	case 121:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode121) = *(other->multiConstNodeUnion->CPPmulticonstnode121)); break;
	case 122:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode122) = *(other->multiConstNodeUnion->CPPmulticonstnode122)); break;
	case 123:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode123) = *(other->multiConstNodeUnion->CPPmulticonstnode123)); break;
	case 124:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode124) = *(other->multiConstNodeUnion->CPPmulticonstnode124)); break;
	case 125:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode125) = *(other->multiConstNodeUnion->CPPmulticonstnode125)); break;
	case 126:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode126) = *(other->multiConstNodeUnion->CPPmulticonstnode126)); break;
	case 127:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode127) = *(other->multiConstNodeUnion->CPPmulticonstnode127)); break;
	case 128:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode128) = *(other->multiConstNodeUnion->CPPmulticonstnode128)); break;
	case 129:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode129) = *(other->multiConstNodeUnion->CPPmulticonstnode129)); break;
	case 130:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode130) = *(other->multiConstNodeUnion->CPPmulticonstnode130)); break;
	case 131:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode131) = *(other->multiConstNodeUnion->CPPmulticonstnode131)); break;
	case 132:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode132) = *(other->multiConstNodeUnion->CPPmulticonstnode132)); break;
	case 133:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode133) = *(other->multiConstNodeUnion->CPPmulticonstnode133)); break;
	case 134:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode134) = *(other->multiConstNodeUnion->CPPmulticonstnode134)); break;
	case 135:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode135) = *(other->multiConstNodeUnion->CPPmulticonstnode135)); break;
	case 136:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode136) = *(other->multiConstNodeUnion->CPPmulticonstnode136)); break;
	case 137:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode137) = *(other->multiConstNodeUnion->CPPmulticonstnode137)); break;
	case 138:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode138) = *(other->multiConstNodeUnion->CPPmulticonstnode138)); break;
	case 139:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode139) = *(other->multiConstNodeUnion->CPPmulticonstnode139)); break;
	case 140:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode140) = *(other->multiConstNodeUnion->CPPmulticonstnode140)); break;
	case 141:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode141) = *(other->multiConstNodeUnion->CPPmulticonstnode141)); break;
	case 142:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode142) = *(other->multiConstNodeUnion->CPPmulticonstnode142)); break;
	case 143:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode143) = *(other->multiConstNodeUnion->CPPmulticonstnode143)); break;
	case 144:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode144) = *(other->multiConstNodeUnion->CPPmulticonstnode144)); break;
	case 145:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode145) = *(other->multiConstNodeUnion->CPPmulticonstnode145)); break;
	case 146:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode146) = *(other->multiConstNodeUnion->CPPmulticonstnode146)); break;
	case 147:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode147) = *(other->multiConstNodeUnion->CPPmulticonstnode147)); break;
	case 148:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode148) = *(other->multiConstNodeUnion->CPPmulticonstnode148)); break;
	case 149:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode149) = *(other->multiConstNodeUnion->CPPmulticonstnode149)); break;
	case 150:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode150) = *(other->multiConstNodeUnion->CPPmulticonstnode150)); break;
	case 151:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode151) = *(other->multiConstNodeUnion->CPPmulticonstnode151)); break;
	case 152:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode152) = *(other->multiConstNodeUnion->CPPmulticonstnode152)); break;
	case 153:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode153) = *(other->multiConstNodeUnion->CPPmulticonstnode153)); break;
	case 154:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode154) = *(other->multiConstNodeUnion->CPPmulticonstnode154)); break;
	case 155:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode155) = *(other->multiConstNodeUnion->CPPmulticonstnode155)); break;
	case 156:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode156) = *(other->multiConstNodeUnion->CPPmulticonstnode156)); break;
	case 157:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode157) = *(other->multiConstNodeUnion->CPPmulticonstnode157)); break;
	case 158:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode158) = *(other->multiConstNodeUnion->CPPmulticonstnode158)); break;
	case 159:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode159) = *(other->multiConstNodeUnion->CPPmulticonstnode159)); break;
	case 160:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode160) = *(other->multiConstNodeUnion->CPPmulticonstnode160)); break;
	case 161:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode161) = *(other->multiConstNodeUnion->CPPmulticonstnode161)); break;
	case 162:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode162) = *(other->multiConstNodeUnion->CPPmulticonstnode162)); break;
	case 163:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode163) = *(other->multiConstNodeUnion->CPPmulticonstnode163)); break;
	case 164:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode164) = *(other->multiConstNodeUnion->CPPmulticonstnode164)); break;
	case 165:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode165) = *(other->multiConstNodeUnion->CPPmulticonstnode165)); break;
	case 166:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode166) = *(other->multiConstNodeUnion->CPPmulticonstnode166)); break;
	case 167:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode167) = *(other->multiConstNodeUnion->CPPmulticonstnode167)); break;
	case 168:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode168) = *(other->multiConstNodeUnion->CPPmulticonstnode168)); break;
	case 169:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode169) = *(other->multiConstNodeUnion->CPPmulticonstnode169)); break;
	case 170:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode170) = *(other->multiConstNodeUnion->CPPmulticonstnode170)); break;
	case 171:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode171) = *(other->multiConstNodeUnion->CPPmulticonstnode171)); break;
	case 172:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode172) = *(other->multiConstNodeUnion->CPPmulticonstnode172)); break;
	case 173:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode173) = *(other->multiConstNodeUnion->CPPmulticonstnode173)); break;
	case 174:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode174) = *(other->multiConstNodeUnion->CPPmulticonstnode174)); break;
	case 175:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode175) = *(other->multiConstNodeUnion->CPPmulticonstnode175)); break;
	case 176:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode176) = *(other->multiConstNodeUnion->CPPmulticonstnode176)); break;
	case 177:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode177) = *(other->multiConstNodeUnion->CPPmulticonstnode177)); break;
	case 178:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode178) = *(other->multiConstNodeUnion->CPPmulticonstnode178)); break;
	case 179:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode179) = *(other->multiConstNodeUnion->CPPmulticonstnode179)); break;
	case 180:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode180) = *(other->multiConstNodeUnion->CPPmulticonstnode180)); break;
	case 181:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode181) = *(other->multiConstNodeUnion->CPPmulticonstnode181)); break;
	case 182:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode182) = *(other->multiConstNodeUnion->CPPmulticonstnode182)); break;
	case 183:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode183) = *(other->multiConstNodeUnion->CPPmulticonstnode183)); break;
	case 184:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode184) = *(other->multiConstNodeUnion->CPPmulticonstnode184)); break;
	case 185:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode185) = *(other->multiConstNodeUnion->CPPmulticonstnode185)); break;
	case 186:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode186) = *(other->multiConstNodeUnion->CPPmulticonstnode186)); break;
	case 187:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode187) = *(other->multiConstNodeUnion->CPPmulticonstnode187)); break;
	case 188:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode188) = *(other->multiConstNodeUnion->CPPmulticonstnode188)); break;
	case 189:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode189) = *(other->multiConstNodeUnion->CPPmulticonstnode189)); break;
	case 190:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode190) = *(other->multiConstNodeUnion->CPPmulticonstnode190)); break;
	case 191:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode191) = *(other->multiConstNodeUnion->CPPmulticonstnode191)); break;
	case 192:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode192) = *(other->multiConstNodeUnion->CPPmulticonstnode192)); break;
	case 193:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode193) = *(other->multiConstNodeUnion->CPPmulticonstnode193)); break;
	case 194:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode194) = *(other->multiConstNodeUnion->CPPmulticonstnode194)); break;
	case 195:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode195) = *(other->multiConstNodeUnion->CPPmulticonstnode195)); break;
	case 196:
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode196) = *(other->multiConstNodeUnion->CPPmulticonstnode196)); break;
	}
	return thisObj;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::operator++(CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Next();
	return thisObj;
}

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::operator--(CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj)
{
	if (Object::ReferenceEquals(thisObj, nullptr)) return nullptr;
	if (thisObj->isInitialized == 0) return thisObj;
	thisObj->Previous();
	return thisObj;
}

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary)
{
	if (ClassDictionary == nullptr) return;
	gIntKeyClassDictionary = ClassDictionary;
}

//generic<typename Key, typename Value>
//MultiMapWapper::CShorpMultiConstNode<Key, Value>^ MultiMapWapper::CShorpMultiConstNode<Key, Value>::operator++()
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == 0) return this;
//	Next();
//	return this;
//}
//
//generic<typename Key, typename Value>
//MultiMapWapper::CShorpMultiConstNode<Key, Value>^ MultiMapWapper::CShorpMultiConstNode<Key, Value>::operator++(int)
//{
//	if (Object::ReferenceEquals(this, nullptr)) return this;
//	if (isInitialized == false) return this;
//	Next();
//	return this;
//}