//
//  peer_ims.h -- Ip Multicast Set of rules.
//
//  This code is distributed under the GNU General Public License (see
//  THE_GNU_GENERAL_PUBLIC_LICENSE.txt for extending this information).
//
//  Copyright (C) 2016, the P2PSP team.
//  http://www.p2psp.org
//
//  IMS: Ip Multicasting Set of rules
//

#ifndef P2PSP_CORE_PEER_IMS_H
#define P2PSP_CORE_PEER_IMS_H

#include "peer_core.h"

namespace p2psp {

  class Peer_IMS : public Peer_core {

  protected:

    ip::address mcast_addr_;
    uint16_t mcast_port_;

  public:

    Peer_IMS();
    ~Peer_IMS();
    void Init() override;
    void ListenToTheTeam();
    int ProcessMessage(const std::vector<char>&,
		       const ip::udp::endpoint&) override;
    virtual void        ReceiveMcastGroup();
    virtual ip::address GetMcastAddr();
    virtual uint16_t    GetMcastPort();

  };
}

#endif  // P2PSP_CORE_PEER_IMS_H
