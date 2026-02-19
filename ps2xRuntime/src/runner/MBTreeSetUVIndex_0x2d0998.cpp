#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetUVIndex
// Address: 0x2d0998 - 0x2d0a80
void MBTreeSetUVIndex_0x2d0998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0998u;

label_2d0998:
    // 0x2d0998: 0x27bdff80
    ctx->pc = 0x2d0998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d099c: 0xffbf0070
    ctx->pc = 0x2d099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d09a0: 0xffb60060
    ctx->pc = 0x2d09a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2d09a4: 0xffb50050
    ctx->pc = 0x2d09a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d09a8: 0xffb40040
    ctx->pc = 0x2d09a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d09ac: 0xffb30030
    ctx->pc = 0x2d09acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d09b0: 0xffb20020
    ctx->pc = 0x2d09b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d09b4: 0xffb10010
    ctx->pc = 0x2d09b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d09b8: 0xffb00000
    ctx->pc = 0x2d09b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d09bc: 0x80802d
    ctx->pc = 0x2d09bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09c0: 0xa0882d
    ctx->pc = 0x2d09c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09c4: 0xc0902d
    ctx->pc = 0x2d09c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09c8: 0x2416ffff
    ctx->pc = 0x2d09c8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d09cc: 0x3c15efff
    ctx->pc = 0x2d09ccu;
    SET_GPR_U32(ctx, 21, ((uint32_t)61439 << 16));
    // 0x2d09d0: 0x36b5ffff
    ctx->pc = 0x2d09d0u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), 65535));
    // 0x2d09d4: 0x3c141000
    ctx->pc = 0x2d09d4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)4096 << 16));
    // 0x2d09d8: 0x1000000a
    ctx->pc = 0x2D09D8u;
    {
        const bool branch_taken_0x2d09d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D09DCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d09d8) {
            ctx->pc = 0x2D0A04u;
            goto label_2d0a04;
        }
    }
    ctx->pc = 0x2D09E0u;
label_2d09e0:
    // 0x2d09e0: 0x1200001e
    ctx->pc = 0x2D09E0u;
    {
        const bool branch_taken_0x2d09e0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D09E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2d09e0) {
            ctx->pc = 0x2D0A5Cu;
            goto label_2d0a5c;
        }
    }
    ctx->pc = 0x2D09E8u;
    // 0x2d09e8: 0x8e10007c
    ctx->pc = 0x2d09e8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d09ec: 0x5200001c
    ctx->pc = 0x2D09ECu;
    {
        const bool branch_taken_0x2d09ec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d09ec) {
            ctx->pc = 0x2D09F0u;
            SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->pc = 0x2D0A60u;
            goto label_2d0a60;
        }
    }
    ctx->pc = 0x2D09F4u;
    // 0x2d09f4: 0x8e020060
    ctx->pc = 0x2d09f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d09f8: 0x30420010
    ctx->pc = 0x2d09f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d09fc: 0x1440fff8
    ctx->pc = 0x2D09FCu;
    {
        const bool branch_taken_0x2d09fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d09fc) {
            ctx->pc = 0x2D09E0u;
            goto label_2d09e0;
        }
    }
    ctx->pc = 0x2D0A04u;
label_2d0a04:
    // 0x2d0a04: 0x52000015
    ctx->pc = 0x2D0A04u;
    {
        const bool branch_taken_0x2d0a04 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0a04) {
            ctx->pc = 0x2D0A08u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->pc = 0x2D0A5Cu;
            goto label_2d0a5c;
        }
    }
    ctx->pc = 0x2D0A0Cu;
    // 0x2d0a0c: 0x56360004
    ctx->pc = 0x2D0A0Cu;
    {
        const bool branch_taken_0x2d0a0c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 22));
        if (branch_taken_0x2d0a0c) {
            ctx->pc = 0x2D0A10u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 94), (uint8_t)GPR_U32(ctx, 17));
            ctx->pc = 0x2D0A20u;
            goto label_2d0a20;
        }
    }
    ctx->pc = 0x2D0A14u;
    // 0x2d0a14: 0x8e020060
    ctx->pc = 0x2d0a14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0a18: 0x10000003
    ctx->pc = 0x2D0A18u;
    {
        const bool branch_taken_0x2d0a18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0A1Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        if (branch_taken_0x2d0a18) {
            ctx->pc = 0x2D0A28u;
            goto label_2d0a28;
        }
    }
    ctx->pc = 0x2D0A20u;
label_2d0a20:
    // 0x2d0a20: 0x8e020060
    ctx->pc = 0x2d0a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0a24: 0x541025
    ctx->pc = 0x2d0a24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2d0a28:
    // 0x2d0a28: 0x1240000a
    ctx->pc = 0x2D0A28u;
    {
        const bool branch_taken_0x2d0a28 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0A2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x2d0a28) {
            ctx->pc = 0x2D0A54u;
            goto label_2d0a54;
        }
    }
    ctx->pc = 0x2D0A30u;
    // 0x2d0a30: 0x8e040078
    ctx->pc = 0x2d0a30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2d0a34: 0x10800007
    ctx->pc = 0x2D0A34u;
    {
        const bool branch_taken_0x2d0a34 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0a34) {
            ctx->pc = 0x2D0A54u;
            goto label_2d0a54;
        }
    }
    ctx->pc = 0x2D0A3Cu;
    // 0x2d0a3c: 0x8c820060
    ctx->pc = 0x2d0a3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d0a40: 0x30420010
    ctx->pc = 0x2d0a40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d0a44: 0x14400003
    ctx->pc = 0x2D0A44u;
    {
        const bool branch_taken_0x2d0a44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D0A48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a44) {
            ctx->pc = 0x2D0A54u;
            goto label_2d0a54;
        }
    }
    ctx->pc = 0x2D0A4Cu;
    // 0x2d0a4c: 0xc0b4266
    ctx->pc = 0x2D0A4Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A54u);
    ctx->pc = 0x2D0A50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D0998u;
    goto label_2d0998;
    ctx->pc = 0x2D0A54u;
label_2d0a54:
    // 0x2d0a54: 0x1253ffe2
    ctx->pc = 0x2D0A54u;
    {
        const bool branch_taken_0x2d0a54 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 19));
        ctx->pc = 0x2D0A58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2d0a54) {
            ctx->pc = 0x2D09E0u;
            goto label_2d09e0;
        }
    }
    ctx->pc = 0x2D0A5Cu;
label_2d0a5c:
    // 0x2d0a5c: 0xdfb60060
    ctx->pc = 0x2d0a5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d0a60:
    // 0x2d0a60: 0xdfb50050
    ctx->pc = 0x2d0a60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0a64: 0xdfb40040
    ctx->pc = 0x2d0a64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0a68: 0xdfb30030
    ctx->pc = 0x2d0a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0a6c: 0xdfb20020
    ctx->pc = 0x2d0a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0a70: 0xdfb10010
    ctx->pc = 0x2d0a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0a74: 0xdfb00000
    ctx->pc = 0x2d0a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0a78: 0x3e00008
    ctx->pc = 0x2D0A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0A7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0998u: goto label_2d0998;
            case 0x2D09E0u: goto label_2d09e0;
            case 0x2D0A04u: goto label_2d0a04;
            case 0x2D0A20u: goto label_2d0a20;
            case 0x2D0A28u: goto label_2d0a28;
            case 0x2D0A54u: goto label_2d0a54;
            case 0x2D0A5Cu: goto label_2d0a5c;
            case 0x2D0A60u: goto label_2d0a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0A80u;
}
