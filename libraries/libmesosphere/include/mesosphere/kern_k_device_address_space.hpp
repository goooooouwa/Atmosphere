/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <mesosphere/kern_common.hpp>
#include <mesosphere/kern_k_auto_object.hpp>
#include <mesosphere/kern_slab_helpers.hpp>
#include <mesosphere/kern_select_device_page_table.hpp>

namespace ams::kern {

    class KDeviceAddressSpace final : public KAutoObjectWithSlabHeapAndContainer<KDeviceAddressSpace, KAutoObjectWithList> {
        MESOSPHERE_AUTOOBJECT_TRAITS(KDeviceAddressSpace, KAutoObject);
        public:
            static void Initialize();

            /* TODO: This is a placeholder definition. */
    };

}
