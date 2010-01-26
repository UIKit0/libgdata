/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */
/*
 * GData Client
 * Copyright (C) Philip Withnall 2010 <philip@tecnocode.co.uk>
 *
 * GData Client is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * GData Client is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with GData Client.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GDATA_BATCHABLE_H
#define GDATA_BATCHABLE_H

#include <glib.h>
#include <glib-object.h>

#include <gdata/gdata-service.h>
#include <gdata/gdata-batch-operation.h>

G_BEGIN_DECLS

#define GDATA_TYPE_BATCHABLE		(gdata_batchable_get_type ())
#define GDATA_BATCHABLE(o)		(G_TYPE_CHECK_INSTANCE_CAST ((o), GDATA_TYPE_BATCHABLE, GDataBatchable))
#define GDATA_BATCHABLE_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), GDATA_TYPE_BATCHABLE, GDataBatchableIface))
#define GDATA_IS_BATCHABLE(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), GDATA_TYPE_BATCHABLE))
#define GDATA_BATCHABLE_GET_IFACE(o)	(G_TYPE_INSTANCE_GET_INTERFACE ((o), GDATA_TYPE_BATCHABLE, GDataBatchableIface))

/**
 * GDataBatchable:
 *
 * All the fields in the #GDataBatchable structure are private and should never be accessed directly.
 *
 * Since: 0.7.0
 **/
typedef struct _GDataBatchable		GDataBatchable; /* dummy typedef */

/**
 * GDataBatchableIface:
 *
 * All the fields in the #GDataBatchableIface structure are private and should never be accessed directly.
 *
 * Since: 0.7.0
 **/
typedef struct {
	/*< private >*/
	GTypeInterface parent;
} GDataBatchableIface;

GType gdata_batchable_get_type (void) G_GNUC_CONST;

GDataBatchOperation *gdata_batchable_create_operation (GDataBatchable *self, const gchar *feed_uri) G_GNUC_WARN_UNUSED_RESULT G_GNUC_MALLOC;

G_END_DECLS

#endif /* !GDATA_BATCHABLE_H */
