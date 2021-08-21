MRH_EVENT_APP_SET_DEFAULT_PACKAGE_U
===================================
MRH_EVENT_APP_SET_DEFAULT_PACKAGE_U is used to update the full package path 
for a default application type.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - MRH_Uint8 (1)
      - The default application type to update.
    * - 1
      - char (Variable)
      - The string containing the full UTF-8 package path.


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
:doc:`MRH_EVENT_APP_SET_DEFAULT_PACKAGE_S`.

Remarks
-------
* The application type identifier depends on the identification used by the 
  application service.
* The string is required to be null terminated unless the length of the 
  string combined with the default application identifier is equal to 
  :doc:`../../../Macros/MRH_Event/MRH_EVENT_DATA_SIZE_MAX`.