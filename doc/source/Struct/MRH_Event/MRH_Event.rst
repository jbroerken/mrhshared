************
Event Struct
************
The MRH_Event struct is used to store event data.

This struct is used to define the way data is ordered and sent beween 
applications
and services. 

Header
------
The definition of the MRH_Event struct can be found in the following file:

.. code-block:: c

  #include <MRH_Event.h>


Definition
----------
The struct definition with all its members, as used by all core components, is 
as follows:

.. code-block:: c

  struct MRH_Event_t
  {
    // Group
    MRH_Uint32 u32_GroupID; // The group id of this event (sender / reciever)
        
    // Event Type
    MRH_Uint32 u32_Type; // Type of event

    // Event Data
    MRH_Uint8* p_Data; // Data
    MRH_Uint32 u32_DataSize; // Data buffer size in bytes
  };
  typedef struct MRH_Event_t MRH_Event;


Members
-------
.. list-table::
    :header-rows: 1

    * - Member
      - Description
    * - u32_GroupID
      - The group id depending on the application (who this event is intended 
        for).
    * - u32_Type
      - The :doc:`Event Type <../../Events/Events>` of this event.
    * - p_Data
      - The data for this event type.
    * - u32_DataSize
      - The size of the data buffer in bytes.