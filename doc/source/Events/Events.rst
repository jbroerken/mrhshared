******
Events
******
All events provided by mrhshared provide a way for applications to communicate
with the available platform services. Features like event permissions and more
are also bound to these event types.

The list of events shown here includes information about their use case as well 
as the data buffer structure and the information provided by said buffer.

Header
------
The definition of the MRH_Event_Type enumeration can be found in the following 
file:

.. code-block:: c

  #include <MRH_Event.h>


System Events
-------------
System events are used for application and general platform management.

.. toctree::
  :maxdepth: 1

  MRH_Event/System/MRH_EVENT_UNK
  MRH_Event/System/MRH_EVENT_PERMISSION_DENIED
  MRH_Event/System/MRH_EVENT_PASSWORD_REQUIRED
  MRH_Event/System/MRH_EVENT_NOT_IMPLEMENTED_S
  MRH_Event/System/MRH_EVENT_PS_RESET_REQUEST_U
  MRH_Event/System/MRH_EVENT_PS_RESET_ACKNOLEDGED_U

Custom Events
-------------
Custom events are used interact with custom services.

.. toctree::
  :maxdepth: 1

  MRH_Event/Custom/MRH_EVENT_CUSTOM_AVAIL_U
  MRH_Event/Custom/MRH_EVENT_CUSTOM_CUSTOM_COMMAND_U
  MRH_Event/Custom/MRH_EVENT_CUSTOM_AVAIL_S
  MRH_Event/Custom/MRH_EVENT_CUSTOM_CUSTOM_COMMAND_S

Listen Events
-------------
Listen events provide information about voice and text input.

.. toctree::
  :maxdepth: 1

  MRH_Event/Listen/MRH_EVENT_LISTEN_AVAIL_U
  MRH_Event/Listen/MRH_EVENT_LISTEN_GET_METHOD_U
  MRH_Event/Listen/MRH_EVENT_LISTEN_CUSTOM_COMMAND_U
  MRH_Event/Listen/MRH_EVENT_LISTEN_AVAIL_S
  MRH_Event/Listen/MRH_EVENT_LISTEN_STRING_S
  MRH_Event/Listen/MRH_EVENT_LISTEN_GET_METHOD_S
  MRH_Event/Listen/MRH_EVENT_LISTEN_CUSTOM_COMMAND_S

Say Events
----------
Say events provide information about voice and text output.

.. toctree::
  :maxdepth: 1

  MRH_Event/Say/MRH_EVENT_SAY_AVAIL_U
  MRH_Event/Say/MRH_EVENT_SAY_STRING_U
  MRH_Event/Say/MRH_EVENT_SAY_GET_METHOD_U
  MRH_Event/Say/MRH_EVENT_SAY_REMOTE_NOTIFICATION_U
  MRH_Event/Say/MRH_EVENT_SAY_CUSTOM_COMMAND_U
  MRH_Event/Say/MRH_EVENT_SAY_AVAIL_S
  MRH_Event/Say/MRH_EVENT_SAY_STRING_S
  MRH_Event/Say/MRH_EVENT_SAY_GET_METHOD_S
  MRH_Event/Say/MRH_EVENT_SAY_REMOTE_NOTIFICATION_S
  MRH_Event/Say/MRH_EVENT_SAY_CUSTOM_COMMAND_S

Password Events
---------------
Password events allow for password verification and password updating.

.. toctree::
  :maxdepth: 1

  MRH_Event/Password/MRH_EVENT_PASSWORD_AVAIL_U
  MRH_Event/Password/MRH_EVENT_PASSWORD_CHECK_U
  MRH_Event/Password/MRH_EVENT_PASSWORD_SET_U
  MRH_Event/Password/MRH_EVENT_PASSWORD_CUSTOM_COMMAND_U
  MRH_Event/Password/MRH_EVENT_PASSWORD_AVAIL_S
  MRH_Event/Password/MRH_EVENT_PASSWORD_CHECK_S
  MRH_Event/Password/MRH_EVENT_PASSWORD_SET_S
  MRH_Event/Password/MRH_EVENT_PASSWORD_CUSTOM_COMMAND_S

User Events
-----------
User events allow for accessing and changing user content and information.

