MRH_EVENT_APP_LAUNCH_SOA_U
==========================
MRH_EVENT_APP_LAUNCH_SOA_U is used to request a application launch.

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
      - MRH_Sint32 (4)
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
None.

Response Event
--------------
:doc:`MRH_EVENT_APP_LAUNCH_SOA_S`.

Remarks
-------
* The application will be launched after the currently running application
  exits if the launch request was not cleared by 
  :doc:`MRH_EVENT_APP_LAUNCH_SOA_CLEAR_U`.
* Using a negative launch command ID results in the ID 0 being passed on
  application launch.