/**
 *  mrhshared
 *  Copyright (C) 2021 - 2022 Jens Brörken
 *
 *  This software is provided 'as-is', without any express or implied
 *  warranty.  In no event will the authors be held liable for any damages
 *  arising from the use of this software.
 *
 *  Permission is granted to anyone to use this software for any purpose,
 *  including commercial applications, and to alter it and redistribute it
 *  freely, subject to the following restrictions:
 *
 *  1. The origin of this software must not be misrepresented; you must not
 *     claim that you wrote the original software. If you use this software
 *     in a product, an acknowledgment in the product documentation would be
 *     appreciated but is not required.
 *
 *  2. Altered source versions must be plainly marked as such, and must not be
 *     misrepresented as being the original software.
 *
 *  3. This notice may not be removed or altered from any source distribution.
 */

#ifndef MRH_Event_h
#define MRH_Event_h

// C

// External

// Project
#include "MRH_Typedefs.h"

// Pre-defined
#define MRH_EVENT_VERSION                       1
#define MRH_EVENT_DATA_SIZE_MAX                 2048


#ifdef __cplusplus
extern "C"
{
#endif

    //*************************************************************************************
    // Event Types
    //*************************************************************************************
    
    typedef enum
    {
        /**
         *  Event Version 1
         */
        
        // Unknown
        MRH_EVENT_UNK = 0,                                      // Not defined event
        
        // Permission
        MRH_EVENT_PERMISSION_DENIED = 1,                        // Permission denied
        
        // Password Required
        MRH_EVENT_PASSWORD_REQUIRED = 2,                        // Password check has to be performed
        
        // Not implemented
        MRH_EVENT_NOT_IMPLEMENTED_S = 3,                        // Service - Event not implemented
        
        // Program state
        MRH_EVENT_PS_RESET_REQUEST_U = 4,                       // User - Service reset request
        MRH_EVENT_PS_RESET_ACKNOLEDGED_U = 5,                   // User - Service reset acknoledgement
        
        // Custom
        MRH_EVENT_CUSTOM_AVAIL_U = 6,                           // User - Custom services available
        MRH_EVENT_CUSTOM_CUSTOM_COMMAND_U = 7,                  // User - Custom service command
        
        MRH_EVENT_CUSTOM_AVAIL_S,                               // Service - Custom service availability state
        MRH_EVENT_CUSTOM_CUSTOM_COMMAND_S,                      // Service - Custom service command
        
        // Voice - Listen
        MRH_EVENT_LISTEN_AVAIL_U,                               // User - Check voice input available
        MRH_EVENT_LISTEN_GET_METHOD_U,                          // User - Request the current voice input method
        MRH_EVENT_LISTEN_CUSTOM_COMMAND_U,                      // User - Custom listen command request
        
        MRH_EVENT_LISTEN_AVAIL_S,                               // Service - Voice input availability state
        MRH_EVENT_LISTEN_STRING_S,                              // Service - Voice input string
        MRH_EVENT_LISTEN_GET_METHOD_S,                          // Service - Voice input method request result
        MRH_EVENT_LISTEN_CUSTOM_COMMAND_S,                      // Service - Custom listen command response
        
        // Voice - Say
        MRH_EVENT_SAY_AVAIL_U,                                  // User - Check voice output available
        MRH_EVENT_SAY_STRING_U,                                 // User - Voice output string
        MRH_EVENT_SAY_GET_METHOD_U,                             // User - Request the current voice output method
        MRH_EVENT_SAY_REMOTE_NOTIFICATION_U,                    // User - Send remote notification to user device
        MRH_EVENT_SAY_CUSTOM_COMMAND_U,                         // User - Custom say command request
        
        MRH_EVENT_SAY_AVAIL_S,                                  // Service - Voice output availability state
        MRH_EVENT_SAY_STRING_S,                                 // Service - Voice output string result
        MRH_EVENT_SAY_GET_METHOD_S,                             // Service - Voice output method request result
        MRH_EVENT_SAY_REMOTE_NOTIFICATION_S,                    // Service - Remote notification send result
        MRH_EVENT_SAY_CUSTOM_COMMAND_S,                         // Service - Custom say command response
        
        // Password
        MRH_EVENT_PASSWORD_AVAIL_U,                             // User - Check password available
        MRH_EVENT_PASSWORD_CHECK_U,                             // User - Send string to check for password match
        MRH_EVENT_PASSWORD_SET_U,                               // User - Send string to use as new password
        MRH_EVENT_PASSWORD_CUSTOM_COMMAND_U,                    // User - Custom password command request
        
        MRH_EVENT_PASSWORD_AVAIL_S,                             // Service - Password availability state
        MRH_EVENT_PASSWORD_CHECK_S,                             // Service - Password match result
        MRH_EVENT_PASSWORD_SET_S,                               // Service - Password set result
        MRH_EVENT_PASSWORD_CUSTOM_COMMAND_S,                    // Service - Custom password command response
        
        // User
        MRH_EVENT_USER_AVAIL_U,                                 // User - Check user available
        MRH_EVENT_USER_ACCESS_DOCUMENTS_U,                      // User - Request documents content access
        MRH_EVENT_USER_ACCESS_PICTURES_U,                       // User - Request pictures content access
        MRH_EVENT_USER_ACCESS_MUSIC_U,                          // User - Request music content access
        MRH_EVENT_USER_ACCESS_VIDEOS_U,                         // User - Request video content access
        MRH_EVENT_USER_ACCESS_DOWNLOADS_U,                      // User - Request downloads content access
        MRH_EVENT_USER_ACCESS_CLIPBOARD_U,                      // User - Request clipboard access
        MRH_EVENT_USER_ACCESS_INFO_PERSON_U,                    // User - Request user person info access
        MRH_EVENT_USER_ACCESS_INFO_RESIDENCE_U,                 // User - Request uder residence info access
        MRH_EVENT_USER_ACCESS_CLEAR_U,                          // User - Request removal of content access
        MRH_EVENT_USER_GET_LOCATION_U,                          // User - Request map location
        MRH_EVENT_USER_CUSTOM_COMMAND_U,                        // User - Custom user command request
        
        MRH_EVENT_USER_AVAIL_S,                                 // Service - User availability state
        MRH_EVENT_USER_ACCESS_DOCUMENTS_S,                      // Service - Documents content access result
        MRH_EVENT_USER_ACCESS_PICTURES_S,                       // Service - Pictures content access result
        MRH_EVENT_USER_ACCESS_MUSIC_S,                          // Service - Music content access result
        MRH_EVENT_USER_ACCESS_VIDEOS_S,                         // Service - Video content access result
        MRH_EVENT_USER_ACCESS_DOWNLOADS_S,                      // Service - Downloads content access result
        MRH_EVENT_USER_ACCESS_CLIPBOARD_S,                      // Service - Clipboard access result
        MRH_EVENT_USER_ACCESS_INFO_PERSON_S,                    // Service - User person info access result
        MRH_EVENT_USER_ACCESS_INFO_RESIDENCE_S,                 // Service - User residence info access result
        MRH_EVENT_USER_ACCESS_CLEAR_S,                          // Service - Content access removal result
        MRH_EVENT_USER_GET_LOCATION_S,                          // Service - User location request result
        MRH_EVENT_USER_CUSTOM_COMMAND_S,                        // Service - Custom user command response
        
        // Application
        MRH_EVENT_APP_AVAIL_U,                                  // User - Check application available
        MRH_EVENT_APP_LAUNCH_SOA_U,                             // User - Launch application by full path (Contains launch command id, package path and launch input string)
        MRH_EVENT_APP_LAUNCH_SOA_TIMER_U,                       // User - Launch application by full path (like LAUNCH_SOA_U) with added timepoint
        MRH_EVENT_APP_LAUNCH_SOA_CLEAR_U,                       // User - Clear application launch request
        MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_U,                 // User - Clear all timed application launch requests
        MRH_EVENT_APP_CUSTOM_COMMAND_U,                         // User - Custom application command request
        
        MRH_EVENT_APP_AVAIL_S,                                  // Service - App available state
        MRH_EVENT_APP_LAUNCH_SOA_S,                             // Service - Return application launch info (Contains launch command id, package path and launch input string)
        MRH_EVENT_APP_LAUNCH_SOA_TIMER_S,                       // Serivce - Return application launch info (like LAUNCH_SOA_S) with added timepoint
        MRH_EVENT_APP_LAUNCH_SOA_TIMER_REMINDER_S,              // Service - Send imminent timer launch to application (warning to quit)
        MRH_EVENT_APP_LAUNCH_SOA_CLEAR_S,                       // Service - Return clear application launch result
        MRH_EVENT_APP_LAUNCH_SOA_CLEAR_TIMER_S,                 // Service - Return clear all timed application launches result
        MRH_EVENT_APP_CUSTOM_COMMAND_S,                         // Service - Custom application command response
        
        // Notifications
        MRH_EVENT_NOTIFICATION_AVAIL_U,                         // User - Check notification available
        MRH_EVENT_NOTIFICATION_CREATE_APP_U,                    // User - Create notification for a application (Contains type, type data and message)
        MRH_EVENT_NOTIFICATION_CREATE_SERVICE_U,                // User - Notification created by service (no return event) (Contains type, type data and message)
        MRH_EVENT_NOTIFICATION_DESTROY_APP_U,                   // User - Destroy a waiting notification of the sender application (requires application specific key)
        MRH_EVENT_NOTIFICATION_GET_WAITING_U,                   // User - Get if a notification is waiting to be recieved
        MRH_EVENT_NOTIFICATION_GET_NEXT_U,                      // User - Get the next notification waiting, removing it from the avaiable queue
        MRH_EVENT_NOTIFICATION_CUSTOM_COMMAND_U,                // User - Custom notification command request
        
        MRH_EVENT_NOTIFICATION_AVAIL_S,                         // Service - Notification available state
        MRH_EVENT_NOTIFICATION_CREATE_APP_S,                    // Service - Notification creation request result
        MRH_EVENT_NOTIFICATION_DESTROY_APP_S,                   // Service - Notification destruction request result
        MRH_EVENT_NOTIFICATION_GET_WAITING_S,                   // Service - Notification waiting to be recieved result
        MRH_EVENT_NOTIFICATION_GET_NEXT_S,                      // Service - Requested next availbale notification
        MRH_EVENT_NOTIFICATION_CUSTOM_COMMAND_S,                // Service - Custom notification command response
        
        // Max
        MRH_EVENT_TYPE_MAX = MRH_EVENT_NOTIFICATION_CUSTOM_COMMAND_S,
        
        // Count
        MRH_EVENT_TYPE_COUNT = MRH_EVENT_TYPE_MAX + 1,
        
    }MRH_Event_Type;
    
    //*************************************************************************************
    // Event Data
    //*************************************************************************************

    // Event struct
    struct MRH_Event_t
    {
        // Group
        MRH_Uint32 u32_GroupID;                     // The group id of this event (sender / reciever)
        
        // Event Type
        MRH_Uint32 u32_Type;                        // Type of event

        // Event Data
        MRH_Uint8* p_Data;                          // Data
        MRH_Uint32 u32_DataSize;                    // Data buffer size in bytes
    };
    typedef struct MRH_Event_t MRH_Event;

#ifdef __cplusplus
}
#endif

#endif /* MRH_Event_h */
