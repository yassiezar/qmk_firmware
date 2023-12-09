 /* Copyright 2021 HellSingCoder
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */


#pragma once

#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120
#define SPLIT_WPM_ENABLE
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX
#define ENCODER_RESOLUTION 2
#define ENCODER_MAP_KEY_DELAY 10
#define ENCODER_DIRECTION_FLIP

// Optimisations
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#define NO_MUSIC_MODE
