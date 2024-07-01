#pragma once
#include <unordered_map>
/////////////////////////////////////////////////////////////////
//iterator Class
/////////////////////////////////////////////////////////////////



template<typename Key, typename Value>
class UnOrderedMultiMap;

/////////////////////////////////////////////////////////////////
//iterator Wapper Node
/////////////////////////////////////////////////////////////////

template<typename Key, typename Value>
class UnOrderedMultiNode
{
	friend class UnOrderedMultiMap<Key, Value>;
protected:
	template<typename Key, typename Value>
	class UnOrderediterNode
	{
	public:
		typename std::unordered_multimap<Key, Value>::iterator iter;
	};

	UnOrderediterNode<Key, Value> Node;
	virtual void Next()
	{
		Node.iter++;
	}
	virtual void Previous()
	{
		Node.iter--;
	}
	virtual [[nodiscard]] UnOrderediterNode<Key, Value>& GetNode()
	{
			return Node;
	}
public:
	virtual [[nodiscard]] Value& GetValue()
	{
		return (Node.iter->second);
	}
	virtual [[nodiscard]] Key GetKey()
	{
		return (Node.iter->first);
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& operator++()
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& operator++(int)
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& operator--()
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& operator--(int)
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& operator=(const UnOrderedMultiNode<Key, Value>& other)
	{
		//if (*this == other) return *this;
		this->Node.iter = other.Node.iter;
		return *this;
	}
	virtual bool operator==(const UnOrderedMultiNode<Key, Value>& other) const
	{
		return (Node.iter == other.Node.iter);
	}
	virtual bool operator!=(const UnOrderedMultiNode<Key, Value>& other) const
	{
		{
			return (Node.iter != other.Node.iter);
		}
	}
};


template<typename Key, typename Value>
class UnOrderedMultiConstNode
{
	friend class UnOrderedMultiMap<Key, Value>;
protected:
	template<typename Key, typename Value>
	class UnOrderediterCNode
	{
	public:
		typename std::unordered_multimap<Key, Value>::const_iterator citer;
	};

	UnOrderediterCNode<Key, Value> cNode;
	virtual void Next()
	{
		cNode.citer++;
	}
	virtual void Previous()
	{
		cNode.citer--;
	}
	virtual [[nodiscard]] UnOrderediterCNode<Key, Value>& GetNode()
	{
		return cNode;
	}
public:
	virtual [[nodiscard]] const Value& GetValue()
	{
		return (cNode.citer->second);
	}
	virtual [[nodiscard]] const Key& GetKey()
	{
		return (cNode.citer->first);
	}
	virtual [[nodiscard]] UnOrderedMultiConstNode<Key, Value>& operator++()
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedMultiConstNode<Key, Value>& operator++(int)
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedMultiConstNode<Key, Value>& operator--()
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedMultiConstNode<Key, Value>& operator--(int)
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedMultiConstNode<Key, Value>& operator=(const UnOrderedMultiConstNode<Key, Value>& other)
	{
		//if (*this == other) return *this;
		this->cNode.citer = other.cNode.citer;
		return *this;
	}
	virtual bool operator==(const UnOrderedMultiConstNode<Key, Value>& other) const
	{
		return (this->cNode.citer == other.cNode.citer);
	}
	virtual bool operator!=(const UnOrderedMultiConstNode<Key, Value>& other) const
	{
		return (cNode.citer != other.cNode.citer);
	}
};

template<typename Key, typename Value>
class UnOrderedReverseNode
{
	friend class UnOrderedMultiMap<Key, Value>;
protected:
	template<typename Key, typename Value>
	class UnOrderedReverseIterNode
	{
	public:
		typename std::unordered_multimap<Key, Value>::iterator riter;
	};

	UnOrderedReverseIterNode<Key, Value> RNode;
	virtual void Next()
	{
		RNode.riter--;
	}
	virtual void Previous()
	{
		RNode.riter++;
	}
	virtual [[nodiscard]] UnOrderedReverseIterNode<Key, Value>& GetNode()
	{
		return RNode;
	}
public:
	virtual [[nodiscard]] Value& GetValue()
	{
		return RNode.riter->second;
	}
	virtual [[nodiscard]] Key GetKey()
	{
		return RNode.riter->first;
	}
	virtual [[nodiscard]] UnOrderedReverseNode<Key, Value>& operator++()
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedReverseNode<Key, Value>& operator++(int)
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedReverseNode<Key, Value>& operator--()
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedReverseNode<Key, Value>& operator--(int)
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedReverseNode<Key, Value>& operator=(const UnOrderedReverseNode<Key, Value>& other)
	{
		//if (*this == other) return *this;
		this->RNode.riter = other.RNode.riter;
		return *this;
	}
	virtual bool operator==(const UnOrderedReverseNode<Key, Value>& other) const
	{
		return (this->RNode.riter == other.RNode.riter);
	}
	virtual bool operator!=(const UnOrderedReverseNode<Key, Value>& other) const
	{
		return (this->RNode.riter != other.RNode.riter);
	}
};

template<typename Key, typename Value>
class UnOrderedCReverseNode
{
	friend class UnOrderedMultiMap<Key, Value>;
protected:
	template<typename Key, typename Value>
	class UnOrderedCReverseIterNode
	{
	public:
		typename std::unordered_multimap<Key, Value>::const_iterator criter;
	};