.. toctree::
  :maxdepth: 1

  MRH_Event/User/MRH_EVENT_USER_AVAIL_U
  MRH_Event/User/MRH_EVENT_USER_ACCESS_DOCUMENTS_U
  MRH_Event/User/MRH_EVENT_USER_ACCESS_PICTURES_U
  MRH_Event/User/MRH_EVENT_USER_ACCESS_MUSIC_U
  MRH_Event/User/MRH_EVENT_USER_ACCESS_VIDEOS_U
  MRH_Event/User/MRH_EVENT_USER_ACCESS_DOWNLOADS_U
  MRH_Event/User/MRH_EVENT_USER_ACCESS_CLIPBOARD_U
  MRH_Event/User/MRH_EVENT_USER_ACCESS_INFO_PERSON_U
  MRH_Event/User/MRH_EVENT_USER_ACCESS_INFO_RESIDENCE_U
  MRH_Event/User/MRH_EVENT_USER_ACCESS_CLEAR_U
  MRH_Event/User/MRH_EVENT_USER_GET_LOCATION_U
  MRH_Event/User/MRH_EVENT_USER_CUSTOM_COMMAND_U
  MRH_Event/User/MRH_EVENT_USER_AVAIL_S
  MRH_Event/User/MRH_EVENT_USER_ACCESS_DOCUMENTS_S
  MRH_Event/User/MRH_EVENT_USER_ACCESS_PICTURES_S
  MRH_Event/User/MRH_EVENT_USER_ACCESS_MUSIC_S
  MRH_Event/User/MRH_EVENT_USER_ACCESS_VIDEOS_S
  MRH_Event/User/MRH_EVENT_USER_ACCESS_DOWNLOADS_S
  MRH_Event/User/MRH_EVENT_USER_ACCESS_CLIPBOARD_S
  MRH_Event/User/MRH_EVENT_USER_ACCESS_INFO_PERSON_S
  MRH_Event/User/MRH_EVENT_USER_ACCESS_INFO_RESIDENCE_S
  MRH_Event/User/MRH_EVENT_USER_ACCESS_CLEAR_S
  MRH_Event/User/MRH_EVENT_USER_GET_LOCATION_S
  MRH_Event/User/MRH_EVENT_USER_CUSTOM_COMMAND_S

Application Events
------------------
Application events allow for launching as well as default application settings 
management.

.. toctree::
  :maxdepth: 1

  MRH_Event/Application/MRH_EVENT_APP_AVAIL_U
  MRH_Event/Application/MRH_EVENT_APP_LAUNCH_SOA_U
  MRH_Event/Application/MRH_EVENT_APP_LAUNCH_SOA_TIMER_U
  MRH_Event/Application/MRH_EVENT_APP_LAUNCH_SOA_CLEAR_U
  MRH_Event/Application/MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_U
  MRH_Event/Application/MRH_EVENT_APP_CUSTOM_COMMAND_U
  MRH_Event/Application/MRH_EVENT_APP_AVAIL_S
  MRH_Event/Application/MRH_EVENT_APP_LAUNCH_SOA_S
  MRH_Event/Application/MRH_EVENT_APP_LAUNCH_SOA_TIMER_S
  MRH_Event/Application/MRH_EVENT_APP_LAUNCH_SOA_TIMER_REMINDER_S
  MRH_Event/Application/MRH_EVENT_APP_LAUNCH_SOA_CLEAR_S
  MRH_Event/Application/MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_S
  MRH_Event/Application/MRH_EVENT_APP_CUSTOM_COMMAND_S

Notification Events
-------------------
Notification events are used to create, read and delete application and service
notifications.

.. toctree::
  :maxdepth: 1

  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_AVAIL_U
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_CREATE_APP_U
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_CREATE_SERVICE_U
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_DESTROY_APP_U
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_GET_WAITING_U
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_GET_NEXT_U
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_CUSTOM_COMMAND_U
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_AVAIL_S
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_CREATE_APP_S
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_DESTROY_APP_S
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_GET_WAITING_S
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_GET_NEXT_S
  MRH_Event/Notification/MRH_EVENT_NOTIFICATION_CUSTOM_COMMAND_S
