MRH_EVENT_SAY_CUSTOM_COMMAND_S
==============================
MRH_EVENT_SAY_CUSTOM_COMMAND_S is used to resond to custom say commands sent 
from user applications.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - Variable (Variable)
      - The custom command event data.


Sender
------
Say platform services.

Reciever
--------
User applications.

Request Event
-------------
:doc:`MRH_EVENT_SAY_CUSTOM_COMMAND_U`.

Response Event
--------------
None.

Remarks
-------
None.