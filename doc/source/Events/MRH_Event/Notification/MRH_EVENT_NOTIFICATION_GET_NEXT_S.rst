MRH_EVENT_NOTIFICATION_GET_NEXT_S
=================================
MRH_EVENT_NOTIFICATION_GET_NEXT_S contains the notification message of the 
requested next available notification from all current user application and 
services.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if a notification could be recieved, 1 if not.
    * - 1
      - char (Variable)
      - The UTF-8 notification message.


Sender
------
Notification platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_NOTIFICATION_GET_NEXT_U`.

Response Event
--------------
None.

Remarks
-------
* The UTF-8 strings recieved by this event are null terminated unless the length 
  of the string is equal to :doc:`../../../Macros/MRH_Event/MRH_EVENT_DATA_SIZE_MAX`.