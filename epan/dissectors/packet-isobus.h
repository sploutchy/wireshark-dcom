/* packet-isobus.h
 * Definitions for ISOBUS packet disassembly structures and routines
 * By Dr. Lars Voelker <lars.voelker@technica-engineering.de>
 * Copyright 2023 Dr. Lars Voelker
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef __PACKET_ISOBUS_H__
#define __PACKET_ISOBUS_H__

#include <epan/tvbuff.h>
//#include <epan/packet_info.h>
//#include <epan/proto.h>

/* Structure that gets passed between dissectors. */
typedef struct isobus_info {
    guint32 can_id;
    guint16 bus_id;

    guint8  priority;
    guint8  pdu_format;
    guint32 pgn;
    guint8  source_addr;
} isobus_info_t;

#endif /* __PACKET_ISOBUS_H__ */

 /*
  * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
  *
  * Local variables:
  * c-basic-offset: 4
  * tab-width: 8
  * indent-tabs-mode: nil
  * End:
  *
  * vi: set shiftwidth=4 tabstop=8 expandtab:
  * :indentSize=4:tabSize=8:noTabs=true:
  */
