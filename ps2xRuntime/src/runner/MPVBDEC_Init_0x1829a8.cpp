#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVBDEC_Init
// Address: 0x1829a8 - 0x182aa4
void MPVBDEC_Init_0x1829a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVBDEC_Init");


    ctx->pc = 0x1829a8u;

    // 0x1829a8: 0x27bdff60
    ctx->pc = 0x1829a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1829ac: 0xffb00080
    ctx->pc = 0x1829acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1829b0: 0xffbf0090
    ctx->pc = 0x1829b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1829b4: 0xc060aaa
    ctx->pc = 0x1829B4u;
    SET_GPR_U32(ctx, 31, 0x1829BCu);
    ctx->pc = 0x1829B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvbdec_CheckOfsAcDataErr_0x182aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829BCu; }
        else if (ctx->pc != 0x1829BCu) { ctx->pc = 0x1829BCu; }
    }
    if (ctx->pc != 0x1829BCu) { return; }
    ctx->pc = 0x1829BCu;
    // 0x1829bc: 0x27a20040
    ctx->pc = 0x1829bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1829c0: 0x2408003f
    ctx->pc = 0x1829c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 63));
    // 0x1829c4: 0x27a3003f
    ctx->pc = 0x1829c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 63));
label_1829c8:
    // 0x1829c8: 0xa0680000
    ctx->pc = 0x1829c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1829cc: 0x2463ffff
    ctx->pc = 0x1829ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1829d0: 0x2508ffff
    ctx->pc = 0x1829d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1829d4: 0x0
    ctx->pc = 0x1829d4u;
    // NOP
    // 0x1829d8: 0x0
    ctx->pc = 0x1829d8u;
    // NOP
    // 0x1829dc: 0x501fffa
    ctx->pc = 0x1829DCu;
    {
        const bool branch_taken_0x1829dc = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1829dc) {
            ctx->pc = 0x1829C8u;
            goto label_1829c8;
        }
    }
    ctx->pc = 0x1829E4u;
    // 0x1829e4: 0x40682d
    ctx->pc = 0x1829e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829e8: 0xdfa80000
    ctx->pc = 0x1829e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1829ec: 0x3c020024
    ctx->pc = 0x1829ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1829f0: 0xdfa90008
    ctx->pc = 0x1829f0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1829f4: 0x24581540
    ctx->pc = 0x1829f4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 2), 5440));
    // 0x1829f8: 0xdfaa0010
    ctx->pc = 0x1829f8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1829fc: 0x3c020024
    ctx->pc = 0x1829fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x182a00: 0xdfab0018
    ctx->pc = 0x182a00u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182a04: 0xdfa70020
    ctx->pc = 0x182a04u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182a08: 0x244f1580
    ctx->pc = 0x182a08u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 2), 5504));
    // 0x182a0c: 0xdfa60028
    ctx->pc = 0x182a0cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182a10: 0x3c03002c
    ctx->pc = 0x182a10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x182a14: 0xdfa50030
    ctx->pc = 0x182a14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182a18: 0x3c02002c
    ctx->pc = 0x182a18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x182a1c: 0xdfa40038
    ctx->pc = 0x182a1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182a20: 0x244ec828
    ctx->pc = 0x182a20u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 2), 4294953000));
    // 0x182a24: 0xffa80040
    ctx->pc = 0x182a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x182a28: 0x246cc7e8
    ctx->pc = 0x182a28u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 3), 4294952936));
    // 0x182a2c: 0xffa90048
    ctx->pc = 0x182a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x182a30: 0x402d
    ctx->pc = 0x182a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a34: 0xffaa0050
    ctx->pc = 0x182a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x182a38: 0x1a0482d
    ctx->pc = 0x182a38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a3c: 0xffab0058
    ctx->pc = 0x182a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x182a40: 0xffa70060
    ctx->pc = 0x182a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 7));
    // 0x182a44: 0xffa60068
    ctx->pc = 0x182a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 6));
    // 0x182a48: 0xffa50070
    ctx->pc = 0x182a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 5));
    // 0x182a4c: 0xffa40078
    ctx->pc = 0x182a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 4));
label_182a50:
    // 0x182a50: 0x81820000
    ctx->pc = 0x182a50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x182a54: 0x10e2021
    ctx->pc = 0x182a54u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x182a58: 0x81230000
    ctx->pc = 0x182a58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182a5c: 0x1183821
    ctx->pc = 0x182a5cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x182a60: 0x1a21021
    ctx->pc = 0x182a60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x182a64: 0x90850000
    ctx->pc = 0x182a64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182a68: 0x90460000
    ctx->pc = 0x182a68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182a6c: 0x6f1821
    ctx->pc = 0x182a6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x182a70: 0x25080001
    ctx->pc = 0x182a70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x182a74: 0xa0650000
    ctx->pc = 0x182a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x182a78: 0xa0e60000
    ctx->pc = 0x182a78u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x182a7c: 0x25290001
    ctx->pc = 0x182a7cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182a80: 0x29020040
    ctx->pc = 0x182a80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 64));
    // 0x182a84: 0x1440fff2
    ctx->pc = 0x182A84u;
    {
        const bool branch_taken_0x182a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182A88u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
        if (branch_taken_0x182a84) {
            ctx->pc = 0x182A50u;
            goto label_182a50;
        }
    }
    ctx->pc = 0x182A8Cu;
    // 0x182a8c: 0xc060ab2
    ctx->pc = 0x182A8Cu;
    SET_GPR_U32(ctx, 31, 0x182A94u);
    ctx->pc = 0x182A90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvbdec_SetupIxa_0x182ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A94u; }
        else if (ctx->pc != 0x182A94u) { ctx->pc = 0x182A94u; }
    }
    if (ctx->pc != 0x182A94u) { return; }
    ctx->pc = 0x182A94u;
    // 0x182a94: 0xdfbf0090
    ctx->pc = 0x182a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x182a98: 0xdfb00080
    ctx->pc = 0x182a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182a9c: 0x3e00008
    ctx->pc = 0x182A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182AA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1829C8u: goto label_1829c8;
            case 0x182A50u: goto label_182a50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182AA4u;
}
