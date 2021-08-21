MRH_EVENT_PS_RESET_REQUEST_U
============================
MRH_EVENT_PS_RESET_REQUEST_U is used to signal that a newly running application 
wants to reset all services.

Data Buffer
-----------
.. list-table::
    :header-rows: 1

    * - Start (Data Offset)
      - Type (Byte Size)
      - Description
    * - 0
      - char (Variable)
      - The full package path to the currently running user application.


Sender
------
User applications.

Reciever
--------
All platform services.

Request Event
-------------
None.

Response Event
--------------
:doc:`MRH_EVENT_PS_RESET_ACKNOLEDGED_U`.

Remarks
-------
* This event is sent by the application parent before the user application
  starts.