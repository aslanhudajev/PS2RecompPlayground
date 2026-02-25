#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Globals from sceHiGsDisplayMode decomp
static constexpr uint32_t kHiGsMode = 0x0020f8e0u;
static constexpr uint32_t kHiGsFbnum = 0x0020f8e4u;

void sceHiGsDisplayMode_0x110d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsDisplayMode_0x110d10");
#endif
    uint32_t param1 = GPR_U32(ctx, 4);
    FAST_WRITE32(kHiGsMode, param1);

    uint32_t uVar4 = (param1 & 0x80u) != 0u ? 1u : 0u;  // interlace
    uint32_t uVar1 = 0u;
    uint32_t uVar2 = 2u;
    uint32_t uVar3 = 1u;

    switch (param1 & 0x1fu) {
    case 0:
        uVar1 = 0;
        break;
    case 1:
        uVar1 = 1;
        break;
    case 2:
        uVar1 = 0;
        uVar2 = 3;
        uVar3 = 1;
        break;
    case 3:
        uVar1 = 1;
        uVar2 = 3;
        uVar3 = 1;
        break;
    case 4:
        uVar1 = 1;
        uVar2 = 2;
        uVar3 = 0;
        break;
    case 5:
        uVar1 = 1;
        uVar2 = 3;
        uVar3 = 0;
        break;
    default:
        if (runtime && runtime->hasFunction(0x110848u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 1u);
            tmp.pc = 0x110848u;
            auto fn = runtime->lookupFunction(0x110848u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnU32(ctx, 0xFFFFFFFFu);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint32_t fbnum;
    if ((param1 & 0x1800u) == 0u) {
        fbnum = 2u;
    } else if ((param1 & 0x1800u) == 0x800u) {
        fbnum = 1u;
    } else {
        if (runtime && runtime->hasFunction(0x110848u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 1u);
            tmp.pc = 0x110848u;
            auto fn = runtime->lookupFunction(0x110848u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnU32(ctx, 0xFFFFFFFFu);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    if ((param1 & 0x60u) >= 0x61u || (param1 & 0x700u) >= 0x401u) {
        if (runtime && runtime->hasFunction(0x110848u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 1u);
            tmp.pc = 0x110848u;
            auto fn = runtime->lookupFunction(0x110848u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnU32(ctx, 0xFFFFFFFFu);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    FAST_WRITE32(kHiGsFbnum, fbnum);

    SET_GPR_U32(ctx, 4, uVar4);
    SET_GPR_U32(ctx, 5, uVar1);
    SET_GPR_U32(ctx, 6, uVar2);
    SET_GPR_U32(ctx, 7, uVar3);
    ps2_stubs::sceGsResetGraph(rdram, ctx, runtime);

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
