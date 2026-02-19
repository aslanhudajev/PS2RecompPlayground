#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_suicide_bomber_index
// Address: 0x239998 - 0x239a1c
void set_suicide_bomber_index_0x239998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x239998u;

    // 0x239998: 0x3c020033
    ctx->pc = 0x239998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23999c: 0x2444dfd0
    ctx->pc = 0x23999cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2399a0: 0x282d
    ctx->pc = 0x2399a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399a4: 0x3c020033
    ctx->pc = 0x2399a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2399a8: 0x8c473c00
    ctx->pc = 0x2399a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
    // 0x2399ac: 0x24090001
    ctx->pc = 0x2399acu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2399b0: 0x24080012
    ctx->pc = 0x2399b0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 18));
    // 0x2399b4: 0x3c0a0033
    ctx->pc = 0x2399b4u;
    SET_GPR_U32(ctx, 10, ((uint32_t)51 << 16));
    // 0x2399b8: 0x10000003
    ctx->pc = 0x2399B8u;
    {
        const bool branch_taken_0x2399b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2399BCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 17976)));
        if (branch_taken_0x2399b8) {
            ctx->pc = 0x2399C8u;
            goto label_2399c8;
        }
    }
    ctx->pc = 0x2399C0u;
label_2399c0:
    // 0x2399c0: 0x24a50001
    ctx->pc = 0x2399c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2399c4:
    // 0x2399c4: 0x248403b0
    ctx->pc = 0x2399c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 944));
label_2399c8:
    // 0x2399c8: 0xa7102a
    ctx->pc = 0x2399c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x2399cc: 0x10400011
    ctx->pc = 0x2399CCu;
    {
        const bool branch_taken_0x2399cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2399cc) {
            ctx->pc = 0x239A14u;
            goto label_239a14;
        }
    }
    ctx->pc = 0x2399D4u;
    // 0x2399d4: 0x8c8200c8
    ctx->pc = 0x2399d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2399d8: 0x5449fffa
    ctx->pc = 0x2399D8u;
    {
        const bool branch_taken_0x2399d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 9));
        if (branch_taken_0x2399d8) {
            ctx->pc = 0x2399DCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2399C4u;
            goto label_2399c4;
        }
    }
    ctx->pc = 0x2399E0u;
    // 0x2399e0: 0x84820324
    ctx->pc = 0x2399e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x2399e4: 0x5448fff7
    ctx->pc = 0x2399E4u;
    {
        const bool branch_taken_0x2399e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        if (branch_taken_0x2399e4) {
            ctx->pc = 0x2399E8u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2399C4u;
            goto label_2399c4;
        }
    }
    ctx->pc = 0x2399ECu;
    // 0x2399ec: 0x848202f0
    ctx->pc = 0x2399ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x2399f0: 0x1040fff3
    ctx->pc = 0x2399F0u;
    {
        const bool branch_taken_0x2399f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2399F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2399f0) {
            ctx->pc = 0x2399C0u;
            goto label_2399c0;
        }
    }
    ctx->pc = 0x2399F8u;
    // 0x2399f8: 0x8c8200e0
    ctx->pc = 0x2399f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2399fc: 0x50430005
    ctx->pc = 0x2399FCu;
    {
        const bool branch_taken_0x2399fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2399fc) {
            ctx->pc = 0x239A00u;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x239A14u;
            goto label_239a14;
        }
    }
    ctx->pc = 0x239A04u;
    // 0x239a04: 0x8c8200e4
    ctx->pc = 0x239a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x239a08: 0x5443ffee
    ctx->pc = 0x239A08u;
    {
        const bool branch_taken_0x239a08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x239a08) {
            ctx->pc = 0x239A0Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2399C4u;
            goto label_2399c4;
        }
    }
    ctx->pc = 0x239A10u;
    // 0x239a10: 0xa0302d
    ctx->pc = 0x239a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239a14:
    // 0x239a14: 0x3e00008
    ctx->pc = 0x239A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239A18u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 17976), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2399C0u: goto label_2399c0;
            case 0x2399C4u: goto label_2399c4;
            case 0x2399C8u: goto label_2399c8;
            case 0x239A14u: goto label_239a14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239A1Cu;
}
