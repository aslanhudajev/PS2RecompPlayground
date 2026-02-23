#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__6CChainFv
// Address: 0x200400 - 0x2004b0
void init__6CChainFv_0x200400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__6CChainFv");


    ctx->pc = 0x200400u;

    // 0x200400: 0x3c033c23
    ctx->pc = 0x200400u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15395 << 16));
    // 0x200404: 0x3463d70a
    ctx->pc = 0x200404u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
    // 0x200408: 0xac830068
    ctx->pc = 0x200408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x20040c: 0x3c033f6b
    ctx->pc = 0x20040cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16235 << 16));
    // 0x200410: 0x3463851f
    ctx->pc = 0x200410u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34079));
    // 0x200414: 0xac83006c
    ctx->pc = 0x200414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
    // 0x200418: 0xac800080
    ctx->pc = 0x200418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x20041c: 0xac800070
    ctx->pc = 0x20041cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x200420: 0xac800074
    ctx->pc = 0x200420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x200424: 0xac800078
    ctx->pc = 0x200424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x200428: 0xac800084
    ctx->pc = 0x200428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x20042c: 0xa4800024
    ctx->pc = 0x20042cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x200430: 0xac800018
    ctx->pc = 0x200430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x200434: 0xac80001c
    ctx->pc = 0x200434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x200438: 0xac800020
    ctx->pc = 0x200438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x20043c: 0xc4800018
    ctx->pc = 0x20043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200440: 0xe4800000
    ctx->pc = 0x200440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x200444: 0xc480001c
    ctx->pc = 0x200444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200448: 0xe4800004
    ctx->pc = 0x200448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20044c: 0xc4800020
    ctx->pc = 0x20044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200450: 0xe4800008
    ctx->pc = 0x200450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x200454: 0xc4800000
    ctx->pc = 0x200454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200458: 0xe480000c
    ctx->pc = 0x200458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x20045c: 0xc4800004
    ctx->pc = 0x20045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200460: 0xe4800010
    ctx->pc = 0x200460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x200464: 0xc4800008
    ctx->pc = 0x200464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200468: 0xe4800014
    ctx->pc = 0x200468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x20046c: 0xac800048
    ctx->pc = 0x20046cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x200470: 0xac800028
    ctx->pc = 0x200470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x200474: 0xac80004c
    ctx->pc = 0x200474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x200478: 0xac80002c
    ctx->pc = 0x200478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x20047c: 0xac800050
    ctx->pc = 0x20047cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x200480: 0xac800030
    ctx->pc = 0x200480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x200484: 0xac800054
    ctx->pc = 0x200484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x200488: 0xac800034
    ctx->pc = 0x200488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x20048c: 0xac800058
    ctx->pc = 0x20048cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x200490: 0xac800038
    ctx->pc = 0x200490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x200494: 0xac80005c
    ctx->pc = 0x200494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x200498: 0xac80003c
    ctx->pc = 0x200498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x20049c: 0xac800060
    ctx->pc = 0x20049cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x2004a0: 0xac800040
    ctx->pc = 0x2004a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2004a4: 0xac800064
    ctx->pc = 0x2004a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x2004a8: 0x3e00008
    ctx->pc = 0x2004A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2004ACu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2004B0u;
}
