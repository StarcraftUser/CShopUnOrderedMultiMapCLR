#pragma once

using namespace System;

namespace UnOrderedMultiMapWapper
{
	generic<typename Key, typename Value>
	public ref class CShorpUnOrderedMultiNode
	{
	private:
		Utilities::UnOrderedMultiNodeUnion* multiNodeUnion;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary;
		int nKeyValueType = 0;
		int isInitialized = 0;
		/*virtual*/ void Next();
		/*virtual*/ void Previous();
	internal:
		/*virtual*/ Utilities::UnOrderedMultiNodeUnion* GetNode()
		{
			if (Object::ReferenceEquals(this, nullptr)) return nullptr;
			isInitialized = 1;
			return multiNodeUnion;
		}
		/*virtual*/ int GetKVType()
		{
			return this->nKeyValueType;
		}
		/*virtual*/ int GetInit()
		{
			return this->isInitialized;
		}
		/*virtual*/ void SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary);
		/*virtual*/ void SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary);
	public:
		CShorpUnOrderedMultiNode();
		/*virtual*/ ~CShorpUnOrderedMultiNode();
		/*virtual*/ Value GetValue();
		/*virtual*/ Key GetKey();
		/*virtual*/ void SetValue(Value value);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ DeepCopy();
		static CShorpUnOrderedMultiNode<Key, Value>^ operator ++(CShorpUnOrderedMultiNode<Key, Value>^ thisObj);
		static CShorpUnOrderedMultiNode<Key, Value>^ operator --(CShorpUnOrderedMultiNode<Key, Value>^ thisObj);
		//static CShorpMultiNode<Key, Value>^ operator ++(CShorpMultiNode<Key, Value>^ thisObj, int);
		///*virtual*/ CShorpMultiNode<Key, Value>^ operator++();
		///*virtual*/ CShorpMultiNode<Key, Value>^ operator++(int);
		static bool operator==(const CShorpUnOrderedMultiNode<Key, Value>^ thisObj, const CShorpUnOrderedMultiNode<Key, Value>^ other);
		static bool operator!=(const CShorpUnOrderedMultiNode<Key, Value>^ thisObj, const CShorpUnOrderedMultiNode<Key, Value>^ other);
		static CShorpUnOrderedMultiNode<Key, Value>^ operator%(CShorpUnOrderedMultiNode<Key, Value>^ thisObj, CShorpUnOrderedMultiNode<Key, Value>^ other);
	};

	generic<typename Key, typename Value>
	public ref class CShorpUnOrderedMultiConstNode
	{
	private:
		Utilities::UnOrderedMultiConstNodeUnion* multiConstNodeUnion;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary;
		int nKeyValueType = 0;
		int isInitialized = 0;
		/*virtual*/ void Next();
		/*virtual*/ void Previous();
	internal:
		/*virtual*/ Utilities::UnOrderedMultiConstNodeUnion* GetNode()
		{
			if (Object::ReferenceEquals(this, nullptr)) return nullptr;
			isInitialized = 1;
			return multiConstNodeUnion;
		}
		/*virtual*/ int GetKVType()
		{
			return this->nKeyValueType;
		}
		/*virtual*/ int GetInit()
		{
			return this->isInitialized;
		}
		/*virtual*/ void SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary);
		/*virtual*/ void SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary);
	public:
		CShorpUnOrderedMultiConstNode();
		/*virtual*/ ~CShorpUnOrderedMultiConstNode();
		/*virtual*/ Value GetValue();
		/*virtual*/ Key GetKey();
		/*virtual*/ CShorpUnOrderedMultiConstNode<Key, Value>^ DeepCopy();
		static CShorpUnOrderedMultiConstNode<Key, Value>^ operator ++(CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj);
		static CShorpUnOrderedMultiConstNode<Key, Value>^ operator --(CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj);
		///*virtual*/ CShorpMultiConstNode<Key, Value>^ operator++();
		///*virtual*/ CShorpMultiConstNode<Key, Value>^ operator++(int);
		static bool operator==(const CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj, const CShorpUnOrderedMultiConstNode<Key, Value>^ other);
		static bool operator!=(const CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj, const CShorpUnOrderedMultiConstNode<Key, Value>^ other);
		static CShorpUnOrderedMultiConstNode<Key, Value>^ operator%(CShorpUnOrderedMultiConstNode<Key, Value>^ thisObj, CShorpUnOrderedMultiConstNode<Key, Value>^ other);
	};

	generic<typename Key, typename Value>
	public ref class CShorpUnOrderedReverseNode
	{
	private:
		Utilities::UnOrderedReverseNodeUnion* reverseNodeUnion;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary;
		int nKeyValueType = 0;
		int isInitialized = 0;
		/*virtual*/ void Next();
		/*virtual*/ void Previous();
	internal:
		/*virtual*/ Utilities::UnOrderedReverseNodeUnion* GetNode()
		{
			if (Object::ReferenceEquals(this, nullptr)) return nullptr;
			isInitialized = 1;
			return reverseNodeUnion;
		}
		/*virtual*/ int GetKVType()
		{
			return this->nKeyValueType;
		}
		/*virtual*/ int GetInit()
		{
			return this->isInitialized;
		}
		/*virtual*/ void SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary);
		/*virtual*/ void SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary);
	public:
		CShorpUnOrderedReverseNode();
		/*virtual*/ ~CShorpUnOrderedReverseNode();
		/*virtual*/ Value GetValue();
		/*virtual*/ Key GetKey();
		/*virtual*/ void SetValue(Value value);
		/*virtual*/ CShorpUnOrderedReverseNode<Key, Value>^ DeepCopy();
		static CShorpUnOrderedReverseNode<Key, Value>^ operator ++(CShorpUnOrderedReverseNode<Key, Value>^ thisObj);
		static CShorpUnOrderedReverseNode<Key, Value>^ operator --(CShorpUnOrderedReverseNode<Key, Value>^ thisObj);
		///*virtual*/ CShorpReverseNode<Key, Value>^ operator++();
		///*virtual*/ CShorpReverseNode<Key, Value>^ operator++(int);
		static bool operator==(const CShorpUnOrderedReverseNode<Key, Value>^ thisObj, const CShorpUnOrderedReverseNode<Key, Value>^ other);
		static bool operator!=(const CShorpUnOrderedReverseNode<Key, Value>^ thisObj, const CShorpUnOrderedReverseNode<Key, Value>^ other);
		static CShorpUnOrderedReverseNode<Key, Value>^ operator%(CShorpUnOrderedReverseNode<Key, Value>^ thisObj, CShorpUnOrderedReverseNode<Key, Value>^ other);
	};

	generic <typename Key, typename Value>
	public ref class CShorpUnOrderedCReverseNode
	{
	private:
		Utilities::UnOrderedCReverseNodeUnion* creverseNodeUnion;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary;
		int nKeyValueType = 0;
		int isInitialized = 0;
		/*virtual*/ void Next();
		/*virtual*/ void Previous();
	internal:
		/*virtual*/ Utilities::UnOrderedCReverseNodeUnion* GetNode()
		{
			if (Object::ReferenceEquals(this, nullptr)) return nullptr;
			isInitialized = 1;
			return creverseNodeUnion;
		}
		/*virtual*/ int GetKVType()
		{
			return this->nKeyValueType;
		}
		/*virtual*/ int GetInit()
		{
			return this->isInitialized;
		}
		/*virtual*/ void SetIntKeyClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Key>^ ClassDictionary);
		/*virtual*/ void SetValueClassDictionary(System::Collections::Generic::Dictionary<System::Int64, Value>^ ClassDictionary);
	public:
		CShorpUnOrderedCReverseNode();
		/*virtual*/ ~CShorpUnOrderedCReverseNode();
		/*virtual*/ Value GetValue();
		/*virtual*/ Key GetKey();
		/*virtual*/ CShorpUnOrderedCReverseNode<Key, Value>^ DeepCopy();
		static CShorpUnOrderedCReverseNode<Key, Value>^ operator ++(CShorpUnOrderedCReverseNode<Key, Value>^ thisObj);
		static CShorpUnOrderedCReverseNode<Key, Value>^ operator --(CShorpUnOrderedCReverseNode<Key, Value>^ thisObj);
		///*virtual*/ CShorpCReverseNode<Key, Value>^ operator++();
		///*virtual*/ CShorpCReverseNode<Key, Value>^ operator++(int);
		static bool operator==(const CShorpUnOrderedCReverseNode<Key, Value>^ thisObj, const CShorpUnOrderedCReverseNode<Key, Value>^ other);
		static bool operator!=(const CShorpUnOrderedCReverseNode<Key, Value>^ thisObj, const CShorpUnOrderedCReverseNode<Key, Value>^ other);
		static CShorpUnOrderedCReverseNode<Key, Value>^ operator%(CShorpUnOrderedCReverseNode<Key, Value>^ thisObj, CShorpUnOrderedCReverseNode<Key, Value>^ other);
	};

	generic <typename Key, typename Value>
	public ref class CSharpUnOrderedMultiMap : public System::Collections::IEnumerable
	{
	protected :
		Utilities::UnOrderedMultiMapUnion* multimapUnion;
		CShorpUnOrderedMultiNode<Key, Value>^ multiNode;
		CShorpUnOrderedMultiNode<Key, Value>^ KeyEndNode;
		CShorpUnOrderedReverseNode<Key, Value>^ RIterNode;
		System::Collections::Generic::Dictionary<Key, System::Int64>^ gKeyClassDictionary = nullptr;
		System::Collections::Generic::Dictionary<System::Int64, Key>^ gIntKeyClassDictionary = nullptr;
		System::Collections::Generic::Dictionary<System::Int64, Value>^ gValueClassDictionary = nullptr;
		//static System::Int64 nDictionaryValueCount = 0;
		System::Int64 nDictionaryCount = 0;
		int nKeyValueType = 0;

	public :
		CSharpUnOrderedMultiMap();
		CSharpUnOrderedMultiMap(CSharpUnOrderedMultiMap<Key, Value>^ other);
		/*virtual*/ ~CSharpUnOrderedMultiMap();
		/*virtual*/ void clear();
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ emplace(Key key, Value value);
		/*virtual*/ System::UInt64 size();
		/*virtual*/ System::UInt64 count(const Key key);
		/*virtual*/ System::UInt64 erase(const Key key);
		/*virtual*/ System::Boolean empty();
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ find(const Key key);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ begin();
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ end();
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ endCopy();
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ KeyEnd();
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ KeyEndCopy();
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ erase(CShorpUnOrderedMultiNode<Key, Value>^ _Where);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ erase(CShorpUnOrderedMultiNode<Key, Value>^ First, CShorpUnOrderedMultiNode<Key, Value>^ Last);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ erase(CShorpUnOrderedMultiConstNode<Key, Value>^ _Where);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ erase(CShorpUnOrderedMultiConstNode<Key, Value>^ First, CShorpUnOrderedMultiConstNode<Key, Value>^ Last);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ equal_range(const Key key);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ insert(Key key, Value value);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ insert(CShorpUnOrderedMultiNode<Key, Value>^ _Where, Key key, Value value);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ insert(CShorpUnOrderedMultiConstNode<Key, Value>^ _Where, Key key, Value value);
		/*virtual*/ CShorpUnOrderedMultiConstNode<Key, Value>^ cbegin();
		/*virtual*/ CShorpUnOrderedMultiConstNode<Key, Value>^ cend();
		/*virtual*/ CShorpUnOrderedReverseNode<Key, Value>^ rbegin();
		/*virtual*/ CShorpUnOrderedReverseNode<Key, Value>^ rend();
		/*virtual*/ CShorpUnOrderedReverseNode<Key, Value>^ rendCopy();
		/*virtual*/ CShorpUnOrderedCReverseNode<Key, Value>^ crbegin();
		/*virtual*/ CShorpUnOrderedCReverseNode<Key, Value>^ crend();
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ emplace_hint(CShorpUnOrderedMultiNode<Key, Value>^ _Where, Key key, Value value);
		/*virtual*/ CShorpUnOrderedMultiNode<Key, Value>^ emplace_hint(CShorpUnOrderedMultiConstNode<Key, Value>^ _Where, Key key, Value value);
		/*virtual*/ void Swap(CSharpUnOrderedMultiMap<Key, Value>^ OtherCSharpUnOrderedMultiMap);
		/*virtual*/ System::UInt64 max_size();
		/*virtual*/ System::Boolean contains(const Key key);
		///*virtual*/ Value operator[](System::Int32 index);

		virtual System::Collections::IEnumerator^ GetEnumerator() sealed = System::Collections::IEnumerable::GetEnumerator
		{
			return gcnew CSharpUnOrderedMultiMapEnumerator(this);
		}
	internal:
		System::Collections::Generic::Dictionary<System::Int64, Value>^ ValueClassDictionary();
		System::Collections::Generic::Dictionary<System::Int64, Key>^ KeyClassDictionary();
	private:
		ref class CSharpUnOrderedMultiMapEnumerator : public System::Collections::IEnumerator
		{
		private:
			CSharpUnOrderedMultiMap<Key, Value>^ unorderedmultiMap;
			CShorpUnOrderedMultiNode<Key, Value>^ currentNode;
			System::Int32 nFirst;

		public:
			CSharpUnOrderedMultiMapEnumerator(CSharpUnOrderedMultiMap<Key, Value>^ map)
			{
				// 초기화
				unorderedmultiMap = map;
				currentNode = unorderedmultiMap->begin();
				nFirst = 1;
			}

			virtual bool MoveNext()
			{
				if (nFirst == 1)
				{
					nFirst = 0;
					return currentNode != unorderedmultiMap->end();
				}

				if (currentNode == unorderedmultiMap->end())
					return false;

				currentNode = ++currentNode; // 다음 노드로 이동
				return currentNode != unorderedmultiMap->end();
			}

			virtual void Reset()// 리셋
			{
				nFirst = 1;
				currentNode = unorderedmultiMap->begin();
			}

			property Object^ Current
			{
				virtual Object^ get() = System::Collections::IEnumerator::Current::get
				{
					if (currentNode == nullptr || currentNode == unorderedmultiMap->end()) return nullptr;
					return currentNode;
				}
			}
		};
	};
}
