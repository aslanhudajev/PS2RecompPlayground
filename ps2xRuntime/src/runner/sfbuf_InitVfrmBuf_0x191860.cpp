#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_InitVfrmBuf
// Address: 0x191860 - 0x1918fc
void sfbuf_InitVfrmBuf_0x191860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_InitVfrmBuf");


    ctx->pc = 0x191860u;

    // 0x191860: 0x27bdffc0
    ctx->pc = 0x191860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191864: 0x24020388
    ctx->pc = 0x191864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x191868: 0xffb00000
    ctx->pc = 0x191868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19186c: 0xe0802d
    ctx->pc = 0x19186cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191870: 0xffb20020
    ctx->pc = 0x191870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x191874: 0x2023818
    ctx->pc = 0x191874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x191878: 0x101880
    ctx->pc = 0x191878u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x19187c: 0xffb10010
    ctx->pc = 0x19187cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x191880: 0xa39021
    ctx->pc = 0x191880u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x191884: 0xffbf0030
    ctx->pc = 0x191884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x191888: 0xc38821
    ctx->pc = 0x191888u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19188c: 0x24050001
    ctx->pc = 0x19188cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x191890: 0x8e260000
    ctx->pc = 0x191890u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x191894: 0xe48021
    ctx->pc = 0x191894u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x191898: 0x200202d
    ctx->pc = 0x191898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19189c: 0xc064696
    ctx->pc = 0x19189Cu;
    SET_GPR_U32(ctx, 31, 0x1918A4u);
    ctx->pc = 0x1918A0u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->pc = 0x191A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitBufData_0x191a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918A4u; }
        else if (ctx->pc != 0x1918A4u) { ctx->pc = 0x1918A4u; }
    }
    if (ctx->pc != 0x1918A4u) { return; }
    ctx->pc = 0x1918A4u;
    // 0x1918a4: 0x8e240000
    ctx->pc = 0x1918a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1918a8: 0x26020010
    ctx->pc = 0x1918a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1918ac: 0x8e430000
    ctx->pc = 0x1918acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1918b0: 0x2605032c
    ctx->pc = 0x1918b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 812));
    // 0x1918b4: 0xac440004
    ctx->pc = 0x1918b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1918b8: 0x2406000f
    ctx->pc = 0x1918b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1918bc: 0xae030010
    ctx->pc = 0x1918bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1918c0: 0xac40000c
    ctx->pc = 0x1918c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1918c4: 0xac400008
    ctx->pc = 0x1918c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1918c8:
    // 0x1918c8: 0xaca00000
    ctx->pc = 0x1918c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1918cc: 0x24c6ffff
    ctx->pc = 0x1918ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1918d0: 0x24a5ffcc
    ctx->pc = 0x1918d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967244));
    // 0x1918d4: 0x0
    ctx->pc = 0x1918d4u;
    // NOP
    // 0x1918d8: 0x0
    ctx->pc = 0x1918d8u;
    // NOP
    // 0x1918dc: 0x4c1fffa
    ctx->pc = 0x1918DCu;
    {
        const bool branch_taken_0x1918dc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1918dc) {
            ctx->pc = 0x1918C8u;
            goto label_1918c8;
        }
    }
    ctx->pc = 0x1918E4u;
    // 0x1918e4: 0xdfbf0030
    ctx->pc = 0x1918e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1918e8: 0xdfb20020
    ctx->pc = 0x1918e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1918ec: 0xdfb10010
    ctx->pc = 0x1918ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1918f0: 0xdfb00000
    ctx->pc = 0x1918f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1918f4: 0x3e00008
    ctx->pc = 0x1918F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1918C8u: goto label_1918c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1918FCu;
}
