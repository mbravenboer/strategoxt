/*

Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/

ATerm SSL_table_create(ATerm name);
ATerm SSL_table_destroy(ATerm table);
ATerm SSL_table_put(ATerm table, ATerm key, ATerm value);
ATerm SSL_table_get(ATerm table, ATerm key);
ATerm SSL_table_remove(ATerm table, ATerm key);
ATerm SSL_table_keys(ATerm table);
ATerm SSL_table_rename(ATerm table1, ATerm table2);
