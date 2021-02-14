static const char stillOnlineMqtt[] PROGMEM = "MQTT: still online.";
static const char tryConnectMqttS[] PROGMEM = "Trying to connect to MQTT-broker";
static const char mqttOk[] PROGMEM = "MQTT-connection established.";
static const char sleepTimerEOP[] PROGMEM = "Sleep-timer: after last track of playlist.";
static const char sleepTimerEOT[] PROGMEM = "Sleep-timer: after end of current track.";
static const char sleepTimerStop[] PROGMEM = "Sleep-timer has been disabled.";
static const char sleepTimerEO5[] PROGMEM = "Sleep-timer: after five track or end of playlist - whatever is reached first";
static const char sleepTimerAlreadyStopped[] PROGMEM = "sleep-timer is already disabled.";
static const char sleepTimerSetTo[] PROGMEM = "sleep-timer adjusted to";
static const char allowButtons[] PROGMEM = "Unlocking all keys.";
static const char lockButtons[] PROGMEM = "Locking all keys.";
static const char noPlaylistNotAllowedMqtt[] PROGMEM = "Playmode cannot be adjusted to 'no playlist' via MQTT.";
static const char playmodeChangedMQtt[] PROGMEM = "Playlist adjusted via MQTT.";
static const char noPlaymodeChangeIfIdle[] PROGMEM = "Playlist cannot be adjusted while no playlist is active.";
static const char noValidTopic[] PROGMEM = "No valid MQTT-topic";
static const char freePtr[] PROGMEM = "Releasing Pointer";
static const char freeMemory[] PROGMEM = "Free memory";
static const char writeEntryToNvs[] PROGMEM = "Storing data to NVS";
static const char freeMemoryAfterFree[] PROGMEM = "Free memory after cleaning";
static const char releaseMemoryOfOldPlaylist[] PROGMEM = "Releasing memory of old playlist.";
static const char dirOrFileDoesNotExist[] PROGMEM = "File of directory does not exist";
static const char unableToAllocateMemForPlaylist[] PROGMEM = "Unable to allocate memory for playlist!";
static const char unableToAllocateMem[] PROGMEM = "Unable to allocate memory!";
static const char fileModeDetected[] PROGMEM = "File-mode detected.";
static const char nameOfFileFound[] PROGMEM = "File found";
static const char reallocCalled[] PROGMEM = "Reallocated memory.";
static const char unableToAllocateMemForLinearPlaylist[] PROGMEM = "Unable to allocate memory for linear playlist!";
static const char numberOfValidFiles[] PROGMEM = "Number of valid files";
static const char newLoudnessReceivedQueue[] PROGMEM = "New volume received via queue";
static const char newCntrlReceivedQueue[] PROGMEM = "Control-command received via queue";
static const char newPlaylistReceived[] PROGMEM = "New playlist received";
static const char repeatTrackDueToPlaymode[] PROGMEM = "Repeating track due to playmode configured.";
static const char repeatPlaylistDueToPlaymode[] PROGMEM = "Repeating playlist due to playmode configured.";
static const char cmndStop[] PROGMEM = "Command: stop";
static const char cmndPause[] PROGMEM = "Command: pause";
static const char cmndNextTrack[] PROGMEM = "Command: next track";
static const char cmndPrevTrack[] PROGMEM = "Command: previous track";
static const char cmndFirstTrack[] PROGMEM = "Command: first track of playlist";
static const char cmndLastTrack[] PROGMEM = "Command: last track of playlist";
static const char cmndDoesNotExist[] PROGMEM = "Command requested does not exist.";
static const char lastTrackAlreadyActive[] PROGMEM = "Already playing last track.";
static const char firstTrackAlreadyActive[] PROGMEM = "Already playing first track.";
static const char trackStartAudiobook[] PROGMEM = "Starting track in playmode from the very beginning.";
static const char trackStart[] PROGMEM = "Starting track from the very beginning.";
static const char trackChangeWebstream[] PROGMEM = "Playing from the very beginning is not possible while webradio-mode is active.";
static const char endOfPlaylistReached[] PROGMEM = "Reached end of playlist.";
static const char trackStartatPos[] PROGMEM = "Starting track at position";
static const char rfidScannerReady[] PROGMEM = "RFID-tags can now be applied...";
static const char rfidTagDetected[] PROGMEM = "RFID-tag detected: ";
static const char rfid15693TagDetected[] PROGMEM = "RFID-ta (ISO-15693) detected: ";
static const char rfidTagReceived[] PROGMEM = "RFID-tag received";
static const char rfidTagUnknownInNvs[] PROGMEM = "RFID-tag is unkown to NVS.";
static const char goToSleepDueToIdle[] PROGMEM = "Going to deepsleep due to inactivity-timer...";
static const char goToSleepDueToTimer[] PROGMEM = "Going to deepsleep due to sleep timer...";
static const char goToSleepNow[] PROGMEM = "Going to deepsleep now!";
static const char maxLoudnessReached[] PROGMEM = "Already reached max volume!";
static const char minLoudnessReached[] PROGMEM = "Already reached min volume!";
static const char errorOccured[] PROGMEM = "Error occured!";
static const char noMp3FilesInDir[] PROGMEM = "Directory does not contain mp3-files.";
static const char modeSingleTrack[] PROGMEM = "Mode: Single track";
static const char modeSingleTrackLoop[] PROGMEM = "Mode: single track as infinite loop";
static const char modeSingleAudiobook[] PROGMEM = "Mode: audiobook";
static const char modeSingleAudiobookLoop[] PROGMEM = "Mode: audiobook as infinite loop";
static const char modeAllTrackAlphSorted[] PROGMEM = "Mode: all tracks (in alph. order) of directory";
static const char modeAllTrackRandom[] PROGMEM = "Mode: all tracks (in random. order) of directory";
static const char modeAllTrackAlphSortedLoop[] PROGMEM = "Mode: all tracks (in alph. order) of directory as infinite loop";
static const char modeAllTrackRandomLoop[] PROGMEM = "Mode: all tracks (in random order) of directory as infinite loop";
static const char modeWebstream[] PROGMEM = "Mode: webstream";
static const char webstreamNotAvailable[] PROGMEM = "Unable to access webstream as no wifi-connection is available!";
static const char modeDoesNotExist[] PROGMEM = "Playmode does not exist!";
static const char modeRepeatNone[] PROGMEM = "Repeatmode: no repeat";
static const char modeRepeatTrack[] PROGMEM = "Repeatmode: current track";
static const char modeRepeatPlaylist[] PROGMEM = "Repeatmode: whole playlist";
static const char modeRepeatTracknPlaylist[] PROGMEM = "Repeatmode: track and playlist";
static const char modificatorAllButtonsLocked[] PROGMEM = "Modificator: locking all keys via RFID-tag.";
static const char modificatorAllButtonsUnlocked[] PROGMEM = "Modificator: unlocking all keys via RFID-tag.";
static const char modificatorSleepd[] PROGMEM = "Modificator: sleep-Timer deactivated.";
static const char modificatorSleepTimer15[] PROGMEM = "Modificator: sleep-Timer enabled via RFID (15 minutes).";
static const char modificatorSleepTimer30[] PROGMEM = "Modificator: sleep-Timer enabled via RFID (30 minutes).";
static const char modificatorSleepTimer60[] PROGMEM = "Modificator: sleep-Timer enabled via RFID (60 minutes).";
static const char modificatorSleepTimer120[] PROGMEM = "Modificator: sleep-Timer enabled via RFID (2 hours).";
static const char ledsDimmedToNightmode[] PROGMEM = "Dimmed LEDs to nightmode.";
static const char modificatorNotallowedWhenIdle[] PROGMEM = "Modificator cannot be applied while playlist is inactive.";
static const char modificatorSleepAtEOT[] PROGMEM = "Modificator: adjusted sleep-timer to after end of current track.";
static const char modificatorSleepAtEOTd[] PROGMEM = "Modificator: disabled sleep-timer after end of current track.";
static const char modificatorSleepAtEOP[] PROGMEM = "Modificator: adjusted sleep-timer to after end of playlist.";
static const char modificatorSleepAtEOPd[] PROGMEM = "Modificator: disabled sleep-timer after end of playlist.";
static const char modificatorAllTrackAlphSortedLoop[] PROGMEM = "Modificator: adjusted to all tracks (in alph. order) as infinite loop.";
static const char modificatorAllTrackRandomLoop[] PROGMEM = "Modificator: adjusted to all tracks (in random order) as infinite loop.";
static const char modificatorCurTrackLoop[] PROGMEM = "Modificator: adjusted to current track as infinite loop.";
static const char modificatorCurAudiobookLoop[] PROGMEM = "Modificator: adjusted to current audiobook as infinite loop.";
static const char modificatorPlaylistLoopActive[] PROGMEM = "Modificator: adjusted to all tracks as infinite loop.";
static const char modificatorPlaylistLoopDeactive[] PROGMEM = "Modificator: disabled all tracks as infinite loop.";
static const char modificatorTrackActive[] PROGMEM = "Modificator: adjusted to current track as infinite loop.";
static const char modificatorTrackDeactive[] PROGMEM = "Modificator: disabled current track as infinite loop.";
static const char modificatorNotAllowed[] PROGMEM = "Unable to apply modificator.";
static const char modificatorLoopRev[] PROGMEM = "Modificator: infinite loop ended.";
static const char modificatorDoesNotExist[] PROGMEM = "This type of card-modificator does not exist";
static const char errorOccuredNvs[] PROGMEM = "Error occured while reading from NVS!";
static const char statementsReceivedByServer[] PROGMEM = "Data received from server";
static const char savedSsidInNvs[] PROGMEM = "Storing SSID to NVS";
static const char savedWifiPwdInNvs[] PROGMEM = "Storing wifi-password to NVS";
static const char apReady[] PROGMEM = "Started wifi-access-point";
static const char httpReady[] PROGMEM = "Started HTTP-server.";
static const char unableToMountSd[] PROGMEM = "Unable to mount sd-card.";
static const char unableToCreateVolQ[] PROGMEM = "Unable to create volume-queue.";
static const char unableToCreateRfidQ[] PROGMEM = "Unable to create RFID-queue.";
static const char unableToCreateMgmtQ[] PROGMEM = "Unable to play-management-queue.";
static const char unableToCreatePlayQ[] PROGMEM = "Unable to create track-queue..";
static const char initialBrightnessfromNvs[] PROGMEM = "Restoring initial LED-brightness from NVS";
static const char wroteInitialBrightnessToNvs[] PROGMEM = "Storing initial LED-brightness to NVS.";
static const char restoredInitialBrightnessForNmFromNvs[] PROGMEM = "Restored LED-brightness for nightmode from NVS";
static const char wroteNmBrightnessToNvs[] PROGMEM = "Stored LED-brightness for nightmode to NVS.";
static const char wroteFtpUserToNvs[] PROGMEM = "Stored FTP-user to NVS.";
static const char restoredFtpUserFromNvs[] PROGMEM = "Restored FTP-user from NVS";
static const char wroteFtpPwdToNvs[] PROGMEM = "Stored FTP-password to NVS.";
static const char restoredFtpPwdFromNvs[] PROGMEM = "Restored FTP-password from NVS";
static const char restoredMaxInactivityFromNvs[] PROGMEM = "Restored maximum inactivity-time from NVS.";
static const char wroteMaxInactivityToNvs[] PROGMEM = "Stored maximum inactivity-time to NVS.";
static const char restoredInitialLoudnessFromNvs[] PROGMEM = "Restored initial volume from NVS";
static const char wroteInitialLoudnessToNvs[] PROGMEM = "Stored initial volume to NVS.";
static const char restoredMaxLoudnessForSpeakerFromNvs[] PROGMEM = "Restored maximum volume for speaker from NVS";
static const char restoredMaxLoudnessForHeadphoneFromNvs[] PROGMEM = "Restored maximum volume for headphone from NVS";
static const char wroteMaxLoudnessForSpeakerToNvs[] PROGMEM = "Wrote maximum volume for speaker to NVS.";
static const char wroteMaxLoudnessForHeadphoneToNvs[] PROGMEM = "Wrote maximum volume for headphone to NVS.";
static const char maxVolumeSet[] PROGMEM = "Maximum volume set to ";
static const char wroteMqttFlagToNvs[] PROGMEM = "Stored MQTT-flag to NVS.";
static const char restoredMqttActiveFromNvs[] PROGMEM = "Restored MQTT-flag (enabled) from NVS";
static const char restoredMqttDeactiveFromNvs[] PROGMEM = "Restored MQTT-flag (disabled) from NVS";
static const char wroteMqttServerToNvs[] PROGMEM = "Stored MQTT-server to NVS.";
static const char restoredMqttServerFromNvs[] PROGMEM = "Restored MQTT-Server from NVS";
static const char wroteMqttUserToNvs[] PROGMEM = "Stored MQTT-user to NVS.";
static const char restoredMqttUserFromNvs[] PROGMEM = "Restored MQTT-user from NVS";
static const char wroteMqttPwdToNvs[] PROGMEM = "Stored MQTT-password to NVS.";
static const char restoredMqttPwdFromNvs[] PROGMEM = "Restored MQTT-password from NVS";
static const char mqttWithPwd[] PROGMEM = "Try to connect to MQTT-server with user und password";
static const char mqttWithoutPwd[] PROGMEM = "Try to connect to MQTT-server without user und password";
static const char ssidNotFoundInNvs[] PROGMEM = "Unable to find SSID to NVS.";
static const char wifiPwdNotFoundInNvs[] PROGMEM = "Unable to find wifi-password to NVS.";
static const char wifiStaticIpConfigNotFoundInNvs[] PROGMEM = "Unable to find static wifi-ip-configuration to NVS.";
static const char wifiHostnameNotSet[] PROGMEM = "Unable to find hostname-configuration to NVS.";
static const char mqttConnFailed[] PROGMEM = "Unable to establish mqtt-connection, trying again...";
static const char restoredHostnameFromNvs[] PROGMEM = "Restored hostname from NVS";
static const char currentVoltageMsg[] PROGMEM = "Current battery-voltage";
static const char voltageTooLow[] PROGMEM = "Low battery-voltage";
static const char sdBootFailedDeepsleep[] PROGMEM = "Failed to boot due to SD. Will go to deepsleep...";
static const char wifiEnabledAfterRestart[] PROGMEM = "WiFi will be enabled.";
static const char wifiDisabledAfterRestart[] PROGMEM = "WiFi will be disabled .";
static const char voltageIndicatorLowFromNVS[] PROGMEM = "Restored lower voltage-level for Neopixel-display from NVS";
static const char voltageIndicatorHighFromNVS[] PROGMEM = "Restored upper voltage-level for Neopixel-display from NVS";
static const char voltageCheckIntervalFromNVS[] PROGMEM = "Restored interval of battery-measurement or Neopixel-display from NVS";
static const char warningLowVoltageFromNVS[] PROGMEM = "Restored battery-voltage-level for warning via Neopixel from NVS";
static const char unableToRestoreLastRfidFromNVS[] PROGMEM = "Unable to restore last RFID from NVS";
static const char restoredLastRfidFromNVS[] PROGMEM = "Restored last RFID from NVS";
static const char failedOpenFileForWrite[] PROGMEM = "Failed to open file for writing";
static const char fileWritten[] PROGMEM = "File written";
static const char writeFailed[] PROGMEM = "Write failed";
static const char writingFile[] PROGMEM = "Writing file";
static const char failedToOpenFileForAppending[] PROGMEM = "Failed to open file for appending";
static const char listingDirectory[] PROGMEM = "Listing directory";
static const char failedToOpenDirectory[] PROGMEM = "Failed to open directory";
static const char notADirectory[] PROGMEM = "Not a directory";
static const char sdMountedMmc1BitMode[] PROGMEM = "SD card mounted in SPI-mode configured...";
static const char backupRecoveryWebsite[] PROGMEM = "<p>Backup-file is being applied...<br />Back to <a href=\"javascript:history.back()\">last page</a>.</p>";
static const char restartWebsite[] PROGMEM = "<p>ESPuino is being restarted...<br />Back to <a href=\"javascript:history.back()\">last page</a>.</p>";
static const char mqttMsgReceived[] PROGMEM = "MQTT-message received";
static const char trackPausedAtPos[] PROGMEM = "Track paused at position";
static const char freeHeapWithoutFtp[] PROGMEM = "Free heap before FTP-allocation";
static const char freeHeapWithFtp[] PROGMEM = "Free heap after FTP-allocation";
static const char freeHeapAfterSetup[] PROGMEM = "Free heap after setup";
static const char tryStaticIpConfig[] PROGMEM = "Performing static IP-configuration...";
static const char staticIPConfigFailed[] PROGMEM = "Static IP-configuration failed";
static const char wakeUpRfidNoIso14443[] PROGMEM = "Wakeup caused by low power card-detection. RF-field changed but no ISO-14443 card on reader was found. So I'll return back to sleep now...";
static const char lowPowerCardSuccess[] PROGMEM = "Switch to low power card-detection: success";
static const char rememberLastVolume[] PROGMEM = "Restored volume used before last shutdown. This overwrites the initial volume configured via webgui.";
static const char unableToStartFtpServer[] PROGMEM = "FTP-server cannot be started. This is because FTP-service is already active of because WiFi is unavailable.";