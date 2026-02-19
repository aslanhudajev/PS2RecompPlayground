#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerToggleRune
// Address: 0x276918 - 0x2769b4
void PlayerToggleRune_0x276918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276918u;

    // 0x276918: 0x4810003
    ctx->pc = 0x276918u;
    {
        const bool branch_taken_0x276918 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x27691Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x276918) {
            ctx->pc = 0x276928u;
            goto label_276928;
        }
    }
    ctx->pc = 0x276920u;
    // 0x276920: 0x102d
    ctx->pc = 0x276920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276924: 0x24040003
    ctx->pc = 0x276924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_276928:
    // 0x276928: 0x40382d
    ctx->pc = 0x276928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27692c: 0x87102a
    ctx->pc = 0x27692cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x276930: 0x1440001e
    ctx->pc = 0x276930u;
    {
        const bool branch_taken_0x276930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276934u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x276930) {
            ctx->pc = 0x2769ACu;
            goto label_2769ac;
        }
    }
    ctx->pc = 0x276938u;
    // 0x276938: 0x3c020032
    ctx->pc = 0x276938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27693c: 0x244e1bc0
    ctx->pc = 0x27693cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276940: 0x24080001
    ctx->pc = 0x276940u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x276944: 0x240b0004
    ctx->pc = 0x276944u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4));
    // 0x276948: 0xa84804
    ctx->pc = 0x276948u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x27694c: 0x240a00b4
    ctx->pc = 0x27694cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 180));
    // 0x276950: 0xec1018
    ctx->pc = 0x276950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276954: 0x0
    ctx->pc = 0x276954u;
    // NOP
label_276958:
    // 0x276958: 0x4e1821
    ctx->pc = 0x276958u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x27695c: 0x8c6200fc
    ctx->pc = 0x27695cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x276960: 0x50480004
    ctx->pc = 0x276960u;
    {
        const bool branch_taken_0x276960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        if (branch_taken_0x276960) {
            ctx->pc = 0x276964u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6694)));
            ctx->pc = 0x276974u;
            goto label_276974;
        }
    }
    ctx->pc = 0x276968u;
    // 0x276968: 0x544b000d
    ctx->pc = 0x276968u;
    {
        const bool branch_taken_0x276968 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 11));
        if (branch_taken_0x276968) {
            ctx->pc = 0x27696Cu;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x2769A0u;
            goto label_2769a0;
        }
    }
    ctx->pc = 0x276970u;
    // 0x276970: 0x94621a26
    ctx->pc = 0x276970u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6694)));
label_276974:
    // 0x276974: 0x493026
    ctx->pc = 0x276974u;
    SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x276978: 0x30c2ffff
    ctx->pc = 0x276978u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
    // 0x27697c: 0xa21007
    ctx->pc = 0x27697cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x276980: 0x30420001
    ctx->pc = 0x276980u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x276984: 0x14400005
    ctx->pc = 0x276984u;
    {
        const bool branch_taken_0x276984 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276988u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 6694), (uint16_t)GPR_U32(ctx, 6));
        if (branch_taken_0x276984) {
            ctx->pc = 0x27699Cu;
            goto label_27699c;
        }
    }
    ctx->pc = 0x27698Cu;
    // 0x27698c: 0x8c62000c
    ctx->pc = 0x27698cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x276990: 0x4a6818
    ctx->pc = 0x276990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276994: 0x1a31021
    ctx->pc = 0x276994u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x276998: 0xa4460cf2
    ctx->pc = 0x276998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 3314), (uint16_t)GPR_U32(ctx, 6));
label_27699c:
    // 0x27699c: 0x24e70001
    ctx->pc = 0x27699cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_2769a0:
    // 0x2769a0: 0x87102a
    ctx->pc = 0x2769a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x2769a4: 0x1040ffec
    ctx->pc = 0x2769A4u;
    {
        const bool branch_taken_0x2769a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2769A8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2769a4) {
            ctx->pc = 0x276958u;
            goto label_276958;
        }
    }
    ctx->pc = 0x2769ACu;
label_2769ac:
    // 0x2769ac: 0x3e00008
    ctx->pc = 0x2769ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276928u: goto label_276928;
            case 0x276958u: goto label_276958;
            case 0x276974u: goto label_276974;
            case 0x27699Cu: goto label_27699c;
            case 0x2769A0u: goto label_2769a0;
            case 0x2769ACu: goto label_2769ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2769B4u;
}
