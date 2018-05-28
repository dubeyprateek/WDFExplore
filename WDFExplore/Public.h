/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_WDFExplore,
    0xeed0bacc,0x88ab,0x433a,0xbe,0x6d,0xda,0x01,0x13,0xaf,0xfc,0x85);
// {eed0bacc-88ab-433a-be6d-da0113affc85}
