MRH_EVENT_APP_LAUNCH_SOA_TIMER_U
================================
MRH_EVENT_APP_LAUNCH_SOA_TIMER_U is used to request a timed application launch.

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
      - MRH_Uint64 (8)
      - The time point to launch at in seconds.
    * - 20
      - char (Variable)
      - The full UTF-8 package path string.
    * - 20 + Package Path Byte Length
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
:doc:`MRH_EVENT_APP_LAUNCH_SOA_TIMER_S`.

Remarks
-------
* The application will be launched after at the specified time point if no 
  user application is currently running and all timed application launches are 
  not cleared by :doc:`MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_U`.
* Using a negative launch command ID results in the ID 0 being passed on
  application launch.