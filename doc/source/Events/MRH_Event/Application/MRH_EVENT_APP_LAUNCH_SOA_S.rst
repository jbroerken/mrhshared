MRH_EVENT_APP_LAUNCH_SOA_S
==========================
MRH_EVENT_APP_LAUNCH_SOA_S is contains the requested application launch info.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint32 (4)
      - The length of the package path string in bytes.
    * - 4
      - MRH_Uint32 (4)
      - The length of the launch input string in bytes.
    * - 8
      - int (4)
      - The launch command ID.
    * - 12
      - char (Variable)
      - The full UTF-8 package path string.
    * - 12 + Package Path Byte Length
      - char (Variable)
      - The full UTF-8 launch input string.


Sender
------
User applications.

Reciever
--------
Application platform services.

Request Event
-------------
:doc:`MRH_EVENT_APP_LAUNCH_SOA_U`.

Response Event
--------------
None.

Remarks
-------
* This event is used to signal a launch intent to the mrhcore binary. It does
  not contain altered information and can be used to verify the sent launch
  intent.