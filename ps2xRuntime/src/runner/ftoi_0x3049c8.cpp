#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ftoi
// Address: 0x3049c8 - 0x304a58
void ftoi_0x3049c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3049c8u;

    // 0x3049c8: 0x80282d
    ctx->pc = 0x3049c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049cc: 0x51078
    ctx->pc = 0x3049ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x3049d0: 0x2357e
    ctx->pc = 0x3049d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x3049d4: 0x64c6fbcd
    ctx->pc = 0x3049d4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)4294966221);
    // 0x3049d8: 0x28c2ffcb
    ctx->pc = 0x3049d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294967243));
    // 0x3049dc: 0x10400003
    ctx->pc = 0x3049DCu;
    {
        const bool branch_taken_0x3049dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3049E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 13));
        if (branch_taken_0x3049dc) {
            ctx->pc = 0x3049ECu;
            goto label_3049ec;
        }
    }
    ctx->pc = 0x3049E4u;
    // 0x3049e4: 0x3e00008
    ctx->pc = 0x3049E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3049E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3049ECu: goto label_3049ec;
            case 0x3049FCu: goto label_3049fc;
            case 0x304A40u: goto label_304a40;
            case 0x304A4Cu: goto label_304a4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3049ECu;
label_3049ec:
    // 0x3049ec: 0x14400003
    ctx->pc = 0x3049ECu;
    {
        const bool branch_taken_0x3049ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3049F0u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        if (branch_taken_0x3049ec) {
            ctx->pc = 0x3049FCu;
            goto label_3049fc;
        }
    }
    ctx->pc = 0x3049F4u;
    // 0x3049f4: 0x3e00008
    ctx->pc = 0x3049F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3049F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3049ECu: goto label_3049ec;
            case 0x3049FCu: goto label_3049fc;
            case 0x304A40u: goto label_304a40;
            case 0x304A4Cu: goto label_304a4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3049FCu;
label_3049fc:
    // 0x3049fc: 0x34038000
    ctx->pc = 0x3049fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x304a00: 0x3197c
    ctx->pc = 0x304a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x304a04: 0x22b3a
    ctx->pc = 0x304a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x304a08: 0x4c1000d
    ctx->pc = 0x304A08u;
    {
        const bool branch_taken_0x304a08 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x304A0Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x304a08) {
            ctx->pc = 0x304A40u;
            goto label_304a40;
        }
    }
    ctx->pc = 0x304A10u;
    // 0x304a10: 0x6302f
    ctx->pc = 0x304a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x304a14: 0x24020003
    ctx->pc = 0x304a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x304a18: 0x64c3fffe
    ctx->pc = 0x304a18u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)4294967294);
    // 0x304a1c: 0x3183c
    ctx->pc = 0x304a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x304a20: 0x3183f
    ctx->pc = 0x304a20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x304a24: 0x652816
    ctx->pc = 0x304a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x304a28: 0x30a40003
    ctx->pc = 0x304a28u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 3));
    // 0x304a2c: 0x54820007
    ctx->pc = 0x304A2Cu;
    {
        const bool branch_taken_0x304a2c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x304a2c) {
            ctx->pc = 0x304A30u;
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->pc = 0x304A4Cu;
            goto label_304a4c;
        }
    }
    ctx->pc = 0x304A34u;
    // 0x304a34: 0x510ba
    ctx->pc = 0x304a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x304a38: 0x10000004
    ctx->pc = 0x304A38u;
    {
        const bool branch_taken_0x304a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x304A3Cu;
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
        if (branch_taken_0x304a38) {
            ctx->pc = 0x304A4Cu;
            goto label_304a4c;
        }
    }
    ctx->pc = 0x304A40u;
label_304a40:
    // 0x304a40: 0x6103c
    ctx->pc = 0x304a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x304a44: 0x2103f
    ctx->pc = 0x304a44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x304a48: 0x452814
    ctx->pc = 0x304a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_304a4c:
    // 0x304a4c: 0x5103c
    ctx->pc = 0x304a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x304a50: 0x3e00008
    ctx->pc = 0x304A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304A54u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3049ECu: goto label_3049ec;
            case 0x3049FCu: goto label_3049fc;
            case 0x304A40u: goto label_304a40;
            case 0x304A4Cu: goto label_304a4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x304A58u;
}