	UnOrderedCReverseIterNode<Key, Value> CRNode;
	virtual void Next()
	{
		CRNode.criter--;
	}
	virtual void Previous()
	{
		CRNode.criter++;
	}
	virtual [[nodiscard]] UnOrderedCReverseIterNode<Key, Value>& GetNode()
	{
		return CRNode;
	}
public:
	virtual [[nodiscard]] const Value& GetValue()
	{
		return CRNode.criter->second;
	}
	virtual [[nodiscard]] const Key& GetKey()
	{
		return CRNode.criter->first;
	}
	virtual [[nodiscard]] UnOrderedCReverseNode<Key, Value>& operator++()
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedCReverseNode<Key, Value>& operator++(int)
	{
		Next();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedCReverseNode<Key, Value>& operator--()
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedCReverseNode<Key, Value>& operator--(int)
	{
		Previous();
		return *this;
	}
	virtual [[nodiscard]] UnOrderedCReverseNode<Key, Value>& operator=(const UnOrderedCReverseNode<Key, Value>& other)
	{
		//if (*this == other) return *this;
		this->CRNode.criter = other.CRNode.criter;
		return *this;
	}
	virtual bool operator==(const UnOrderedCReverseNode<Key, Value>& other) const
	{
		return (this->CRNode.criter == other.CRNode.criter);
	}
	virtual bool operator!=(const UnOrderedCReverseNode<Key, Value>& other) const
	{
		return (this->CRNode.criter != other.CRNode.criter);
	}
};


template<typename Key, typename Value>
class UnOrderedMultiMap
{
protected:
	template<typename Key, typename Value>
	class UnOrderedMultiMapObject
	{
	public:
		std::unordered_multimap<Key, Value> Multimap;
	public:
		virtual ~UnOrderedMultiMapObject()
		{
			Multimap.clear();
		}
	};
	UnOrderedMultiMapObject<Key, Value> multimapObject;
	UnOrderedMultiNode<Key, Value> multiNode;
	UnOrderedMultiNode<Key, Value> KeyEndNode;
	UnOrderedReverseNode<Key, Value> RIterNode;
	//MultiConstNode<Key, Value> multiConstNode;
public:
	virtual void clear()
	{
		multimapObject.Multimap.clear();
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace(Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace(std::pair<Key, Value>(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace(Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace(std::pair<Key, Value>(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace(Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace(std::pair<Key, Value>(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace(Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace(std::pair<Key, Value>(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] size_t size() const noexcept
	{
		return multimapObject.Multimap.size();
	}
	virtual [[nodiscard]] size_t count(const Key& _Keyval) const
	{
		return multimapObject.Multimap.count(_Keyval);
	}
	virtual size_t erase(const Key& Keyval) noexcept
	{
		return multimapObject.Multimap.erase(Keyval);
	}
	virtual [[nodiscard]] bool empty() const noexcept
	{
		return multimapObject.Multimap.empty();
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& find(const Key& key)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.find(key);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& begin()
	{
		multiNode.GetNode().iter = multimapObject.Multimap.begin();
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& end()
	{
		multiNode.GetNode().iter = multimapObject.Multimap.end();
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& KeyEnd()
	{
		return KeyEndNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& erase(UnOrderedMultiNode<Key, Value>& _Where) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(_Where.GetNode().iter);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& erase(UnOrderedMultiNode<Key, Value>& First, UnOrderedMultiNode<Key, Value>& Last) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(First.GetNode().iter, Last.GetNode().iter);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& erase(UnOrderedMultiConstNode<Key, Value>& _Where) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(_Where.GetNode().citer);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& erase(UnOrderedMultiConstNode<Key, Value>&& _Where) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(_Where.GetNode().citer);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& erase(UnOrderedMultiConstNode<Key, Value>& First, UnOrderedMultiConstNode<Key, Value>& Last) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(First.GetNode().citer, Last.GetNode().citer);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& erase(UnOrderedMultiConstNode<Key, Value>&& First, UnOrderedMultiConstNode<Key, Value>&& Last) noexcept
	{
		multiNode.GetNode().iter = multimapObject.Multimap.erase(First.GetNode().citer, Last.GetNode().citer);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& equal_range(const Key& _Keyval)
	{
		auto temp = multimapObject.Multimap.equal_range(_Keyval);
		multiNode.GetNode().iter = temp.first;
		KeyEndNode.GetNode().iter = temp.second;
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiNode<Key, Value>& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiNode<Key, Value>& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiNode<Key, Value>& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiNode<Key, Value>& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiNode<Key, Value>&& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiNode<Key, Value>&& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiNode<Key, Value>&& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiNode<Key, Value>&& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().iter, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiConstNode<Key, Value>& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiConstNode<Key, Value>& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiConstNode<Key, Value>& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiConstNode<Key, Value>& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiConstNode<Key, Value>&& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiConstNode<Key, Value>&& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiConstNode<Key, Value>&& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& insert(UnOrderedMultiConstNode<Key, Value>&& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.insert(_Where.GetNode().citer, std::make_pair(key, value));
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiConstNode<Key, Value> cbegin()
	{
		UnOrderedMultiConstNode<Key, Value> tempNode;
		tempNode.GetNode().citer = multimapObject.Multimap.cbegin();
		//multiConstNode.GetNode().citer = multimapObject.Multimap.cbegin();
		return tempNode;
	}
	virtual [[nodiscard]] UnOrderedMultiConstNode<Key, Value> cend()
	{
		UnOrderedMultiConstNode<Key, Value> tempNode;
		tempNode.GetNode().citer = multimapObject.Multimap.cend();
		//multiConstNode.GetNode().citer = multimapObject.Multimap.cbegin();
		return tempNode;
	}
	virtual [[nodiscard]] UnOrderedReverseNode<Key, Value>& rbegin()
	{
		if (multimapObject.Multimap.size() == 0)
			RIterNode.GetNode().riter = multimapObject.Multimap.begin();
		else
			RIterNode.GetNode().riter = --(multimapObject.Multimap.end());
		return RIterNode;
	}
	virtual [[nodiscard]] UnOrderedReverseNode<Key, Value>& rend()
	{
		RIterNode.GetNode().riter = multimapObject.Multimap.begin();
		return RIterNode;
	}
	virtual [[nodiscard]] UnOrderedCReverseNode<Key, Value> crbegin()
	{
		UnOrderedCReverseNode<Key, Value> tempCRNode;
		if (multimapObject.Multimap.size() == 0)
			tempCRNode.GetNode().criter = multimapObject.Multimap.cbegin();
		else
			tempCRNode.GetNode().criter = --(multimapObject.Multimap.cend());
		return tempCRNode;
	}
	virtual [[nodiscard]] UnOrderedCReverseNode<Key, Value> crend()
	{
		UnOrderedCReverseNode<Key, Value> tempCRNode;
		tempCRNode.GetNode().criter = multimapObject.Multimap.cbegin();
		return tempCRNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiNode<Key, Value>& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiNode<Key, Value>& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiNode<Key, Value>& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiNode<Key, Value>& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiNode<Key, Value>&& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiNode<Key, Value>&& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiNode<Key, Value>&& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiNode<Key, Value>&& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().iter, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiConstNode<Key, Value>& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiConstNode<Key, Value>& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiConstNode<Key, Value>& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiConstNode<Key, Value>& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiConstNode<Key, Value>&& _Where, Key&& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiConstNode<Key, Value>&& _Where, Key&& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiConstNode<Key, Value>&& _Where, Key& key, Value&& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual [[nodiscard]] UnOrderedMultiNode<Key, Value>& emplace_hint(UnOrderedMultiConstNode<Key, Value>&& _Where, Key& key, Value& value)
	{
		multiNode.GetNode().iter = multimapObject.Multimap.emplace_hint(_Where.GetNode().citer, key, value);
		return multiNode;
	}
	virtual void Swap(UnOrderedMultiMap<Key, Value>& OtherUnOrderedMultiMap)
	{
		multimapObject.Multimap.swap(OtherUnOrderedMultiMap.multimapObject.Multimap);
	}
	virtual [[nodiscard]] size_t max_size() const noexcept
	{
		return multimapObject.Multimap.max_size();
	}
	//virtual [[nodiscard]] Value& operator[](int index)
	//{
	//	return multimapObject.Multimap[index];
	//}
};
