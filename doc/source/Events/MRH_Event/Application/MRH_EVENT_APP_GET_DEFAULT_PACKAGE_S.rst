MRH_EVENT_APP_GET_DEFAULT_PACKAGE_S
===================================
MRH_EVENT_APP_GET_DEFAULT_PACKAGE_S contains a requested full package path for 
a default application.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - 0 if the default package path could be found, 1 if not.
    * - 1
      - MRH_Uint8 (1)
      - The default application type requested.
    * - 2
      - char (Variable)
      - The string containing the full UTF-8 package path.


Sender
------
Application platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_APP_GET_DEFAULT_PACKAGE_U`.

Response Event
--------------
None.

Remarks
-------
* The application type identifier depends on the identification used by the 
  application service.
* Strings recieved by this event are null terminated unless the length of the
  string plus the event result and default application identifier equals 
  :doc:`../../../Macros/MRH_Event/MRH_EVENT_DATA_SIZE_MAX`.