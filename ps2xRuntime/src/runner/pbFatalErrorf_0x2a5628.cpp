#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbFatalErrorf
// Address: 0x2a5628 - 0x2a56d0
void pbFatalErrorf_0x2a5628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5628u;

    // 0x2a5628: 0x27bdfd80
    ctx->pc = 0x2a5628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x2a562c: 0xffbf01f0
    ctx->pc = 0x2a562cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x2a5630: 0xffb101e0
    ctx->pc = 0x2a5630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 17));
    // 0x2a5634: 0xffb001d0
    ctx->pc = 0x2a5634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 16));
    // 0x2a5638: 0xffa50248
    ctx->pc = 0x2a5638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 5));
    // 0x2a563c: 0xffa60250
    ctx->pc = 0x2a563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 6));
    // 0x2a5640: 0xffa70258
    ctx->pc = 0x2a5640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 7));
    // 0x2a5644: 0xffa80260
    ctx->pc = 0x2a5644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 8));
    // 0x2a5648: 0xffa90268
    ctx->pc = 0x2a5648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 9));
    // 0x2a564c: 0xffaa0270
    ctx->pc = 0x2a564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 10));
    // 0x2a5650: 0xffab0278
    ctx->pc = 0x2a5650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 11));
    // 0x2a5654: 0x80802d
    ctx->pc = 0x2a5654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5658: 0x3a0202d
    ctx->pc = 0x2a5658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a565c: 0x3c05003b
    ctx->pc = 0x2a565cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a5660: 0xc0b6252
    ctx->pc = 0x2A5660u;
    SET_GPR_U32(ctx, 31, 0x2A5668u);
    ctx->pc = 0x2A5664u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294961904));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5668u; }
    }
    if (ctx->pc != 0x2A5668u) { return; }
    ctx->pc = 0x2A5668u;
    // 0x2a5668: 0x3a0202d
    ctx->pc = 0x2a5668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a566c: 0x200282d
    ctx->pc = 0x2a566cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5670: 0xc0b5d5e
    ctx->pc = 0x2A5670u;
    SET_GPR_U32(ctx, 31, 0x2A5678u);
    ctx->pc = 0x2A5674u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 584));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5678u; }
    }
    if (ctx->pc != 0x2A5678u) { return; }
    ctx->pc = 0x2A5678u;
    // 0x2a5678: 0x27b000d0
    ctx->pc = 0x2a5678u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a567c: 0x200202d
    ctx->pc = 0x2a567cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5680: 0x3c05003b
    ctx->pc = 0x2a5680u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a5684: 0x24a5eaf8
    ctx->pc = 0x2a5684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294961912));
    // 0x2a5688: 0xc0b6252
    ctx->pc = 0x2A5688u;
    SET_GPR_U32(ctx, 31, 0x2A5690u);
    ctx->pc = 0x2A568Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5690u; }
    }
    if (ctx->pc != 0x2A5690u) { return; }
    ctx->pc = 0x2A5690u;
    // 0x2a5690: 0x3c11003b
    ctx->pc = 0x2a5690u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
    // 0x2a5694: 0xc0bed0a
    ctx->pc = 0x2A5694u;
    SET_GPR_U32(ctx, 31, 0x2A569Cu);
    ctx->pc = 0x2A5698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294961928));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A569Cu; }
    }
    if (ctx->pc != 0x2A569Cu) { return; }
    ctx->pc = 0x2A569Cu;
    // 0x2a569c: 0xc0bed0a
    ctx->pc = 0x2A569Cu;
    SET_GPR_U32(ctx, 31, 0x2A56A4u);
    ctx->pc = 0x2A56A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A56A4u; }
    }
    if (ctx->pc != 0x2A56A4u) { return; }
    ctx->pc = 0x2A56A4u;
    // 0x2a56a4: 0xc0bed0a
    ctx->pc = 0x2A56A4u;
    SET_GPR_U32(ctx, 31, 0x2A56ACu);
    ctx->pc = 0x2A56A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294961928));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A56ACu; }
    }
    if (ctx->pc != 0x2A56ACu) { return; }
    ctx->pc = 0x2A56ACu;
    // 0x2a56ac: 0xc0a9606
    ctx->pc = 0x2A56ACu;
    SET_GPR_U32(ctx, 31, 0x2A56B4u);
    ctx->pc = 0x2A56B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A5818u;
    {
        const uint32_t __entryPc = ctx->pc;
        bulletproof_printf_0x2a5818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A56B4u; }
    }
    if (ctx->pc != 0x2A56B4u) { return; }
    ctx->pc = 0x2A56B4u;
    // 0x2a56b4: 0xc0a95b4
    ctx->pc = 0x2A56B4u;
    SET_GPR_U32(ctx, 31, 0x2A56BCu);
    ctx->pc = 0x2A56D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbErrorDie_0x2a56d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A56BCu; }
    }
    if (ctx->pc != 0x2A56BCu) { return; }
    ctx->pc = 0x2A56BCu;
    // 0x2a56bc: 0xdfbf01f0
    ctx->pc = 0x2a56bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2a56c0: 0xdfb101e0
    ctx->pc = 0x2a56c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2a56c4: 0xdfb001d0
    ctx->pc = 0x2a56c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2a56c8: 0x3e00008
    ctx->pc = 0x2A56C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A56CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A56D0u;
}
