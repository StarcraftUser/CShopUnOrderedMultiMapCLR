#include "pch.h"

generic<typename Key, typename Value>
inline UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::CShorpUnOrderedMultiConstNode()
{
	gIntKeyClassDictionary = nullptr;
	gValueClassDictionary = nullptr;
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

#define UnOrderedMultiConstNode_Next_CASE(NUM) \
	case NUM: \
		(*(multiConstNodeUnion->CPPmulticonstnode##NUM))++; \
		return;

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::Next()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		UnOrderedMultiConstNode_Next_CASE(1)
		UnOrderedMultiConstNode_Next_CASE(2)
		UnOrderedMultiConstNode_Next_CASE(3)
		UnOrderedMultiConstNode_Next_CASE(4)
		UnOrderedMultiConstNode_Next_CASE(5)
		UnOrderedMultiConstNode_Next_CASE(6)
		UnOrderedMultiConstNode_Next_CASE(7)
		UnOrderedMultiConstNode_Next_CASE(8)
		UnOrderedMultiConstNode_Next_CASE(9)
		UnOrderedMultiConstNode_Next_CASE(10)
		UnOrderedMultiConstNode_Next_CASE(11)
		UnOrderedMultiConstNode_Next_CASE(12)
		UnOrderedMultiConstNode_Next_CASE(13)
		UnOrderedMultiConstNode_Next_CASE(14)
		UnOrderedMultiConstNode_Next_CASE(15)
		UnOrderedMultiConstNode_Next_CASE(16)
		UnOrderedMultiConstNode_Next_CASE(17)
		UnOrderedMultiConstNode_Next_CASE(18)
		UnOrderedMultiConstNode_Next_CASE(19)
		UnOrderedMultiConstNode_Next_CASE(20)
		UnOrderedMultiConstNode_Next_CASE(21)
		UnOrderedMultiConstNode_Next_CASE(22)
		UnOrderedMultiConstNode_Next_CASE(23)
		UnOrderedMultiConstNode_Next_CASE(24)
		UnOrderedMultiConstNode_Next_CASE(25)
		UnOrderedMultiConstNode_Next_CASE(26)
		UnOrderedMultiConstNode_Next_CASE(27)
		UnOrderedMultiConstNode_Next_CASE(28)
		UnOrderedMultiConstNode_Next_CASE(29)
		UnOrderedMultiConstNode_Next_CASE(30)
		UnOrderedMultiConstNode_Next_CASE(31)
		UnOrderedMultiConstNode_Next_CASE(32)
		UnOrderedMultiConstNode_Next_CASE(33)
		UnOrderedMultiConstNode_Next_CASE(34)
		UnOrderedMultiConstNode_Next_CASE(35)
		UnOrderedMultiConstNode_Next_CASE(36)
		UnOrderedMultiConstNode_Next_CASE(37)
		UnOrderedMultiConstNode_Next_CASE(38)
		UnOrderedMultiConstNode_Next_CASE(39)
		UnOrderedMultiConstNode_Next_CASE(40)
		UnOrderedMultiConstNode_Next_CASE(41)
		UnOrderedMultiConstNode_Next_CASE(42)
		UnOrderedMultiConstNode_Next_CASE(43)
		UnOrderedMultiConstNode_Next_CASE(44)
		UnOrderedMultiConstNode_Next_CASE(45)
		UnOrderedMultiConstNode_Next_CASE(46)
		UnOrderedMultiConstNode_Next_CASE(47)
		UnOrderedMultiConstNode_Next_CASE(48)
		UnOrderedMultiConstNode_Next_CASE(49)
		UnOrderedMultiConstNode_Next_CASE(50)
		UnOrderedMultiConstNode_Next_CASE(51)
		UnOrderedMultiConstNode_Next_CASE(52)
		UnOrderedMultiConstNode_Next_CASE(53)
		UnOrderedMultiConstNode_Next_CASE(54)
		UnOrderedMultiConstNode_Next_CASE(55)
		UnOrderedMultiConstNode_Next_CASE(56)
		UnOrderedMultiConstNode_Next_CASE(57)
		UnOrderedMultiConstNode_Next_CASE(58)
		UnOrderedMultiConstNode_Next_CASE(59)
		UnOrderedMultiConstNode_Next_CASE(60)
		UnOrderedMultiConstNode_Next_CASE(61)
		UnOrderedMultiConstNode_Next_CASE(62)
		UnOrderedMultiConstNode_Next_CASE(63)
		UnOrderedMultiConstNode_Next_CASE(64)
		UnOrderedMultiConstNode_Next_CASE(65)
		UnOrderedMultiConstNode_Next_CASE(66)
		UnOrderedMultiConstNode_Next_CASE(67)
		UnOrderedMultiConstNode_Next_CASE(68)
		UnOrderedMultiConstNode_Next_CASE(69)
		UnOrderedMultiConstNode_Next_CASE(70)
		UnOrderedMultiConstNode_Next_CASE(71)
		UnOrderedMultiConstNode_Next_CASE(72)
		UnOrderedMultiConstNode_Next_CASE(73)
		UnOrderedMultiConstNode_Next_CASE(74)
		UnOrderedMultiConstNode_Next_CASE(75)
		UnOrderedMultiConstNode_Next_CASE(76)
		UnOrderedMultiConstNode_Next_CASE(77)
		UnOrderedMultiConstNode_Next_CASE(78)
		UnOrderedMultiConstNode_Next_CASE(79)
		UnOrderedMultiConstNode_Next_CASE(80)
		UnOrderedMultiConstNode_Next_CASE(81)
		UnOrderedMultiConstNode_Next_CASE(82)
		UnOrderedMultiConstNode_Next_CASE(83)
		UnOrderedMultiConstNode_Next_CASE(84)
		UnOrderedMultiConstNode_Next_CASE(85)
		UnOrderedMultiConstNode_Next_CASE(86)
		UnOrderedMultiConstNode_Next_CASE(87)
		UnOrderedMultiConstNode_Next_CASE(88)
		UnOrderedMultiConstNode_Next_CASE(89)
		UnOrderedMultiConstNode_Next_CASE(90)
		UnOrderedMultiConstNode_Next_CASE(91)
		UnOrderedMultiConstNode_Next_CASE(92)
		UnOrderedMultiConstNode_Next_CASE(93)
		UnOrderedMultiConstNode_Next_CASE(94)
		UnOrderedMultiConstNode_Next_CASE(95)
		UnOrderedMultiConstNode_Next_CASE(96)
		UnOrderedMultiConstNode_Next_CASE(97)
		UnOrderedMultiConstNode_Next_CASE(98)
		UnOrderedMultiConstNode_Next_CASE(99)
		UnOrderedMultiConstNode_Next_CASE(100)
		UnOrderedMultiConstNode_Next_CASE(101)
		UnOrderedMultiConstNode_Next_CASE(102)
		UnOrderedMultiConstNode_Next_CASE(103)
		UnOrderedMultiConstNode_Next_CASE(104)
		UnOrderedMultiConstNode_Next_CASE(105)
		UnOrderedMultiConstNode_Next_CASE(106)
		UnOrderedMultiConstNode_Next_CASE(107)
		UnOrderedMultiConstNode_Next_CASE(108)
		UnOrderedMultiConstNode_Next_CASE(109)
		UnOrderedMultiConstNode_Next_CASE(110)
		UnOrderedMultiConstNode_Next_CASE(111)
		UnOrderedMultiConstNode_Next_CASE(112)
		UnOrderedMultiConstNode_Next_CASE(113)
		UnOrderedMultiConstNode_Next_CASE(114)
		UnOrderedMultiConstNode_Next_CASE(115)
		UnOrderedMultiConstNode_Next_CASE(116)
		UnOrderedMultiConstNode_Next_CASE(117)
		UnOrderedMultiConstNode_Next_CASE(118)
		UnOrderedMultiConstNode_Next_CASE(119)
		UnOrderedMultiConstNode_Next_CASE(120)
		UnOrderedMultiConstNode_Next_CASE(121)
		UnOrderedMultiConstNode_Next_CASE(122)
		UnOrderedMultiConstNode_Next_CASE(123)
		UnOrderedMultiConstNode_Next_CASE(124)
		UnOrderedMultiConstNode_Next_CASE(125)
		UnOrderedMultiConstNode_Next_CASE(126)
		UnOrderedMultiConstNode_Next_CASE(127)
		UnOrderedMultiConstNode_Next_CASE(128)
		UnOrderedMultiConstNode_Next_CASE(129)
		UnOrderedMultiConstNode_Next_CASE(130)
		UnOrderedMultiConstNode_Next_CASE(131)
		UnOrderedMultiConstNode_Next_CASE(132)
		UnOrderedMultiConstNode_Next_CASE(133)
		UnOrderedMultiConstNode_Next_CASE(134)
		UnOrderedMultiConstNode_Next_CASE(135)
		UnOrderedMultiConstNode_Next_CASE(136)
		UnOrderedMultiConstNode_Next_CASE(137)
		UnOrderedMultiConstNode_Next_CASE(138)
		UnOrderedMultiConstNode_Next_CASE(139)
		UnOrderedMultiConstNode_Next_CASE(140)
		UnOrderedMultiConstNode_Next_CASE(141)
		UnOrderedMultiConstNode_Next_CASE(142)
		UnOrderedMultiConstNode_Next_CASE(143)
		UnOrderedMultiConstNode_Next_CASE(144)
		UnOrderedMultiConstNode_Next_CASE(145)
		UnOrderedMultiConstNode_Next_CASE(146)
		UnOrderedMultiConstNode_Next_CASE(147)
		UnOrderedMultiConstNode_Next_CASE(148)
		UnOrderedMultiConstNode_Next_CASE(149)
		UnOrderedMultiConstNode_Next_CASE(150)
		UnOrderedMultiConstNode_Next_CASE(151)
		UnOrderedMultiConstNode_Next_CASE(152)
		UnOrderedMultiConstNode_Next_CASE(153)
		UnOrderedMultiConstNode_Next_CASE(154)
		UnOrderedMultiConstNode_Next_CASE(155)
		UnOrderedMultiConstNode_Next_CASE(156)
		UnOrderedMultiConstNode_Next_CASE(157)
		UnOrderedMultiConstNode_Next_CASE(158)
		UnOrderedMultiConstNode_Next_CASE(159)
		UnOrderedMultiConstNode_Next_CASE(160)
		UnOrderedMultiConstNode_Next_CASE(161)
		UnOrderedMultiConstNode_Next_CASE(162)
		UnOrderedMultiConstNode_Next_CASE(163)
		UnOrderedMultiConstNode_Next_CASE(164)
		UnOrderedMultiConstNode_Next_CASE(165)
		UnOrderedMultiConstNode_Next_CASE(166)
		UnOrderedMultiConstNode_Next_CASE(167)
		UnOrderedMultiConstNode_Next_CASE(168)
		UnOrderedMultiConstNode_Next_CASE(169)
		UnOrderedMultiConstNode_Next_CASE(170)
		UnOrderedMultiConstNode_Next_CASE(171)
		UnOrderedMultiConstNode_Next_CASE(172)
		UnOrderedMultiConstNode_Next_CASE(173)
		UnOrderedMultiConstNode_Next_CASE(174)
		UnOrderedMultiConstNode_Next_CASE(175)
		UnOrderedMultiConstNode_Next_CASE(176)
		UnOrderedMultiConstNode_Next_CASE(177)
		UnOrderedMultiConstNode_Next_CASE(178)
		UnOrderedMultiConstNode_Next_CASE(179)
		UnOrderedMultiConstNode_Next_CASE(180)
		UnOrderedMultiConstNode_Next_CASE(181)
		UnOrderedMultiConstNode_Next_CASE(182)
		UnOrderedMultiConstNode_Next_CASE(183)
		UnOrderedMultiConstNode_Next_CASE(184)
		UnOrderedMultiConstNode_Next_CASE(185)
		UnOrderedMultiConstNode_Next_CASE(186)
		UnOrderedMultiConstNode_Next_CASE(187)
		UnOrderedMultiConstNode_Next_CASE(188)
		UnOrderedMultiConstNode_Next_CASE(189)
		UnOrderedMultiConstNode_Next_CASE(190)
		UnOrderedMultiConstNode_Next_CASE(191)
		UnOrderedMultiConstNode_Next_CASE(192)
		UnOrderedMultiConstNode_Next_CASE(193)
		UnOrderedMultiConstNode_Next_CASE(194)
		UnOrderedMultiConstNode_Next_CASE(195)
		UnOrderedMultiConstNode_Next_CASE(196)
	}
}

#define UnOrderedMultiConstNode_Previous_CASE(NUM) \
	case NUM: \
		(*(multiConstNodeUnion->CPPmulticonstnode##NUM))--; \
		return;

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::Previous()
{
	if (Object::ReferenceEquals(this, nullptr)) return;
	if (isInitialized == 0) return;
	switch (nKeyValueType)
	{
	case 0: default:
		return;
		UnOrderedMultiConstNode_Previous_CASE(1)
		UnOrderedMultiConstNode_Previous_CASE(2)
		UnOrderedMultiConstNode_Previous_CASE(3)
		UnOrderedMultiConstNode_Previous_CASE(4)
		UnOrderedMultiConstNode_Previous_CASE(5)
		UnOrderedMultiConstNode_Previous_CASE(6)
		UnOrderedMultiConstNode_Previous_CASE(7)
		UnOrderedMultiConstNode_Previous_CASE(8)
		UnOrderedMultiConstNode_Previous_CASE(9)
		UnOrderedMultiConstNode_Previous_CASE(10)
		UnOrderedMultiConstNode_Previous_CASE(11)
		UnOrderedMultiConstNode_Previous_CASE(12)
		UnOrderedMultiConstNode_Previous_CASE(13)
		UnOrderedMultiConstNode_Previous_CASE(14)
		UnOrderedMultiConstNode_Previous_CASE(15)
		UnOrderedMultiConstNode_Previous_CASE(16)
		UnOrderedMultiConstNode_Previous_CASE(17)
		UnOrderedMultiConstNode_Previous_CASE(18)
		UnOrderedMultiConstNode_Previous_CASE(19)
		UnOrderedMultiConstNode_Previous_CASE(20)
		UnOrderedMultiConstNode_Previous_CASE(21)
		UnOrderedMultiConstNode_Previous_CASE(22)
		UnOrderedMultiConstNode_Previous_CASE(23)
		UnOrderedMultiConstNode_Previous_CASE(24)
		UnOrderedMultiConstNode_Previous_CASE(25)
		UnOrderedMultiConstNode_Previous_CASE(26)
		UnOrderedMultiConstNode_Previous_CASE(27)
		UnOrderedMultiConstNode_Previous_CASE(28)
		UnOrderedMultiConstNode_Previous_CASE(29)
		UnOrderedMultiConstNode_Previous_CASE(30)
		UnOrderedMultiConstNode_Previous_CASE(31)
		UnOrderedMultiConstNode_Previous_CASE(32)
		UnOrderedMultiConstNode_Previous_CASE(33)
		UnOrderedMultiConstNode_Previous_CASE(34)
		UnOrderedMultiConstNode_Previous_CASE(35)
		UnOrderedMultiConstNode_Previous_CASE(36)
		UnOrderedMultiConstNode_Previous_CASE(37)
		UnOrderedMultiConstNode_Previous_CASE(38)
		UnOrderedMultiConstNode_Previous_CASE(39)
		UnOrderedMultiConstNode_Previous_CASE(40)
		UnOrderedMultiConstNode_Previous_CASE(41)
		UnOrderedMultiConstNode_Previous_CASE(42)
		UnOrderedMultiConstNode_Previous_CASE(43)
		UnOrderedMultiConstNode_Previous_CASE(44)
		UnOrderedMultiConstNode_Previous_CASE(45)
		UnOrderedMultiConstNode_Previous_CASE(46)
		UnOrderedMultiConstNode_Previous_CASE(47)
		UnOrderedMultiConstNode_Previous_CASE(48)
		UnOrderedMultiConstNode_Previous_CASE(49)
		UnOrderedMultiConstNode_Previous_CASE(50)
		UnOrderedMultiConstNode_Previous_CASE(51)
		UnOrderedMultiConstNode_Previous_CASE(52)
		UnOrderedMultiConstNode_Previous_CASE(53)
		UnOrderedMultiConstNode_Previous_CASE(54)
		UnOrderedMultiConstNode_Previous_CASE(55)
		UnOrderedMultiConstNode_Previous_CASE(56)
		UnOrderedMultiConstNode_Previous_CASE(57)
		UnOrderedMultiConstNode_Previous_CASE(58)
		UnOrderedMultiConstNode_Previous_CASE(59)
		UnOrderedMultiConstNode_Previous_CASE(60)
		UnOrderedMultiConstNode_Previous_CASE(61)
		UnOrderedMultiConstNode_Previous_CASE(62)
		UnOrderedMultiConstNode_Previous_CASE(63)
		UnOrderedMultiConstNode_Previous_CASE(64)
		UnOrderedMultiConstNode_Previous_CASE(65)
		UnOrderedMultiConstNode_Previous_CASE(66)
		UnOrderedMultiConstNode_Previous_CASE(67)
		UnOrderedMultiConstNode_Previous_CASE(68)
		UnOrderedMultiConstNode_Previous_CASE(69)
		UnOrderedMultiConstNode_Previous_CASE(70)
		UnOrderedMultiConstNode_Previous_CASE(71)
		UnOrderedMultiConstNode_Previous_CASE(72)
		UnOrderedMultiConstNode_Previous_CASE(73)
		UnOrderedMultiConstNode_Previous_CASE(74)
		UnOrderedMultiConstNode_Previous_CASE(75)
		UnOrderedMultiConstNode_Previous_CASE(76)
		UnOrderedMultiConstNode_Previous_CASE(77)
		UnOrderedMultiConstNode_Previous_CASE(78)
		UnOrderedMultiConstNode_Previous_CASE(79)
		UnOrderedMultiConstNode_Previous_CASE(80)
		UnOrderedMultiConstNode_Previous_CASE(81)
		UnOrderedMultiConstNode_Previous_CASE(82)
		UnOrderedMultiConstNode_Previous_CASE(83)
		UnOrderedMultiConstNode_Previous_CASE(84)
		UnOrderedMultiConstNode_Previous_CASE(85)
		UnOrderedMultiConstNode_Previous_CASE(86)
		UnOrderedMultiConstNode_Previous_CASE(87)
		UnOrderedMultiConstNode_Previous_CASE(88)
		UnOrderedMultiConstNode_Previous_CASE(89)
		UnOrderedMultiConstNode_Previous_CASE(90)
		UnOrderedMultiConstNode_Previous_CASE(91)
		UnOrderedMultiConstNode_Previous_CASE(92)
		UnOrderedMultiConstNode_Previous_CASE(93)
		UnOrderedMultiConstNode_Previous_CASE(94)
		UnOrderedMultiConstNode_Previous_CASE(95)
		UnOrderedMultiConstNode_Previous_CASE(96)
		UnOrderedMultiConstNode_Previous_CASE(97)
		UnOrderedMultiConstNode_Previous_CASE(98)
		UnOrderedMultiConstNode_Previous_CASE(99)
		UnOrderedMultiConstNode_Previous_CASE(100)
		UnOrderedMultiConstNode_Previous_CASE(101)
		UnOrderedMultiConstNode_Previous_CASE(102)
		UnOrderedMultiConstNode_Previous_CASE(103)
		UnOrderedMultiConstNode_Previous_CASE(104)
		UnOrderedMultiConstNode_Previous_CASE(105)
		UnOrderedMultiConstNode_Previous_CASE(106)
		UnOrderedMultiConstNode_Previous_CASE(107)
		UnOrderedMultiConstNode_Previous_CASE(108)
		UnOrderedMultiConstNode_Previous_CASE(109)
		UnOrderedMultiConstNode_Previous_CASE(110)
		UnOrderedMultiConstNode_Previous_CASE(111)
		UnOrderedMultiConstNode_Previous_CASE(112)
		UnOrderedMultiConstNode_Previous_CASE(113)
		UnOrderedMultiConstNode_Previous_CASE(114)
		UnOrderedMultiConstNode_Previous_CASE(115)
		UnOrderedMultiConstNode_Previous_CASE(116)
		UnOrderedMultiConstNode_Previous_CASE(117)
		UnOrderedMultiConstNode_Previous_CASE(118)
		UnOrderedMultiConstNode_Previous_CASE(119)
		UnOrderedMultiConstNode_Previous_CASE(120)
		UnOrderedMultiConstNode_Previous_CASE(121)
		UnOrderedMultiConstNode_Previous_CASE(122)
		UnOrderedMultiConstNode_Previous_CASE(123)
		UnOrderedMultiConstNode_Previous_CASE(124)
		UnOrderedMultiConstNode_Previous_CASE(125)
		UnOrderedMultiConstNode_Previous_CASE(126)
		UnOrderedMultiConstNode_Previous_CASE(127)
		UnOrderedMultiConstNode_Previous_CASE(128)
		UnOrderedMultiConstNode_Previous_CASE(129)
		UnOrderedMultiConstNode_Previous_CASE(130)
		UnOrderedMultiConstNode_Previous_CASE(131)
		UnOrderedMultiConstNode_Previous_CASE(132)
		UnOrderedMultiConstNode_Previous_CASE(133)
		UnOrderedMultiConstNode_Previous_CASE(134)
		UnOrderedMultiConstNode_Previous_CASE(135)
		UnOrderedMultiConstNode_Previous_CASE(136)
		UnOrderedMultiConstNode_Previous_CASE(137)
		UnOrderedMultiConstNode_Previous_CASE(138)
		UnOrderedMultiConstNode_Previous_CASE(139)
		UnOrderedMultiConstNode_Previous_CASE(140)
		UnOrderedMultiConstNode_Previous_CASE(141)
		UnOrderedMultiConstNode_Previous_CASE(142)
		UnOrderedMultiConstNode_Previous_CASE(143)
		UnOrderedMultiConstNode_Previous_CASE(144)
		UnOrderedMultiConstNode_Previous_CASE(145)
		UnOrderedMultiConstNode_Previous_CASE(146)
		UnOrderedMultiConstNode_Previous_CASE(147)
		UnOrderedMultiConstNode_Previous_CASE(148)
		UnOrderedMultiConstNode_Previous_CASE(149)
		UnOrderedMultiConstNode_Previous_CASE(150)
		UnOrderedMultiConstNode_Previous_CASE(151)
		UnOrderedMultiConstNode_Previous_CASE(152)
		UnOrderedMultiConstNode_Previous_CASE(153)
		UnOrderedMultiConstNode_Previous_CASE(154)
		UnOrderedMultiConstNode_Previous_CASE(155)
		UnOrderedMultiConstNode_Previous_CASE(156)
		UnOrderedMultiConstNode_Previous_CASE(157)
		UnOrderedMultiConstNode_Previous_CASE(158)
		UnOrderedMultiConstNode_Previous_CASE(159)
		UnOrderedMultiConstNode_Previous_CASE(160)
		UnOrderedMultiConstNode_Previous_CASE(161)
		UnOrderedMultiConstNode_Previous_CASE(162)
		UnOrderedMultiConstNode_Previous_CASE(163)
		UnOrderedMultiConstNode_Previous_CASE(164)
		UnOrderedMultiConstNode_Previous_CASE(165)
		UnOrderedMultiConstNode_Previous_CASE(166)
		UnOrderedMultiConstNode_Previous_CASE(167)
		UnOrderedMultiConstNode_Previous_CASE(168)
		UnOrderedMultiConstNode_Previous_CASE(169)
		UnOrderedMultiConstNode_Previous_CASE(170)
		UnOrderedMultiConstNode_Previous_CASE(171)
		UnOrderedMultiConstNode_Previous_CASE(172)
		UnOrderedMultiConstNode_Previous_CASE(173)
		UnOrderedMultiConstNode_Previous_CASE(174)
		UnOrderedMultiConstNode_Previous_CASE(175)
		UnOrderedMultiConstNode_Previous_CASE(176)
		UnOrderedMultiConstNode_Previous_CASE(177)
		UnOrderedMultiConstNode_Previous_CASE(178)
		UnOrderedMultiConstNode_Previous_CASE(179)
		UnOrderedMultiConstNode_Previous_CASE(180)
		UnOrderedMultiConstNode_Previous_CASE(181)
		UnOrderedMultiConstNode_Previous_CASE(182)
		UnOrderedMultiConstNode_Previous_CASE(183)
		UnOrderedMultiConstNode_Previous_CASE(184)
		UnOrderedMultiConstNode_Previous_CASE(185)
		UnOrderedMultiConstNode_Previous_CASE(186)
		UnOrderedMultiConstNode_Previous_CASE(187)
		UnOrderedMultiConstNode_Previous_CASE(188)
		UnOrderedMultiConstNode_Previous_CASE(189)
		UnOrderedMultiConstNode_Previous_CASE(190)
		UnOrderedMultiConstNode_Previous_CASE(191)
		UnOrderedMultiConstNode_Previous_CASE(192)
		UnOrderedMultiConstNode_Previous_CASE(193)
		UnOrderedMultiConstNode_Previous_CASE(194)
		UnOrderedMultiConstNode_Previous_CASE(195)
		UnOrderedMultiConstNode_Previous_CASE(196)
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
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode14->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 28:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode28->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 42:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode42->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 56:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode56->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 70:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode70->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 84:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode84->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 98:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode98->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 112:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode112->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 126:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode126->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 140:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode140->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 154:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode154->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 168:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode168->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 182:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode182->GetValue(), objtarget))
		{
			return objtarget;
		}
		else break;
	case 196:
		if (gValueClassDictionary != nullptr && gValueClassDictionary->TryGetValue(multiConstNodeUnion->CPPmulticonstnode196->GetValue(), objtarget))
		{
			return objtarget;
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

#define UnOrderedMultiConstNode_Compare_Equals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode##NUM) == *(other->multiConstNodeUnion->CPPmulticonstnode##NUM));

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
		UnOrderedMultiConstNode_Compare_Equals_CASE(1)
		UnOrderedMultiConstNode_Compare_Equals_CASE(2)
		UnOrderedMultiConstNode_Compare_Equals_CASE(3)
		UnOrderedMultiConstNode_Compare_Equals_CASE(4)
		UnOrderedMultiConstNode_Compare_Equals_CASE(5)
		UnOrderedMultiConstNode_Compare_Equals_CASE(6)
		UnOrderedMultiConstNode_Compare_Equals_CASE(7)
		UnOrderedMultiConstNode_Compare_Equals_CASE(8)
		UnOrderedMultiConstNode_Compare_Equals_CASE(9)
		UnOrderedMultiConstNode_Compare_Equals_CASE(10)
		UnOrderedMultiConstNode_Compare_Equals_CASE(11)
		UnOrderedMultiConstNode_Compare_Equals_CASE(12)
		UnOrderedMultiConstNode_Compare_Equals_CASE(13)
		UnOrderedMultiConstNode_Compare_Equals_CASE(14)
		UnOrderedMultiConstNode_Compare_Equals_CASE(15)
		UnOrderedMultiConstNode_Compare_Equals_CASE(16)
		UnOrderedMultiConstNode_Compare_Equals_CASE(17)
		UnOrderedMultiConstNode_Compare_Equals_CASE(18)
		UnOrderedMultiConstNode_Compare_Equals_CASE(19)
		UnOrderedMultiConstNode_Compare_Equals_CASE(20)
		UnOrderedMultiConstNode_Compare_Equals_CASE(21)
		UnOrderedMultiConstNode_Compare_Equals_CASE(22)
		UnOrderedMultiConstNode_Compare_Equals_CASE(23)
		UnOrderedMultiConstNode_Compare_Equals_CASE(24)
		UnOrderedMultiConstNode_Compare_Equals_CASE(25)
		UnOrderedMultiConstNode_Compare_Equals_CASE(26)
		UnOrderedMultiConstNode_Compare_Equals_CASE(27)
		UnOrderedMultiConstNode_Compare_Equals_CASE(28)
		UnOrderedMultiConstNode_Compare_Equals_CASE(29)
		UnOrderedMultiConstNode_Compare_Equals_CASE(30)
		UnOrderedMultiConstNode_Compare_Equals_CASE(31)
		UnOrderedMultiConstNode_Compare_Equals_CASE(32)
		UnOrderedMultiConstNode_Compare_Equals_CASE(33)
		UnOrderedMultiConstNode_Compare_Equals_CASE(34)
		UnOrderedMultiConstNode_Compare_Equals_CASE(35)
		UnOrderedMultiConstNode_Compare_Equals_CASE(36)
		UnOrderedMultiConstNode_Compare_Equals_CASE(37)
		UnOrderedMultiConstNode_Compare_Equals_CASE(38)
		UnOrderedMultiConstNode_Compare_Equals_CASE(39)
		UnOrderedMultiConstNode_Compare_Equals_CASE(40)
		UnOrderedMultiConstNode_Compare_Equals_CASE(41)
		UnOrderedMultiConstNode_Compare_Equals_CASE(42)
		UnOrderedMultiConstNode_Compare_Equals_CASE(43)
		UnOrderedMultiConstNode_Compare_Equals_CASE(44)
		UnOrderedMultiConstNode_Compare_Equals_CASE(45)
		UnOrderedMultiConstNode_Compare_Equals_CASE(46)
		UnOrderedMultiConstNode_Compare_Equals_CASE(47)
		UnOrderedMultiConstNode_Compare_Equals_CASE(48)
		UnOrderedMultiConstNode_Compare_Equals_CASE(49)
		UnOrderedMultiConstNode_Compare_Equals_CASE(50)
		UnOrderedMultiConstNode_Compare_Equals_CASE(51)
		UnOrderedMultiConstNode_Compare_Equals_CASE(52)
		UnOrderedMultiConstNode_Compare_Equals_CASE(53)
		UnOrderedMultiConstNode_Compare_Equals_CASE(54)
		UnOrderedMultiConstNode_Compare_Equals_CASE(55)
		UnOrderedMultiConstNode_Compare_Equals_CASE(56)
		UnOrderedMultiConstNode_Compare_Equals_CASE(57)
		UnOrderedMultiConstNode_Compare_Equals_CASE(58)
		UnOrderedMultiConstNode_Compare_Equals_CASE(59)
		UnOrderedMultiConstNode_Compare_Equals_CASE(60)
		UnOrderedMultiConstNode_Compare_Equals_CASE(61)
		UnOrderedMultiConstNode_Compare_Equals_CASE(62)
		UnOrderedMultiConstNode_Compare_Equals_CASE(63)
		UnOrderedMultiConstNode_Compare_Equals_CASE(64)
		UnOrderedMultiConstNode_Compare_Equals_CASE(65)
		UnOrderedMultiConstNode_Compare_Equals_CASE(66)
		UnOrderedMultiConstNode_Compare_Equals_CASE(67)
		UnOrderedMultiConstNode_Compare_Equals_CASE(68)
		UnOrderedMultiConstNode_Compare_Equals_CASE(69)
		UnOrderedMultiConstNode_Compare_Equals_CASE(70)
		UnOrderedMultiConstNode_Compare_Equals_CASE(71)
		UnOrderedMultiConstNode_Compare_Equals_CASE(72)
		UnOrderedMultiConstNode_Compare_Equals_CASE(73)
		UnOrderedMultiConstNode_Compare_Equals_CASE(74)
		UnOrderedMultiConstNode_Compare_Equals_CASE(75)
		UnOrderedMultiConstNode_Compare_Equals_CASE(76)
		UnOrderedMultiConstNode_Compare_Equals_CASE(77)
		UnOrderedMultiConstNode_Compare_Equals_CASE(78)
		UnOrderedMultiConstNode_Compare_Equals_CASE(79)
		UnOrderedMultiConstNode_Compare_Equals_CASE(80)
		UnOrderedMultiConstNode_Compare_Equals_CASE(81)
		UnOrderedMultiConstNode_Compare_Equals_CASE(82)
		UnOrderedMultiConstNode_Compare_Equals_CASE(83)
		UnOrderedMultiConstNode_Compare_Equals_CASE(84)
		UnOrderedMultiConstNode_Compare_Equals_CASE(85)
		UnOrderedMultiConstNode_Compare_Equals_CASE(86)
		UnOrderedMultiConstNode_Compare_Equals_CASE(87)
		UnOrderedMultiConstNode_Compare_Equals_CASE(88)
		UnOrderedMultiConstNode_Compare_Equals_CASE(89)
		UnOrderedMultiConstNode_Compare_Equals_CASE(90)
		UnOrderedMultiConstNode_Compare_Equals_CASE(91)
		UnOrderedMultiConstNode_Compare_Equals_CASE(92)
		UnOrderedMultiConstNode_Compare_Equals_CASE(93)
		UnOrderedMultiConstNode_Compare_Equals_CASE(94)
		UnOrderedMultiConstNode_Compare_Equals_CASE(95)
		UnOrderedMultiConstNode_Compare_Equals_CASE(96)
		UnOrderedMultiConstNode_Compare_Equals_CASE(97)
		UnOrderedMultiConstNode_Compare_Equals_CASE(98)
		UnOrderedMultiConstNode_Compare_Equals_CASE(99)
		UnOrderedMultiConstNode_Compare_Equals_CASE(100)
		UnOrderedMultiConstNode_Compare_Equals_CASE(101)
		UnOrderedMultiConstNode_Compare_Equals_CASE(102)
		UnOrderedMultiConstNode_Compare_Equals_CASE(103)
		UnOrderedMultiConstNode_Compare_Equals_CASE(104)
		UnOrderedMultiConstNode_Compare_Equals_CASE(105)
		UnOrderedMultiConstNode_Compare_Equals_CASE(106)
		UnOrderedMultiConstNode_Compare_Equals_CASE(107)
		UnOrderedMultiConstNode_Compare_Equals_CASE(108)
		UnOrderedMultiConstNode_Compare_Equals_CASE(109)
		UnOrderedMultiConstNode_Compare_Equals_CASE(110)
		UnOrderedMultiConstNode_Compare_Equals_CASE(111)
		UnOrderedMultiConstNode_Compare_Equals_CASE(112)
		UnOrderedMultiConstNode_Compare_Equals_CASE(113)
		UnOrderedMultiConstNode_Compare_Equals_CASE(114)
		UnOrderedMultiConstNode_Compare_Equals_CASE(115)
		UnOrderedMultiConstNode_Compare_Equals_CASE(116)
		UnOrderedMultiConstNode_Compare_Equals_CASE(117)
		UnOrderedMultiConstNode_Compare_Equals_CASE(118)
		UnOrderedMultiConstNode_Compare_Equals_CASE(119)
		UnOrderedMultiConstNode_Compare_Equals_CASE(120)
		UnOrderedMultiConstNode_Compare_Equals_CASE(121)
		UnOrderedMultiConstNode_Compare_Equals_CASE(122)
		UnOrderedMultiConstNode_Compare_Equals_CASE(123)
		UnOrderedMultiConstNode_Compare_Equals_CASE(124)
		UnOrderedMultiConstNode_Compare_Equals_CASE(125)
		UnOrderedMultiConstNode_Compare_Equals_CASE(126)
		UnOrderedMultiConstNode_Compare_Equals_CASE(127)
		UnOrderedMultiConstNode_Compare_Equals_CASE(128)
		UnOrderedMultiConstNode_Compare_Equals_CASE(129)
		UnOrderedMultiConstNode_Compare_Equals_CASE(130)
		UnOrderedMultiConstNode_Compare_Equals_CASE(131)
		UnOrderedMultiConstNode_Compare_Equals_CASE(132)
		UnOrderedMultiConstNode_Compare_Equals_CASE(133)
		UnOrderedMultiConstNode_Compare_Equals_CASE(134)
		UnOrderedMultiConstNode_Compare_Equals_CASE(135)
		UnOrderedMultiConstNode_Compare_Equals_CASE(136)
		UnOrderedMultiConstNode_Compare_Equals_CASE(137)
		UnOrderedMultiConstNode_Compare_Equals_CASE(138)
		UnOrderedMultiConstNode_Compare_Equals_CASE(139)
		UnOrderedMultiConstNode_Compare_Equals_CASE(140)
		UnOrderedMultiConstNode_Compare_Equals_CASE(141)
		UnOrderedMultiConstNode_Compare_Equals_CASE(142)
		UnOrderedMultiConstNode_Compare_Equals_CASE(143)
		UnOrderedMultiConstNode_Compare_Equals_CASE(144)
		UnOrderedMultiConstNode_Compare_Equals_CASE(145)
		UnOrderedMultiConstNode_Compare_Equals_CASE(146)
		UnOrderedMultiConstNode_Compare_Equals_CASE(147)
		UnOrderedMultiConstNode_Compare_Equals_CASE(148)
		UnOrderedMultiConstNode_Compare_Equals_CASE(149)
		UnOrderedMultiConstNode_Compare_Equals_CASE(150)
		UnOrderedMultiConstNode_Compare_Equals_CASE(151)
		UnOrderedMultiConstNode_Compare_Equals_CASE(152)
		UnOrderedMultiConstNode_Compare_Equals_CASE(153)
		UnOrderedMultiConstNode_Compare_Equals_CASE(154)
		UnOrderedMultiConstNode_Compare_Equals_CASE(155)
		UnOrderedMultiConstNode_Compare_Equals_CASE(156)
		UnOrderedMultiConstNode_Compare_Equals_CASE(157)
		UnOrderedMultiConstNode_Compare_Equals_CASE(158)
		UnOrderedMultiConstNode_Compare_Equals_CASE(159)
		UnOrderedMultiConstNode_Compare_Equals_CASE(160)
		UnOrderedMultiConstNode_Compare_Equals_CASE(161)
		UnOrderedMultiConstNode_Compare_Equals_CASE(162)
		UnOrderedMultiConstNode_Compare_Equals_CASE(163)
		UnOrderedMultiConstNode_Compare_Equals_CASE(164)
		UnOrderedMultiConstNode_Compare_Equals_CASE(165)
		UnOrderedMultiConstNode_Compare_Equals_CASE(166)
		UnOrderedMultiConstNode_Compare_Equals_CASE(167)
		UnOrderedMultiConstNode_Compare_Equals_CASE(168)
		UnOrderedMultiConstNode_Compare_Equals_CASE(169)
		UnOrderedMultiConstNode_Compare_Equals_CASE(170)
		UnOrderedMultiConstNode_Compare_Equals_CASE(171)
		UnOrderedMultiConstNode_Compare_Equals_CASE(172)
		UnOrderedMultiConstNode_Compare_Equals_CASE(173)
		UnOrderedMultiConstNode_Compare_Equals_CASE(174)
		UnOrderedMultiConstNode_Compare_Equals_CASE(175)
		UnOrderedMultiConstNode_Compare_Equals_CASE(176)
		UnOrderedMultiConstNode_Compare_Equals_CASE(177)
		UnOrderedMultiConstNode_Compare_Equals_CASE(178)
		UnOrderedMultiConstNode_Compare_Equals_CASE(179)
		UnOrderedMultiConstNode_Compare_Equals_CASE(180)
		UnOrderedMultiConstNode_Compare_Equals_CASE(181)
		UnOrderedMultiConstNode_Compare_Equals_CASE(182)
		UnOrderedMultiConstNode_Compare_Equals_CASE(183)
		UnOrderedMultiConstNode_Compare_Equals_CASE(184)
		UnOrderedMultiConstNode_Compare_Equals_CASE(185)
		UnOrderedMultiConstNode_Compare_Equals_CASE(186)
		UnOrderedMultiConstNode_Compare_Equals_CASE(187)
		UnOrderedMultiConstNode_Compare_Equals_CASE(188)
		UnOrderedMultiConstNode_Compare_Equals_CASE(189)
		UnOrderedMultiConstNode_Compare_Equals_CASE(190)
		UnOrderedMultiConstNode_Compare_Equals_CASE(191)
		UnOrderedMultiConstNode_Compare_Equals_CASE(192)
		UnOrderedMultiConstNode_Compare_Equals_CASE(193)
		UnOrderedMultiConstNode_Compare_Equals_CASE(194)
		UnOrderedMultiConstNode_Compare_Equals_CASE(195)
		UnOrderedMultiConstNode_Compare_Equals_CASE(196)
	}
	return false;
}

#define UnOrderedMultiConstNode_Compare_NotEquals_CASE(NUM) \
	case NUM: \
		return (*(thisObj->multiConstNodeUnion->CPPmulticonstnode##NUM) != *(other->multiConstNodeUnion->CPPmulticonstnode##NUM));

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
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(1)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(2)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(3)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(4)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(5)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(6)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(7)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(8)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(9)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(10)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(11)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(12)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(13)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(14)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(15)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(16)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(17)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(18)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(19)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(20)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(21)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(22)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(23)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(24)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(25)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(26)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(27)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(28)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(29)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(30)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(31)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(32)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(33)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(34)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(35)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(36)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(37)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(38)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(39)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(40)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(41)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(42)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(43)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(44)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(45)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(46)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(47)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(48)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(49)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(50)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(51)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(52)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(53)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(54)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(55)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(56)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(57)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(58)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(59)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(60)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(61)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(62)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(63)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(64)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(65)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(66)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(67)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(68)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(69)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(70)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(71)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(72)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(73)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(74)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(75)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(76)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(77)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(78)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(79)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(80)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(81)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(82)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(83)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(84)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(85)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(86)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(87)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(88)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(89)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(90)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(91)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(92)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(93)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(94)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(95)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(96)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(97)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(98)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(99)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(100)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(101)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(102)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(103)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(104)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(105)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(106)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(107)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(108)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(109)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(110)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(111)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(112)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(113)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(114)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(115)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(116)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(117)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(118)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(119)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(120)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(121)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(122)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(123)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(124)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(125)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(126)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(127)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(128)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(129)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(130)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(131)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(132)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(133)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(134)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(135)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(136)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(137)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(138)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(139)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(140)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(141)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(142)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(143)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(144)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(145)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(146)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(147)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(148)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(149)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(150)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(151)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(152)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(153)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(154)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(155)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(156)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(157)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(158)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(159)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(160)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(161)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(162)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(163)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(164)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(165)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(166)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(167)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(168)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(169)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(170)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(171)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(172)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(173)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(174)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(175)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(176)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(177)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(178)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(179)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(180)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(181)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(182)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(183)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(184)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(185)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(186)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(187)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(188)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(189)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(190)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(191)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(192)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(193)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(194)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(195)
		UnOrderedMultiConstNode_Compare_NotEquals_CASE(196)
	}
	return false;
}

#define UnOrderedMultiConstNode_Copy_CASE(NUM) \
	case NUM: \
		(*(thisObj->multiConstNodeUnion->CPPmulticonstnode##NUM) = *(other->multiConstNodeUnion->CPPmulticonstnode##NUM)); \
		break;

generic<typename Key, typename Value>
UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^ UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::operator%(CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj, CShorpUnOrderedMultiConstNode<Key, Value>^ other)
{
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(thisObj), nullptr)) return nullptr;
	if (Object::ReferenceEquals(const_cast<UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>^>(other), nullptr)) return thisObj;
	if (other->isInitialized == 0) return thisObj;
	thisObj->isInitialized = other->isInitialized;

	if (thisObj->nKeyValueType != other->nKeyValueType) return thisObj;

	if (other->gIntKeyClassDictionary) thisObj->gIntKeyClassDictionary = other->gIntKeyClassDictionary;
	if (other->gValueClassDictionary) thisObj->gValueClassDictionary = other->gValueClassDictionary;

	switch (thisObj->nKeyValueType)
	{
	case 0: default:
		break;
		UnOrderedMultiConstNode_Copy_CASE(1)
		UnOrderedMultiConstNode_Copy_CASE(2)
		UnOrderedMultiConstNode_Copy_CASE(3)
		UnOrderedMultiConstNode_Copy_CASE(4)
		UnOrderedMultiConstNode_Copy_CASE(5)
		UnOrderedMultiConstNode_Copy_CASE(6)
		UnOrderedMultiConstNode_Copy_CASE(7)
		UnOrderedMultiConstNode_Copy_CASE(8)
		UnOrderedMultiConstNode_Copy_CASE(9)
		UnOrderedMultiConstNode_Copy_CASE(10)
		UnOrderedMultiConstNode_Copy_CASE(11)
		UnOrderedMultiConstNode_Copy_CASE(12)
		UnOrderedMultiConstNode_Copy_CASE(13)
		UnOrderedMultiConstNode_Copy_CASE(14)
		UnOrderedMultiConstNode_Copy_CASE(15)
		UnOrderedMultiConstNode_Copy_CASE(16)
		UnOrderedMultiConstNode_Copy_CASE(17)
		UnOrderedMultiConstNode_Copy_CASE(18)
		UnOrderedMultiConstNode_Copy_CASE(19)
		UnOrderedMultiConstNode_Copy_CASE(20)
		UnOrderedMultiConstNode_Copy_CASE(21)
		UnOrderedMultiConstNode_Copy_CASE(22)
		UnOrderedMultiConstNode_Copy_CASE(23)
		UnOrderedMultiConstNode_Copy_CASE(24)
		UnOrderedMultiConstNode_Copy_CASE(25)
		UnOrderedMultiConstNode_Copy_CASE(26)
		UnOrderedMultiConstNode_Copy_CASE(27)
		UnOrderedMultiConstNode_Copy_CASE(28)
		UnOrderedMultiConstNode_Copy_CASE(29)
		UnOrderedMultiConstNode_Copy_CASE(30)
		UnOrderedMultiConstNode_Copy_CASE(31)
		UnOrderedMultiConstNode_Copy_CASE(32)
		UnOrderedMultiConstNode_Copy_CASE(33)
		UnOrderedMultiConstNode_Copy_CASE(34)
		UnOrderedMultiConstNode_Copy_CASE(35)
		UnOrderedMultiConstNode_Copy_CASE(36)
		UnOrderedMultiConstNode_Copy_CASE(37)
		UnOrderedMultiConstNode_Copy_CASE(38)
		UnOrderedMultiConstNode_Copy_CASE(39)
		UnOrderedMultiConstNode_Copy_CASE(40)
		UnOrderedMultiConstNode_Copy_CASE(41)
		UnOrderedMultiConstNode_Copy_CASE(42)
		UnOrderedMultiConstNode_Copy_CASE(43)
		UnOrderedMultiConstNode_Copy_CASE(44)
		UnOrderedMultiConstNode_Copy_CASE(45)
		UnOrderedMultiConstNode_Copy_CASE(46)
		UnOrderedMultiConstNode_Copy_CASE(47)
		UnOrderedMultiConstNode_Copy_CASE(48)
		UnOrderedMultiConstNode_Copy_CASE(49)
		UnOrderedMultiConstNode_Copy_CASE(50)
		UnOrderedMultiConstNode_Copy_CASE(51)
		UnOrderedMultiConstNode_Copy_CASE(52)
		UnOrderedMultiConstNode_Copy_CASE(53)
		UnOrderedMultiConstNode_Copy_CASE(54)
		UnOrderedMultiConstNode_Copy_CASE(55)
		UnOrderedMultiConstNode_Copy_CASE(56)
		UnOrderedMultiConstNode_Copy_CASE(57)
		UnOrderedMultiConstNode_Copy_CASE(58)
		UnOrderedMultiConstNode_Copy_CASE(59)
		UnOrderedMultiConstNode_Copy_CASE(60)
		UnOrderedMultiConstNode_Copy_CASE(61)
		UnOrderedMultiConstNode_Copy_CASE(62)
		UnOrderedMultiConstNode_Copy_CASE(63)
		UnOrderedMultiConstNode_Copy_CASE(64)
		UnOrderedMultiConstNode_Copy_CASE(65)
		UnOrderedMultiConstNode_Copy_CASE(66)
		UnOrderedMultiConstNode_Copy_CASE(67)
		UnOrderedMultiConstNode_Copy_CASE(68)
		UnOrderedMultiConstNode_Copy_CASE(69)
		UnOrderedMultiConstNode_Copy_CASE(70)
		UnOrderedMultiConstNode_Copy_CASE(71)
		UnOrderedMultiConstNode_Copy_CASE(72)
		UnOrderedMultiConstNode_Copy_CASE(73)
		UnOrderedMultiConstNode_Copy_CASE(74)
		UnOrderedMultiConstNode_Copy_CASE(75)
		UnOrderedMultiConstNode_Copy_CASE(76)
		UnOrderedMultiConstNode_Copy_CASE(77)
		UnOrderedMultiConstNode_Copy_CASE(78)
		UnOrderedMultiConstNode_Copy_CASE(79)
		UnOrderedMultiConstNode_Copy_CASE(80)
		UnOrderedMultiConstNode_Copy_CASE(81)
		UnOrderedMultiConstNode_Copy_CASE(82)
		UnOrderedMultiConstNode_Copy_CASE(83)
		UnOrderedMultiConstNode_Copy_CASE(84)
		UnOrderedMultiConstNode_Copy_CASE(85)
		UnOrderedMultiConstNode_Copy_CASE(86)
		UnOrderedMultiConstNode_Copy_CASE(87)
		UnOrderedMultiConstNode_Copy_CASE(88)
		UnOrderedMultiConstNode_Copy_CASE(89)
		UnOrderedMultiConstNode_Copy_CASE(90)
		UnOrderedMultiConstNode_Copy_CASE(91)
		UnOrderedMultiConstNode_Copy_CASE(92)
		UnOrderedMultiConstNode_Copy_CASE(93)
		UnOrderedMultiConstNode_Copy_CASE(94)
		UnOrderedMultiConstNode_Copy_CASE(95)
		UnOrderedMultiConstNode_Copy_CASE(96)
		UnOrderedMultiConstNode_Copy_CASE(97)
		UnOrderedMultiConstNode_Copy_CASE(98)
		UnOrderedMultiConstNode_Copy_CASE(99)
		UnOrderedMultiConstNode_Copy_CASE(100)
		UnOrderedMultiConstNode_Copy_CASE(101)
		UnOrderedMultiConstNode_Copy_CASE(102)
		UnOrderedMultiConstNode_Copy_CASE(103)
		UnOrderedMultiConstNode_Copy_CASE(104)
		UnOrderedMultiConstNode_Copy_CASE(105)
		UnOrderedMultiConstNode_Copy_CASE(106)
		UnOrderedMultiConstNode_Copy_CASE(107)
		UnOrderedMultiConstNode_Copy_CASE(108)
		UnOrderedMultiConstNode_Copy_CASE(109)
		UnOrderedMultiConstNode_Copy_CASE(110)
		UnOrderedMultiConstNode_Copy_CASE(111)
		UnOrderedMultiConstNode_Copy_CASE(112)
		UnOrderedMultiConstNode_Copy_CASE(113)
		UnOrderedMultiConstNode_Copy_CASE(114)
		UnOrderedMultiConstNode_Copy_CASE(115)
		UnOrderedMultiConstNode_Copy_CASE(116)
		UnOrderedMultiConstNode_Copy_CASE(117)
		UnOrderedMultiConstNode_Copy_CASE(118)
		UnOrderedMultiConstNode_Copy_CASE(119)
		UnOrderedMultiConstNode_Copy_CASE(120)
		UnOrderedMultiConstNode_Copy_CASE(121)
		UnOrderedMultiConstNode_Copy_CASE(122)
		UnOrderedMultiConstNode_Copy_CASE(123)
		UnOrderedMultiConstNode_Copy_CASE(124)
		UnOrderedMultiConstNode_Copy_CASE(125)
		UnOrderedMultiConstNode_Copy_CASE(126)
		UnOrderedMultiConstNode_Copy_CASE(127)
		UnOrderedMultiConstNode_Copy_CASE(128)
		UnOrderedMultiConstNode_Copy_CASE(129)
		UnOrderedMultiConstNode_Copy_CASE(130)
		UnOrderedMultiConstNode_Copy_CASE(131)
		UnOrderedMultiConstNode_Copy_CASE(132)
		UnOrderedMultiConstNode_Copy_CASE(133)
		UnOrderedMultiConstNode_Copy_CASE(134)
		UnOrderedMultiConstNode_Copy_CASE(135)
		UnOrderedMultiConstNode_Copy_CASE(136)
		UnOrderedMultiConstNode_Copy_CASE(137)
		UnOrderedMultiConstNode_Copy_CASE(138)
		UnOrderedMultiConstNode_Copy_CASE(139)
		UnOrderedMultiConstNode_Copy_CASE(140)
		UnOrderedMultiConstNode_Copy_CASE(141)
		UnOrderedMultiConstNode_Copy_CASE(142)
		UnOrderedMultiConstNode_Copy_CASE(143)
		UnOrderedMultiConstNode_Copy_CASE(144)
		UnOrderedMultiConstNode_Copy_CASE(145)
		UnOrderedMultiConstNode_Copy_CASE(146)
		UnOrderedMultiConstNode_Copy_CASE(147)
		UnOrderedMultiConstNode_Copy_CASE(148)
		UnOrderedMultiConstNode_Copy_CASE(149)
		UnOrderedMultiConstNode_Copy_CASE(150)
		UnOrderedMultiConstNode_Copy_CASE(151)
		UnOrderedMultiConstNode_Copy_CASE(152)
		UnOrderedMultiConstNode_Copy_CASE(153)
		UnOrderedMultiConstNode_Copy_CASE(154)
		UnOrderedMultiConstNode_Copy_CASE(155)
		UnOrderedMultiConstNode_Copy_CASE(156)
		UnOrderedMultiConstNode_Copy_CASE(157)
		UnOrderedMultiConstNode_Copy_CASE(158)
		UnOrderedMultiConstNode_Copy_CASE(159)
		UnOrderedMultiConstNode_Copy_CASE(160)
		UnOrderedMultiConstNode_Copy_CASE(161)
		UnOrderedMultiConstNode_Copy_CASE(162)
		UnOrderedMultiConstNode_Copy_CASE(163)
		UnOrderedMultiConstNode_Copy_CASE(164)
		UnOrderedMultiConstNode_Copy_CASE(165)
		UnOrderedMultiConstNode_Copy_CASE(166)
		UnOrderedMultiConstNode_Copy_CASE(167)
		UnOrderedMultiConstNode_Copy_CASE(168)
		UnOrderedMultiConstNode_Copy_CASE(169)
		UnOrderedMultiConstNode_Copy_CASE(170)
		UnOrderedMultiConstNode_Copy_CASE(171)
		UnOrderedMultiConstNode_Copy_CASE(172)
		UnOrderedMultiConstNode_Copy_CASE(173)
		UnOrderedMultiConstNode_Copy_CASE(174)
		UnOrderedMultiConstNode_Copy_CASE(175)
		UnOrderedMultiConstNode_Copy_CASE(176)
		UnOrderedMultiConstNode_Copy_CASE(177)
		UnOrderedMultiConstNode_Copy_CASE(178)
		UnOrderedMultiConstNode_Copy_CASE(179)
		UnOrderedMultiConstNode_Copy_CASE(180)
		UnOrderedMultiConstNode_Copy_CASE(181)
		UnOrderedMultiConstNode_Copy_CASE(182)
		UnOrderedMultiConstNode_Copy_CASE(183)
		UnOrderedMultiConstNode_Copy_CASE(184)
		UnOrderedMultiConstNode_Copy_CASE(185)
		UnOrderedMultiConstNode_Copy_CASE(186)
		UnOrderedMultiConstNode_Copy_CASE(187)
		UnOrderedMultiConstNode_Copy_CASE(188)
		UnOrderedMultiConstNode_Copy_CASE(189)
		UnOrderedMultiConstNode_Copy_CASE(190)
		UnOrderedMultiConstNode_Copy_CASE(191)
		UnOrderedMultiConstNode_Copy_CASE(192)
		UnOrderedMultiConstNode_Copy_CASE(193)
		UnOrderedMultiConstNode_Copy_CASE(194)
		UnOrderedMultiConstNode_Copy_CASE(195)
		UnOrderedMultiConstNode_Copy_CASE(196)
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

generic<typename Key, typename Value>
void UnOrderedMultiMapWapper::CShorpUnOrderedMultiConstNode<Key, Value>::SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary)
{
	if (gValueClassDictionary == nullptr) return;
	gValueClassDictionary = ClassDictionary;
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