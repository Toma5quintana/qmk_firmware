/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2021 Harrison Chan (Xelus)
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

#include "k8.h"

bool dip_switch_update_kb(uint8_t index, bool active){
  if (!dip_switch_update_user(index, active)) { return false; }

  switch(index){
    case 0:
      if(active){ //BT mode
        // do stuff
      }
      else{ //Cable mode
        // do stuff
      }
      break;
    case 1:
      if(active) { // Mac mode
          layer_move(MAC_BASE);
      } else { // Windows mode
          layer_move(WIN_BASE);
      }
      return false;
  }

  return true;
}