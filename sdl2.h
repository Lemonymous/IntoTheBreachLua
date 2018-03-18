#ifndef __SDL_H__
#define __SDL_H__

#include <windows.h>

bool installSdlHooks();

#define HOOK_SDL(name,rettype,args) \
static rettype (**dll_##name) args = (rettype (**) args) (void *) &sdl2Table[ SDL_N_##name ]; \
extern "C" __declspec(dllexport) rettype hook_##name args

extern FARPROC sdl2Table[];

#define SDL_N_SDL_AddEventWatch 0
#define SDL_N_SDL_AddHintCallback 1
#define SDL_N_SDL_AddTimer 2
#define SDL_N_SDL_AllocFormat 3
#define SDL_N_SDL_AllocPalette 4
#define SDL_N_SDL_AllocRW 5
#define SDL_N_SDL_AtomicAdd 6
#define SDL_N_SDL_AtomicCAS 7
#define SDL_N_SDL_AtomicCASPtr 8
#define SDL_N_SDL_AtomicGet 9
#define SDL_N_SDL_AtomicGetPtr 10
#define SDL_N_SDL_AtomicLock 11
#define SDL_N_SDL_AtomicSet 12
#define SDL_N_SDL_AtomicSetPtr 13
#define SDL_N_SDL_AtomicTryLock 14
#define SDL_N_SDL_AtomicUnlock 15
#define SDL_N_SDL_AudioInit 16
#define SDL_N_SDL_AudioQuit 17
#define SDL_N_SDL_BuildAudioCVT 18
#define SDL_N_SDL_CalculateGammaRamp 19
#define SDL_N_SDL_CaptureMouse 20
#define SDL_N_SDL_ClearError 21
#define SDL_N_SDL_ClearHints 22
#define SDL_N_SDL_ClearQueuedAudio 23
#define SDL_N_SDL_CloseAudio 24
#define SDL_N_SDL_CloseAudioDevice 25
#define SDL_N_SDL_CondBroadcast 26
#define SDL_N_SDL_CondSignal 27
#define SDL_N_SDL_CondWait 28
#define SDL_N_SDL_CondWaitTimeout 29
#define SDL_N_SDL_ConvertAudio 30
#define SDL_N_SDL_ConvertPixels 31
#define SDL_N_SDL_ConvertSurface 32
#define SDL_N_SDL_ConvertSurfaceFormat 33
#define SDL_N_SDL_CreateColorCursor 34
#define SDL_N_SDL_CreateCond 35
#define SDL_N_SDL_CreateCursor 36
#define SDL_N_SDL_CreateMutex 37
#define SDL_N_SDL_CreateRGBSurface 38
#define SDL_N_SDL_CreateRGBSurfaceFrom 39
#define SDL_N_SDL_CreateRGBSurfaceWithFormat 40
#define SDL_N_SDL_CreateRGBSurfaceWithFormatFrom 41
#define SDL_N_SDL_CreateRenderer 42
#define SDL_N_SDL_CreateSemaphore 43
#define SDL_N_SDL_CreateShapedWindow 44
#define SDL_N_SDL_CreateSoftwareRenderer 45
#define SDL_N_SDL_CreateSystemCursor 46
#define SDL_N_SDL_CreateTexture 47
#define SDL_N_SDL_CreateTextureFromSurface 48
#define SDL_N_SDL_CreateThread 49
#define SDL_N_SDL_CreateWindow 50
#define SDL_N_SDL_CreateWindowAndRenderer 51
#define SDL_N_SDL_CreateWindowFrom 52
#define SDL_N_SDL_DXGIGetOutputInfo 53
#define SDL_N_SDL_DYNAPI_entry 54
#define SDL_N_SDL_DelEventWatch 55
#define SDL_N_SDL_DelHintCallback 56
#define SDL_N_SDL_Delay 57
#define SDL_N_SDL_DequeueAudio 58
#define SDL_N_SDL_DestroyCond 59
#define SDL_N_SDL_DestroyMutex 60
#define SDL_N_SDL_DestroyRenderer 61
#define SDL_N_SDL_DestroySemaphore 62
#define SDL_N_SDL_DestroyTexture 63
#define SDL_N_SDL_DestroyWindow 64
#define SDL_N_SDL_DetachThread 65
#define SDL_N_SDL_Direct3D9GetAdapterIndex 66
#define SDL_N_SDL_DisableScreenSaver 67
#define SDL_N_SDL_EnableScreenSaver 68
#define SDL_N_SDL_EnclosePoints 69
#define SDL_N_SDL_Error 70
#define SDL_N_SDL_EventState 71
#define SDL_N_SDL_FillRect 72
#define SDL_N_SDL_FillRects 73
#define SDL_N_SDL_FilterEvents 74
#define SDL_N_SDL_FlushEvent 75
#define SDL_N_SDL_FlushEvents 76
#define SDL_N_SDL_FreeCursor 77
#define SDL_N_SDL_FreeFormat 78
#define SDL_N_SDL_FreePalette 79
#define SDL_N_SDL_FreeRW 80
#define SDL_N_SDL_FreeSurface 81
#define SDL_N_SDL_FreeWAV 82
#define SDL_N_SDL_GL_BindTexture 83
#define SDL_N_SDL_GL_CreateContext 84
#define SDL_N_SDL_GL_DeleteContext 85
#define SDL_N_SDL_GL_ExtensionSupported 86
#define SDL_N_SDL_GL_GetAttribute 87
#define SDL_N_SDL_GL_GetCurrentContext 88
#define SDL_N_SDL_GL_GetCurrentWindow 89
#define SDL_N_SDL_GL_GetDrawableSize 90
#define SDL_N_SDL_GL_GetProcAddress 91
#define SDL_N_SDL_GL_GetSwapInterval 92
#define SDL_N_SDL_GL_LoadLibrary 93
#define SDL_N_SDL_GL_MakeCurrent 94
#define SDL_N_SDL_GL_ResetAttributes 95
#define SDL_N_SDL_GL_SetAttribute 96
#define SDL_N_SDL_GL_SetSwapInterval 97
#define SDL_N_SDL_GL_SwapWindow 98
#define SDL_N_SDL_GL_UnbindTexture 99
#define SDL_N_SDL_GL_UnloadLibrary 100
#define SDL_N_SDL_GameControllerAddMapping 101
#define SDL_N_SDL_GameControllerAddMappingsFromRW 102
#define SDL_N_SDL_GameControllerClose 103
#define SDL_N_SDL_GameControllerEventState 104
#define SDL_N_SDL_GameControllerFromInstanceID 105
#define SDL_N_SDL_GameControllerGetAttached 106
#define SDL_N_SDL_GameControllerGetAxis 107
#define SDL_N_SDL_GameControllerGetAxisFromString 108
#define SDL_N_SDL_GameControllerGetBindForAxis 109
#define SDL_N_SDL_GameControllerGetBindForButton 110
#define SDL_N_SDL_GameControllerGetButton 111
#define SDL_N_SDL_GameControllerGetButtonFromString 112
#define SDL_N_SDL_GameControllerGetJoystick 113
#define SDL_N_SDL_GameControllerGetStringForAxis 114
#define SDL_N_SDL_GameControllerGetStringForButton 115
#define SDL_N_SDL_GameControllerMapping 116
#define SDL_N_SDL_GameControllerMappingForGUID 117
#define SDL_N_SDL_GameControllerName 118
#define SDL_N_SDL_GameControllerNameForIndex 119
#define SDL_N_SDL_GameControllerOpen 120
#define SDL_N_SDL_GameControllerUpdate 121
#define SDL_N_SDL_GetAssertionHandler 122
#define SDL_N_SDL_GetAssertionReport 123
#define SDL_N_SDL_GetAudioDeviceName 124
#define SDL_N_SDL_GetAudioDeviceStatus 125
#define SDL_N_SDL_GetAudioDriver 126
#define SDL_N_SDL_GetAudioStatus 127
#define SDL_N_SDL_GetBasePath 128
#define SDL_N_SDL_GetCPUCacheLineSize 129
#define SDL_N_SDL_GetCPUCount 130
#define SDL_N_SDL_GetClipRect 131
#define SDL_N_SDL_GetClipboardText 132
#define SDL_N_SDL_GetClosestDisplayMode 133
#define SDL_N_SDL_GetColorKey 134
#define SDL_N_SDL_GetCurrentAudioDriver 135
#define SDL_N_SDL_GetCurrentDisplayMode 136
#define SDL_N_SDL_GetCurrentVideoDriver 137
#define SDL_N_SDL_GetCursor 138
#define SDL_N_SDL_GetDefaultAssertionHandler 139
#define SDL_N_SDL_GetDefaultCursor 140
#define SDL_N_SDL_GetDesktopDisplayMode 141
#define SDL_N_SDL_GetDisplayBounds 142
#define SDL_N_SDL_GetDisplayDPI 143
#define SDL_N_SDL_GetDisplayMode 144
#define SDL_N_SDL_GetDisplayName 145
#define SDL_N_SDL_GetDisplayUsableBounds 146
#define SDL_N_SDL_GetError 147
#define SDL_N_SDL_GetEventFilter 148
#define SDL_N_SDL_GetGlobalMouseState 149
#define SDL_N_SDL_GetGrabbedWindow 150
#define SDL_N_SDL_GetHint 151
#define SDL_N_SDL_GetHintBoolean 152
#define SDL_N_SDL_GetKeyFromName 153
#define SDL_N_SDL_GetKeyFromScancode 154
#define SDL_N_SDL_GetKeyName 155
#define SDL_N_SDL_GetKeyboardFocus 156
#define SDL_N_SDL_GetKeyboardState 157
#define SDL_N_SDL_GetModState 158
#define SDL_N_SDL_GetMouseFocus 159
#define SDL_N_SDL_GetMouseState 160
#define SDL_N_SDL_GetNumAudioDevices 161
#define SDL_N_SDL_GetNumAudioDrivers 162
#define SDL_N_SDL_GetNumDisplayModes 163
#define SDL_N_SDL_GetNumRenderDrivers 164
#define SDL_N_SDL_GetNumTouchDevices 165
#define SDL_N_SDL_GetNumTouchFingers 166
#define SDL_N_SDL_GetNumVideoDisplays 167
#define SDL_N_SDL_GetNumVideoDrivers 168
#define SDL_N_SDL_GetPerformanceCounter 169
#define SDL_N_SDL_GetPerformanceFrequency 170
#define SDL_N_SDL_GetPixelFormatName 171
#define SDL_N_SDL_GetPlatform 172
#define SDL_N_SDL_GetPowerInfo 173
#define SDL_N_SDL_GetPrefPath 174
#define SDL_N_SDL_GetQueuedAudioSize 175
#define SDL_N_SDL_GetRGB 176
#define SDL_N_SDL_GetRGBA 177
#define SDL_N_SDL_GetRelativeMouseMode 178
#define SDL_N_SDL_GetRelativeMouseState 179
#define SDL_N_SDL_GetRenderDrawBlendMode 180
#define SDL_N_SDL_GetRenderDrawColor 181
#define SDL_N_SDL_GetRenderDriverInfo 182
#define SDL_N_SDL_GetRenderTarget 183
#define SDL_N_SDL_GetRenderer 184
#define SDL_N_SDL_GetRendererInfo 185
#define SDL_N_SDL_GetRendererOutputSize 186
#define SDL_N_SDL_GetRevision 187
#define SDL_N_SDL_GetRevisionNumber 188
#define SDL_N_SDL_GetScancodeFromKey 189
#define SDL_N_SDL_GetScancodeFromName 190
#define SDL_N_SDL_GetScancodeName 191
#define SDL_N_SDL_GetShapedWindowMode 192
#define SDL_N_SDL_GetSurfaceAlphaMod 193
#define SDL_N_SDL_GetSurfaceBlendMode 194
#define SDL_N_SDL_GetSurfaceColorMod 195
#define SDL_N_SDL_GetSystemRAM 196
#define SDL_N_SDL_GetTextureAlphaMod 197
#define SDL_N_SDL_GetTextureBlendMode 198
#define SDL_N_SDL_GetTextureColorMod 199
#define SDL_N_SDL_GetThreadID 200
#define SDL_N_SDL_GetThreadName 201
#define SDL_N_SDL_GetTicks 202
#define SDL_N_SDL_GetTouchDevice 203
#define SDL_N_SDL_GetTouchFinger 204
#define SDL_N_SDL_GetVersion 205
#define SDL_N_SDL_GetVideoDriver 206
#define SDL_N_SDL_GetWindowBordersSize 207
#define SDL_N_SDL_GetWindowBrightness 208
#define SDL_N_SDL_GetWindowData 209
#define SDL_N_SDL_GetWindowDisplayIndex 210
#define SDL_N_SDL_GetWindowDisplayMode 211
#define SDL_N_SDL_GetWindowFlags 212
#define SDL_N_SDL_GetWindowFromID 213
#define SDL_N_SDL_GetWindowGammaRamp 214
#define SDL_N_SDL_GetWindowGrab 215
#define SDL_N_SDL_GetWindowID 216
#define SDL_N_SDL_GetWindowMaximumSize 217
#define SDL_N_SDL_GetWindowMinimumSize 218
#define SDL_N_SDL_GetWindowOpacity 219
#define SDL_N_SDL_GetWindowPixelFormat 220
#define SDL_N_SDL_GetWindowPosition 221
#define SDL_N_SDL_GetWindowSize 222
#define SDL_N_SDL_GetWindowSurface 223
#define SDL_N_SDL_GetWindowTitle 224
#define SDL_N_SDL_GetWindowWMInfo 225
#define SDL_N_SDL_HapticClose 226
#define SDL_N_SDL_HapticDestroyEffect 227
#define SDL_N_SDL_HapticEffectSupported 228
#define SDL_N_SDL_HapticGetEffectStatus 229
#define SDL_N_SDL_HapticIndex 230
#define SDL_N_SDL_HapticName 231
#define SDL_N_SDL_HapticNewEffect 232
#define SDL_N_SDL_HapticNumAxes 233
#define SDL_N_SDL_HapticNumEffects 234
#define SDL_N_SDL_HapticNumEffectsPlaying 235
#define SDL_N_SDL_HapticOpen 236
#define SDL_N_SDL_HapticOpenFromJoystick 237
#define SDL_N_SDL_HapticOpenFromMouse 238
#define SDL_N_SDL_HapticOpened 239
#define SDL_N_SDL_HapticPause 240
#define SDL_N_SDL_HapticQuery 241
#define SDL_N_SDL_HapticRumbleInit 242
#define SDL_N_SDL_HapticRumblePlay 243
#define SDL_N_SDL_HapticRumbleStop 244
#define SDL_N_SDL_HapticRumbleSupported 245
#define SDL_N_SDL_HapticRunEffect 246
#define SDL_N_SDL_HapticSetAutocenter 247
#define SDL_N_SDL_HapticSetGain 248
#define SDL_N_SDL_HapticStopAll 249
#define SDL_N_SDL_HapticStopEffect 250
#define SDL_N_SDL_HapticUnpause 251
#define SDL_N_SDL_HapticUpdateEffect 252
#define SDL_N_SDL_Has3DNow 253
#define SDL_N_SDL_HasAVX 254
#define SDL_N_SDL_HasAVX2 255
#define SDL_N_SDL_HasAltiVec 256
#define SDL_N_SDL_HasClipboardText 257
#define SDL_N_SDL_HasEvent 258
#define SDL_N_SDL_HasEvents 259
#define SDL_N_SDL_HasIntersection 260
#define SDL_N_SDL_HasMMX 261
#define SDL_N_SDL_HasRDTSC 262
#define SDL_N_SDL_HasSSE 263
#define SDL_N_SDL_HasSSE2 264
#define SDL_N_SDL_HasSSE3 265
#define SDL_N_SDL_HasSSE41 266
#define SDL_N_SDL_HasSSE42 267
#define SDL_N_SDL_HasScreenKeyboardSupport 268
#define SDL_N_SDL_HideWindow 269
#define SDL_N_SDL_Init 270
#define SDL_N_SDL_InitSubSystem 271
#define SDL_N_SDL_IntersectRect 272
#define SDL_N_SDL_IntersectRectAndLine 273
#define SDL_N_SDL_IsGameController 274
#define SDL_N_SDL_IsScreenKeyboardShown 275
#define SDL_N_SDL_IsScreenSaverEnabled 276
#define SDL_N_SDL_IsShapedWindow 277
#define SDL_N_SDL_IsTextInputActive 278
#define SDL_N_SDL_JoystickClose 279
#define SDL_N_SDL_JoystickCurrentPowerLevel 280
#define SDL_N_SDL_JoystickEventState 281
#define SDL_N_SDL_JoystickFromInstanceID 282
#define SDL_N_SDL_JoystickGetAttached 283
#define SDL_N_SDL_JoystickGetAxis 284
#define SDL_N_SDL_JoystickGetBall 285
#define SDL_N_SDL_JoystickGetButton 286
#define SDL_N_SDL_JoystickGetDeviceGUID 287
#define SDL_N_SDL_JoystickGetGUID 288
#define SDL_N_SDL_JoystickGetGUIDFromString 289
#define SDL_N_SDL_JoystickGetGUIDString 290
#define SDL_N_SDL_JoystickGetHat 291
#define SDL_N_SDL_JoystickInstanceID 292
#define SDL_N_SDL_JoystickIsHaptic 293
#define SDL_N_SDL_JoystickName 294
#define SDL_N_SDL_JoystickNameForIndex 295
#define SDL_N_SDL_JoystickNumAxes 296
#define SDL_N_SDL_JoystickNumBalls 297
#define SDL_N_SDL_JoystickNumButtons 298
#define SDL_N_SDL_JoystickNumHats 299
#define SDL_N_SDL_JoystickOpen 300
#define SDL_N_SDL_JoystickUpdate 301
#define SDL_N_SDL_LoadBMP_RW 302
#define SDL_N_SDL_LoadDollarTemplates 303
#define SDL_N_SDL_LoadFunction 304
#define SDL_N_SDL_LoadObject 305
#define SDL_N_SDL_LoadWAV_RW 306
#define SDL_N_SDL_LockAudio 307
#define SDL_N_SDL_LockAudioDevice 308
#define SDL_N_SDL_LockMutex 309
#define SDL_N_SDL_LockSurface 310
#define SDL_N_SDL_LockTexture 311
#define SDL_N_SDL_Log 312
#define SDL_N_SDL_LogCritical 313
#define SDL_N_SDL_LogDebug 314
#define SDL_N_SDL_LogError 315
#define SDL_N_SDL_LogGetOutputFunction 316
#define SDL_N_SDL_LogGetPriority 317
#define SDL_N_SDL_LogInfo 318
#define SDL_N_SDL_LogMessage 319
#define SDL_N_SDL_LogMessageV 320
#define SDL_N_SDL_LogResetPriorities 321
#define SDL_N_SDL_LogSetAllPriority 322
#define SDL_N_SDL_LogSetOutputFunction 323
#define SDL_N_SDL_LogSetPriority 324
#define SDL_N_SDL_LogVerbose 325
#define SDL_N_SDL_LogWarn 326
#define SDL_N_SDL_LowerBlit 327
#define SDL_N_SDL_LowerBlitScaled 328
#define SDL_N_SDL_MapRGB 329
#define SDL_N_SDL_MapRGBA 330
#define SDL_N_SDL_MasksToPixelFormatEnum 331
#define SDL_N_SDL_MaximizeWindow 332
#define SDL_N_SDL_MinimizeWindow 333
#define SDL_N_SDL_MixAudio 334
#define SDL_N_SDL_MixAudioFormat 335
#define SDL_N_SDL_MouseIsHaptic 336
#define SDL_N_SDL_NumHaptics 337
#define SDL_N_SDL_NumJoysticks 338
#define SDL_N_SDL_OpenAudio 339
#define SDL_N_SDL_OpenAudioDevice 340
#define SDL_N_SDL_PauseAudio 341
#define SDL_N_SDL_PauseAudioDevice 342
#define SDL_N_SDL_PeepEvents 343
#define SDL_N_SDL_PixelFormatEnumToMasks 344
#define SDL_N_SDL_PollEvent 345
#define SDL_N_SDL_PumpEvents 346
#define SDL_N_SDL_PushEvent 347
#define SDL_N_SDL_QueryTexture 348
#define SDL_N_SDL_QueueAudio 349
#define SDL_N_SDL_Quit 350
#define SDL_N_SDL_QuitSubSystem 351
#define SDL_N_SDL_RWFromConstMem 352
#define SDL_N_SDL_RWFromFP 353
#define SDL_N_SDL_RWFromFile 354
#define SDL_N_SDL_RWFromMem 355
#define SDL_N_SDL_RaiseWindow 356
#define SDL_N_SDL_ReadBE16 357
#define SDL_N_SDL_ReadBE32 358
#define SDL_N_SDL_ReadBE64 359
#define SDL_N_SDL_ReadLE16 360
#define SDL_N_SDL_ReadLE32 361
#define SDL_N_SDL_ReadLE64 362
#define SDL_N_SDL_ReadU8 363
#define SDL_N_SDL_RecordGesture 364
#define SDL_N_SDL_RegisterApp 365
#define SDL_N_SDL_RegisterEvents 366
#define SDL_N_SDL_RemoveTimer 367
#define SDL_N_SDL_RenderClear 368
#define SDL_N_SDL_RenderCopy 369
#define SDL_N_SDL_RenderCopyEx 370
#define SDL_N_SDL_RenderDrawLine 371
#define SDL_N_SDL_RenderDrawLines 372
#define SDL_N_SDL_RenderDrawPoint 373
#define SDL_N_SDL_RenderDrawPoints 374
#define SDL_N_SDL_RenderDrawRect 375
#define SDL_N_SDL_RenderDrawRects 376
#define SDL_N_SDL_RenderFillRect 377
#define SDL_N_SDL_RenderFillRects 378
#define SDL_N_SDL_RenderGetClipRect 379
#define SDL_N_SDL_RenderGetD3D9Device 380
#define SDL_N_SDL_RenderGetIntegerScale 381
#define SDL_N_SDL_RenderGetLogicalSize 382
#define SDL_N_SDL_RenderGetScale 383
#define SDL_N_SDL_RenderGetViewport 384
#define SDL_N_SDL_RenderIsClipEnabled 385
#define SDL_N_SDL_RenderPresent 386
#define SDL_N_SDL_RenderReadPixels 387
#define SDL_N_SDL_RenderSetClipRect 388
#define SDL_N_SDL_RenderSetIntegerScale 389
#define SDL_N_SDL_RenderSetLogicalSize 390
#define SDL_N_SDL_RenderSetScale 391
#define SDL_N_SDL_RenderSetViewport 392
#define SDL_N_SDL_RenderTargetSupported 393
#define SDL_N_SDL_ReportAssertion 394
#define SDL_N_SDL_ResetAssertionReport 395
#define SDL_N_SDL_RestoreWindow 396
#define SDL_N_SDL_SaveAllDollarTemplates 397
#define SDL_N_SDL_SaveBMP_RW 398
#define SDL_N_SDL_SaveDollarTemplate 399
#define SDL_N_SDL_SemPost 400
#define SDL_N_SDL_SemTryWait 401
#define SDL_N_SDL_SemValue 402
#define SDL_N_SDL_SemWait 403
#define SDL_N_SDL_SemWaitTimeout 404
#define SDL_N_SDL_SetAssertionHandler 405
#define SDL_N_SDL_SetClipRect 406
#define SDL_N_SDL_SetClipboardText 407
#define SDL_N_SDL_SetColorKey 408
#define SDL_N_SDL_SetCursor 409
#define SDL_N_SDL_SetError 410
#define SDL_N_SDL_SetEventFilter 411
#define SDL_N_SDL_SetHint 412
#define SDL_N_SDL_SetHintWithPriority 413
#define SDL_N_SDL_SetMainReady 414
#define SDL_N_SDL_SetModState 415
#define SDL_N_SDL_SetPaletteColors 416
#define SDL_N_SDL_SetPixelFormatPalette 417
#define SDL_N_SDL_SetRelativeMouseMode 418
#define SDL_N_SDL_SetRenderDrawBlendMode 419
#define SDL_N_SDL_SetRenderDrawColor 420
#define SDL_N_SDL_SetRenderTarget 421
#define SDL_N_SDL_SetSurfaceAlphaMod 422
#define SDL_N_SDL_SetSurfaceBlendMode 423
#define SDL_N_SDL_SetSurfaceColorMod 424
#define SDL_N_SDL_SetSurfacePalette 425
#define SDL_N_SDL_SetSurfaceRLE 426
#define SDL_N_SDL_SetTextInputRect 427
#define SDL_N_SDL_SetTextureAlphaMod 428
#define SDL_N_SDL_SetTextureBlendMode 429
#define SDL_N_SDL_SetTextureColorMod 430
#define SDL_N_SDL_SetThreadPriority 431
#define SDL_N_SDL_SetWindowBordered 432
#define SDL_N_SDL_SetWindowBrightness 433
#define SDL_N_SDL_SetWindowData 434
#define SDL_N_SDL_SetWindowDisplayMode 435
#define SDL_N_SDL_SetWindowFullscreen 436
#define SDL_N_SDL_SetWindowGammaRamp 437
#define SDL_N_SDL_SetWindowGrab 438
#define SDL_N_SDL_SetWindowHitTest 439
#define SDL_N_SDL_SetWindowIcon 440
#define SDL_N_SDL_SetWindowInputFocus 441
#define SDL_N_SDL_SetWindowMaximumSize 442
#define SDL_N_SDL_SetWindowMinimumSize 443
#define SDL_N_SDL_SetWindowModalFor 444
#define SDL_N_SDL_SetWindowOpacity 445
#define SDL_N_SDL_SetWindowPosition 446
#define SDL_N_SDL_SetWindowResizable 447
#define SDL_N_SDL_SetWindowShape 448
#define SDL_N_SDL_SetWindowSize 449
#define SDL_N_SDL_SetWindowTitle 450
#define SDL_N_SDL_SetWindowsMessageHook 451
#define SDL_N_SDL_ShowCursor 452
#define SDL_N_SDL_ShowMessageBox 453
#define SDL_N_SDL_ShowSimpleMessageBox 454
#define SDL_N_SDL_ShowWindow 455
#define SDL_N_SDL_SoftStretch 456
#define SDL_N_SDL_StartTextInput 457
#define SDL_N_SDL_StopTextInput 458
#define SDL_N_SDL_TLSCreate 459
#define SDL_N_SDL_TLSGet 460
#define SDL_N_SDL_TLSSet 461
#define SDL_N_SDL_ThreadID 462
#define SDL_N_SDL_TryLockMutex 463
#define SDL_N_SDL_UnionRect 464
#define SDL_N_SDL_UnloadObject 465
#define SDL_N_SDL_UnlockAudio 466
#define SDL_N_SDL_UnlockAudioDevice 467
#define SDL_N_SDL_UnlockMutex 468
#define SDL_N_SDL_UnlockSurface 469
#define SDL_N_SDL_UnlockTexture 470
#define SDL_N_SDL_UnregisterApp 471
#define SDL_N_SDL_UpdateTexture 472
#define SDL_N_SDL_UpdateWindowSurface 473
#define SDL_N_SDL_UpdateWindowSurfaceRects 474
#define SDL_N_SDL_UpdateYUVTexture 475
#define SDL_N_SDL_UpperBlit 476
#define SDL_N_SDL_UpperBlitScaled 477
#define SDL_N_SDL_VideoInit 478
#define SDL_N_SDL_VideoQuit 479
#define SDL_N_SDL_WaitEvent 480
#define SDL_N_SDL_WaitEventTimeout 481
#define SDL_N_SDL_WaitThread 482
#define SDL_N_SDL_WarpMouseGlobal 483
#define SDL_N_SDL_WarpMouseInWindow 484
#define SDL_N_SDL_WasInit 485
#define SDL_N_SDL_WriteBE16 486
#define SDL_N_SDL_WriteBE32 487
#define SDL_N_SDL_WriteBE64 488
#define SDL_N_SDL_WriteLE16 489
#define SDL_N_SDL_WriteLE32 490
#define SDL_N_SDL_WriteLE64 491
#define SDL_N_SDL_WriteU8 492
#define SDL_N_SDL_abs 493
#define SDL_N_SDL_acos 494
#define SDL_N_SDL_asin 495
#define SDL_N_SDL_atan 496
#define SDL_N_SDL_atan2 497
#define SDL_N_SDL_atof 498
#define SDL_N_SDL_atoi 499
#define SDL_N_SDL_calloc 500
#define SDL_N_SDL_ceil 501
#define SDL_N_SDL_copysign 502
#define SDL_N_SDL_cos 503
#define SDL_N_SDL_cosf 504
#define SDL_N_SDL_fabs 505
#define SDL_N_SDL_floor 506
#define SDL_N_SDL_free 507
#define SDL_N_SDL_getenv 508
#define SDL_N_SDL_iconv 509
#define SDL_N_SDL_iconv_close 510
#define SDL_N_SDL_iconv_open 511
#define SDL_N_SDL_iconv_string 512
#define SDL_N_SDL_isdigit 513
#define SDL_N_SDL_isspace 514
#define SDL_N_SDL_itoa 515
#define SDL_N_SDL_lltoa 516
#define SDL_N_SDL_log 517
#define SDL_N_SDL_ltoa 518
#define SDL_N_SDL_malloc 519
#define SDL_N_SDL_memcmp 520
#define SDL_N_SDL_memcpy 521
#define SDL_N_SDL_memmove 522
#define SDL_N_SDL_memset 523
#define SDL_N_SDL_pow 524
#define SDL_N_SDL_qsort 525
#define SDL_N_SDL_realloc 526
#define SDL_N_SDL_scalbn 527
#define SDL_N_SDL_setenv 528
#define SDL_N_SDL_sin 529
#define SDL_N_SDL_sinf 530
#define SDL_N_SDL_snprintf 531
#define SDL_N_SDL_sqrt 532
#define SDL_N_SDL_sqrtf 533
#define SDL_N_SDL_sscanf 534
#define SDL_N_SDL_strcasecmp 535
#define SDL_N_SDL_strchr 536
#define SDL_N_SDL_strcmp 537
#define SDL_N_SDL_strdup 538
#define SDL_N_SDL_strlcat 539
#define SDL_N_SDL_strlcpy 540
#define SDL_N_SDL_strlen 541
#define SDL_N_SDL_strlwr 542
#define SDL_N_SDL_strncasecmp 543
#define SDL_N_SDL_strncmp 544
#define SDL_N_SDL_strrchr 545
#define SDL_N_SDL_strrev 546
#define SDL_N_SDL_strstr 547
#define SDL_N_SDL_strtod 548
#define SDL_N_SDL_strtol 549
#define SDL_N_SDL_strtoll 550
#define SDL_N_SDL_strtoul 551
#define SDL_N_SDL_strtoull 552
#define SDL_N_SDL_strupr 553
#define SDL_N_SDL_tan 554
#define SDL_N_SDL_tanf 555
#define SDL_N_SDL_tolower 556
#define SDL_N_SDL_toupper 557
#define SDL_N_SDL_uitoa 558
#define SDL_N_SDL_ulltoa 559
#define SDL_N_SDL_ultoa 560
#define SDL_N_SDL_utf8strlcpy 561
#define SDL_N_SDL_vsnprintf 562
#define SDL_N_SDL_vsscanf 563
#define SDL_N_SDL_wcslcat 564
#define SDL_N_SDL_wcslcpy 565
#define SDL_N_SDL_wcslen 566
#endif
