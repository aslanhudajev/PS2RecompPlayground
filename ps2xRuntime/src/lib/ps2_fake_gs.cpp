#include "ps2_fake_gs.h"
#include "ps2_runtime.h"
#include "ps2_memory.h"

namespace
{
    // Placeholder texture in GS VRAM: 64x64 PSMCT32 (RGBA 32bpp).
    // Placed at 2MB offset so we don't clash with main framebuffer (usually low).
    constexpr uint32_t kStubTexBaseBytes = 2u * 1024u * 1024u;
    constexpr int kStubTexWidth = 64;
    constexpr int kStubTexHeight = 64;
    constexpr uint32_t kStubTexSize = static_cast<uint32_t>(kStubTexWidth * kStubTexHeight * 4);

    void writePlaceholderToGSVRAM(uint8_t *gsvram)
    {
        if (!gsvram || kStubTexBaseBytes + kStubTexSize > PS2_GS_VRAM_SIZE)
            return;
        uint8_t *dst = gsvram + kStubTexBaseBytes;
        // Magenta (0xFF, 0x00, 0xFF) + 0xFF alpha so it's visible if ever used
        for (uint32_t i = 0; i < kStubTexSize; i += 4)
        {
            dst[i + 0] = 0xFF;
            dst[i + 1] = 0x00;
            dst[i + 2] = 0xFF;
            dst[i + 3] = 0xFF;
        }
    }
}

bool fakeGSStubLoadTex(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    if (!runtime || !ctx)
        return false;
    uint8_t *gsvram = runtime->memory().getGSVRAM();
    if (gsvram)
        writePlaceholderToGSVRAM(gsvram);
    (void)rdram;
    (void)ctx;
    return true;
}
