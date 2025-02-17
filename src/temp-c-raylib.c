#include <raylib.h>
#include <raymath.h>
#include <rlgl.h>
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#define PHYSAC_IMPLEMENTATION
#include "physac.h"
char *structNames[] = {"Vector2","Vector3","Vector4","Matrix","Color","Rectangle","Image","Texture","RenderTexture","NPatchInfo","GlyphInfo","Font","Camera3D","Camera2D","Mesh","Shader","MaterialMap","Material","Transform","BoneInfo","Model","ModelAnimation","Ray","RayCollision","BoundingBox","Wave","AudioStream","Sound","Music","VrDeviceInfo","VrStereoConfig","FilePathList","AutomationEvent","AutomationEventList",};
int structSizes[] = {sizeof(Vector2),sizeof(Vector3),sizeof(Vector4),sizeof(Matrix),sizeof(Color),sizeof(Rectangle),sizeof(Image),sizeof(Texture),sizeof(RenderTexture),sizeof(NPatchInfo),sizeof(GlyphInfo),sizeof(Font),sizeof(Camera3D),sizeof(Camera2D),sizeof(Mesh),sizeof(Shader),sizeof(MaterialMap),sizeof(Material),sizeof(Transform),sizeof(BoneInfo),sizeof(Model),sizeof(ModelAnimation),sizeof(Ray),sizeof(RayCollision),sizeof(BoundingBox),sizeof(Wave),sizeof(AudioStream),sizeof(Sound),sizeof(Music),sizeof(VrDeviceInfo),sizeof(VrStereoConfig),sizeof(FilePathList),sizeof(AutomationEvent),sizeof(AutomationEventList),};
int StructCount() {return 34;}

