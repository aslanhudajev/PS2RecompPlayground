#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitMenu
// Address: 0x216b78 - 0x216c34
void InitMenu_0x216b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x216b78u;

    // 0x216b78: 0x27bdffe0
    ctx->pc = 0x216b78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216b7c: 0xffbf0010
    ctx->pc = 0x216b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216b80: 0xffb00000
    ctx->pc = 0x216b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216b84: 0xc09733e
    ctx->pc = 0x216B84u;
    SET_GPR_U32(ctx, 31, 0x216B8Cu);
    ctx->pc = 0x216B88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B8Cu; }
    }
    if (ctx->pc != 0x216B8Cu) { return; }
    ctx->pc = 0x216B8Cu;
    // 0x216b8c: 0xc09710c
    ctx->pc = 0x216B8Cu;
    SET_GPR_U32(ctx, 31, 0x216B94u);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B94u; }
    }
    if (ctx->pc != 0x216B94u) { return; }
    ctx->pc = 0x216B94u;
    // 0x216b94: 0xc0b46de
    ctx->pc = 0x216B94u;
    SET_GPR_U32(ctx, 31, 0x216B9Cu);
    ctx->pc = 0x2D1B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_clear_0x2d1b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B9Cu; }
    }
    if (ctx->pc != 0x216B9Cu) { return; }
    ctx->pc = 0x216B9Cu;
    // 0x216b9c: 0xc0b4026
    ctx->pc = 0x216B9Cu;
    SET_GPR_U32(ctx, 31, 0x216BA4u);
    ctx->pc = 0x2D0098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeInit_0x2d0098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BA4u; }
    }
    if (ctx->pc != 0x216BA4u) { return; }
    ctx->pc = 0x216BA4u;
    // 0x216ba4: 0xc084d2a
    ctx->pc = 0x216BA4u;
    SET_GPR_U32(ctx, 31, 0x216BACu);
    ctx->pc = 0x2134A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DebugCamInit_0x2134a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BACu; }
    }
    if (ctx->pc != 0x216BACu) { return; }
    ctx->pc = 0x216BACu;
    // 0x216bac: 0x3c02003c
    ctx->pc = 0x216bacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216bb0: 0x2443d090
    ctx->pc = 0x216bb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294955152));
    // 0x216bb4: 0xac40d090
    ctx->pc = 0x216bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955152), GPR_U32(ctx, 0));
    // 0x216bb8: 0xac600004
    ctx->pc = 0x216bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x216bbc: 0xac600008
    ctx->pc = 0x216bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x216bc0: 0x3c03003c
    ctx->pc = 0x216bc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x216bc4: 0x2465d0a0
    ctx->pc = 0x216bc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294955168));
    // 0x216bc8: 0x3c020032
    ctx->pc = 0x216bc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x216bcc: 0x2444f880
    ctx->pc = 0x216bccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294965376));
    // 0x216bd0: 0xc440f880
    ctx->pc = 0x216bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216bd4: 0xe460d0a0
    ctx->pc = 0x216bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955168), bits); }
    // 0x216bd8: 0xc4800004
    ctx->pc = 0x216bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216bdc: 0xe4a00004
    ctx->pc = 0x216bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x216be0: 0xc4800008
    ctx->pc = 0x216be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216be4: 0xe4a00008
    ctx->pc = 0x216be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x216be8: 0x3c02003c
    ctx->pc = 0x216be8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216bec: 0xac40cf34
    ctx->pc = 0x216becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954804), GPR_U32(ctx, 0));
    // 0x216bf0: 0x3c02003c
    ctx->pc = 0x216bf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216bf4: 0xac50cf38
    ctx->pc = 0x216bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954808), GPR_U32(ctx, 16));
    // 0x216bf8: 0x3c03003c
    ctx->pc = 0x216bf8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x216bfc: 0x2402fffe
    ctx->pc = 0x216bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x216c00: 0xac62cf3c
    ctx->pc = 0x216c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954812), GPR_U32(ctx, 2));
    // 0x216c04: 0x3c04003a
    ctx->pc = 0x216c04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x216c08: 0x24845b88
    ctx->pc = 0x216c08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23432));
    // 0x216c0c: 0xc0b1bb4
    ctx->pc = 0x216C0Cu;
    SET_GPR_U32(ctx, 31, 0x216C14u);
    ctx->pc = 0x216C10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C14u; }
    }
    if (ctx->pc != 0x216C14u) { return; }
    ctx->pc = 0x216C14u;
    // 0x216c14: 0x3c03003c
    ctx->pc = 0x216c14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x216c18: 0xac62cf28
    ctx->pc = 0x216c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954792), GPR_U32(ctx, 2));
    // 0x216c1c: 0x3c02003c
    ctx->pc = 0x216c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x216c20: 0xac40cf2c
    ctx->pc = 0x216c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954796), GPR_U32(ctx, 0));
    // 0x216c24: 0xdfbf0010
    ctx->pc = 0x216c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216c28: 0xdfb00000
    ctx->pc = 0x216c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216c2c: 0x8085aa0
    ctx->pc = 0x216C2Cu;
    ctx->pc = 0x216C30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x216A80u;
    MenuGetModelInfo_0x216a80(rdram, ctx, runtime); return;
    ctx->pc = 0x216C34u;
}
