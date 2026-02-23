#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryObj__22CameraMgrInternalClassFiP11tagNLpoint3f
// Address: 0x1cb460 - 0x1cb4bc
void entryObj__22CameraMgrInternalClassFiP11tagNLpoint3f_0x1cb460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryObj__22CameraMgrInternalClassFiP11tagNLpoint3f");


    ctx->pc = 0x1cb460u;

    // 0x1cb460: 0x518c0
    ctx->pc = 0x1cb460u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cb464: 0x651821
    ctx->pc = 0x1cb464u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cb468: 0x32180
    ctx->pc = 0x1cb468u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1cb46c: 0x3c030030
    ctx->pc = 0x1cb46cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1cb470: 0x24635c30
    ctx->pc = 0x1cb470u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23600));
    // 0x1cb474: 0x642021
    ctx->pc = 0x1cb474u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cb478: 0x8c83014c
    ctx->pc = 0x1cb478u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x1cb47c: 0xc4c00000
    ctx->pc = 0x1cb47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb480: 0x31900
    ctx->pc = 0x1cb480u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb484: 0x831821
    ctx->pc = 0x1cb484u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cb488: 0xe460004c
    ctx->pc = 0x1cb488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x1cb48c: 0xc4c00004
    ctx->pc = 0x1cb48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb490: 0xe4600050
    ctx->pc = 0x1cb490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1cb494: 0xc4c00008
    ctx->pc = 0x1cb494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb498: 0xe4600054
    ctx->pc = 0x1cb498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1cb49c: 0x8c83014c
    ctx->pc = 0x1cb49cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x1cb4a0: 0x31900
    ctx->pc = 0x1cb4a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb4a4: 0x641821
    ctx->pc = 0x1cb4a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cb4a8: 0xe46c0058
    ctx->pc = 0x1cb4a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1cb4ac: 0x8c83014c
    ctx->pc = 0x1cb4acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x1cb4b0: 0x24630001
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb4b4: 0x3e00008
    ctx->pc = 0x1CB4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB4B8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB4BCu;
}
