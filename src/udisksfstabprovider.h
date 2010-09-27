/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2007-2010 David Zeuthen <zeuthen@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef __UDISKS_FSTAB_PROVIDER_H__
#define __UDISKS_FSTAB_PROVIDER_H__

#include "types.h"

G_BEGIN_DECLS

#define UDISKS_TYPE_FSTAB_PROVIDER         (udisks_fstab_provider_get_type ())
#define UDISKS_FSTAB_PROVIDER(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), UDISKS_TYPE_FSTAB_PROVIDER, UDisksFstabProvider))
#define UDISKS_IS_FSTAB_PROVIDER(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), UDISKS_TYPE_FSTAB_PROVIDER))

GType                  udisks_fstab_provider_get_type   (void) G_GNUC_CONST;
UDisksFstabProvider   *udisks_fstab_provider_new        (UDisksDaemon     *daemon);

G_END_DECLS

#endif /* __UDISKS_FSTAB_PROVIDER_H__ */
