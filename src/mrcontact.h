/*******************************************************************************
 *
 *                             Messenger Backend
 *     Copyright (C) 2016 Björn Petersen Software Design and Development
 *                   Contact: r10s@b44t.com, http://b44t.com
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see http://www.gnu.org/licenses/ .
 *
 *******************************************************************************
 *
 * File:    mrcontact.h
 * Authors: Björn Petersen
 * Purpose: mrcontact_t represents a single contact - if in doubt a contact is
 *          every email-adresses the user has _send_ a mail to (only receiving
 *          is not sufficient).
 *          For the future, we plan to use the systems address books and/or a
 *          CardDAV server, too.
 *
 ******************************************************************************/


#ifndef __MRCONTACT_H__
#define __MRCONTACT_H__
#ifdef __cplusplus
extern "C" {
#endif


typedef struct mrcontact_t
{
	uint32_t            m_id;
	char*               m_name;  /* != NULL, however, may be empty */
	char*               m_email; /* != NULL */
	mrmailbox_t*        m_mailbox;
} mrcontact_t;


mrcontact_t* mrcontact_new             (mrmailbox_t*);
void         mrcontact_unref           (mrcontact_t*);

int          mrcontact_load_from_db    (mrcontact_t*, uint32_t id);
void         mrcontact_empty           (mrcontact_t*);


/*** library-private **********************************************************/

size_t       mr_get_contact_cnt_       (mrmailbox_t*); /* private, user shall use mrmailbox_get_contact_cnt() */


#ifdef __cplusplus
} /* /extern "C" */
#endif
#endif /* __MRCONTACT_H__ */

