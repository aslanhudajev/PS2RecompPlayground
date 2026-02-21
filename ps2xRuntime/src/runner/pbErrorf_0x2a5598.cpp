#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbErrorf
// Address: 0x2a5598 - 0x2a5628
void pbErrorf_0x2a5598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5598u;

    // 0x2a5598: 0x27bdfe90
    ctx->pc = 0x2a5598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2a559c: 0xffbf00e0
    ctx->pc = 0x2a559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2a55a0: 0xffb000d0
    ctx->pc = 0x2a55a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x2a55a4: 0xffa50138
    ctx->pc = 0x2a55a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 5));
    // 0x2a55a8: 0xffa60140
    ctx->pc = 0x2a55a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 6));
    // 0x2a55ac: 0xffa70148
    ctx->pc = 0x2a55acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 7));
    // 0x2a55b0: 0xffa80150
    ctx->pc = 0x2a55b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 8));
    // 0x2a55b4: 0xffa90158
    ctx->pc = 0x2a55b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 9));
    // 0x2a55b8: 0xffaa0160
    ctx->pc = 0x2a55b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 10));
    // 0x2a55bc: 0xffab0168
    ctx->pc = 0x2a55bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 11));
    // 0x2a55c0: 0x80802d
    ctx->pc = 0x2a55c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55c4: 0x3a0202d
    ctx->pc = 0x2a55c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55c8: 0x3c05003b
    ctx->pc = 0x2a55c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a55cc: 0xc0b6252
    ctx->pc = 0x2A55CCu;
    SET_GPR_U32(ctx, 31, 0x2A55D4u);
    ctx->pc = 0x2A55D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294961872));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A55D4u; }
    }
    if (ctx->pc != 0x2A55D4u) { return; }
    ctx->pc = 0x2A55D4u;
    // 0x2a55d4: 0x3a0202d
    ctx->pc = 0x2a55d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55d8: 0x200282d
    ctx->pc = 0x2a55d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55dc: 0xc0b5d5e
    ctx->pc = 0x2A55DCu;
    SET_GPR_U32(ctx, 31, 0x2A55E4u);
    ctx->pc = 0x2A55E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 312));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A55E4u; }
    }
    if (ctx->pc != 0x2A55E4u) { return; }
    ctx->pc = 0x2A55E4u;
    // 0x2a55e4: 0x40802d
    ctx->pc = 0x2a55e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55e8: 0x3c04003b
    ctx->pc = 0x2a55e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a55ec: 0x2484ead8
    ctx->pc = 0x2a55ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961880));
    // 0x2a55f0: 0xc0bed0a
    ctx->pc = 0x2A55F0u;
    SET_GPR_U32(ctx, 31, 0x2A55F8u);
    ctx->pc = 0x2A55F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A55F8u; }
    }
    if (ctx->pc != 0x2A55F8u) { return; }
    ctx->pc = 0x2A55F8u;
    // 0x2a55f8: 0x21d8021
    ctx->pc = 0x2a55f8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x2a55fc: 0x8203ffff
    ctx->pc = 0x2a55fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    // 0x2a5600: 0x2402000a
    ctx->pc = 0x2a5600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a5604: 0x10620005
    ctx->pc = 0x2A5604u;
    {
        const bool branch_taken_0x2a5604 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A5608u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        if (branch_taken_0x2a5604) {
            ctx->pc = 0x2A561Cu;
            goto label_2a561c;
        }
    }
    ctx->pc = 0x2A560Cu;
    // 0x2a560c: 0x3c04003b
    ctx->pc = 0x2a560cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a5610: 0xc0bed0a
    ctx->pc = 0x2A5610u;
    SET_GPR_U32(ctx, 31, 0x2A5618u);
    ctx->pc = 0x2A5614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961896));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5618u; }
    }
    if (ctx->pc != 0x2A5618u) { return; }
    ctx->pc = 0x2A5618u;
    // 0x2a5618: 0xdfbf00e0
    ctx->pc = 0x2a5618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2a561c:
    // 0x2a561c: 0xdfb000d0
    ctx->pc = 0x2a561cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a5620: 0x3e00008
    ctx->pc = 0x2A5620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A561Cu: goto label_2a561c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5628u;
}
