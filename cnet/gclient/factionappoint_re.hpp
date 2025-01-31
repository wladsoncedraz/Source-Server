
#ifndef __GNET_FACTIONAPPOINT_RE_HPP
#define __GNET_FACTIONAPPOINT_RE_HPP

#include "rpcdefs.h"
#include "callid.hxx"
#include "state.hxx"

#include "factionchoice.h"
#include "glinkclient.hpp"
namespace GNET
{

class FactionAppoint_Re : public GNET::Protocol
{
	#include "factionappoint_re"

	void Process(Manager *manager, Manager::Session::ID sid)
	{
		printf("retcode=%d\n",retcode);
		int roleid=GLinkClient::GetInstance()->roleid;
		FactionChoice(roleid,manager,sid);
		// TODO
	}
};

};

#endif
