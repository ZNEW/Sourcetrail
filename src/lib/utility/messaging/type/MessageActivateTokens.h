#ifndef MESSAGE_ACTIVATE_TOKENS_H
#define MESSAGE_ACTIVATE_TOKENS_H

#include "utility/messaging/Message.h"
#include "utility/types.h"

class MessageActivateTokens
	: public Message<MessageActivateTokens>
{
public:
	MessageActivateTokens(const std::vector<Id>& tokenIds)
		: tokenIds(tokenIds)
		, isEdge(false)
		, isAggregation(false)
		, isFromSystem(false)
		, isFromSearch(false)
	{
	}

	static const std::string getStaticType()
	{
		return "MessageActivateTokens";
	}

	const std::vector<Id> tokenIds;

	bool isEdge;
	bool isAggregation;
	bool isFromSystem;
	bool isFromSearch;
};

#endif // MESSAGE_ACTIVATE_TOKENS_H
