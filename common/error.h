/* Residual - Virtual machine to run LucasArts' 3D adventure games
 *
 * Residual is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the AUTHORS
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * $URL$
 * $Id$
 *
 */

#ifndef COMMON_ERROR_H
#define COMMON_ERROR_H

/**
 * This file contains enums with error codes commonly used.
 */

/**
 * Errors used in the SaveFileManager class.
 */
enum SFMError {
	SFM_NO_ERROR,			//Default state, indicates no error has been recorded
	SFM_DIR_ACCESS,			//stat(), mkdir()::EACCES: Search or write permission denied
	SFM_DIR_LINKMAX,		//mkdir()::EMLINK: The link count of the parent directory would exceed {LINK_MAX}
	SFM_DIR_LOOP,			//stat(), mkdir()::ELOOP: Too many symbolic links encountered while traversing the path
	SFM_DIR_NAMETOOLONG,	//stat(), mkdir()::ENAMETOOLONG: The path name is too long
	SFM_DIR_NOENT,			//stat(), mkdir()::ENOENT: A component of the path path does not exist, or the path is an empty string
	SFM_DIR_NOTDIR,			//stat(), mkdir()::ENOTDIR: A component of the path prefix is not a directory
	SFM_DIR_ROFS			//mkdir()::EROFS: The parent directory resides on a read-only file system
};

#endif //COMMON_ERROR_H