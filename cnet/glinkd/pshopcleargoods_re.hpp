
#ifndef __GNET_PSHOPCLEARGOODS_RE_HPP
#define __GNET_PSHOPCLEARGOODS_RE_HPP

#include "rpcdefs.h"
#include "callid.hxx"
#include "state.hxx"

#include "pshopitem"
#include "groleinventory"

namespace GNET
{

class PShopClearGoods_Re : public GNET::Protocol
{
	#include "pshopcleargoods_re"

	void Process(Manager *manager, Manager::Session::ID sid)
	{
	    GLinkServer* lsm=GLinkServer::GetInstance();
		lsm->Send(localsid,this);
	}
};

};

#endif