int GetStructSize(int index) {return structSizes[index];}
void GetStructName(char *retName, int strlen, int index) {
  for (int i=0;i<strlen;i++) {
    retName[i] = structNames[index][i];
  }
}
void InitWindowRetPtr(int *width,  int *height,  const char *title){InitWindow(*width, *height, title);}  // Initialize window and OpenGL context
void CloseWindowRetPtr(){CloseWindow();}                                     // Close window and unload OpenGL context
void WindowShouldCloseRetPtr(bool *ret){*ret=WindowShouldClose();}                               // Check if application should close (KEY_ESCAPE pressed or windows close icon clicked)
void IsWindowReadyRetPtr(bool *ret){*ret=IsWindowReady();}                                   // Check if window has been initialized successfully
void IsWindowFullscreenRetPtr(bool *ret){*ret=IsWindowFullscreen();}                              // Check if window is currently fullscreen
void IsWindowHiddenRetPtr(bool *ret){*ret=IsWindowHidden();}                                  // Check if window is currently hidden (only PLATFORM_DESKTOP)
void IsWindowMinimizedRetPtr(bool *ret){*ret=IsWindowMinimized();}                               // Check if window is currently minimized (only PLATFORM_DESKTOP)
void IsWindowMaximizedRetPtr(bool *ret){*ret=IsWindowMaximized();}                               // Check if window is currently maximized (only PLATFORM_DESKTOP)
void IsWindowFocusedRetPtr(bool *ret){*ret=IsWindowFocused();}                                 // Check if window is currently focused (only PLATFORM_DESKTOP)
void IsWindowResizedRetPtr(bool *ret){*ret=IsWindowResized();}                                 // Check if window has been resized last frame
void IsWindowStateRetPtr(bool *ret, unsigned int *flag){*ret=IsWindowState(*flag);}                      // Check if one specific window flag is enabled
void SetWindowStateRetPtr(unsigned int *flags){SetWindowState(*flags);}                    // Set window configuration state using flags (only PLATFORM_DESKTOP)
void ClearWindowStateRetPtr(unsigned int *flags){ClearWindowState(*flags);}                  // Clear window configuration state flags
void ToggleFullscreenRetPtr(){ToggleFullscreen();}                                // Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP)
void ToggleBorderlessWindowedRetPtr(){ToggleBorderlessWindowed();}                        // Toggle window state: borderless windowed (only PLATFORM_DESKTOP)
void MaximizeWindowRetPtr(){MaximizeWindow();}                                  // Set window state: maximized, if resizable (only PLATFORM_DESKTOP)
void MinimizeWindowRetPtr(){MinimizeWindow();}                                  // Set window state: minimized, if resizable (only PLATFORM_DESKTOP)
void RestoreWindowRetPtr(){RestoreWindow();}                                   // Set window state: not minimized/maximized (only PLATFORM_DESKTOP)
void SetWindowIconRetPtr(Image *image){SetWindowIcon(*image);}                            // Set icon for window (single image, RGBA 32bit, only PLATFORM_DESKTOP)
void SetWindowIconsRetPtr(Image *images,  int *count){SetWindowIcons(images, *count);}              // Set icon for window (multiple images, RGBA 32bit, only PLATFORM_DESKTOP)
void SetWindowTitleRetPtr(const char *title){SetWindowTitle(title);}                     // Set title for window (only PLATFORM_DESKTOP and PLATFORM_WEB)
void SetWindowPositionRetPtr(int *x,  int *y){SetWindowPosition(*x, *y);}                       // Set window position on screen (only PLATFORM_DESKTOP)
void SetWindowMonitorRetPtr(int *monitor){SetWindowMonitor(*monitor);}                         // Set monitor for the current window
void SetWindowMinSizeRetPtr(int *width,  int *height){SetWindowMinSize(*width, *height);}               // Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE)
void SetWindowMaxSizeRetPtr(int *width,  int *height){SetWindowMaxSize(*width, *height);}               // Set window maximum dimensions (for FLAG_WINDOW_RESIZABLE)
void SetWindowSizeRetPtr(int *width,  int *height){SetWindowSize(*width, *height);}                  // Set window dimensions
void SetWindowOpacityRetPtr(float *opacity){SetWindowOpacity(*opacity);}                       // Set window opacity [0.0f..1.0f] (only PLATFORM_DESKTOP)
void SetWindowFocusedRetPtr(){SetWindowFocused();}                                // Set window focused (only PLATFORM_DESKTOP)
void GetWindowHandleRetPtr(void **ret){*ret=GetWindowHandle();}                                // Get native window handle
void GetScreenWidthRetPtr(int *ret){*ret=GetScreenWidth();}                                   // Get current screen width
void GetScreenHeightRetPtr(int *ret){*ret=GetScreenHeight();}                                  // Get current screen height
void GetRenderWidthRetPtr(int *ret){*ret=GetRenderWidth();}                                   // Get current render width (it considers HiDPI)
void GetRenderHeightRetPtr(int *ret){*ret=GetRenderHeight();}                                  // Get current render height (it considers HiDPI)
void GetMonitorCountRetPtr(int *ret){*ret=GetMonitorCount();}                                  // Get number of connected monitors
void GetCurrentMonitorRetPtr(int *ret){*ret=GetCurrentMonitor();}                                // Get current connected monitor
void GetMonitorPositionRetPtr(Vector2 *ret, int *monitor){*ret=GetMonitorPosition(*monitor);}                    // Get specified monitor position
void GetMonitorWidthRetPtr(int *ret, int *monitor){*ret=GetMonitorWidth(*monitor);}                           // Get specified monitor width (current video mode used by monitor)
void GetMonitorHeightRetPtr(int *ret, int *monitor){*ret=GetMonitorHeight(*monitor);}                          // Get specified monitor height (current video mode used by monitor)
void GetMonitorPhysicalWidthRetPtr(int *ret, int *monitor){*ret=GetMonitorPhysicalWidth(*monitor);}                   // Get specified monitor physical width in millimetres
void GetMonitorPhysicalHeightRetPtr(int *ret, int *monitor){*ret=GetMonitorPhysicalHeight(*monitor);}                  // Get specified monitor physical height in millimetres
void GetMonitorRefreshRateRetPtr(int *ret, int *monitor){*ret=GetMonitorRefreshRate(*monitor);}                     // Get specified monitor refresh rate
void GetWindowPositionRetPtr(Vector2 *ret){*ret=GetWindowPosition();}                            // Get window position XY on monitor
void GetWindowScaleDPIRetPtr(Vector2 *ret){*ret=GetWindowScaleDPI();}                            // Get window scale DPI factor
void GetMonitorNameRetPtr(const char **ret, int *monitor){*ret=GetMonitorName(*monitor);}                    // Get the human-readable, UTF-8 encoded name of the specified monitor
void SetClipboardTextRetPtr(const char *text){SetClipboardText(text);}                    // Set clipboard text content
void GetClipboardTextRetPtr(const char **ret){*ret=GetClipboardText();}                         // Get clipboard text content
void EnableEventWaitingRetPtr(){EnableEventWaiting();}                              // Enable waiting for events on EndDrawing(), no automatic event polling
void DisableEventWaitingRetPtr(){DisableEventWaiting();}                             // Disable waiting for events on EndDrawing(), automatic events polling
void ShowCursorRetPtr(){ShowCursor();}                                      // Shows cursor
void HideCursorRetPtr(){HideCursor();}                                      // Hides cursor
void IsCursorHiddenRetPtr(bool *ret){*ret=IsCursorHidden();}                                  // Check if cursor is not visible
void EnableCursorRetPtr(){EnableCursor();}                                    // Enables cursor (unlock cursor)
void DisableCursorRetPtr(){DisableCursor();}                                   // Disables cursor (lock cursor)
void IsCursorOnScreenRetPtr(bool *ret){*ret=IsCursorOnScreen();}                                // Check if cursor is on the screen
void ClearBackgroundRetPtr(Color *color){ClearBackground(*color);}                          // Set background color (framebuffer clear color)
void BeginDrawingRetPtr(){BeginDrawing();}                                    // Setup canvas (framebuffer) to start drawing
void EndDrawingRetPtr(){EndDrawing();}                                      // End canvas drawing and swap buffers (double buffering)
void BeginMode2DRetPtr(Camera2D *camera){BeginMode2D(*camera);}                          // Begin 2D mode with custom camera (2D)
void EndMode2DRetPtr(){EndMode2D();}                                       // Ends 2D mode with custom camera
void BeginMode3DRetPtr(Camera3D *camera){BeginMode3D(*camera);}                          // Begin 3D mode with custom camera (3D)
void EndMode3DRetPtr(){EndMode3D();}                                       // Ends 3D mode and returns to default 2D orthographic mode
void BeginTextureModeRetPtr(RenderTexture2D *target){BeginTextureMode(*target);}              // Begin drawing to render texture
void EndTextureModeRetPtr(){EndTextureMode();}                                  // Ends drawing to render texture
void BeginShaderModeRetPtr(Shader *shader){BeginShaderMode(*shader);}                        // Begin custom shader drawing
void EndShaderModeRetPtr(){EndShaderMode();}                                   // End custom shader drawing (use default shader)
void BeginBlendModeRetPtr(int *mode){BeginBlendMode(*mode);}                              // Begin blending mode (alpha, additive, multiplied, subtract, custom)
void EndBlendModeRetPtr(){EndBlendMode();}                                    // End blending mode (reset to default: alpha blending)
void BeginScissorModeRetPtr(int *x,  int *y,  int *width,  int *height){BeginScissorMode(*x, *y, *width, *height);} // Begin scissor mode (define screen area for following drawing)
void EndScissorModeRetPtr(){EndScissorMode();}                                  // End scissor mode
void BeginVrStereoModeRetPtr(VrStereoConfig *config){BeginVrStereoMode(*config);}              // Begin stereo rendering (requires VR simulator)
void EndVrStereoModeRetPtr(){EndVrStereoMode();}                                 // End stereo rendering (requires VR simulator)
void LoadVrStereoConfigRetPtr(VrStereoConfig *ret, VrDeviceInfo *device){*ret=LoadVrStereoConfig(*device);}     // Load VR stereo config for VR simulator device parameters
void UnloadVrStereoConfigRetPtr(VrStereoConfig *config){UnloadVrStereoConfig(*config);}           // Unload VR stereo config
void LoadShaderRetPtr(Shader *ret, const char *vsFileName,  const char *fsFileName){*ret=LoadShader(vsFileName, fsFileName);}   // Load shader from files and bind default locations
void LoadShaderFromMemoryRetPtr(Shader *ret, const char *vsCode,  const char *fsCode){*ret=LoadShaderFromMemory(vsCode, fsCode);} // Load shader from code strings and bind default locations
void IsShaderReadyRetPtr(bool *ret, Shader *shader){*ret=IsShaderReady(*shader);}                                   // Check if a shader is ready
void GetShaderLocationRetPtr(int *ret, Shader *shader,  const char *uniformName){*ret=GetShaderLocation(*shader, uniformName);}       // Get shader uniform location
void GetShaderLocationAttribRetPtr(int *ret, Shader *shader,  const char *attribName){*ret=GetShaderLocationAttrib(*shader, attribName);}  // Get shader attribute location
void SetShaderValueRetPtr(Shader *shader,  int *locIndex,  const void *value,  int *uniformType){SetShaderValue(*shader, *locIndex, value, *uniformType);}               // Set shader uniform value
void SetShaderValueVRetPtr(Shader *shader,  int *locIndex,  const void *value,  int *uniformType,  int *count){SetShaderValueV(*shader, *locIndex, value, *uniformType, *count);}   // Set shader uniform value vector
void SetShaderValueMatrixRetPtr(Shader *shader,  int *locIndex,  Matrix *mat){SetShaderValueMatrix(*shader, *locIndex, *mat);}         // Set shader uniform value (matrix 4x4)
void SetShaderValueTextureRetPtr(Shader *shader,  int *locIndex,  Texture2D *texture){SetShaderValueTexture(*shader, *locIndex, *texture);} // Set shader uniform value for texture (sampler2d)
void UnloadShaderRetPtr(Shader *shader){UnloadShader(*shader);}                                    // Unload shader from GPU memory (VRAM)
void GetMouseRayRetPtr(Ray *ret, Vector2 *mousePosition,  Camera *camera){*ret=GetMouseRay(*mousePosition, *camera);}      // Get a ray trace from mouse position
void GetCameraMatrixRetPtr(Matrix *ret, Camera *camera){*ret=GetCameraMatrix(*camera);}                      // Get camera transform matrix (view matrix)
void GetCameraMatrix2DRetPtr(Matrix *ret, Camera2D *camera){*ret=GetCameraMatrix2D(*camera);}                  // Get camera 2d transform matrix
void GetWorldToScreenRetPtr(Vector2 *ret, Vector3 *position,  Camera *camera){*ret=GetWorldToScreen(*position, *camera);}  // Get the screen space position for a 3d world space position
void GetScreenToWorld2DRetPtr(Vector2 *ret, Vector2 *position,  Camera2D *camera){*ret=GetScreenToWorld2D(*position, *camera);} // Get the world space position for a 2d camera screen space position
void GetWorldToScreenExRetPtr(Vector2 *ret, Vector3 *position,  Camera *camera,  int *width,  int *height){*ret=GetWorldToScreenEx(*position, *camera, *width, *height);} // Get size position for a 3d world space position
void GetWorldToScreen2DRetPtr(Vector2 *ret, Vector2 *position,  Camera2D *camera){*ret=GetWorldToScreen2D(*position, *camera);} // Get the screen space position for a 2d camera world space position
void SetTargetFPSRetPtr(int *fps){SetTargetFPS(*fps);}                                 // Set target FPS (maximum)
void GetFrameTimeRetPtr(float *ret){*ret=GetFrameTime();}                                   // Get time in seconds for last frame drawn (delta time)
void GetTimeRetPtr(double *ret){*ret=GetTime();}                                       // Get elapsed time in seconds since InitWindow()
void GetFPSRetPtr(int *ret){*ret=GetFPS();}                                           // Get current FPS
void SwapScreenBufferRetPtr(){SwapScreenBuffer();}                                // Swap back buffer with front buffer (screen drawing)
void PollInputEventsRetPtr(){PollInputEvents();}                                 // Register all input events
void WaitTimeRetPtr(double *seconds){WaitTime(*seconds);}                              // Wait for some time (halt program execution)
void SetRandomSeedRetPtr(unsigned int *seed){SetRandomSeed(*seed);}                      // Set the seed for the random number generator
void GetRandomValueRetPtr(int *ret, int *min,  int *max){*ret=GetRandomValue(*min, *max);}                       // Get a random value between min and max (both included)
void LoadRandomSequenceRetPtr(int **ret, unsigned int *count,  int *min,  int *max){*ret=LoadRandomSequence(*count, *min, *max);} // Load random values sequence, no values repeated
void UnloadRandomSequenceRetPtr(int *sequence){UnloadRandomSequence(sequence);}                   // Unload random values sequence
void TakeScreenshotRetPtr(const char *fileName){TakeScreenshot(fileName);}                  // Takes a screenshot of current screen (filename extension defines format)
void SetConfigFlagsRetPtr(unsigned int *flags){SetConfigFlags(*flags);}                    // Setup init configuration flags (view FLAGS)
void OpenURLRetPtr(const char *url){OpenURL(url);}                              // Open URL with default system browser (if available)
void SetTraceLogLevelRetPtr(int *logLevel){SetTraceLogLevel(*logLevel);}                        // Set the current threshold (minimum) log level
void MemAllocRetPtr(void **ret, unsigned int *size){*ret=MemAlloc(*size);}                          // Internal memory allocator
void MemReallocRetPtr(void **ret, void *ptr,  unsigned int *size){*ret=MemRealloc(ptr, *size);}             // Internal memory reallocator
void MemFreeRetPtr(void *ptr){MemFree(ptr);}                                    // Internal memory free
void SetTraceLogCallbackRetPtr(TraceLogCallback *callback){SetTraceLogCallback(*callback);}         // Set custom trace log
void SetLoadFileDataCallbackRetPtr(LoadFileDataCallback *callback){SetLoadFileDataCallback(*callback);} // Set custom file binary data loader
void SetSaveFileDataCallbackRetPtr(SaveFileDataCallback *callback){SetSaveFileDataCallback(*callback);} // Set custom file binary data saver
void SetLoadFileTextCallbackRetPtr(LoadFileTextCallback *callback){SetLoadFileTextCallback(*callback);} // Set custom file text data loader
void SetSaveFileTextCallbackRetPtr(SaveFileTextCallback *callback){SetSaveFileTextCallback(*callback);} // Set custom file text data saver
void LoadFileDataRetPtr(unsigned char **ret, const char *fileName,  int *dataSize){*ret=LoadFileData(fileName, dataSize);} // Load file data as byte array (read)
void UnloadFileDataRetPtr(unsigned char *data){UnloadFileData(data);}                   // Unload file data allocated by LoadFileData()
void SaveFileDataRetPtr(bool *ret, const char *fileName,  void *data,  int *dataSize){*ret=SaveFileData(fileName, data, *dataSize);} // Save data to file from byte array (write), returns true on success
void ExportDataAsCodeRetPtr(bool *ret, const unsigned char *data,  int *dataSize,  const char *fileName){*ret=ExportDataAsCode(data, *dataSize, fileName);} // Export data to code (.h), returns true on success
void LoadFileTextRetPtr(char **ret, const char *fileName){*ret=LoadFileText(fileName);}                   // Load text data from file (read), returns a '\0' terminated string
void UnloadFileTextRetPtr(char *text){UnloadFileText(text);}                            // Unload file text data allocated by LoadFileText()
void SaveFileTextRetPtr(bool *ret, const char *fileName,  char *text){*ret=SaveFileText(fileName, text);}        // Save text data to file (write), string must be '\0' terminated, returns true on success
void FileExistsRetPtr(bool *ret, const char *fileName){*ret=FileExists(fileName);}                      // Check if file exists
void DirectoryExistsRetPtr(bool *ret, const char *dirPath){*ret=DirectoryExists(dirPath);}                  // Check if a directory path exists
void IsFileExtensionRetPtr(bool *ret, const char *fileName,  const char *ext){*ret=IsFileExtension(fileName, ext);} // Check file extension (including point: .png, .wav)
void GetFileLengthRetPtr(int *ret, const char *fileName){*ret=GetFileLength(fileName);}                    // Get file length in bytes (NOTE: GetFileSize() conflicts with windows.h)
void GetFileExtensionRetPtr(const char **ret, const char *fileName){*ret=GetFileExtension(fileName);}         // Get pointer to extension for a filename string (includes dot: '.png')
void GetFileNameRetPtr(const char **ret, const char *filePath){*ret=GetFileName(filePath);}              // Get pointer to filename for a path string
void GetFileNameWithoutExtRetPtr(const char **ret, const char *filePath){*ret=GetFileNameWithoutExt(filePath);}    // Get filename string without extension (uses static string)
void GetDirectoryPathRetPtr(const char **ret, const char *filePath){*ret=GetDirectoryPath(filePath);}         // Get full path for a given fileName with path (uses static string)
void GetPrevDirectoryPathRetPtr(const char **ret, const char *dirPath){*ret=GetPrevDirectoryPath(dirPath);}      // Get previous directory path for a given path (uses static string)
void GetWorkingDirectoryRetPtr(const char **ret){*ret=GetWorkingDirectory();}                      // Get current working directory (uses static string)
void GetApplicationDirectoryRetPtr(const char **ret){*ret=GetApplicationDirectory();}                  // Get the directory of the running application (uses static string)
void ChangeDirectoryRetPtr(bool *ret, const char *dir){*ret=ChangeDirectory(dir);}                      // Change working directory, return true on success
void IsPathFileRetPtr(bool *ret, const char *path){*ret=IsPathFile(path);}                          // Check if a given path is a file or a directory
void LoadDirectoryFilesRetPtr(FilePathList *ret, const char *dirPath){*ret=LoadDirectoryFiles(dirPath);}       // Load directory filepaths
void LoadDirectoryFilesExRetPtr(FilePathList *ret, const char *basePath,  const char *filter,  bool *scanSubdirs){*ret=LoadDirectoryFilesEx(basePath, filter, *scanSubdirs);} // Load directory filepaths with extension filtering and recursive directory scan
void UnloadDirectoryFilesRetPtr(FilePathList *files){UnloadDirectoryFiles(*files);}              // Unload filepaths
void IsFileDroppedRetPtr(bool *ret){*ret=IsFileDropped();}                                   // Check if a file has been dropped into window
void LoadDroppedFilesRetPtr(FilePathList *ret){*ret=LoadDroppedFiles();}                        // Load dropped filepaths
void UnloadDroppedFilesRetPtr(FilePathList *files){UnloadDroppedFiles(*files);}                // Unload dropped filepaths
void GetFileModTimeRetPtr(long *ret, const char *fileName){*ret=GetFileModTime(fileName);}                  // Get file modification time (last write time)
void CompressDataRetPtr(unsigned char **ret, const unsigned char *data,  int *dataSize,  int *compDataSize){*ret=CompressData(data, *dataSize, compDataSize);}        // Compress data (DEFLATE algorithm), memory must be MemFree()
void DecompressDataRetPtr(unsigned char **ret, const unsigned char *compData,  int *compDataSize,  int *dataSize){*ret=DecompressData(compData, *compDataSize, dataSize);}  // Decompress data (DEFLATE algorithm), memory must be MemFree()
void EncodeDataBase64RetPtr(char **ret, const unsigned char *data,  int *dataSize,  int *outputSize){*ret=EncodeDataBase64(data, *dataSize, outputSize);}               // Encode data to Base64 string, memory must be MemFree()
void DecodeDataBase64RetPtr(unsigned char **ret, const unsigned char *data,  int *outputSize){*ret=DecodeDataBase64(data, outputSize);}                    // Decode Base64 string data, memory must be MemFree()
void LoadAutomationEventListRetPtr(AutomationEventList *ret, const char *fileName){*ret=LoadAutomationEventList(fileName);}                // Load automation events list from file, NULL for empty list, capacity = MAX_AUTOMATION_EVENTS
void UnloadAutomationEventListRetPtr(AutomationEventList *list){UnloadAutomationEventList(list);}                        // Unload automation events list from file
void ExportAutomationEventListRetPtr(bool *ret, AutomationEventList *list,  const char *fileName){*ret=ExportAutomationEventList(*list, fileName);}   // Export automation events list as text file
void SetAutomationEventListRetPtr(AutomationEventList *list){SetAutomationEventList(list);}                           // Set automation event list to record to
void SetAutomationEventBaseFrameRetPtr(int *frame){SetAutomationEventBaseFrame(*frame);}                                      // Set automation event internal base frame to start recording
void StartAutomationEventRecordingRetPtr(){StartAutomationEventRecording();}                                         // Start recording automation events (AutomationEventList must be set)
void StopAutomationEventRecordingRetPtr(){StopAutomationEventRecording();}                                          // Stop recording automation events
void PlayAutomationEventRetPtr(AutomationEvent *event){PlayAutomationEvent(*event);}                                  // Play a recorded automation event
void IsKeyPressedRetPtr(bool *ret, int *key){*ret=IsKeyPressed(*key);}                             // Check if a key has been pressed once
void IsKeyPressedRepeatRetPtr(bool *ret, int *key){*ret=IsKeyPressedRepeat(*key);}                       // Check if a key has been pressed again (Only PLATFORM_DESKTOP)
void IsKeyDownRetPtr(bool *ret, int *key){*ret=IsKeyDown(*key);}                                // Check if a key is being pressed
void IsKeyReleasedRetPtr(bool *ret, int *key){*ret=IsKeyReleased(*key);}                            // Check if a key has been released once
void IsKeyUpRetPtr(bool *ret, int *key){*ret=IsKeyUp(*key);}                                  // Check if a key is NOT being pressed
void GetKeyPressedRetPtr(int *ret){*ret=GetKeyPressed();}                                // Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty
void GetCharPressedRetPtr(int *ret){*ret=GetCharPressed();}                               // Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty
void SetExitKeyRetPtr(int *key){SetExitKey(*key);}                               // Set a custom key to exit program (default is ESC)
void IsGamepadAvailableRetPtr(bool *ret, int *gamepad){*ret=IsGamepadAvailable(*gamepad);}                   // Check if a gamepad is available
void GetGamepadNameRetPtr(const char **ret, int *gamepad){*ret=GetGamepadName(*gamepad);}                // Get gamepad internal name id
void IsGamepadButtonPressedRetPtr(bool *ret, int *gamepad,  int *button){*ret=IsGamepadButtonPressed(*gamepad, *button);}   // Check if a gamepad button has been pressed once
void IsGamepadButtonDownRetPtr(bool *ret, int *gamepad,  int *button){*ret=IsGamepadButtonDown(*gamepad, *button);}      // Check if a gamepad button is being pressed
void IsGamepadButtonReleasedRetPtr(bool *ret, int *gamepad,  int *button){*ret=IsGamepadButtonReleased(*gamepad, *button);}  // Check if a gamepad button has been released once
void IsGamepadButtonUpRetPtr(bool *ret, int *gamepad,  int *button){*ret=IsGamepadButtonUp(*gamepad, *button);}        // Check if a gamepad button is NOT being pressed
void GetGamepadButtonPressedRetPtr(int *ret){*ret=GetGamepadButtonPressed();}                      // Get the last gamepad button pressed
void GetGamepadAxisCountRetPtr(int *ret, int *gamepad){*ret=GetGamepadAxisCount(*gamepad);}                   // Get gamepad axis count for a gamepad
void GetGamepadAxisMovementRetPtr(float *ret, int *gamepad,  int *axis){*ret=GetGamepadAxisMovement(*gamepad, *axis);}    // Get axis movement value for a gamepad axis
void SetGamepadMappingsRetPtr(int *ret, const char *mappings){*ret=SetGamepadMappings(mappings);}           // Set internal gamepad mappings (SDL_GameControllerDB)
void IsMouseButtonPressedRetPtr(bool *ret, int *button){*ret=IsMouseButtonPressed(*button);}                  // Check if a mouse button has been pressed once
void IsMouseButtonDownRetPtr(bool *ret, int *button){*ret=IsMouseButtonDown(*button);}                     // Check if a mouse button is being pressed
void IsMouseButtonReleasedRetPtr(bool *ret, int *button){*ret=IsMouseButtonReleased(*button);}                 // Check if a mouse button has been released once
void IsMouseButtonUpRetPtr(bool *ret, int *button){*ret=IsMouseButtonUp(*button);}                       // Check if a mouse button is NOT being pressed
void GetMouseXRetPtr(int *ret){*ret=GetMouseX();}                                    // Get mouse position X
void GetMouseYRetPtr(int *ret){*ret=GetMouseY();}                                    // Get mouse position Y
void GetMousePositionRetPtr(Vector2 *ret){*ret=GetMousePosition();}                         // Get mouse position XY
void GetMouseDeltaRetPtr(Vector2 *ret){*ret=GetMouseDelta();}                            // Get mouse delta between frames
void SetMousePositionRetPtr(int *x,  int *y){SetMousePosition(*x, *y);}                    // Set mouse position XY
void SetMouseOffsetRetPtr(int *offsetX,  int *offsetY){SetMouseOffset(*offsetX, *offsetY);}          // Set mouse offset
void SetMouseScaleRetPtr(float *scaleX,  float *scaleY){SetMouseScale(*scaleX, *scaleY);}         // Set mouse scaling
void GetMouseWheelMoveRetPtr(float *ret){*ret=GetMouseWheelMove();}                          // Get mouse wheel movement for X or Y, whichever is larger
void GetMouseWheelMoveVRetPtr(Vector2 *ret){*ret=GetMouseWheelMoveV();}                       // Get mouse wheel movement for both X and Y
void SetMouseCursorRetPtr(int *cursor){SetMouseCursor(*cursor);}                        // Set mouse cursor
void GetTouchXRetPtr(int *ret){*ret=GetTouchX();}                                    // Get touch position X for touch point 0 (relative to screen size)
void GetTouchYRetPtr(int *ret){*ret=GetTouchY();}                                    // Get touch position Y for touch point 0 (relative to screen size)
void GetTouchPositionRetPtr(Vector2 *ret, int *index){*ret=GetTouchPosition(*index);}                    // Get touch position XY for a touch point index (relative to screen size)
void GetTouchPointIdRetPtr(int *ret, int *index){*ret=GetTouchPointId(*index);}                         // Get touch point identifier for given index
void GetTouchPointCountRetPtr(int *ret){*ret=GetTouchPointCount();}                           // Get number of touch points
void SetGesturesEnabledRetPtr(unsigned int *flags){SetGesturesEnabled(*flags);}      // Enable a set of gestures using flags
void IsGestureDetectedRetPtr(bool *ret, unsigned int *gesture){*ret=IsGestureDetected(*gesture);}     // Check if a gesture have been detected
void GetGestureDetectedRetPtr(int *ret){*ret=GetGestureDetected();}                     // Get latest detected gesture
void GetGestureHoldDurationRetPtr(float *ret){*ret=GetGestureHoldDuration();}               // Get gesture hold time in milliseconds
void GetGestureDragVectorRetPtr(Vector2 *ret){*ret=GetGestureDragVector();}               // Get gesture drag vector
void GetGestureDragAngleRetPtr(float *ret){*ret=GetGestureDragAngle();}                  // Get gesture drag angle
void GetGesturePinchVectorRetPtr(Vector2 *ret){*ret=GetGesturePinchVector();}              // Get gesture pinch delta
void GetGesturePinchAngleRetPtr(float *ret){*ret=GetGesturePinchAngle();}                 // Get gesture pinch angle
void UpdateCameraRetPtr(Camera *camera,  int *mode){UpdateCamera(camera, *mode);}      // Update camera position for selected mode
void UpdateCameraProRetPtr(Camera *camera,  Vector3 *movement,  Vector3 *rotation,  float *zoom){UpdateCameraPro(camera, *movement, *rotation, *zoom);} // Update camera movement/rotation
void SetShapesTextureRetPtr(Texture2D *texture,  Rectangle *source){SetShapesTexture(*texture, *source);}       // Set texture and rectangle to be used on shapes drawing
void DrawPixelRetPtr(int *posX,  int *posY,  Color *color){DrawPixel(*posX, *posY, *color);}                                                   // Draw a pixel
void DrawPixelVRetPtr(Vector2 *position,  Color *color){DrawPixelV(*position, *color);}                                                    // Draw a pixel (Vector version)
void DrawLineRetPtr(int *startPosX,  int *startPosY,  int *endPosX,  int *endPosY,  Color *color){DrawLine(*startPosX, *startPosY, *endPosX, *endPosY, *color);}                // Draw a line
void DrawLineVRetPtr(Vector2 *startPos,  Vector2 *endPos,  Color *color){DrawLineV(*startPos, *endPos, *color);}                                     // Draw a line (using gl lines)
void DrawLineExRetPtr(Vector2 *startPos,  Vector2 *endPos,  float *thick,  Color *color){DrawLineEx(*startPos, *endPos, *thick, *color);}                       // Draw a line (using triangles/quads)
void DrawLineStripRetPtr(Vector2 *points,  int *pointCount,  Color *color){DrawLineStrip(points, *pointCount, *color);}                                  // Draw lines sequence (using gl lines)
void DrawLineBezierRetPtr(Vector2 *startPos,  Vector2 *endPos,  float *thick,  Color *color){DrawLineBezier(*startPos, *endPos, *thick, *color);}                   // Draw line segment cubic-bezier in-out interpolation
void DrawCircleRetPtr(int *centerX,  int *centerY,  float *radius,  Color *color){DrawCircle(*centerX, *centerY, *radius, *color);}                              // Draw a color-filled circle
void DrawCircleSectorRetPtr(Vector2 *center,  float *radius,  float *startAngle,  float *endAngle,  int *segments,  Color *color){DrawCircleSector(*center, *radius, *startAngle, *endAngle, *segments, *color);}      // Draw a piece of a circle
void DrawCircleSectorLinesRetPtr(Vector2 *center,  float *radius,  float *startAngle,  float *endAngle,  int *segments,  Color *color){DrawCircleSectorLines(*center, *radius, *startAngle, *endAngle, *segments, *color);} // Draw circle sector outline
void DrawCircleGradientRetPtr(int *centerX,  int *centerY,  float *radius,  Color *color1,  Color *color2){DrawCircleGradient(*centerX, *centerY, *radius, *color1, *color2);}       // Draw a gradient-filled circle
void DrawCircleVRetPtr(Vector2 *center,  float *radius,  Color *color){DrawCircleV(*center, *radius, *color);}                                       // Draw a color-filled circle (Vector version)
void DrawCircleLinesRetPtr(int *centerX,  int *centerY,  float *radius,  Color *color){DrawCircleLines(*centerX, *centerY, *radius, *color);}                         // Draw circle outline
void DrawCircleLinesVRetPtr(Vector2 *center,  float *radius,  Color *color){DrawCircleLinesV(*center, *radius, *color);}                                  // Draw circle outline (Vector version)
void DrawEllipseRetPtr(int *centerX,  int *centerY,  float *radiusH,  float *radiusV,  Color *color){DrawEllipse(*centerX, *centerY, *radiusH, *radiusV, *color);}             // Draw ellipse
void DrawEllipseLinesRetPtr(int *centerX,  int *centerY,  float *radiusH,  float *radiusV,  Color *color){DrawEllipseLines(*centerX, *centerY, *radiusH, *radiusV, *color);}        // Draw ellipse outline
void DrawRingRetPtr(Vector2 *center,  float *innerRadius,  float *outerRadius,  float *startAngle,  float *endAngle,  int *segments,  Color *color){DrawRing(*center, *innerRadius, *outerRadius, *startAngle, *endAngle, *segments, *color);} // Draw ring
void DrawRingLinesRetPtr(Vector2 *center,  float *innerRadius,  float *outerRadius,  float *startAngle,  float *endAngle,  int *segments,  Color *color){DrawRingLines(*center, *innerRadius, *outerRadius, *startAngle, *endAngle, *segments, *color);}    // Draw ring outline
void DrawRectangleRetPtr(int *posX,  int *posY,  int *width,  int *height,  Color *color){DrawRectangle(*posX, *posY, *width, *height, *color);}                        // Draw a color-filled rectangle
void DrawRectangleVRetPtr(Vector2 *position,  Vector2 *size,  Color *color){DrawRectangleV(*position, *size, *color);}                                  // Draw a color-filled rectangle (Vector version)
void DrawRectangleRecRetPtr(Rectangle *rec,  Color *color){DrawRectangleRec(*rec, *color);}                                                 // Draw a color-filled rectangle
void DrawRectangleProRetPtr(Rectangle *rec,  Vector2 *origin,  float *rotation,  Color *color){DrawRectanglePro(*rec, *origin, *rotation, *color);}                 // Draw a color-filled rectangle with pro parameters
void DrawRectangleGradientVRetPtr(int *posX,  int *posY,  int *width,  int *height,  Color *color1,  Color *color2){DrawRectangleGradientV(*posX, *posY, *width, *height, *color1, *color2);}// Draw a vertical-gradient-filled rectangle
void DrawRectangleGradientHRetPtr(int *posX,  int *posY,  int *width,  int *height,  Color *color1,  Color *color2){DrawRectangleGradientH(*posX, *posY, *width, *height, *color1, *color2);}// Draw a horizontal-gradient-filled rectangle
void DrawRectangleGradientExRetPtr(Rectangle *rec,  Color *col1,  Color *col2,  Color *col3,  Color *col4){DrawRectangleGradientEx(*rec, *col1, *col2, *col3, *col4);}       // Draw a gradient-filled rectangle with custom vertex colors
void DrawRectangleLinesRetPtr(int *posX,  int *posY,  int *width,  int *height,  Color *color){DrawRectangleLines(*posX, *posY, *width, *height, *color);}                   // Draw rectangle outline
void DrawRectangleLinesExRetPtr(Rectangle *rec,  float *lineThick,  Color *color){DrawRectangleLinesEx(*rec, *lineThick, *color);}                            // Draw rectangle outline with extended parameters
void DrawRectangleRoundedRetPtr(Rectangle *rec,  float *roundness,  int *segments,  Color *color){DrawRectangleRounded(*rec, *roundness, *segments, *color);}              // Draw rectangle with rounded edges
void DrawRectangleRoundedLinesRetPtr(Rectangle *rec,  float *roundness,  int *segments,  float *lineThick,  Color *color){DrawRectangleRoundedLines(*rec, *roundness, *segments, *lineThick, *color);} // Draw rectangle with rounded edges outline
void DrawTriangleRetPtr(Vector2 *v1,  Vector2 *v2,  Vector2 *v3,  Color *color){DrawTriangle(*v1, *v2, *v3, *color);}                                // Draw a color-filled triangle (vertex in counter-clockwise order!)
void DrawTriangleLinesRetPtr(Vector2 *v1,  Vector2 *v2,  Vector2 *v3,  Color *color){DrawTriangleLines(*v1, *v2, *v3, *color);}                           // Draw triangle outline (vertex in counter-clockwise order!)
void DrawTriangleFanRetPtr(Vector2 *points,  int *pointCount,  Color *color){DrawTriangleFan(points, *pointCount, *color);}                                // Draw a triangle fan defined by points (first vertex is the center)
void DrawTriangleStripRetPtr(Vector2 *points,  int *pointCount,  Color *color){DrawTriangleStrip(points, *pointCount, *color);}                              // Draw a triangle strip defined by points
void DrawPolyRetPtr(Vector2 *center,  int *sides,  float *radius,  float *rotation,  Color *color){DrawPoly(*center, *sides, *radius, *rotation, *color);}               // Draw a regular polygon (Vector version)
void DrawPolyLinesRetPtr(Vector2 *center,  int *sides,  float *radius,  float *rotation,  Color *color){DrawPolyLines(*center, *sides, *radius, *rotation, *color);}          // Draw a polygon outline of n sides
void DrawPolyLinesExRetPtr(Vector2 *center,  int *sides,  float *radius,  float *rotation,  float *lineThick,  Color *color){DrawPolyLinesEx(*center, *sides, *radius, *rotation, *lineThick, *color);} // Draw a polygon outline of n sides with extended parameters
void DrawSplineLinearRetPtr(Vector2 *points,  int *pointCount,  float *thick,  Color *color){DrawSplineLinear(points, *pointCount, *thick, *color);}                  // Draw spline: Linear, minimum 2 points
void DrawSplineBasisRetPtr(Vector2 *points,  int *pointCount,  float *thick,  Color *color){DrawSplineBasis(points, *pointCount, *thick, *color);}                   // Draw spline: B-Spline, minimum 4 points
void DrawSplineCatmullRomRetPtr(Vector2 *points,  int *pointCount,  float *thick,  Color *color){DrawSplineCatmullRom(points, *pointCount, *thick, *color);}              // Draw spline: Catmull-Rom, minimum 4 points
void DrawSplineBezierQuadraticRetPtr(Vector2 *points,  int *pointCount,  float *thick,  Color *color){DrawSplineBezierQuadratic(points, *pointCount, *thick, *color);}         // Draw spline: Quadratic Bezier, minimum 3 points (1 control point): [p1, c2, p3, c4...]
void DrawSplineBezierCubicRetPtr(Vector2 *points,  int *pointCount,  float *thick,  Color *color){DrawSplineBezierCubic(points, *pointCount, *thick, *color);}             // Draw spline: Cubic Bezier, minimum 4 points (2 control points): [p1, c2, c3, p4, c5, c6...]
void DrawSplineSegmentLinearRetPtr(Vector2 *p1,  Vector2 *p2,  float *thick,  Color *color){DrawSplineSegmentLinear(*p1, *p2, *thick, *color);}                    // Draw spline segment: Linear, 2 points
void DrawSplineSegmentBasisRetPtr(Vector2 *p1,  Vector2 *p2,  Vector2 *p3,  Vector2 *p4,  float *thick,  Color *color){DrawSplineSegmentBasis(*p1, *p2, *p3, *p4, *thick, *color);} // Draw spline segment: B-Spline, 4 points
void DrawSplineSegmentCatmullRomRetPtr(Vector2 *p1,  Vector2 *p2,  Vector2 *p3,  Vector2 *p4,  float *thick,  Color *color){DrawSplineSegmentCatmullRom(*p1, *p2, *p3, *p4, *thick, *color);} // Draw spline segment: Catmull-Rom, 4 points
void DrawSplineSegmentBezierQuadraticRetPtr(Vector2 *p1,  Vector2 *c2,  Vector2 *p3,  float *thick,  Color *color){DrawSplineSegmentBezierQuadratic(*p1, *c2, *p3, *thick, *color);} // Draw spline segment: Quadratic Bezier, 2 points, 1 control point
void DrawSplineSegmentBezierCubicRetPtr(Vector2 *p1,  Vector2 *c2,  Vector2 *c3,  Vector2 *p4,  float *thick,  Color *color){DrawSplineSegmentBezierCubic(*p1, *c2, *c3, *p4, *thick, *color);} // Draw spline segment: Cubic Bezier, 2 points, 2 control points
void GetSplinePointLinearRetPtr(Vector2 *ret, Vector2 *startPos,  Vector2 *endPos,  float *t){*ret=GetSplinePointLinear(*startPos, *endPos, *t);}                           // Get (evaluate) spline point: Linear
void GetSplinePointBasisRetPtr(Vector2 *ret, Vector2 *p1,  Vector2 *p2,  Vector2 *p3,  Vector2 *p4,  float *t){*ret=GetSplinePointBasis(*p1, *p2, *p3, *p4, *t);}              // Get (evaluate) spline point: B-Spline
void GetSplinePointCatmullRomRetPtr(Vector2 *ret, Vector2 *p1,  Vector2 *p2,  Vector2 *p3,  Vector2 *p4,  float *t){*ret=GetSplinePointCatmullRom(*p1, *p2, *p3, *p4, *t);}         // Get (evaluate) spline point: Catmull-Rom
void GetSplinePointBezierQuadRetPtr(Vector2 *ret, Vector2 *p1,  Vector2 *c2,  Vector2 *p3,  float *t){*ret=GetSplinePointBezierQuad(*p1, *c2, *p3, *t);}                     // Get (evaluate) spline point: Quadratic Bezier
void GetSplinePointBezierCubicRetPtr(Vector2 *ret, Vector2 *p1,  Vector2 *c2,  Vector2 *c3,  Vector2 *p4,  float *t){*ret=GetSplinePointBezierCubic(*p1, *c2, *c3, *p4, *t);}        // Get (evaluate) spline point: Cubic Bezier
void CheckCollisionRecsRetPtr(bool *ret, Rectangle *rec1,  Rectangle *rec2){*ret=CheckCollisionRecs(*rec1, *rec2);}                                           // Check collision between two rectangles
void CheckCollisionCirclesRetPtr(bool *ret, Vector2 *center1,  float *radius1,  Vector2 *center2,  float *radius2){*ret=CheckCollisionCircles(*center1, *radius1, *center2, *radius2);}        // Check collision between two circles
void CheckCollisionCircleRecRetPtr(bool *ret, Vector2 *center,  float *radius,  Rectangle *rec){*ret=CheckCollisionCircleRec(*center, *radius, *rec);}                         // Check collision between circle and rectangle
void CheckCollisionPointRecRetPtr(bool *ret, Vector2 *point,  Rectangle *rec){*ret=CheckCollisionPointRec(*point, *rec);}                                         // Check if point is inside rectangle
void CheckCollisionPointCircleRetPtr(bool *ret, Vector2 *point,  Vector2 *center,  float *radius){*ret=CheckCollisionPointCircle(*point, *center, *radius);}                       // Check if point is inside circle
void CheckCollisionPointTriangleRetPtr(bool *ret, Vector2 *point,  Vector2 *p1,  Vector2 *p2,  Vector2 *p3){*ret=CheckCollisionPointTriangle(*point, *p1, *p2, *p3);}               // Check if point is inside a triangle
void CheckCollisionPointPolyRetPtr(bool *ret, Vector2 *point,  Vector2 *points,  int *pointCount){*ret=CheckCollisionPointPoly(*point, points, *pointCount);}                      // Check if point is within a polygon described by array of vertices
void CheckCollisionLinesRetPtr(bool *ret, Vector2 *startPos1,  Vector2 *endPos1,  Vector2 *startPos2,  Vector2 *endPos2,  Vector2 *collisionPoint){*ret=CheckCollisionLines(*startPos1, *endPos1, *startPos2, *endPos2, collisionPoint);} // Check the collision between two lines defined by two points each, returns collision point by reference
void CheckCollisionPointLineRetPtr(bool *ret, Vector2 *point,  Vector2 *p1,  Vector2 *p2,  int *threshold){*ret=CheckCollisionPointLine(*point, *p1, *p2, *threshold);}                // Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold]
void GetCollisionRecRetPtr(Rectangle *ret, Rectangle *rec1,  Rectangle *rec2){*ret=GetCollisionRec(*rec1, *rec2);}                                         // Get collision rectangle for two rectangles collision
void LoadImageRetPtr(Image *ret, const char *fileName){*ret=LoadImage(fileName);}                                                             // Load image from file into CPU memory (RAM)
void LoadImageRawRetPtr(Image *ret, const char *fileName,  int *width,  int *height,  int *format,  int *headerSize){*ret=LoadImageRaw(fileName, *width, *height, *format, *headerSize);}       // Load image from RAW file data
void LoadImageSvgRetPtr(Image *ret, const char *fileNameOrString,  int *width,  int *height){*ret=LoadImageSvg(fileNameOrString, *width, *height);}                           // Load image from SVG file data or string with specified size
void LoadImageAnimRetPtr(Image *ret, const char *fileName,  int *frames){*ret=LoadImageAnim(fileName, frames);}                                            // Load image sequence from file (frames appended to image.data)
void LoadImageFromMemoryRetPtr(Image *ret, const char *fileType,  const unsigned char *fileData,  int *dataSize){*ret=LoadImageFromMemory(fileType, fileData, *dataSize);}      // Load image from memory buffer, fileType refers to extension: i.e. '.png'
void LoadImageFromTextureRetPtr(Image *ret, Texture2D *texture){*ret=LoadImageFromTexture(*texture);}                                                     // Load image from GPU texture data
void LoadImageFromScreenRetPtr(Image *ret){*ret=LoadImageFromScreen();}                                                                   // Load image from screen buffer and (screenshot)
void IsImageReadyRetPtr(bool *ret, Image *image){*ret=IsImageReady(*image);}                                                                    // Check if an image is ready
void UnloadImageRetPtr(Image *image){UnloadImage(*image);}                                                                     // Unload image from CPU memory (RAM)
void ExportImageRetPtr(bool *ret, Image *image,  const char *fileName){*ret=ExportImage(*image, fileName);}                                               // Export image data to file, returns true on success
void ExportImageToMemoryRetPtr(unsigned char **ret, Image *image,  const char *fileType,  int *fileSize){*ret=ExportImageToMemory(*image, fileType, fileSize);}              // Export image to memory buffer
void ExportImageAsCodeRetPtr(bool *ret, Image *image,  const char *fileName){*ret=ExportImageAsCode(*image, fileName);}                                         // Export image as code file defining an array of bytes, returns true on success
void GenImageColorRetPtr(Image *ret, int *width,  int *height,  Color *color){*ret=GenImageColor(*width, *height, *color);}                                           // Generate image: plain color
void GenImageGradientLinearRetPtr(Image *ret, int *width,  int *height,  int *direction,  Color *start,  Color *end){*ret=GenImageGradientLinear(*width, *height, *direction, *start, *end);}        // Generate image: linear gradient, direction in degrees [0..360], 0=Vertical gradient
void GenImageGradientRadialRetPtr(Image *ret, int *width,  int *height,  float *density,  Color *inner,  Color *outer){*ret=GenImageGradientRadial(*width, *height, *density, *inner, *outer);}      // Generate image: radial gradient
void GenImageGradientSquareRetPtr(Image *ret, int *width,  int *height,  float *density,  Color *inner,  Color *outer){*ret=GenImageGradientSquare(*width, *height, *density, *inner, *outer);}      // Generate image: square gradient
void GenImageCheckedRetPtr(Image *ret, int *width,  int *height,  int *checksX,  int *checksY,  Color *col1,  Color *col2){*ret=GenImageChecked(*width, *height, *checksX, *checksY, *col1, *col2);}    // Generate image: checked
void GenImageWhiteNoiseRetPtr(Image *ret, int *width,  int *height,  float *factor){*ret=GenImageWhiteNoise(*width, *height, *factor);}                                     // Generate image: white noise
void GenImagePerlinNoiseRetPtr(Image *ret, int *width,  int *height,  int *offsetX,  int *offsetY,  float *scale){*ret=GenImagePerlinNoise(*width, *height, *offsetX, *offsetY, *scale);}           // Generate image: perlin noise
void GenImageCellularRetPtr(Image *ret, int *width,  int *height,  int *tileSize){*ret=GenImageCellular(*width, *height, *tileSize);}                                       // Generate image: cellular algorithm, bigger tileSize means bigger cells
void GenImageTextRetPtr(Image *ret, int *width,  int *height,  const char *text){*ret=GenImageText(*width, *height, text);}                                       // Generate image: grayscale image from text data
void ImageCopyRetPtr(Image *ret, Image *image){*ret=ImageCopy(*image);}                                                                      // Create an image duplicate (useful for transformations)
void ImageFromImageRetPtr(Image *ret, Image *image,  Rectangle *rec){*ret=ImageFromImage(*image, *rec);}                                                  // Create an image from another image piece
void ImageTextRetPtr(Image *ret, const char *text,  int *fontSize,  Color *color){*ret=ImageText(text, *fontSize, *color);}                                      // Create an image from text (default font)
void ImageTextExRetPtr(Image *ret, Font *font,  const char *text,  float *fontSize,  float *spacing,  Color *tint){*ret=ImageTextEx(*font, text, *fontSize, *spacing, *tint);}         // Create an image from text (custom sprite font)
void ImageFormatRetPtr(Image *image,  int *newFormat){ImageFormat(image, *newFormat);}                                                     // Convert image data to desired format
void ImageToPOTRetPtr(Image *image,  Color *fill){ImageToPOT(image, *fill);}                                                         // Convert image to POT (power-of-two)
void ImageCropRetPtr(Image *image,  Rectangle *crop){ImageCrop(image, *crop);}                                                      // Crop an image to a defined rectangle
void ImageAlphaCropRetPtr(Image *image,  float *threshold){ImageAlphaCrop(image, *threshold);}                                                // Crop image depending on alpha value
void ImageAlphaClearRetPtr(Image *image,  Color *color,  float *threshold){ImageAlphaClear(image, *color, *threshold);}                                  // Clear alpha channel to desired color
void ImageAlphaMaskRetPtr(Image *image,  Image *alphaMask){ImageAlphaMask(image, *alphaMask);}                                                // Apply alpha mask to image
void ImageAlphaPremultiplyRetPtr(Image *image){ImageAlphaPremultiply(image);}                                                          // Premultiply alpha channel
void ImageBlurGaussianRetPtr(Image *image,  int *blurSize){ImageBlurGaussian(image, *blurSize);}                                                // Apply Gaussian blur using a box blur approximation
void ImageResizeRetPtr(Image *image,  int *newWidth,  int *newHeight){ImageResize(image, *newWidth, *newHeight);}                                       // Resize image (Bicubic scaling algorithm)
void ImageResizeNNRetPtr(Image *image,  int *newWidth,  int *newHeight){ImageResizeNN(image, *newWidth, *newHeight);}                                      // Resize image (Nearest-Neighbor scaling algorithm)
void ImageResizeCanvasRetPtr(Image *image,  int *newWidth,  int *newHeight,  int *offsetX,  int *offsetY,  Color *fill){ImageResizeCanvas(image, *newWidth, *newHeight, *offsetX, *offsetY, *fill);}  // Resize canvas and fill with color
void ImageMipmapsRetPtr(Image *image){ImageMipmaps(image);}                                                                   // Compute all mipmap levels for a provided image
void ImageDitherRetPtr(Image *image,  int *rBpp,  int *gBpp,  int *bBpp,  int *aBpp){ImageDither(image, *rBpp, *gBpp, *bBpp, *aBpp);}                            // Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
void ImageFlipVerticalRetPtr(Image *image){ImageFlipVertical(image);}                                                              // Flip image vertically
void ImageFlipHorizontalRetPtr(Image *image){ImageFlipHorizontal(image);}                                                            // Flip image horizontally
void ImageRotateRetPtr(Image *image,  int *degrees){ImageRotate(image, *degrees);}                                                       // Rotate image by input angle in degrees (-359 to 359)
void ImageRotateCWRetPtr(Image *image){ImageRotateCW(image);}                                                                  // Rotate image clockwise 90deg
void ImageRotateCCWRetPtr(Image *image){ImageRotateCCW(image);}                                                                 // Rotate image counter-clockwise 90deg
void ImageColorTintRetPtr(Image *image,  Color *color){ImageColorTint(image, *color);}                                                    // Modify image color: tint
void ImageColorInvertRetPtr(Image *image){ImageColorInvert(image);}                                                               // Modify image color: invert
void ImageColorGrayscaleRetPtr(Image *image){ImageColorGrayscale(image);}                                                            // Modify image color: grayscale
void ImageColorContrastRetPtr(Image *image,  float *contrast){ImageColorContrast(image, *contrast);}                                             // Modify image color: contrast (-100 to 100)
void ImageColorBrightnessRetPtr(Image *image,  int *brightness){ImageColorBrightness(image, *brightness);}                                           // Modify image color: brightness (-255 to 255)
void ImageColorReplaceRetPtr(Image *image,  Color *color,  Color *replace){ImageColorReplace(image, *color, *replace);}                                  // Modify image color: replace color
void LoadImageColorsRetPtr(Color **ret, Image *image){*ret=LoadImageColors(*image);}                                                               // Load color data from image as a Color array (RGBA - 32bit)
void LoadImagePaletteRetPtr(Color **ret, Image *image,  int *maxPaletteSize,  int *colorCount){*ret=LoadImagePalette(*image, *maxPaletteSize, colorCount);}                         // Load colors palette from image as a Color array (RGBA - 32bit)
void UnloadImageColorsRetPtr(Color *colors){UnloadImageColors(colors);}                                                             // Unload color data loaded with LoadImageColors()
void UnloadImagePaletteRetPtr(Color *colors){UnloadImagePalette(colors);}                                                            // Unload colors palette loaded with LoadImagePalette()
void GetImageAlphaBorderRetPtr(Rectangle *ret, Image *image,  float *threshold){*ret=GetImageAlphaBorder(*image, *threshold);}                                       // Get image alpha border rectangle
void GetImageColorRetPtr(Color *ret, Image *image,  int *x,  int *y){*ret=GetImageColor(*image, *x, *y);}                                                    // Get image pixel color at (x, y) position
void ImageClearBackgroundRetPtr(Image *dst,  Color *color){ImageClearBackground(dst, *color);}                                                // Clear image background with given color
void ImageDrawPixelRetPtr(Image *dst,  int *posX,  int *posY,  Color *color){ImageDrawPixel(dst, *posX, *posY, *color);}                                  // Draw pixel within an image
void ImageDrawPixelVRetPtr(Image *dst,  Vector2 *position,  Color *color){ImageDrawPixelV(dst, *position, *color);}                                   // Draw pixel within an image (Vector version)
void ImageDrawLineRetPtr(Image *dst,  int *startPosX,  int *startPosY,  int *endPosX,  int *endPosY,  Color *color){ImageDrawLine(dst, *startPosX, *startPosY, *endPosX, *endPosY, *color);} // Draw line within an image
void ImageDrawLineVRetPtr(Image *dst,  Vector2 *start,  Vector2 *end,  Color *color){ImageDrawLineV(dst, *start, *end, *color);}                          // Draw line within an image (Vector version)
void ImageDrawCircleRetPtr(Image *dst,  int *centerX,  int *centerY,  int *radius,  Color *color){ImageDrawCircle(dst, *centerX, *centerY, *radius, *color);}               // Draw a filled circle within an image
void ImageDrawCircleVRetPtr(Image *dst,  Vector2 *center,  int *radius,  Color *color){ImageDrawCircleV(dst, *center, *radius, *color);}                        // Draw a filled circle within an image (Vector version)
void ImageDrawCircleLinesRetPtr(Image *dst,  int *centerX,  int *centerY,  int *radius,  Color *color){ImageDrawCircleLines(dst, *centerX, *centerY, *radius, *color);}          // Draw circle outline within an image
void ImageDrawCircleLinesVRetPtr(Image *dst,  Vector2 *center,  int *radius,  Color *color){ImageDrawCircleLinesV(dst, *center, *radius, *color);}                   // Draw circle outline within an image (Vector version)
void ImageDrawRectangleRetPtr(Image *dst,  int *posX,  int *posY,  int *width,  int *height,  Color *color){ImageDrawRectangle(dst, *posX, *posY, *width, *height, *color);}       // Draw rectangle within an image
void ImageDrawRectangleVRetPtr(Image *dst,  Vector2 *position,  Vector2 *size,  Color *color){ImageDrawRectangleV(dst, *position, *size, *color);}                 // Draw rectangle within an image (Vector version)
void ImageDrawRectangleRecRetPtr(Image *dst,  Rectangle *rec,  Color *color){ImageDrawRectangleRec(dst, *rec, *color);}                                // Draw rectangle within an image
void ImageDrawRectangleLinesRetPtr(Image *dst,  Rectangle *rec,  int *thick,  Color *color){ImageDrawRectangleLines(dst, *rec, *thick, *color);}                   // Draw rectangle lines within an image
void ImageDrawRetPtr(Image *dst,  Image *src,  Rectangle *srcRec,  Rectangle *dstRec,  Color *tint){ImageDraw(dst, *src, *srcRec, *dstRec, *tint);}             // Draw a source image within a destination image (tint applied to source)
void ImageDrawTextRetPtr(Image *dst,  const char *text,  int *posX,  int *posY,  int *fontSize,  Color *color){ImageDrawText(dst, text, *posX, *posY, *fontSize, *color);}   // Draw text (using default font) within an image (destination)
void ImageDrawTextExRetPtr(Image *dst,  Font *font,  const char *text,  Vector2 *position,  float *fontSize,  float *spacing,  Color *tint){ImageDrawTextEx(dst, *font, text, *position, *fontSize, *spacing, *tint);} // Draw text (custom sprite font) within an image (destination)
void LoadTextureRetPtr(Texture2D *ret, const char *fileName){*ret=LoadTexture(fileName);}                                                       // Load texture from file into GPU memory (VRAM)
void LoadTextureFromImageRetPtr(Texture2D *ret, Image *image){*ret=LoadTextureFromImage(*image);}                                                       // Load texture from image data
void LoadTextureCubemapRetPtr(TextureCubemap *ret, Image *image,  int *layout){*ret=LoadTextureCubemap(*image, *layout);}                                        // Load cubemap from image, multiple image cubemap layouts supported
void LoadRenderTextureRetPtr(RenderTexture2D *ret, int *width,  int *height){*ret=LoadRenderTexture(*width, *height);}                                          // Load texture for rendering (framebuffer)
void IsTextureReadyRetPtr(bool *ret, Texture2D *texture){*ret=IsTextureReady(*texture);}                                                            // Check if a texture is ready
void UnloadTextureRetPtr(Texture2D *texture){UnloadTexture(*texture);}                                                             // Unload texture from GPU memory (VRAM)
void IsRenderTextureReadyRetPtr(bool *ret, RenderTexture2D *target){*ret=IsRenderTextureReady(*target);}                                                 // Check if a render texture is ready
void UnloadRenderTextureRetPtr(RenderTexture2D *target){UnloadRenderTexture(*target);}                                                  // Unload render texture from GPU memory (VRAM)
void UpdateTextureRetPtr(Texture2D *texture,  const void *pixels){UpdateTexture(*texture, pixels);}                                         // Update GPU texture with new data
void UpdateTextureRecRetPtr(Texture2D *texture,  Rectangle *rec,  const void *pixels){UpdateTextureRec(*texture, *rec, pixels);}                       // Update GPU texture rectangle with new data
void GenTextureMipmapsRetPtr(Texture2D *texture){GenTextureMipmaps(texture);}                                                        // Generate GPU mipmaps for a texture
void SetTextureFilterRetPtr(Texture2D *texture,  int *filter){SetTextureFilter(*texture, *filter);}                                              // Set texture scaling filter mode
void SetTextureWrapRetPtr(Texture2D *texture,  int *wrap){SetTextureWrap(*texture, *wrap);}                                                  // Set texture wrapping mode
void DrawTextureRetPtr(Texture2D *texture,  int *posX,  int *posY,  Color *tint){DrawTexture(*texture, *posX, *posY, *tint);}                               // Draw a Texture2D
void DrawTextureVRetPtr(Texture2D *texture,  Vector2 *position,  Color *tint){DrawTextureV(*texture, *position, *tint);}                                // Draw a Texture2D with position defined as Vector2
void DrawTextureExRetPtr(Texture2D *texture,  Vector2 *position,  float *rotation,  float *scale,  Color *tint){DrawTextureEx(*texture, *position, *rotation, *scale, *tint);}  // Draw a Texture2D with extended parameters
void DrawTextureRecRetPtr(Texture2D *texture,  Rectangle *source,  Vector2 *position,  Color *tint){DrawTextureRec(*texture, *source, *position, *tint);}            // Draw a part of a texture defined by a rectangle
void DrawTextureProRetPtr(Texture2D *texture,  Rectangle *source,  Rectangle *dest,  Vector2 *origin,  float *rotation,  Color *tint){DrawTexturePro(*texture, *source, *dest, *origin, *rotation, *tint);} // Draw a part of a texture defined by a rectangle with 'pro' parameters
void DrawTextureNPatchRetPtr(Texture2D *texture,  NPatchInfo *nPatchInfo,  Rectangle *dest,  Vector2 *origin,  float *rotation,  Color *tint){DrawTextureNPatch(*texture, *nPatchInfo, *dest, *origin, *rotation, *tint);} // Draws a texture (or part of it) that stretches or shrinks nicely
void FadeRetPtr(Color *ret, Color *color,  float *alpha){*ret=Fade(*color, *alpha);}                                 // Get color with alpha applied, alpha goes from 0.0f to 1.0f
void ColorToIntRetPtr(int *ret, Color *color){*ret=ColorToInt(*color);}                                          // Get hexadecimal value for a Color
void ColorNormalizeRetPtr(Vector4 *ret, Color *color){*ret=ColorNormalize(*color);}                                  // Get Color normalized as float [0..1]
void ColorFromNormalizedRetPtr(Color *ret, Vector4 *normalized){*ret=ColorFromNormalized(*normalized);}                        // Get Color from normalized values [0..1]
void ColorToHSVRetPtr(Vector3 *ret, Color *color){*ret=ColorToHSV(*color);}                                      // Get HSV values for a Color, hue [0..360], saturation/value [0..1]
void ColorFromHSVRetPtr(Color *ret, float *hue,  float *saturation,  float *value){*ret=ColorFromHSV(*hue, *saturation, *value);}         // Get a Color from HSV values, hue [0..360], saturation/value [0..1]
void ColorTintRetPtr(Color *ret, Color *color,  Color *tint){*ret=ColorTint(*color, *tint);}                             // Get color multiplied with another color
void ColorBrightnessRetPtr(Color *ret, Color *color,  float *factor){*ret=ColorBrightness(*color, *factor);}                     // Get color with brightness correction, brightness factor goes from -1.0f to 1.0f
void ColorContrastRetPtr(Color *ret, Color *color,  float *contrast){*ret=ColorContrast(*color, *contrast);}                     // Get color with contrast correction, contrast values between -1.0f and 1.0f
void ColorAlphaRetPtr(Color *ret, Color *color,  float *alpha){*ret=ColorAlpha(*color, *alpha);}                           // Get color with alpha applied, alpha goes from 0.0f to 1.0f
void ColorAlphaBlendRetPtr(Color *ret, Color *dst,  Color *src,  Color *tint){*ret=ColorAlphaBlend(*dst, *src, *tint);}              // Get src alpha-blended into dst color with tint
void GetColorRetPtr(Color *ret, unsigned int *hexValue){*ret=GetColor(*hexValue);}                                // Get Color structure from hexadecimal value
void GetPixelColorRetPtr(Color *ret, void *srcPtr,  int *format){*ret=GetPixelColor(srcPtr, *format);}                        // Get Color from a source pixel pointer of certain format
void SetPixelColorRetPtr(void *dstPtr,  Color *color,  int *format){SetPixelColor(dstPtr, *color, *format);}            // Set color formatted into destination pixel pointer
void GetPixelDataSizeRetPtr(int *ret, int *width,  int *height,  int *format){*ret=GetPixelDataSize(*width, *height, *format);}              // Get pixel data size in bytes for certain format
void GetFontDefaultRetPtr(Font *ret){*ret=GetFontDefault();}                                                            // Get the default Font
void LoadFontRetPtr(Font *ret, const char *fileName){*ret=LoadFont(fileName);}                                                  // Load font from file into GPU memory (VRAM)
void LoadFontExRetPtr(Font *ret, const char *fileName,  int *fontSize,  int *codepoints,  int *codepointCount){*ret=LoadFontEx(fileName, *fontSize, codepoints, *codepointCount);}  // Load font from file with extended parameters, use NULL for codepoints and 0 for codepointCount to load the default character set
void LoadFontFromImageRetPtr(Font *ret, Image *image,  Color *key,  int *firstChar){*ret=LoadFontFromImage(*image, *key, *firstChar);}                        // Load font from Image (XNA style)
void LoadFontFromMemoryRetPtr(Font *ret, const char *fileType,  const unsigned char *fileData,  int *dataSize,  int *fontSize,  int *codepoints,  int *codepointCount){*ret=LoadFontFromMemory(fileType, fileData, *dataSize, *fontSize, codepoints, *codepointCount);} // Load font from memory buffer, fileType refers to extension: i.e. '.ttf'
void IsFontReadyRetPtr(bool *ret, Font *font){*ret=IsFontReady(*font);}                                                          // Check if a font is ready
void LoadFontDataRetPtr(GlyphInfo **ret, const unsigned char *fileData,  int *dataSize,  int *fontSize,  int *codepoints,  int *codepointCount,  int *type){*ret=LoadFontData(fileData, *dataSize, *fontSize, codepoints, *codepointCount, *type);} // Load font data for further use
void GenImageFontAtlasRetPtr(Image *ret, const GlyphInfo *glyphs,  Rectangle **glyphRecs,  int *glyphCount,  int *fontSize,  int *padding,  int *packMethod){*ret=GenImageFontAtlas(glyphs, glyphRecs, *glyphCount, *fontSize, *padding, *packMethod);} // Generate image font atlas using chars info
void UnloadFontDataRetPtr(GlyphInfo *glyphs,  int *glyphCount){UnloadFontData(glyphs, *glyphCount);}                               // Unload font chars info data (RAM)
void UnloadFontRetPtr(Font *font){UnloadFont(*font);}                                                           // Unload font from GPU memory (VRAM)
void ExportFontAsCodeRetPtr(bool *ret, Font *font,  const char *fileName){*ret=ExportFontAsCode(*font, fileName);}                               // Export font as code file, returns true on success
void DrawFPSRetPtr(int *posX,  int *posY){DrawFPS(*posX, *posY);}                                                     // Draw current FPS
void DrawTextRetPtr(const char *text,  int *posX,  int *posY,  int *fontSize,  Color *color){DrawText(text, *posX, *posY, *fontSize, *color);}       // Draw text (using default font)
void DrawTextExRetPtr(Font *font,  const char *text,  Vector2 *position,  float *fontSize,  float *spacing,  Color *tint){DrawTextEx(*font, text, *position, *fontSize, *spacing, *tint);} // Draw text using font and additional parameters
void DrawTextProRetPtr(Font *font,  const char *text,  Vector2 *position,  Vector2 *origin,  float *rotation,  float *fontSize,  float *spacing,  Color *tint){DrawTextPro(*font, text, *position, *origin, *rotation, *fontSize, *spacing, *tint);} // Draw text using Font and pro parameters (rotation)
void DrawTextCodepointRetPtr(Font *font,  int *codepoint,  Vector2 *position,  float *fontSize,  Color *tint){DrawTextCodepoint(*font, *codepoint, *position, *fontSize, *tint);} // Draw one character (codepoint)
void DrawTextCodepointsRetPtr(Font *font,  const int *codepoints,  int *codepointCount,  Vector2 *position,  float *fontSize,  float *spacing,  Color *tint){DrawTextCodepoints(*font, codepoints, *codepointCount, *position, *fontSize, *spacing, *tint);} // Draw multiple character (codepoint)
void SetTextLineSpacingRetPtr(int *spacing){SetTextLineSpacing(*spacing);}                                                 // Set vertical line spacing when drawing with line-breaks
void MeasureTextRetPtr(int *ret, const char *text,  int *fontSize){*ret=MeasureText(text, *fontSize);}                                      // Measure string width for default font
void MeasureTextExRetPtr(Vector2 *ret, Font *font,  const char *text,  float *fontSize,  float *spacing){*ret=MeasureTextEx(*font, text, *fontSize, *spacing);}    // Measure string size for Font
void GetGlyphIndexRetPtr(int *ret, Font *font,  int *codepoint){*ret=GetGlyphIndex(*font, *codepoint);}                                          // Get glyph index position in font for a codepoint (unicode character), fallback to '?' if not found
void GetGlyphInfoRetPtr(GlyphInfo *ret, Font *font,  int *codepoint){*ret=GetGlyphInfo(*font, *codepoint);}                                     // Get glyph font info data for a codepoint (unicode character), fallback to '?' if not found
void GetGlyphAtlasRecRetPtr(Rectangle *ret, Font *font,  int *codepoint){*ret=GetGlyphAtlasRec(*font, *codepoint);}                                 // Get glyph rectangle in font atlas for a codepoint (unicode character), fallback to '?' if not found
void LoadUTF8RetPtr(char **ret, const int *codepoints,  int *length){*ret=LoadUTF8(codepoints, *length);}                // Load UTF-8 text encoded from codepoints array
void UnloadUTF8RetPtr(char *text){UnloadUTF8(text);}                                      // Unload UTF-8 text encoded from codepoints array
void LoadCodepointsRetPtr(int **ret, const char *text,  int *count){*ret=LoadCodepoints(text, count);}                // Load all codepoints from a UTF-8 text string, codepoints count returned by parameter
void UnloadCodepointsRetPtr(int *codepoints){UnloadCodepoints(codepoints);}                           // Unload codepoints data from memory
void GetCodepointCountRetPtr(int *ret, const char *text){*ret=GetCodepointCount(text);}                          // Get total number of codepoints in a UTF-8 encoded string
void GetCodepointRetPtr(int *ret, const char *text,  int *codepointSize){*ret=GetCodepoint(text, codepointSize);}           // Get next codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
void GetCodepointNextRetPtr(int *ret, const char *text,  int *codepointSize){*ret=GetCodepointNext(text, codepointSize);}       // Get next codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
void GetCodepointPreviousRetPtr(int *ret, const char *text,  int *codepointSize){*ret=GetCodepointPrevious(text, codepointSize);}   // Get previous codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure
void CodepointToUTF8RetPtr(const char **ret, int *codepoint,  int *utf8Size){*ret=CodepointToUTF8(*codepoint, utf8Size);}        // Encode one codepoint into UTF-8 byte array (array length returned as parameter)
void TextCopyRetPtr(int *ret, char *dst,  const char *src){*ret=TextCopy(dst, src);}                                             // Copy one string to another, returns bytes copied
void TextIsEqualRetPtr(bool *ret, const char *text1,  const char *text2){*ret=TextIsEqual(text1, text2);}                               // Check if two text string are equal
void TextLengthRetPtr(unsigned int *ret, const char *text){*ret=TextLength(text);}                                            // Get text length, checks for '\0' ending
void TextSubtextRetPtr(const char **ret, const char *text,  int *position,  int *length){*ret=TextSubtext(text, *position, *length);}                  // Get a piece of a text string
void TextReplaceRetPtr(char **ret, char *text,  const char *replace,  const char *by){*ret=TextReplace(text, replace, by);}                   // Replace text string (WARNING: memory must be freed!)
void TextInsertRetPtr(char **ret, const char *text,  const char *insert,  int *position){*ret=TextInsert(text, insert, *position);}                 // Insert text in a position (WARNING: memory must be freed!)
void TextJoinRetPtr(const char **ret, const char **textList,  int *count,  const char *delimiter){*ret=TextJoin(textList, *count, delimiter);}        // Join text strings with delimiter
void TextSplitRetPtr(const char ***ret, const char *text,  char *delimiter,  int *count){*ret=TextSplit(text, *delimiter, count);}                 // Split text into multiple strings
void TextAppendRetPtr(char *text,  const char *append,  int *position){TextAppend(text, append, position);}                       // Append text at specific position and move cursor!
void TextFindIndexRetPtr(int *ret, const char *text,  const char *find){*ret=TextFindIndex(text, find);}                                // Find first text occurrence within a string
void TextToUpperRetPtr(const char **ret, const char *text){*ret=TextToUpper(text);}                      // Get upper case version of provided string
void TextToLowerRetPtr(const char **ret, const char *text){*ret=TextToLower(text);}                      // Get lower case version of provided string
void TextToPascalRetPtr(const char **ret, const char *text){*ret=TextToPascal(text);}                     // Get Pascal case notation version of provided string
void TextToIntegerRetPtr(int *ret, const char *text){*ret=TextToInteger(text);}                            // Get integer value from text (negative values not supported)
void DrawLine3DRetPtr(Vector3 *startPos,  Vector3 *endPos,  Color *color){DrawLine3D(*startPos, *endPos, *color);}                                    // Draw a line in 3D world space
void DrawPoint3DRetPtr(Vector3 *position,  Color *color){DrawPoint3D(*position, *color);}                                                   // Draw a point in 3D space, actually a small line
void DrawCircle3DRetPtr(Vector3 *center,  float *radius,  Vector3 *rotationAxis,  float *rotationAngle,  Color *color){DrawCircle3D(*center, *radius, *rotationAxis, *rotationAngle, *color);} // Draw a circle in 3D world space
void DrawTriangle3DRetPtr(Vector3 *v1,  Vector3 *v2,  Vector3 *v3,  Color *color){DrawTriangle3D(*v1, *v2, *v3, *color);}                              // Draw a color-filled triangle (vertex in counter-clockwise order!)
void DrawTriangleStrip3DRetPtr(Vector3 *points,  int *pointCount,  Color *color){DrawTriangleStrip3D(points, *pointCount, *color);}                            // Draw a triangle strip defined by points
void DrawCubeRetPtr(Vector3 *position,  float *width,  float *height,  float *length,  Color *color){DrawCube(*position, *width, *height, *length, *color);}             // Draw cube
void DrawCubeVRetPtr(Vector3 *position,  Vector3 *size,  Color *color){DrawCubeV(*position, *size, *color);}                                       // Draw cube (Vector version)
void DrawCubeWiresRetPtr(Vector3 *position,  float *width,  float *height,  float *length,  Color *color){DrawCubeWires(*position, *width, *height, *length, *color);}        // Draw cube wires
void DrawCubeWiresVRetPtr(Vector3 *position,  Vector3 *size,  Color *color){DrawCubeWiresV(*position, *size, *color);}                                  // Draw cube wires (Vector version)
void DrawSphereRetPtr(Vector3 *centerPos,  float *radius,  Color *color){DrawSphere(*centerPos, *radius, *color);}                                     // Draw sphere
void DrawSphereExRetPtr(Vector3 *centerPos,  float *radius,  int *rings,  int *slices,  Color *color){DrawSphereEx(*centerPos, *radius, *rings, *slices, *color);}            // Draw sphere with extended parameters
void DrawSphereWiresRetPtr(Vector3 *centerPos,  float *radius,  int *rings,  int *slices,  Color *color){DrawSphereWires(*centerPos, *radius, *rings, *slices, *color);}         // Draw sphere wires
void DrawCylinderRetPtr(Vector3 *position,  float *radiusTop,  float *radiusBottom,  float *height,  int *slices,  Color *color){DrawCylinder(*position, *radiusTop, *radiusBottom, *height, *slices, *color);} // Draw a cylinder/cone
void DrawCylinderExRetPtr(Vector3 *startPos,  Vector3 *endPos,  float *startRadius,  float *endRadius,  int *sides,  Color *color){DrawCylinderEx(*startPos, *endPos, *startRadius, *endRadius, *sides, *color);} // Draw a cylinder with base at startPos and top at endPos
void DrawCylinderWiresRetPtr(Vector3 *position,  float *radiusTop,  float *radiusBottom,  float *height,  int *slices,  Color *color){DrawCylinderWires(*position, *radiusTop, *radiusBottom, *height, *slices, *color);} // Draw a cylinder/cone wires
void DrawCylinderWiresExRetPtr(Vector3 *startPos,  Vector3 *endPos,  float *startRadius,  float *endRadius,  int *sides,  Color *color){DrawCylinderWiresEx(*startPos, *endPos, *startRadius, *endRadius, *sides, *color);} // Draw a cylinder wires with base at startPos and top at endPos
void DrawCapsuleRetPtr(Vector3 *startPos,  Vector3 *endPos,  float *radius,  int *slices,  int *rings,  Color *color){DrawCapsule(*startPos, *endPos, *radius, *slices, *rings, *color);} // Draw a capsule with the center of its sphere caps at startPos and endPos
void DrawCapsuleWiresRetPtr(Vector3 *startPos,  Vector3 *endPos,  float *radius,  int *slices,  int *rings,  Color *color){DrawCapsuleWires(*startPos, *endPos, *radius, *slices, *rings, *color);} // Draw capsule wireframe with the center of its sphere caps at startPos and endPos
void DrawPlaneRetPtr(Vector3 *centerPos,  Vector2 *size,  Color *color){DrawPlane(*centerPos, *size, *color);}                                      // Draw a plane XZ
void DrawRayRetPtr(Ray *ray,  Color *color){DrawRay(*ray, *color);}                                                                // Draw a ray line
void DrawGridRetPtr(int *slices,  float *spacing){DrawGrid(*slices, *spacing);}                                                          // Draw a grid (centered at (0, 0, 0))
void LoadModelRetPtr(Model *ret, const char *fileName){*ret=LoadModel(fileName);}                                                // Load model from files (meshes and materials)
void LoadModelFromMeshRetPtr(Model *ret, Mesh *mesh){*ret=LoadModelFromMesh(*mesh);}                                                   // Load model from generated mesh (default material)
void IsModelReadyRetPtr(bool *ret, Model *model){*ret=IsModelReady(*model);}                                                       // Check if a model is ready
void UnloadModelRetPtr(Model *model){UnloadModel(*model);}                                                        // Unload model (including meshes) from memory (RAM and/or VRAM)
void GetModelBoundingBoxRetPtr(BoundingBox *ret, Model *model){*ret=GetModelBoundingBox(*model);}                                         // Compute model bounding box limits (considers all meshes)
void DrawModelRetPtr(Model *model,  Vector3 *position,  float *scale,  Color *tint){DrawModel(*model, *position, *scale, *tint);}               // Draw a model (with texture if set)
void DrawModelExRetPtr(Model *model,  Vector3 *position,  Vector3 *rotationAxis,  float *rotationAngle,  Vector3 *scale,  Color *tint){DrawModelEx(*model, *position, *rotationAxis, *rotationAngle, *scale, *tint);} // Draw a model with extended parameters
void DrawModelWiresRetPtr(Model *model,  Vector3 *position,  float *scale,  Color *tint){DrawModelWires(*model, *position, *scale, *tint);}          // Draw a model wires (with texture if set)
void DrawModelWiresExRetPtr(Model *model,  Vector3 *position,  Vector3 *rotationAxis,  float *rotationAngle,  Vector3 *scale,  Color *tint){DrawModelWiresEx(*model, *position, *rotationAxis, *rotationAngle, *scale, *tint);} // Draw a model wires (with texture if set) with extended parameters
void DrawBoundingBoxRetPtr(BoundingBox *box,  Color *color){DrawBoundingBox(*box, *color);}                                   // Draw bounding box (wires)
void DrawBillboardRetPtr(Camera *camera,  Texture2D *texture,  Vector3 *position,  float *size,  Color *tint){DrawBillboard(*camera, *texture, *position, *size, *tint);}   // Draw a billboard texture
void DrawBillboardRecRetPtr(Camera *camera,  Texture2D *texture,  Rectangle *source,  Vector3 *position,  Vector2 *size,  Color *tint){DrawBillboardRec(*camera, *texture, *source, *position, *size, *tint);} // Draw a billboard texture defined by source
void DrawBillboardProRetPtr(Camera *camera,  Texture2D *texture,  Rectangle *source,  Vector3 *position,  Vector3 *up,  Vector2 *size,  Vector2 *origin,  float *rotation,  Color *tint){DrawBillboardPro(*camera, *texture, *source, *position, *up, *size, *origin, *rotation, *tint);} // Draw a billboard texture defined by source and rotation
void UploadMeshRetPtr(Mesh *mesh,  bool *dynamic){UploadMesh(mesh, *dynamic);}                                            // Upload mesh vertex data in GPU and provide VAO/VBO ids
void UpdateMeshBufferRetPtr(Mesh *mesh,  int *index,  const void *data,  int *dataSize,  int *offset){UpdateMeshBuffer(*mesh, *index, data, *dataSize, *offset);} // Update mesh vertex data in GPU for a specific buffer index
void UnloadMeshRetPtr(Mesh *mesh){UnloadMesh(*mesh);}                                                           // Unload mesh data from CPU and GPU
void DrawMeshRetPtr(Mesh *mesh,  Material *material,  Matrix *transform){DrawMesh(*mesh, *material, *transform);}                        // Draw a 3d mesh with material and transform
void DrawMeshInstancedRetPtr(Mesh *mesh,  Material *material,  const Matrix *transforms,  int *instances){DrawMeshInstanced(*mesh, *material, transforms, *instances);} // Draw multiple mesh instances with material and different transforms
void ExportMeshRetPtr(bool *ret, Mesh *mesh,  const char *fileName){*ret=ExportMesh(*mesh, fileName);}                                     // Export mesh data to file, returns true on success
void GetMeshBoundingBoxRetPtr(BoundingBox *ret, Mesh *mesh){*ret=GetMeshBoundingBox(*mesh);}                                            // Compute mesh bounding box limits
void GenMeshTangentsRetPtr(Mesh *mesh){GenMeshTangents(mesh);}                                                     // Compute mesh tangents
void GenMeshPolyRetPtr(Mesh *ret, int *sides,  float *radius){*ret=GenMeshPoly(*sides, *radius);}                                            // Generate polygonal mesh
void GenMeshPlaneRetPtr(Mesh *ret, float *width,  float *length,  int *resX,  int *resZ){*ret=GenMeshPlane(*width, *length, *resX, *resZ);}                     // Generate plane mesh (with subdivisions)
void GenMeshCubeRetPtr(Mesh *ret, float *width,  float *height,  float *length){*ret=GenMeshCube(*width, *height, *length);}                            // Generate cuboid mesh
void GenMeshSphereRetPtr(Mesh *ret, float *radius,  int *rings,  int *slices){*ret=GenMeshSphere(*radius, *rings, *slices);}                              // Generate sphere mesh (standard sphere)
void GenMeshHemiSphereRetPtr(Mesh *ret, float *radius,  int *rings,  int *slices){*ret=GenMeshHemiSphere(*radius, *rings, *slices);}                          // Generate half-sphere mesh (no bottom cap)
void GenMeshCylinderRetPtr(Mesh *ret, float *radius,  float *height,  int *slices){*ret=GenMeshCylinder(*radius, *height, *slices);}                         // Generate cylinder mesh
void GenMeshConeRetPtr(Mesh *ret, float *radius,  float *height,  int *slices){*ret=GenMeshCone(*radius, *height, *slices);}                             // Generate cone/pyramid mesh
void GenMeshTorusRetPtr(Mesh *ret, float *radius,  float *size,  int *radSeg,  int *sides){*ret=GenMeshTorus(*radius, *size, *radSeg, *sides);}                   // Generate torus mesh
void GenMeshKnotRetPtr(Mesh *ret, float *radius,  float *size,  int *radSeg,  int *sides){*ret=GenMeshKnot(*radius, *size, *radSeg, *sides);}                    // Generate trefoil knot mesh
void GenMeshHeightmapRetPtr(Mesh *ret, Image *heightmap,  Vector3 *size){*ret=GenMeshHeightmap(*heightmap, *size);}                                 // Generate heightmap mesh from image data
void GenMeshCubicmapRetPtr(Mesh *ret, Image *cubicmap,  Vector3 *cubeSize){*ret=GenMeshCubicmap(*cubicmap, *cubeSize);}                               // Generate cubes-based map mesh from image data
void LoadMaterialsRetPtr(Material **ret, const char *fileName,  int *materialCount){*ret=LoadMaterials(fileName, materialCount);}                    // Load materials from model file
void LoadMaterialDefaultRetPtr(Material *ret){*ret=LoadMaterialDefault();}                                                   // Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps)
void IsMaterialReadyRetPtr(bool *ret, Material *material){*ret=IsMaterialReady(*material);}                                              // Check if a material is ready
void UnloadMaterialRetPtr(Material *material){UnloadMaterial(*material);}                                               // Unload material from GPU memory (VRAM)
void SetMaterialTextureRetPtr(Material *material,  int *mapType,  Texture2D *texture){SetMaterialTexture(material, *mapType, *texture);}          // Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
void SetModelMeshMaterialRetPtr(Model *model,  int *meshId,  int *materialId){SetModelMeshMaterial(model, *meshId, *materialId);}                  // Set material for a mesh
void LoadModelAnimationsRetPtr(ModelAnimation **ret, const char *fileName,  int *animCount){*ret=LoadModelAnimations(fileName, animCount);}            // Load model animations from file
void UpdateModelAnimationRetPtr(Model *model,  ModelAnimation *anim,  int *frame){UpdateModelAnimation(*model, *anim, *frame);}               // Update model animation pose
void UnloadModelAnimationRetPtr(ModelAnimation *anim){UnloadModelAnimation(*anim);}                                       // Unload animation data
void UnloadModelAnimationsRetPtr(ModelAnimation *animations,  int *animCount){UnloadModelAnimations(animations, *animCount);}                // Unload animation array data
void IsModelAnimationValidRetPtr(bool *ret, Model *model,  ModelAnimation *anim){*ret=IsModelAnimationValid(*model, *anim);}                         // Check model animation skeleton match
void CheckCollisionSpheresRetPtr(bool *ret, Vector3 *center1,  float *radius1,  Vector3 *center2,  float *radius2){*ret=CheckCollisionSpheres(*center1, *radius1, *center2, *radius2);}   // Check collision between two spheres
void CheckCollisionBoxesRetPtr(bool *ret, BoundingBox *box1,  BoundingBox *box2){*ret=CheckCollisionBoxes(*box1, *box2);}                                 // Check collision between two bounding boxes
void CheckCollisionBoxSphereRetPtr(bool *ret, BoundingBox *box,  Vector3 *center,  float *radius){*ret=CheckCollisionBoxSphere(*box, *center, *radius);}                  // Check collision between box and sphere
void GetRayCollisionSphereRetPtr(RayCollision *ret, Ray *ray,  Vector3 *center,  float *radius){*ret=GetRayCollisionSphere(*ray, *center, *radius);}                    // Get collision info between ray and sphere
void GetRayCollisionBoxRetPtr(RayCollision *ret, Ray *ray,  BoundingBox *box){*ret=GetRayCollisionBox(*ray, *box);}                                    // Get collision info between ray and box
void GetRayCollisionMeshRetPtr(RayCollision *ret, Ray *ray,  Mesh *mesh,  Matrix *transform){*ret=GetRayCollisionMesh(*ray, *mesh, *transform);}                       // Get collision info between ray and mesh
void GetRayCollisionTriangleRetPtr(RayCollision *ret, Ray *ray,  Vector3 *p1,  Vector3 *p2,  Vector3 *p3){*ret=GetRayCollisionTriangle(*ray, *p1, *p2, *p3);}            // Get collision info between ray and triangle
void GetRayCollisionQuadRetPtr(RayCollision *ret, Ray *ray,  Vector3 *p1,  Vector3 *p2,  Vector3 *p3,  Vector3 *p4){*ret=GetRayCollisionQuad(*ray, *p1, *p2, *p3, *p4);}    // Get collision info between ray and quad
void InitAudioDeviceRetPtr(){InitAudioDevice();}                                     // Initialize audio device and context
void CloseAudioDeviceRetPtr(){CloseAudioDevice();}                                    // Close the audio device and context
void IsAudioDeviceReadyRetPtr(bool *ret){*ret=IsAudioDeviceReady();}                                  // Check if audio device has been initialized successfully
void SetMasterVolumeRetPtr(float *volume){SetMasterVolume(*volume);}                             // Set master volume (listener)
void GetMasterVolumeRetPtr(float *ret){*ret=GetMasterVolume();}                                    // Get master volume (listener)
void LoadWaveRetPtr(Wave *ret, const char *fileName){*ret=LoadWave(fileName);}                            // Load wave data from file
void LoadWaveFromMemoryRetPtr(Wave *ret, const char *fileType,  const unsigned char *fileData,  int *dataSize){*ret=LoadWaveFromMemory(fileType, fileData, *dataSize);} // Load wave from memory buffer, fileType refers to extension: i.e. '.wav'
void IsWaveReadyRetPtr(bool *ret, Wave *wave){*ret=IsWaveReady(*wave);}                                    // Checks if wave data is ready
void LoadSoundRetPtr(Sound *ret, const char *fileName){*ret=LoadSound(fileName);}                          // Load sound from file
void LoadSoundFromWaveRetPtr(Sound *ret, Wave *wave){*ret=LoadSoundFromWave(*wave);}                             // Load sound from wave data
void LoadSoundAliasRetPtr(Sound *ret, Sound *source){*ret=LoadSoundAlias(*source);}                             // Create a new sound that shares the same sample data as the source sound, does not own the sound data
void IsSoundReadyRetPtr(bool *ret, Sound *sound){*ret=IsSoundReady(*sound);}                                 // Checks if a sound is ready
void UpdateSoundRetPtr(Sound *sound,  const void *data,  int *sampleCount){UpdateSound(*sound, data, *sampleCount);} // Update sound buffer with new data
void UnloadWaveRetPtr(Wave *wave){UnloadWave(*wave);}                                     // Unload wave data
void UnloadSoundRetPtr(Sound *sound){UnloadSound(*sound);}                                  // Unload sound
void UnloadSoundAliasRetPtr(Sound *alias){UnloadSoundAlias(*alias);}                             // Unload a sound alias (does not deallocate sample data)
void ExportWaveRetPtr(bool *ret, Wave *wave,  const char *fileName){*ret=ExportWave(*wave, fileName);}               // Export wave data to file, returns true on success
void ExportWaveAsCodeRetPtr(bool *ret, Wave *wave,  const char *fileName){*ret=ExportWaveAsCode(*wave, fileName);}         // Export wave sample data to code (.h), returns true on success
void PlaySoundRetPtr(Sound *sound){PlaySound(*sound);}                                    // Play a sound
void StopSoundRetPtr(Sound *sound){StopSound(*sound);}                                    // Stop playing a sound
void PauseSoundRetPtr(Sound *sound){PauseSound(*sound);}                                   // Pause a sound
void ResumeSoundRetPtr(Sound *sound){ResumeSound(*sound);}                                  // Resume a paused sound
void IsSoundPlayingRetPtr(bool *ret, Sound *sound){*ret=IsSoundPlaying(*sound);}                               // Check if a sound is currently playing
void SetSoundVolumeRetPtr(Sound *sound,  float *volume){SetSoundVolume(*sound, *volume);}                 // Set volume for a sound (1.0 is max level)
void SetSoundPitchRetPtr(Sound *sound,  float *pitch){SetSoundPitch(*sound, *pitch);}                   // Set pitch for a sound (1.0 is base level)
void SetSoundPanRetPtr(Sound *sound,  float *pan){SetSoundPan(*sound, *pan);}                       // Set pan for a sound (0.5 is center)
void WaveCopyRetPtr(Wave *ret, Wave *wave){*ret=WaveCopy(*wave);}                                       // Copy a wave to a new wave
void WaveCropRetPtr(Wave *wave,  int *initSample,  int *finalSample){WaveCrop(wave, *initSample, *finalSample);}     // Crop a wave to defined samples range
void WaveFormatRetPtr(Wave *wave,  int *sampleRate,  int *sampleSize,  int *channels){WaveFormat(wave, *sampleRate, *sampleSize, *channels);} // Convert wave data to desired format
void LoadWaveSamplesRetPtr(float **ret, Wave *wave){*ret=LoadWaveSamples(*wave);}                              // Load samples data from wave as a 32bit float data array
void UnloadWaveSamplesRetPtr(float *samples){UnloadWaveSamples(samples);}                         // Unload samples data loaded with LoadWaveSamples()
void LoadMusicStreamRetPtr(Music *ret, const char *fileName){*ret=LoadMusicStream(fileName);}                    // Load music stream from file
void LoadMusicStreamFromMemoryRetPtr(Music *ret, const char *fileType,  const unsigned char *data,  int *dataSize){*ret=LoadMusicStreamFromMemory(fileType, data, *dataSize);} // Load music stream from data
void IsMusicReadyRetPtr(bool *ret, Music *music){*ret=IsMusicReady(*music);}                                 // Checks if a music stream is ready
void UnloadMusicStreamRetPtr(Music *music){UnloadMusicStream(*music);}                            // Unload music stream
void PlayMusicStreamRetPtr(Music *music){PlayMusicStream(*music);}                              // Start music playing
void IsMusicStreamPlayingRetPtr(bool *ret, Music *music){*ret=IsMusicStreamPlaying(*music);}                         // Check if music is playing
void UpdateMusicStreamRetPtr(Music *music){UpdateMusicStream(*music);}                            // Updates buffers for music streaming
void StopMusicStreamRetPtr(Music *music){StopMusicStream(*music);}                              // Stop music playing
void PauseMusicStreamRetPtr(Music *music){PauseMusicStream(*music);}                             // Pause music playing
void ResumeMusicStreamRetPtr(Music *music){ResumeMusicStream(*music);}                            // Resume playing paused music
void SeekMusicStreamRetPtr(Music *music,  float *position){SeekMusicStream(*music, *position);}              // Seek music to a position (in seconds)
void SetMusicVolumeRetPtr(Music *music,  float *volume){SetMusicVolume(*music, *volume);}                 // Set volume for music (1.0 is max level)
void SetMusicPitchRetPtr(Music *music,  float *pitch){SetMusicPitch(*music, *pitch);}                   // Set pitch for a music (1.0 is base level)
void SetMusicPanRetPtr(Music *music,  float *pan){SetMusicPan(*music, *pan);}                       // Set pan for a music (0.5 is center)
void GetMusicTimeLengthRetPtr(float *ret, Music *music){*ret=GetMusicTimeLength(*music);}                          // Get music time length (in seconds)
void GetMusicTimePlayedRetPtr(float *ret, Music *music){*ret=GetMusicTimePlayed(*music);}                          // Get current music time played (in seconds)
void LoadAudioStreamRetPtr(AudioStream *ret, unsigned int *sampleRate,  unsigned int *sampleSize,  unsigned int *channels){*ret=LoadAudioStream(*sampleRate, *sampleSize, *channels);} // Load audio stream (to stream raw audio pcm data)
void IsAudioStreamReadyRetPtr(bool *ret, AudioStream *stream){*ret=IsAudioStreamReady(*stream);}                    // Checks if an audio stream is ready
void UnloadAudioStreamRetPtr(AudioStream *stream){UnloadAudioStream(*stream);}                     // Unload audio stream and free memory
void UpdateAudioStreamRetPtr(AudioStream *stream,  const void *data,  int *frameCount){UpdateAudioStream(*stream, data, *frameCount);} // Update audio stream buffers with data
void IsAudioStreamProcessedRetPtr(bool *ret, AudioStream *stream){*ret=IsAudioStreamProcessed(*stream);}                // Check if any audio stream buffers requires refill
void PlayAudioStreamRetPtr(AudioStream *stream){PlayAudioStream(*stream);}                       // Play audio stream
void PauseAudioStreamRetPtr(AudioStream *stream){PauseAudioStream(*stream);}                      // Pause audio stream
void ResumeAudioStreamRetPtr(AudioStream *stream){ResumeAudioStream(*stream);}                     // Resume audio stream
void IsAudioStreamPlayingRetPtr(bool *ret, AudioStream *stream){*ret=IsAudioStreamPlaying(*stream);}                  // Check if audio stream is playing
void StopAudioStreamRetPtr(AudioStream *stream){StopAudioStream(*stream);}                       // Stop audio stream
void SetAudioStreamVolumeRetPtr(AudioStream *stream,  float *volume){SetAudioStreamVolume(*stream, *volume);}    // Set volume for audio stream (1.0 is max level)
void SetAudioStreamPitchRetPtr(AudioStream *stream,  float *pitch){SetAudioStreamPitch(*stream, *pitch);}      // Set pitch for audio stream (1.0 is base level)
void SetAudioStreamPanRetPtr(AudioStream *stream,  float *pan){SetAudioStreamPan(*stream, *pan);}          // Set pan for audio stream (0.5 is centered)
void SetAudioStreamBufferSizeDefaultRetPtr(int *size){SetAudioStreamBufferSizeDefault(*size);}                 // Default size for new audio streams
void SetAudioStreamCallbackRetPtr(AudioStream *stream,  AudioCallback *callback){SetAudioStreamCallback(*stream, *callback);} // Audio thread callback to request new data
void AttachAudioStreamProcessorRetPtr(AudioStream *stream,  AudioCallback *processor){AttachAudioStreamProcessor(*stream, *processor);} // Attach audio stream processor to stream, receives the samples as <float>s
void DetachAudioStreamProcessorRetPtr(AudioStream *stream,  AudioCallback *processor){DetachAudioStreamProcessor(*stream, *processor);} // Detach audio stream processor from stream
void AttachAudioMixedProcessorRetPtr(AudioCallback *processor){AttachAudioMixedProcessor(*processor);} // Attach audio stream processor to the entire audio pipeline, receives the samples as <float>s
void DetachAudioMixedProcessorRetPtr(AudioCallback *processor){DetachAudioMixedProcessor(*processor);} // Detach audio stream processor from the entire audio pipeline
void ClampRetPtr(float *ret, float *value,  float *min,  float *max){*ret=Clamp(*value, *min, *max);}
void LerpRetPtr(float *ret, float *start,  float *end,  float *amount){*ret=Lerp(*start, *end, *amount);}
void NormalizeRetPtr(float *ret, float *value,  float *start,  float *end){*ret=Normalize(*value, *start, *end);}
void RemapRetPtr(float *ret, float *value,  float *inputStart,  float *inputEnd,  float *outputStart,  float *outputEnd){*ret=Remap(*value, *inputStart, *inputEnd, *outputStart, *outputEnd);}
void WrapRetPtr(float *ret, float *value,  float *min,  float *max){*ret=Wrap(*value, *min, *max);}
void FloatEqualsRetPtr(int *ret, float *x,  float *y){*ret=FloatEquals(*x, *y);}
void Vector2ZeroRetPtr(Vector2 *ret){*ret=Vector2Zero();}
void Vector2OneRetPtr(Vector2 *ret){*ret=Vector2One();}
void Vector2AddRetPtr(Vector2 *ret, Vector2 *v1,  Vector2 *v2){*ret=Vector2Add(*v1, *v2);}
void Vector2AddValueRetPtr(Vector2 *ret, Vector2 *v,  float *add){*ret=Vector2AddValue(*v, *add);}
void Vector2SubtractRetPtr(Vector2 *ret, Vector2 *v1,  Vector2 *v2){*ret=Vector2Subtract(*v1, *v2);}
void Vector2SubtractValueRetPtr(Vector2 *ret, Vector2 *v,  float *sub){*ret=Vector2SubtractValue(*v, *sub);}
void Vector2LengthRetPtr(float *ret, Vector2 *v){*ret=Vector2Length(*v);}
void Vector2LengthSqrRetPtr(float *ret, Vector2 *v){*ret=Vector2LengthSqr(*v);}
void Vector2DotProductRetPtr(float *ret, Vector2 *v1,  Vector2 *v2){*ret=Vector2DotProduct(*v1, *v2);}
void Vector2DistanceRetPtr(float *ret, Vector2 *v1,  Vector2 *v2){*ret=Vector2Distance(*v1, *v2);}
void Vector2DistanceSqrRetPtr(float *ret, Vector2 *v1,  Vector2 *v2){*ret=Vector2DistanceSqr(*v1, *v2);}
void Vector2AngleRetPtr(float *ret, Vector2 *v1,  Vector2 *v2){*ret=Vector2Angle(*v1, *v2);}
void Vector2LineAngleRetPtr(float *ret, Vector2 *start,  Vector2 *end){*ret=Vector2LineAngle(*start, *end);}
void Vector2ScaleRetPtr(Vector2 *ret, Vector2 *v,  float *scale){*ret=Vector2Scale(*v, *scale);}
void Vector2MultiplyRetPtr(Vector2 *ret, Vector2 *v1,  Vector2 *v2){*ret=Vector2Multiply(*v1, *v2);}
void Vector2NegateRetPtr(Vector2 *ret, Vector2 *v){*ret=Vector2Negate(*v);}
void Vector2DivideRetPtr(Vector2 *ret, Vector2 *v1,  Vector2 *v2){*ret=Vector2Divide(*v1, *v2);}
void Vector2NormalizeRetPtr(Vector2 *ret, Vector2 *v){*ret=Vector2Normalize(*v);}
void Vector2TransformRetPtr(Vector2 *ret, Vector2 *v,  Matrix *mat){*ret=Vector2Transform(*v, *mat);}
void Vector2LerpRetPtr(Vector2 *ret, Vector2 *v1,  Vector2 *v2,  float *amount){*ret=Vector2Lerp(*v1, *v2, *amount);}
void Vector2ReflectRetPtr(Vector2 *ret, Vector2 *v,  Vector2 *normal){*ret=Vector2Reflect(*v, *normal);}
void Vector2RotateRetPtr(Vector2 *ret, Vector2 *v,  float *angle){*ret=Vector2Rotate(*v, *angle);}
void Vector2MoveTowardsRetPtr(Vector2 *ret, Vector2 *v,  Vector2 *target,  float *maxDistance){*ret=Vector2MoveTowards(*v, *target, *maxDistance);}
void Vector2InvertRetPtr(Vector2 *ret, Vector2 *v){*ret=Vector2Invert(*v);}
void Vector2ClampRetPtr(Vector2 *ret, Vector2 *v,  Vector2 *min,  Vector2 *max){*ret=Vector2Clamp(*v, *min, *max);}
void Vector2ClampValueRetPtr(Vector2 *ret, Vector2 *v,  float *min,  float *max){*ret=Vector2ClampValue(*v, *min, *max);}
void Vector2EqualsRetPtr(int *ret, Vector2 *p,  Vector2 *q){*ret=Vector2Equals(*p, *q);}
void Vector3ZeroRetPtr(Vector3 *ret){*ret=Vector3Zero();}
void Vector3OneRetPtr(Vector3 *ret){*ret=Vector3One();}
void Vector3AddRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Add(*v1, *v2);}
void Vector3AddValueRetPtr(Vector3 *ret, Vector3 *v,  float *add){*ret=Vector3AddValue(*v, *add);}
void Vector3SubtractRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Subtract(*v1, *v2);}
void Vector3SubtractValueRetPtr(Vector3 *ret, Vector3 *v,  float *sub){*ret=Vector3SubtractValue(*v, *sub);}
void Vector3ScaleRetPtr(Vector3 *ret, Vector3 *v,  float *scalar){*ret=Vector3Scale(*v, *scalar);}
void Vector3MultiplyRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Multiply(*v1, *v2);}
void Vector3CrossProductRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3CrossProduct(*v1, *v2);}
void Vector3PerpendicularRetPtr(Vector3 *ret, Vector3 *v){*ret=Vector3Perpendicular(*v);}
void Vector3LengthRetPtr(float *ret, const Vector3 *v){*ret=Vector3Length(*v);}
void Vector3LengthSqrRetPtr(float *ret, const Vector3 *v){*ret=Vector3LengthSqr(*v);}
void Vector3DotProductRetPtr(float *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3DotProduct(*v1, *v2);}
void Vector3DistanceRetPtr(float *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Distance(*v1, *v2);}
void Vector3DistanceSqrRetPtr(float *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3DistanceSqr(*v1, *v2);}
void Vector3AngleRetPtr(float *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Angle(*v1, *v2);}
void Vector3NegateRetPtr(Vector3 *ret, Vector3 *v){*ret=Vector3Negate(*v);}
void Vector3DivideRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Divide(*v1, *v2);}
void Vector3NormalizeRetPtr(Vector3 *ret, Vector3 *v){*ret=Vector3Normalize(*v);}
void Vector3ProjectRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Project(*v1, *v2);}
void Vector3RejectRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Reject(*v1, *v2);}
void Vector3OrthoNormalizeRetPtr(Vector3 *v1,  Vector3 *v2){Vector3OrthoNormalize(v1, v2);}
void Vector3TransformRetPtr(Vector3 *ret, Vector3 *v,  Matrix *mat){*ret=Vector3Transform(*v, *mat);}
void Vector3RotateByQuaternionRetPtr(Vector3 *ret, Vector3 *v,  Quaternion *q){*ret=Vector3RotateByQuaternion(*v, *q);}
void Vector3RotateByAxisAngleRetPtr(Vector3 *ret, Vector3 *v,  Vector3 *axis,  float *angle){*ret=Vector3RotateByAxisAngle(*v, *axis, *angle);}
void Vector3LerpRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2,  float *amount){*ret=Vector3Lerp(*v1, *v2, *amount);}
void Vector3ReflectRetPtr(Vector3 *ret, Vector3 *v,  Vector3 *normal){*ret=Vector3Reflect(*v, *normal);}
void Vector3MinRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Min(*v1, *v2);}
void Vector3MaxRetPtr(Vector3 *ret, Vector3 *v1,  Vector3 *v2){*ret=Vector3Max(*v1, *v2);}
void Vector3BarycenterRetPtr(Vector3 *ret, Vector3 *p,  Vector3 *a,  Vector3 *b,  Vector3 *c){*ret=Vector3Barycenter(*p, *a, *b, *c);}
void Vector3UnprojectRetPtr(Vector3 *ret, Vector3 *source,  Matrix *projection,  Matrix *view){*ret=Vector3Unproject(*source, *projection, *view);}
void Vector3ToFloatVRetPtr(float3 *ret, Vector3 *v){*ret=Vector3ToFloatV(*v);}
void Vector3InvertRetPtr(Vector3 *ret, Vector3 *v){*ret=Vector3Invert(*v);}
void Vector3ClampRetPtr(Vector3 *ret, Vector3 *v,  Vector3 *min,  Vector3 *max){*ret=Vector3Clamp(*v, *min, *max);}
void Vector3ClampValueRetPtr(Vector3 *ret, Vector3 *v,  float *min,  float *max){*ret=Vector3ClampValue(*v, *min, *max);}
void Vector3EqualsRetPtr(int *ret, Vector3 *p,  Vector3 *q){*ret=Vector3Equals(*p, *q);}
void Vector3RefractRetPtr(Vector3 *ret, Vector3 *v,  Vector3 *n,  float *r){*ret=Vector3Refract(*v, *n, *r);}
void MatrixDeterminantRetPtr(float *ret, Matrix *mat){*ret=MatrixDeterminant(*mat);}
void MatrixTraceRetPtr(float *ret, Matrix *mat){*ret=MatrixTrace(*mat);}
void MatrixTransposeRetPtr(Matrix *ret, Matrix *mat){*ret=MatrixTranspose(*mat);}
void MatrixInvertRetPtr(Matrix *ret, Matrix *mat){*ret=MatrixInvert(*mat);}
void MatrixIdentityRetPtr(Matrix *ret){*ret=MatrixIdentity();}
void MatrixAddRetPtr(Matrix *ret, Matrix *left,  Matrix *right){*ret=MatrixAdd(*left, *right);}
void MatrixSubtractRetPtr(Matrix *ret, Matrix *left,  Matrix *right){*ret=MatrixSubtract(*left, *right);}
void MatrixMultiplyRetPtr(Matrix *ret, Matrix *left,  Matrix *right){*ret=MatrixMultiply(*left, *right);}
void MatrixTranslateRetPtr(Matrix *ret, float *x,  float *y,  float *z){*ret=MatrixTranslate(*x, *y, *z);}
void MatrixRotateRetPtr(Matrix *ret, Vector3 *axis,  float *angle){*ret=MatrixRotate(*axis, *angle);}
void MatrixRotateXRetPtr(Matrix *ret, float *angle){*ret=MatrixRotateX(*angle);}
void MatrixRotateYRetPtr(Matrix *ret, float *angle){*ret=MatrixRotateY(*angle);}
void MatrixRotateZRetPtr(Matrix *ret, float *angle){*ret=MatrixRotateZ(*angle);}
void MatrixRotateXYZRetPtr(Matrix *ret, Vector3 *angle){*ret=MatrixRotateXYZ(*angle);}
void MatrixRotateZYXRetPtr(Matrix *ret, Vector3 *angle){*ret=MatrixRotateZYX(*angle);}
void MatrixScaleRetPtr(Matrix *ret, float *x,  float *y,  float *z){*ret=MatrixScale(*x, *y, *z);}
void MatrixFrustumRetPtr(Matrix *ret, double *left,  double *right,  double *bottom,  double *top,  double *near,  double *far){*ret=MatrixFrustum(*left, *right, *bottom, *top, *near, *far);}
void MatrixPerspectiveRetPtr(Matrix *ret, double *fovY,  double *aspect,  double *nearPlane,  double *farPlane){*ret=MatrixPerspective(*fovY, *aspect, *nearPlane, *farPlane);}
void MatrixOrthoRetPtr(Matrix *ret, double *left,  double *right,  double *bottom,  double *top,  double *nearPlane,  double *farPlane){*ret=MatrixOrtho(*left, *right, *bottom, *top, *nearPlane, *farPlane);}
void MatrixLookAtRetPtr(Matrix *ret, Vector3 *eye,  Vector3 *target,  Vector3 *up){*ret=MatrixLookAt(*eye, *target, *up);}
void MatrixToFloatVRetPtr(float16 *ret, Matrix *mat){*ret=MatrixToFloatV(*mat);}
void QuaternionAddRetPtr(Quaternion *ret, Quaternion *q1,  Quaternion *q2){*ret=QuaternionAdd(*q1, *q2);}
void QuaternionAddValueRetPtr(Quaternion *ret, Quaternion *q,  float *add){*ret=QuaternionAddValue(*q, *add);}
void QuaternionSubtractRetPtr(Quaternion *ret, Quaternion *q1,  Quaternion *q2){*ret=QuaternionSubtract(*q1, *q2);}
void QuaternionSubtractValueRetPtr(Quaternion *ret, Quaternion *q,  float *sub){*ret=QuaternionSubtractValue(*q, *sub);}
void QuaternionIdentityRetPtr(Quaternion *ret){*ret=QuaternionIdentity();}
void QuaternionLengthRetPtr(float *ret, Quaternion *q){*ret=QuaternionLength(*q);}
void QuaternionNormalizeRetPtr(Quaternion *ret, Quaternion *q){*ret=QuaternionNormalize(*q);}
void QuaternionInvertRetPtr(Quaternion *ret, Quaternion *q){*ret=QuaternionInvert(*q);}
void QuaternionMultiplyRetPtr(Quaternion *ret, Quaternion *q1,  Quaternion *q2){*ret=QuaternionMultiply(*q1, *q2);}
void QuaternionScaleRetPtr(Quaternion *ret, Quaternion *q,  float *mul){*ret=QuaternionScale(*q, *mul);}
void QuaternionDivideRetPtr(Quaternion *ret, Quaternion *q1,  Quaternion *q2){*ret=QuaternionDivide(*q1, *q2);}
void QuaternionLerpRetPtr(Quaternion *ret, Quaternion *q1,  Quaternion *q2,  float *amount){*ret=QuaternionLerp(*q1, *q2, *amount);}
void QuaternionNlerpRetPtr(Quaternion *ret, Quaternion *q1,  Quaternion *q2,  float *amount){*ret=QuaternionNlerp(*q1, *q2, *amount);}
void QuaternionSlerpRetPtr(Quaternion *ret, Quaternion *q1,  Quaternion *q2,  float *amount){*ret=QuaternionSlerp(*q1, *q2, *amount);}
void QuaternionFromVector3ToVector3RetPtr(Quaternion *ret, Vector3 *from,  Vector3 *to){*ret=QuaternionFromVector3ToVector3(*from, *to);}
void QuaternionFromMatrixRetPtr(Quaternion *ret, Matrix *mat){*ret=QuaternionFromMatrix(*mat);}
void QuaternionToMatrixRetPtr(Matrix *ret, Quaternion *q){*ret=QuaternionToMatrix(*q);}
void QuaternionFromAxisAngleRetPtr(Quaternion *ret, Vector3 *axis,  float *angle){*ret=QuaternionFromAxisAngle(*axis, *angle);}
void QuaternionToAxisAngleRetPtr(Quaternion *q,  Vector3 *outAxis,  float *outAngle){QuaternionToAxisAngle(*q, outAxis, outAngle);}
void QuaternionFromEulerRetPtr(Quaternion *ret, float *pitch,  float *yaw,  float *roll){*ret=QuaternionFromEuler(*pitch, *yaw, *roll);}
void QuaternionToEulerRetPtr(Vector3 *ret, Quaternion *q){*ret=QuaternionToEuler(*q);}
void QuaternionTransformRetPtr(Quaternion *ret, Quaternion *q,  Matrix *mat){*ret=QuaternionTransform(*q, *mat);}
void QuaternionEqualsRetPtr(int *ret, Quaternion *p,  Quaternion *q){*ret=QuaternionEquals(*p, *q);}
void rlMatrixModeRetPtr(int *mode){rlMatrixMode(*mode);}                    // Choose the current matrix to be transformed
void rlPushMatrixRetPtr(){rlPushMatrix();}                        // Push the current matrix to stack
void rlPopMatrixRetPtr(){rlPopMatrix();}                         // Pop latest inserted matrix from stack
void rlLoadIdentityRetPtr(){rlLoadIdentity();}                      // Reset current matrix to identity matrix
void rlTranslatefRetPtr(float *x,  float *y,  float *z){rlTranslatef(*x, *y, *z);}   // Multiply the current matrix by a translation matrix
void rlRotatefRetPtr(float *angle,  float *x,  float *y,  float *z){rlRotatef(*angle, *x, *y, *z);}  // Multiply the current matrix by a rotation matrix
void rlScalefRetPtr(float *x,  float *y,  float *z){rlScalef(*x, *y, *z);}       // Multiply the current matrix by a scaling matrix
void rlMultMatrixfRetPtr(const float *matf){rlMultMatrixf(matf);}                // Multiply the current matrix by another matrix
void rlFrustumRetPtr(double *left,  double *right,  double *bottom,  double *top,  double *znear,  double *zfar){rlFrustum(*left, *right, *bottom, *top, *znear, *zfar);}
void rlOrthoRetPtr(double *left,  double *right,  double *bottom,  double *top,  double *znear,  double *zfar){rlOrtho(*left, *right, *bottom, *top, *znear, *zfar);}
void rlViewportRetPtr(int *x,  int *y,  int *width,  int *height){rlViewport(*x, *y, *width, *height);} // Set the viewport area
void rlBeginRetPtr(int *mode){rlBegin(*mode);}                         // Initialize drawing mode (how to organize vertex)
void rlEndRetPtr(){rlEnd();}                               // Finish vertex providing
void rlVertex2iRetPtr(int *x,  int *y){rlVertex2i(*x, *y);}                  // Define one vertex (position) - 2 int
void rlVertex2fRetPtr(float *x,  float *y){rlVertex2f(*x, *y);}              // Define one vertex (position) - 2 float
void rlVertex3fRetPtr(float *x,  float *y,  float *z){rlVertex3f(*x, *y, *z);}     // Define one vertex (position) - 3 float
void rlTexCoord2fRetPtr(float *x,  float *y){rlTexCoord2f(*x, *y);}            // Define one vertex (texture coordinate) - 2 float
void rlNormal3fRetPtr(float *x,  float *y,  float *z){rlNormal3f(*x, *y, *z);}     // Define one vertex (normal) - 3 float
void rlColor4ubRetPtr(unsigned char *r,  unsigned char *g,  unsigned char *b,  unsigned char *a){rlColor4ub(*r, *g, *b, *a);}  // Define one vertex (color) - 4 byte
void rlColor3fRetPtr(float *x,  float *y,  float *z){rlColor3f(*x, *y, *z);}          // Define one vertex (color) - 3 float
void rlColor4fRetPtr(float *x,  float *y,  float *z,  float *w){rlColor4f(*x, *y, *z, *w);} // Define one vertex (color) - 4 float
void rlEnableVertexArrayRetPtr(bool *ret, unsigned int *vaoId){*ret=rlEnableVertexArray(*vaoId);}     // Enable vertex array (VAO, if supported)
void rlDisableVertexArrayRetPtr(){rlDisableVertexArray();}                  // Disable vertex array (VAO, if supported)
void rlEnableVertexBufferRetPtr(unsigned int *id){rlEnableVertexBuffer(*id);}       // Enable vertex buffer (VBO)
void rlDisableVertexBufferRetPtr(){rlDisableVertexBuffer();}                 // Disable vertex buffer (VBO)
void rlEnableVertexBufferElementRetPtr(unsigned int *id){rlEnableVertexBufferElement(*id);}// Enable vertex buffer element (VBO element)
void rlDisableVertexBufferElementRetPtr(){rlDisableVertexBufferElement();}          // Disable vertex buffer element (VBO element)
void rlEnableVertexAttributeRetPtr(unsigned int *index){rlEnableVertexAttribute(*index);} // Enable vertex attribute index
void rlDisableVertexAttributeRetPtr(unsigned int *index){rlDisableVertexAttribute(*index);}// Disable vertex attribute index
void rlActiveTextureSlotRetPtr(int *slot){rlActiveTextureSlot(*slot);}               // Select and active a texture slot
void rlEnableTextureRetPtr(unsigned int *id){rlEnableTexture(*id);}            // Enable texture
void rlDisableTextureRetPtr(){rlDisableTexture();}                      // Disable texture
void rlEnableTextureCubemapRetPtr(unsigned int *id){rlEnableTextureCubemap(*id);}     // Enable texture cubemap
void rlDisableTextureCubemapRetPtr(){rlDisableTextureCubemap();}               // Disable texture cubemap
void rlTextureParametersRetPtr(unsigned int *id,  int *param,  int *value){rlTextureParameters(*id, *param, *value);} // Set texture parameters (filter, wrap)
void rlCubemapParametersRetPtr(unsigned int *id,  int *param,  int *value){rlCubemapParameters(*id, *param, *value);} // Set cubemap parameters (filter, wrap)
void rlEnableShaderRetPtr(unsigned int *id){rlEnableShader(*id);}             // Enable shader program
void rlDisableShaderRetPtr(){rlDisableShader();}                       // Disable shader program
void rlEnableFramebufferRetPtr(unsigned int *id){rlEnableFramebuffer(*id);}        // Enable render texture (fbo)
void rlDisableFramebufferRetPtr(){rlDisableFramebuffer();}                  // Disable render texture (fbo), return to default framebuffer
void rlActiveDrawBuffersRetPtr(int *count){rlActiveDrawBuffers(*count);}              // Activate multiple draw color buffers
void rlBlitFramebufferRetPtr(int *srcX,  int *srcY,  int *srcWidth,  int *srcHeight,  int *dstX,  int *dstY,  int *dstWidth,  int *dstHeight,  int *bufferMask){rlBlitFramebuffer(*srcX, *srcY, *srcWidth, *srcHeight, *dstX, *dstY, *dstWidth, *dstHeight, *bufferMask);} // Blit active framebuffer to main framebuffer
void rlEnableColorBlendRetPtr(){rlEnableColorBlend();}                     // Enable color blending
void rlDisableColorBlendRetPtr(){rlDisableColorBlend();}                   // Disable color blending
void rlEnableDepthTestRetPtr(){rlEnableDepthTest();}                     // Enable depth test
void rlDisableDepthTestRetPtr(){rlDisableDepthTest();}                    // Disable depth test
void rlEnableDepthMaskRetPtr(){rlEnableDepthMask();}                     // Enable depth write
void rlDisableDepthMaskRetPtr(){rlDisableDepthMask();}                    // Disable depth write
void rlEnableBackfaceCullingRetPtr(){rlEnableBackfaceCulling();}               // Enable backface culling
void rlDisableBackfaceCullingRetPtr(){rlDisableBackfaceCulling();}              // Disable backface culling
void rlSetCullFaceRetPtr(int *mode){rlSetCullFace(*mode);}                     // Set face culling mode
void rlEnableScissorTestRetPtr(){rlEnableScissorTest();}                   // Enable scissor test
void rlDisableScissorTestRetPtr(){rlDisableScissorTest();}                  // Disable scissor test
void rlScissorRetPtr(int *x,  int *y,  int *width,  int *height){rlScissor(*x, *y, *width, *height);} // Scissor test
void rlEnableWireModeRetPtr(){rlEnableWireMode();}                      // Enable wire mode
void rlEnablePointModeRetPtr(){rlEnablePointMode();}                     //  Enable point mode
void rlDisableWireModeRetPtr(){rlDisableWireMode();}                     // Disable wire mode ( and point ) maybe rename
void rlSetLineWidthRetPtr(float *width){rlSetLineWidth(*width);}                 // Set the line drawing width
void rlGetLineWidthRetPtr(float *ret){*ret=rlGetLineWidth();}                       // Get the line drawing width
void rlEnableSmoothLinesRetPtr(){rlEnableSmoothLines();}                   // Enable line aliasing
void rlDisableSmoothLinesRetPtr(){rlDisableSmoothLines();}                  // Disable line aliasing
void rlEnableStereoRenderRetPtr(){rlEnableStereoRender();}                  // Enable stereo rendering
void rlDisableStereoRenderRetPtr(){rlDisableStereoRender();}                 // Disable stereo rendering
void rlIsStereoRenderEnabledRetPtr(bool *ret){*ret=rlIsStereoRenderEnabled();}               // Check if stereo render is enabled
void rlClearColorRetPtr(unsigned char *r,  unsigned char *g,  unsigned char *b,  unsigned char *a){rlClearColor(*r, *g, *b, *a);} // Clear color buffer with color
void rlClearScreenBuffersRetPtr(){rlClearScreenBuffers();}                  // Clear used screen buffers (color and depth)
void rlCheckErrorsRetPtr(){rlCheckErrors();}                         // Check and log OpenGL error codes
void rlSetBlendModeRetPtr(int *mode){rlSetBlendMode(*mode);}                    // Set blending mode
void rlSetBlendFactorsRetPtr(int *glSrcFactor,  int *glDstFactor,  int *glEquation){rlSetBlendFactors(*glSrcFactor, *glDstFactor, *glEquation);} // Set blending mode factor and equation (using OpenGL factors)
void rlSetBlendFactorsSeparateRetPtr(int *glSrcRGB,  int *glDstRGB,  int *glSrcAlpha,  int *glDstAlpha,  int *glEqRGB,  int *glEqAlpha){rlSetBlendFactorsSeparate(*glSrcRGB, *glDstRGB, *glSrcAlpha, *glDstAlpha, *glEqRGB, *glEqAlpha);} // Set blending mode factors and equations separately (using OpenGL factors)
void rlglInitRetPtr(int *width,  int *height){rlglInit(*width, *height);}             // Initialize rlgl (buffers, shaders, textures, states)
void rlglCloseRetPtr(){rlglClose();}                             // De-initialize rlgl (buffers, shaders, textures)
void rlLoadExtensionsRetPtr(void *loader){rlLoadExtensions(loader);}              // Load OpenGL extensions (loader function required)
void rlGetVersionRetPtr(int *ret){*ret=rlGetVersion();}                           // Get current OpenGL version
void rlSetFramebufferWidthRetPtr(int *width){rlSetFramebufferWidth(*width);}            // Set current framebuffer width
void rlGetFramebufferWidthRetPtr(int *ret){*ret=rlGetFramebufferWidth();}                  // Get default framebuffer width
void rlSetFramebufferHeightRetPtr(int *height){rlSetFramebufferHeight(*height);}          // Set current framebuffer height
void rlGetFramebufferHeightRetPtr(int *ret){*ret=rlGetFramebufferHeight();}                 // Get default framebuffer height
void rlGetTextureIdDefaultRetPtr(unsigned int *ret){*ret=rlGetTextureIdDefault();}         // Get default texture id
void rlGetShaderIdDefaultRetPtr(unsigned int *ret){*ret=rlGetShaderIdDefault();}          // Get default shader id
void rlGetShaderLocsDefaultRetPtr(int **ret){*ret=rlGetShaderLocsDefault();}                // Get default shader locations
void rlLoadRenderBatchRetPtr(rlRenderBatch *ret, int *numBuffers,  int *bufferElements){*ret=rlLoadRenderBatch(*numBuffers, *bufferElements);}  // Load a render batch system
void rlUnloadRenderBatchRetPtr(rlRenderBatch *batch){rlUnloadRenderBatch(*batch);}                        // Unload render batch system
void rlDrawRenderBatchRetPtr(rlRenderBatch *batch){rlDrawRenderBatch(batch);}                         // Draw render batch data (Update->Draw->Reset)
void rlSetRenderBatchActiveRetPtr(rlRenderBatch *batch){rlSetRenderBatchActive(batch);}                    // Set the active render batch for rlgl (NULL for default internal)
void rlDrawRenderBatchActiveRetPtr(){rlDrawRenderBatchActive();}                                   // Update and draw internal render batch
void rlCheckRenderBatchLimitRetPtr(bool *ret, int *vCount){*ret=rlCheckRenderBatchLimit(*vCount);}                             // Check internal buffer overflow for a given number of vertex
void rlSetTextureRetPtr(unsigned int *id){rlSetTexture(*id);}               // Set current texture for render batch and check buffers limits
void rlLoadVertexArrayRetPtr(unsigned int *ret){*ret=rlLoadVertexArray();}                               // Load vertex array (vao) if supported
void rlLoadVertexBufferRetPtr(unsigned int *ret, const void *buffer,  int *size,  bool *dynamic){*ret=rlLoadVertexBuffer(buffer, *size, *dynamic);}            // Load a vertex buffer attribute
void rlLoadVertexBufferElementRetPtr(unsigned int *ret, const void *buffer,  int *size,  bool *dynamic){*ret=rlLoadVertexBufferElement(buffer, *size, *dynamic);}     // Load a new attributes element buffer
void rlUpdateVertexBufferRetPtr(unsigned int *bufferId,  const void *data,  int *dataSize,  int *offset){rlUpdateVertexBuffer(*bufferId, data, *dataSize, *offset);}     // Update GPU buffer with new data
void rlUpdateVertexBufferElementsRetPtr(unsigned int *id,  const void *data,  int *dataSize,  int *offset){rlUpdateVertexBufferElements(*id, data, *dataSize, *offset);}   // Update vertex buffer elements with new data
void rlUnloadVertexArrayRetPtr(unsigned int *vaoId){rlUnloadVertexArray(*vaoId);}
void rlUnloadVertexBufferRetPtr(unsigned int *vboId){rlUnloadVertexBuffer(*vboId);}
void rlSetVertexAttributeRetPtr(unsigned int *index,  int *compSize,  int *type,  bool *normalized,  int *stride,  const void *pointer){rlSetVertexAttribute(*index, *compSize, *type, *normalized, *stride, pointer);}
void rlSetVertexAttributeDivisorRetPtr(unsigned int *index,  int *divisor){rlSetVertexAttributeDivisor(*index, *divisor);}
void rlSetVertexAttributeDefaultRetPtr(int *locIndex,  const void *value,  int *attribType,  int *count){rlSetVertexAttributeDefault(*locIndex, value, *attribType, *count);} // Set vertex attribute default value
void rlDrawVertexArrayRetPtr(int *offset,  int *count){rlDrawVertexArray(*offset, *count);}
void rlDrawVertexArrayElementsRetPtr(int *offset,  int *count,  const void *buffer){rlDrawVertexArrayElements(*offset, *count, buffer);}
void rlDrawVertexArrayInstancedRetPtr(int *offset,  int *count,  int *instances){rlDrawVertexArrayInstanced(*offset, *count, *instances);}
void rlDrawVertexArrayElementsInstancedRetPtr(int *offset,  int *count,  const void *buffer,  int *instances){rlDrawVertexArrayElementsInstanced(*offset, *count, buffer, *instances);}
void rlLoadTextureRetPtr(unsigned int *ret, const void *data,  int *width,  int *height,  int *format,  int *mipmapCount){*ret=rlLoadTexture(data, *width, *height, *format, *mipmapCount);} // Load texture in GPU
void rlLoadTextureDepthRetPtr(unsigned int *ret, int *width,  int *height,  bool *useRenderBuffer){*ret=rlLoadTextureDepth(*width, *height, *useRenderBuffer);}               // Load depth texture/renderbuffer (to be attached to fbo)
void rlLoadTextureCubemapRetPtr(unsigned int *ret, const void *data,  int *size,  int *format){*ret=rlLoadTextureCubemap(data, *size, *format);}                        // Load texture cubemap
void rlUpdateTextureRetPtr(unsigned int *id,  int *offsetX,  int *offsetY,  int *width,  int *height,  int *format,  const void *data){rlUpdateTexture(*id, *offsetX, *offsetY, *width, *height, *format, data);}  // Update GPU texture with new data
void rlGetGlTextureFormatsRetPtr(int *format,  unsigned int *glInternalFormat,  unsigned int *glFormat,  unsigned int *glType){rlGetGlTextureFormats(*format, glInternalFormat, glFormat, glType);}  // Get OpenGL internal formats
void rlGetPixelFormatNameRetPtr(const char **ret, unsigned int *format){*ret=rlGetPixelFormatName(*format);}              // Get name string for pixel format
void rlUnloadTextureRetPtr(unsigned int *id){rlUnloadTexture(*id);}                              // Unload texture from GPU memory
void rlGenTextureMipmapsRetPtr(unsigned int *id,  int *width,  int *height,  int *format,  int *mipmaps){rlGenTextureMipmaps(*id, *width, *height, *format, mipmaps);} // Generate mipmap data for selected texture
void rlReadTexturePixelsRetPtr(void **ret, unsigned int *id,  int *width,  int *height,  int *format){*ret=rlReadTexturePixels(*id, *width, *height, *format);}              // Read texture pixel data
void rlReadScreenPixelsRetPtr(unsigned char **ret, int *width,  int *height){*ret=rlReadScreenPixels(*width, *height);}           // Read screen pixel data (color buffer)
void rlLoadFramebufferRetPtr(unsigned int *ret, int *width,  int *height){*ret=rlLoadFramebuffer(*width, *height);}              // Load an empty framebuffer
void rlFramebufferAttachRetPtr(unsigned int *fboId,  unsigned int *texId,  int *attachType,  int *texType,  int *mipLevel){rlFramebufferAttach(*fboId, *texId, *attachType, *texType, *mipLevel);}  // Attach texture/renderbuffer to a framebuffer
void rlFramebufferCompleteRetPtr(bool *ret, unsigned int *id){*ret=rlFramebufferComplete(*id);}                        // Verify framebuffer is complete
void rlUnloadFramebufferRetPtr(unsigned int *id){rlUnloadFramebuffer(*id);}                          // Delete framebuffer from GPU
void rlLoadShaderCodeRetPtr(unsigned int *ret, const char *vsCode,  const char *fsCode){*ret=rlLoadShaderCode(vsCode, fsCode);}    // Load shader from code strings
void rlCompileShaderRetPtr(unsigned int *ret, const char *shaderCode,  int *type){*ret=rlCompileShader(shaderCode, *type);}           // Compile custom shader and return shader id (type: RL_VERTEX_SHADER, RL_FRAGMENT_SHADER, RL_COMPUTE_SHADER)
void rlLoadShaderProgramRetPtr(unsigned int *ret, unsigned int *vShaderId,  unsigned int *fShaderId){*ret=rlLoadShaderProgram(*vShaderId, *fShaderId);} // Load custom shader program
void rlUnloadShaderProgramRetPtr(unsigned int *id){rlUnloadShaderProgram(*id);}                              // Unload shader program
void rlGetLocationUniformRetPtr(int *ret, unsigned int *shaderId,  const char *uniformName){*ret=rlGetLocationUniform(*shaderId, uniformName);} // Get shader location uniform
void rlGetLocationAttribRetPtr(int *ret, unsigned int *shaderId,  const char *attribName){*ret=rlGetLocationAttrib(*shaderId, attribName);}   // Get shader location attribute
void rlSetUniformRetPtr(int *locIndex,  const void *value,  int *uniformType,  int *count){rlSetUniform(*locIndex, value, *uniformType, *count);}   // Set shader value uniform
void rlSetUniformMatrixRetPtr(int *locIndex,  Matrix *mat){rlSetUniformMatrix(*locIndex, *mat);}                        // Set shader value matrix
void rlSetUniformSamplerRetPtr(int *locIndex,  unsigned int *textureId){rlSetUniformSampler(*locIndex, *textureId);}           // Set shader value sampler
void rlSetShaderRetPtr(unsigned int *id,  int *locs){rlSetShader(*id, locs);}                             // Set shader currently active (id and locations)
void rlLoadComputeShaderProgramRetPtr(unsigned int *ret, unsigned int *shaderId){*ret=rlLoadComputeShaderProgram(*shaderId);}           // Load compute shader program
void rlComputeShaderDispatchRetPtr(unsigned int *groupX,  unsigned int *groupY,  unsigned int *groupZ){rlComputeShaderDispatch(*groupX, *groupY, *groupZ);}  // Dispatch compute shader (equivalent to *draw* for graphics pipeline)
void rlLoadShaderBufferRetPtr(unsigned int *ret, unsigned int *size,  const void *data,  int *usageHint){*ret=rlLoadShaderBuffer(*size, data, *usageHint);} // Load shader storage buffer object (SSBO)
void rlUnloadShaderBufferRetPtr(unsigned int *ssboId){rlUnloadShaderBuffer(*ssboId);}                           // Unload shader storage buffer object (SSBO)
void rlUpdateShaderBufferRetPtr(unsigned int *id,  const void *data,  unsigned int *dataSize,  unsigned int *offset){rlUpdateShaderBuffer(*id, data, *dataSize, *offset);} // Update SSBO buffer data
void rlBindShaderBufferRetPtr(unsigned int *id,  unsigned int *index){rlBindShaderBuffer(*id, *index);}             // Bind SSBO buffer
void rlReadShaderBufferRetPtr(unsigned int *id,  void *dest,  unsigned int *count,  unsigned int *offset){rlReadShaderBuffer(*id, dest, *count, *offset);} // Read SSBO buffer data (GPU->CPU)
void rlCopyShaderBufferRetPtr(unsigned int *destId,  unsigned int *srcId,  unsigned int *destOffset,  unsigned int *srcOffset,  unsigned int *count){rlCopyShaderBuffer(*destId, *srcId, *destOffset, *srcOffset, *count);} // Copy SSBO data between buffers
void rlGetShaderBufferSizeRetPtr(unsigned int *ret, unsigned int *id){*ret=rlGetShaderBufferSize(*id);}                      // Get SSBO buffer size
void rlBindImageTextureRetPtr(unsigned int *id,  unsigned int *index,  int *format,  bool *readonly){rlBindImageTexture(*id, *index, *format, *readonly);}  // Bind image texture
void rlGetMatrixModelviewRetPtr(Matrix *ret){*ret=rlGetMatrixModelview();}                                  // Get internal modelview matrix
void rlGetMatrixProjectionRetPtr(Matrix *ret){*ret=rlGetMatrixProjection();}                                 // Get internal projection matrix
void rlGetMatrixTransformRetPtr(Matrix *ret){*ret=rlGetMatrixTransform();}                                  // Get internal accumulated transform matrix
void rlGetMatrixProjectionStereoRetPtr(Matrix *ret, int *eye){*ret=rlGetMatrixProjectionStereo(*eye);}                        // Get internal projection matrix for stereo render (selected eye)
void rlGetMatrixViewOffsetStereoRetPtr(Matrix *ret, int *eye){*ret=rlGetMatrixViewOffsetStereo(*eye);}                        // Get internal view offset matrix for stereo render (selected eye)
void rlSetMatrixProjectionRetPtr(Matrix *proj){rlSetMatrixProjection(*proj);}                            // Set a custom projection matrix (replaces internal projection matrix)
void rlSetMatrixModelviewRetPtr(Matrix *view){rlSetMatrixModelview(*view);}                             // Set a custom modelview matrix (replaces internal modelview matrix)
void rlSetMatrixProjectionStereoRetPtr(Matrix *right,  Matrix *left){rlSetMatrixProjectionStereo(*right, *left);}        // Set eyes projection matrices for stereo rendering
void rlSetMatrixViewOffsetStereoRetPtr(Matrix *right,  Matrix *left){rlSetMatrixViewOffsetStereo(*right, *left);}        // Set eyes view offsets matrices for stereo rendering
void rlLoadDrawCubeRetPtr(){rlLoadDrawCube();}     // Load and draw a cube
void rlLoadDrawQuadRetPtr(){rlLoadDrawQuad();}     // Load and draw a quad
void GuiEnableRetPtr(){GuiEnable();}                                 // Enable gui controls (global state)
void GuiDisableRetPtr(){GuiDisable();}                                // Disable gui controls (global state)
void GuiLockRetPtr(){GuiLock();}                                   // Lock gui controls (global state)
void GuiUnlockRetPtr(){GuiUnlock();}                                 // Unlock gui controls (global state)
void GuiIsLockedRetPtr(bool *ret){*ret=GuiIsLocked();}                               // Check if gui is locked (global state)
void GuiSetAlphaRetPtr(float *alpha){GuiSetAlpha(*alpha);}                        // Set gui controls alpha (global state), alpha goes from 0.0f to 1.0f
void GuiSetStateRetPtr(int *state){GuiSetState(*state);}                          // Set gui state (global state)
void GuiGetStateRetPtr(int *ret){*ret=GuiGetState();}                                // Get gui state (global state)
void GuiSetFontRetPtr(Font *font){GuiSetFont(*font);}                           // Set gui custom font (global state)
void GuiGetFontRetPtr(Font *ret){*ret=GuiGetFont();}                                // Get gui custom font (global state)
void GuiSetStyleRetPtr(int *control,  int *property,  int *value){GuiSetStyle(*control, *property, *value);} // Set one style property
void GuiGetStyleRetPtr(int *ret, int *control,  int *property){*ret=GuiGetStyle(*control, *property);}           // Get one style property
void GuiLoadStyleRetPtr(const char *fileName){GuiLoadStyle(fileName);}              // Load style file over global style variable (.rgs)
void GuiLoadStyleDefaultRetPtr(){GuiLoadStyleDefault();}                       // Load style default over global style
void GuiEnableTooltipRetPtr(){GuiEnableTooltip();}                          // Enable gui tooltips (global state)
void GuiDisableTooltipRetPtr(){GuiDisableTooltip();}                         // Disable gui tooltips (global state)
void GuiSetTooltipRetPtr(const char *tooltip){GuiSetTooltip(tooltip);}              // Set tooltip string
void GuiIconTextRetPtr(const char **ret, int *iconId,  const char *text){*ret=GuiIconText(*iconId, text);} // Get text with icon id prepended (if supported)
void GuiSetIconScaleRetPtr(int *scale){GuiSetIconScale(*scale);}                      // Set default icon drawing size
void GuiGetIconsRetPtr(unsigned int **ret){*ret=GuiGetIcons();}                      // Get raygui icons data pointer
void GuiLoadIconsRetPtr(char ***ret, const char *fileName,  bool *loadIconsName){*ret=GuiLoadIcons(fileName, *loadIconsName);} // Load raygui icons file (.rgi) into internal icons data
void GuiDrawIconRetPtr(int *iconId,  int *posX,  int *posY,  int *pixelSize,  Color *color){GuiDrawIcon(*iconId, *posX, *posY, *pixelSize, *color);} // Draw icon using pixel size at specified position
void GuiWindowBoxRetPtr(int *ret, Rectangle *bounds,  const char *title){*ret=GuiWindowBox(*bounds, title);}                                       // Window Box control, shows a window that can be closed
void GuiGroupBoxRetPtr(int *ret, Rectangle *bounds,  const char *text){*ret=GuiGroupBox(*bounds, text);}                                         // Group Box control with text name
void GuiLineRetPtr(int *ret, Rectangle *bounds,  const char *text){*ret=GuiLine(*bounds, text);}                                             // Line separator control, could contain text
void GuiPanelRetPtr(int *ret, Rectangle *bounds,  const char *text){*ret=GuiPanel(*bounds, text);}                                            // Panel control, useful to group controls
void GuiTabBarRetPtr(int *ret, Rectangle *bounds,  const char **text,  int *count,  int *active){*ret=GuiTabBar(*bounds, text, *count, active);}                  // Tab Bar control, returns TAB to be closed or -1
void GuiScrollPanelRetPtr(int *ret, Rectangle *bounds,  const char *text,  Rectangle *content,  Vector2 *scroll,  Rectangle *view){*ret=GuiScrollPanel(*bounds, text, *content, scroll, view);} // Scroll Panel control
void GuiLabelRetPtr(int *ret, Rectangle *bounds,  const char *text){*ret=GuiLabel(*bounds, text);}                                            // Label control, shows text
void GuiButtonRetPtr(int *ret, Rectangle *bounds,  const char *text){*ret=GuiButton(*bounds, text);}                                           // Button control, returns true when clicked
void GuiLabelButtonRetPtr(int *ret, Rectangle *bounds,  const char *text){*ret=GuiLabelButton(*bounds, text);}                                      // Label button control, show true when clicked
void GuiToggleRetPtr(int *ret, Rectangle *bounds,  const char *text,  bool *active){*ret=GuiToggle(*bounds, text, active);}                             // Toggle Button control, returns true when active
void GuiToggleGroupRetPtr(int *ret, Rectangle *bounds,  const char *text,  int *active){*ret=GuiToggleGroup(*bounds, text, active);}                         // Toggle Group control, returns active toggle index
void GuiToggleSliderRetPtr(int *ret, Rectangle *bounds,  const char *text,  int *active){*ret=GuiToggleSlider(*bounds, text, active);}                        // Toggle Slider control, returns true when clicked
void GuiCheckBoxRetPtr(int *ret, Rectangle *bounds,  const char *text,  bool *checked){*ret=GuiCheckBox(*bounds, text, checked);}                          // Check Box control, returns true when active
void GuiComboBoxRetPtr(int *ret, Rectangle *bounds,  const char *text,  int *active){*ret=GuiComboBox(*bounds, text, active);}                            // Combo Box control, returns selected item index
void GuiDropdownBoxRetPtr(int *ret, Rectangle *bounds,  const char *text,  int *active,  bool *editMode){*ret=GuiDropdownBox(*bounds, text, active, *editMode);}          // Dropdown Box control, returns selected item
void GuiSpinnerRetPtr(int *ret, Rectangle *bounds,  const char *text,  int *value,  int *minValue,  int *maxValue,  bool *editMode){*ret=GuiSpinner(*bounds, text, value, *minValue, *maxValue, *editMode);} // Spinner control, returns selected value
void GuiValueBoxRetPtr(int *ret, Rectangle *bounds,  const char *text,  int *value,  int *minValue,  int *maxValue,  bool *editMode){*ret=GuiValueBox(*bounds, text, value, *minValue, *maxValue, *editMode);} // Value Box control, updates input text with numbers
void GuiTextBoxRetPtr(int *ret, Rectangle *bounds,  char *text,  int *textSize,  bool *editMode){*ret=GuiTextBox(*bounds, text, *textSize, *editMode);}                   // Text Box control, updates input text
void GuiSliderRetPtr(int *ret, Rectangle *bounds,  const char *textLeft,  const char *textRight,  float *value,  float *minValue,  float *maxValue){*ret=GuiSlider(*bounds, textLeft, textRight, value, *minValue, *maxValue);} // Slider control, returns selected value
void GuiSliderBarRetPtr(int *ret, Rectangle *bounds,  const char *textLeft,  const char *textRight,  float *value,  float *minValue,  float *maxValue){*ret=GuiSliderBar(*bounds, textLeft, textRight, value, *minValue, *maxValue);} // Slider Bar control, returns selected value
void GuiProgressBarRetPtr(int *ret, Rectangle *bounds,  const char *textLeft,  const char *textRight,  float *value,  float *minValue,  float *maxValue){*ret=GuiProgressBar(*bounds, textLeft, textRight, value, *minValue, *maxValue);} // Progress Bar control, shows current progress value
void GuiStatusBarRetPtr(int *ret, Rectangle *bounds,  const char *text){*ret=GuiStatusBar(*bounds, text);}                                        // Status Bar control, shows info text
void GuiDummyRecRetPtr(int *ret, Rectangle *bounds,  const char *text){*ret=GuiDummyRec(*bounds, text);}                                         // Dummy control for placeholders
void GuiGridRetPtr(int *ret, Rectangle *bounds,  const char *text,  float *spacing,  int *subdivs,  Vector2 *mouseCell){*ret=GuiGrid(*bounds, text, *spacing, *subdivs, mouseCell);} // Grid control, returns mouse cell position
void GuiListViewRetPtr(int *ret, Rectangle *bounds,  const char *text,  int *scrollIndex,  int *active){*ret=GuiListView(*bounds, text, scrollIndex, active);}          // List View control, returns selected list item index
void GuiListViewExRetPtr(int *ret, Rectangle *bounds,  const char **text,  int *count,  int *scrollIndex,  int *active,  int *focus){*ret=GuiListViewEx(*bounds, text, *count, scrollIndex, active, focus);} // List View with extended parameters
void GuiMessageBoxRetPtr(int *ret, Rectangle *bounds,  const char *title,  const char *message,  const char *buttons){*ret=GuiMessageBox(*bounds, title, message, buttons);} // Message Box control, displays a message
void GuiTextInputBoxRetPtr(int *ret, Rectangle *bounds,  const char *title,  const char *message,  const char *buttons,  char *text,  int *textMaxSize,  bool *secretViewActive){*ret=GuiTextInputBox(*bounds, title, message, buttons, text, *textMaxSize, secretViewActive);} // Text Input Box control, ask for text, supports secret
void GuiColorPickerRetPtr(int *ret, Rectangle *bounds,  const char *text,  Color *color){*ret=GuiColorPicker(*bounds, text, color);}                        // Color Picker control (multiple color controls)
void GuiColorPanelRetPtr(int *ret, Rectangle *bounds,  const char *text,  Color *color){*ret=GuiColorPanel(*bounds, text, color);}                         // Color Panel control
void GuiColorBarAlphaRetPtr(int *ret, Rectangle *bounds,  const char *text,  float *alpha){*ret=GuiColorBarAlpha(*bounds, text, alpha);}                      // Color Bar Alpha control
void GuiColorBarHueRetPtr(int *ret, Rectangle *bounds,  const char *text,  float *value){*ret=GuiColorBarHue(*bounds, text, value);}                        // Color Bar Hue control
void GuiColorPickerHSVRetPtr(int *ret, Rectangle *bounds,  const char *text,  Vector3 *colorHsv){*ret=GuiColorPickerHSV(*bounds, text, colorHsv);}                // Color Picker control that avoids conversion to RGB on each call (multiple color controls)
void GuiColorPanelHSVRetPtr(int *ret, Rectangle *bounds,  const char *text,  Vector3 *colorHsv){*ret=GuiColorPanelHSV(*bounds, text, colorHsv);}                 // Color Panel control that returns HSV color value, used by GuiColorPickerHSV()
