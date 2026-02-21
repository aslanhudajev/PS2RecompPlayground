#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sendDataToIPU
// Address: 0x2ee9b0 - 0x2eea84
void _sendDataToIPU_0x2ee9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee9b0u;

    // 0x2ee9b0: 0x3c0f003e
    ctx->pc = 0x2ee9b0u;
    SET_GPR_U32(ctx, 15, ((uint32_t)62 << 16));
    // 0x2ee9b4: 0x3c020fff
    ctx->pc = 0x2ee9b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2ee9b8: 0x25e32000
    ctx->pc = 0x2ee9b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 15), 8192));
    // 0x2ee9bc: 0x3442ffff
    ctx->pc = 0x2ee9bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ee9c0: 0x621824
    ctx->pc = 0x2ee9c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ee9c4: 0x3c062000
    ctx->pc = 0x2ee9c4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8192 << 16));
    // 0x2ee9c8: 0x665825
    ctx->pc = 0x2ee9c8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ee9cc: 0xa0402d
    ctx->pc = 0x2ee9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9d0: 0x1900001d
    ctx->pc = 0x2EE9D0u;
    {
        const bool branch_taken_0x2ee9d0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2EE9D4u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ee9d0) {
            ctx->pc = 0x2EEA48u;
            goto label_2eea48;
        }
    }
    ctx->pc = 0x2EE9D8u;
    // 0x2ee9d8: 0x3c09000f
    ctx->pc = 0x2ee9d8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)15 << 16));
    // 0x2ee9dc: 0x3c0c0fff
    ctx->pc = 0x2ee9dcu;
    SET_GPR_U32(ctx, 12, ((uint32_t)4095 << 16));
    // 0x2ee9e0: 0x3529ff40
    ctx->pc = 0x2ee9e0u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 65344));
    // 0x2ee9e4: 0x358cffff
    ctx->pc = 0x2ee9e4u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), 65535));
    // 0x2ee9e8: 0x240e0003
    ctx->pc = 0x2ee9e8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee9ec: 0x240dffff
    ctx->pc = 0x2ee9ecu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ee9f0:
    // 0x2ee9f0: 0x128102a
    ctx->pc = 0x2ee9f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x2ee9f4: 0x120382d
    ctx->pc = 0x2ee9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9f8: 0x102380a
    ctx->pc = 0x2ee9f8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 8));
    // 0x2ee9fc: 0x182d
    ctx->pc = 0x2ee9fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea00: 0x24e6000f
    ctx->pc = 0x2eea00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 15));
    // 0x2eea04: 0x24e2001e
    ctx->pc = 0x2eea04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 30));
    // 0x2eea08: 0x1a6282a
    ctx->pc = 0x2eea08u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 6)));
    // 0x2eea0c: 0x1074023
    ctx->pc = 0x2eea0cu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2eea10: 0xc5100b
    ctx->pc = 0x2eea10u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x2eea14: 0x14c2024
    ctx->pc = 0x2eea14u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2eea18: 0x1c8180b
    ctx->pc = 0x2eea18u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 14));
    // 0x2eea1c: 0x21103
    ctx->pc = 0x2eea1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2eea20: 0x4203c
    ctx->pc = 0x2eea20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2eea24: 0x31f38
    ctx->pc = 0x2eea24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x2eea28: 0x2103c
    ctx->pc = 0x2eea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eea2c: 0x832025
    ctx->pc = 0x2eea2cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eea30: 0x2103e
    ctx->pc = 0x2eea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2eea34: 0x1475021
    ctx->pc = 0x2eea34u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2eea38: 0x822025
    ctx->pc = 0x2eea38u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eea3c: 0xfd640000
    ctx->pc = 0x2eea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x2eea40: 0x1d00ffeb
    ctx->pc = 0x2EEA40u;
    {
        const bool branch_taken_0x2eea40 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x2EEA44u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 16));
        if (branch_taken_0x2eea40) {
            ctx->pc = 0x2EE9F0u;
            goto label_2ee9f0;
        }
    }
    ctx->pc = 0x2EEA48u;
label_2eea48:
    // 0x2eea48: 0x3c020fff
    ctx->pc = 0x2eea48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2eea4c: 0x25e42000
    ctx->pc = 0x2eea4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 15), 8192));
    // 0x2eea50: 0x3442ffff
    ctx->pc = 0x2eea50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2eea54: 0x3c031000
    ctx->pc = 0x2eea54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2eea58: 0x822024
    ctx->pc = 0x2eea58u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eea5c: 0x3463b430
    ctx->pc = 0x2eea5cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46128));
    // 0x2eea60: 0x3c021000
    ctx->pc = 0x2eea60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2eea64: 0xac640000
    ctx->pc = 0x2eea64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x2eea68: 0x3442b420
    ctx->pc = 0x2eea68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x2eea6c: 0x3c031000
    ctx->pc = 0x2eea6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2eea70: 0xac400000
    ctx->pc = 0x2eea70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2eea74: 0x3463b400
    ctx->pc = 0x2eea74u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46080));
    // 0x2eea78: 0x24020105
    ctx->pc = 0x2eea78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 261));
    // 0x2eea7c: 0x3e00008
    ctx->pc = 0x2EEA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEA80u;
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE9F0u: goto label_2ee9f0;
            case 0x2EEA48u: goto label_2eea48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EEA84u;
}
