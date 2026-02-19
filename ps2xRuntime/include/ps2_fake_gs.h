#ifndef PS2_FAKE_GS_H
#define PS2_FAKE_GS_H

#include <cstdint>

struct R5900Context;
class PS2Runtime;

// Stub texture load for recompiled path: avoid "DRAWBLIT COULD NOT LOAD TEX" by
// making the load succeed. Optionally writes a placeholder into GS VRAM so the
// raylib view (UploadFrame) can show something if the game uses it.
// Returns true if the load was stubbed (caller should treat pbLoadTex as success).
bool fakeGSStubLoadTex(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);

#endif
